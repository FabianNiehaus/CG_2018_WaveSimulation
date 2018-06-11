#include "oglwidget.h"

OGLWidget::OGLWidget(QWidget *parent) : QOpenGLWidget(parent) // constructor
{

    // Setup the animation timer to fire every x msec
    animtimer = new QTimer(this);
    animtimer->start( 50 );

    // Everytime the timer fires, the animation is going one step forward
    connect(animtimer, SIGNAL(timeout()), this, SLOT(stepAnimation()));

}

OGLWidget::~OGLWidget() // destructor
{

}

void OGLWidget::stepAnimation()
{
    waveSurface.recalculateMesh(timer);
    timer += 0.05;
    update();      // Trigger redraw of scene with paintGL
}

// define material color properties for front and back side
void OGLWidget::SetMaterialColor( int side, float r, float g, float b){
    float	amb[4], dif[4], spe[4];
    int	i, mat;

    dif[0] = r; // diffuse color as defined by r,g, and b
    dif[1] = g;
    dif[2] = b;
    for( i=0; i<3; i++){
        amb[i] = .1 * dif[i]; // ambient color is 10 percent of diffuse
        spe[i] = .5; // specular color is just white / gray
    }
    amb[3] = dif[3] = spe[3] = 1.0; // alpha component is always 1
    switch( side){
        case 1:	mat = GL_FRONT; break;
        case 2:	mat = GL_BACK; break;
        default: mat = GL_FRONT_AND_BACK; break;
    }
    glMaterialfv( mat, GL_AMBIENT, amb); // define ambient, diffuse and specular components
    glMaterialfv( mat, GL_DIFFUSE, dif);
    glMaterialfv( mat, GL_SPECULAR, spe);
    glMaterialf( mat, GL_SHININESS, 50.0); // Phong constant for the size of highlights
}

// initialize Open GL lighting and projection matrix
void OGLWidget::InitLightingAndProjection() // to be executed once before drawing
{

    // light positions and colors
    GLfloat LightPosition1[4] = { 10, 5, 10,  0};
    GLfloat LightPosition2[4] = { -5, 5, -10,  0};
    GLfloat ColorRedish[4] = { 1.0,  .8,  .8,  1}; // white with a little bit of red
    GLfloat ColorBlueish[4] = { .8,  .8,  1.0,  1};// white with a little bit of blue

    glEnable( GL_DEPTH_TEST); // switch on z-buffer
    glDepthFunc( GL_LESS);

    glShadeModel( GL_SMOOTH); // Gouraud shading

    glEnable( GL_LIGHTING); // use lighting
    glLightModeli( GL_LIGHT_MODEL_TWO_SIDE, 1); // draw both sides

    // define and switch on light 0
    glLightfv( GL_LIGHT0, GL_POSITION, LightPosition1);
    glLightfv( GL_LIGHT0, GL_DIFFUSE,  ColorRedish);
    glLightfv( GL_LIGHT0, GL_SPECULAR, ColorRedish);
    glEnable( GL_LIGHT0);

    // define and switch on light 1
    glLightfv( GL_LIGHT1, GL_POSITION, LightPosition2);
    glLightfv( GL_LIGHT1, GL_DIFFUSE,  ColorBlueish);
    glLightfv( GL_LIGHT1, GL_SPECULAR, ColorBlueish);
    glEnable( GL_LIGHT1);

    glMatrixMode( GL_PROJECTION); // define camera projection
    glLoadIdentity(); // reset matrix to identity (otherwise existing matrix will be multiplied with)
    glOrtho( -35, 35, -35, 35, -35, 35); // orthogonal projection (xmin xmax ymin ymax zmin zmax)

}

void OGLWidget::drawMeshWireframe()
{
    for(int row = 0; row < waveSurface.getRows(); row++){
        for(int column = 0; column < waveSurface.getColumns(); column++){

            QVector3D * vec = waveSurface.getAt(row, column);

            float x = vec->x();
            float y = vec->y();
            float z = vec->z();

            //std::cout << x << "|" << y << "|" << z << std::endl;

            if(row < waveSurface.getRows() - 1){
                // Nachbar in nächster Zeile
                QVector3D * vec_nextR = waveSurface.getAt(row + 1, column);

                glBegin(GL_LINES);
                    glVertex3d(x,y,z);
                    glVertex3d(vec_nextR->x(), vec_nextR->y(), vec_nextR->z());
                glEnd();

            }

            if(column < waveSurface.getColumns() -1){
                // Nachbar in nächster Spalte
                QVector3D * vec_nextC = waveSurface.getAt(row, column + 1);

                glBegin(GL_LINES);
                    glVertex3d(x,y,z);
                    glVertex3d(vec_nextC->x(), vec_nextC->y(), vec_nextC->z());
                glEnd();
            }

            if(row < waveSurface.getRows() - 1 && column < waveSurface.getColumns() -1){
                // Nachbar diagonal in nächster Zeile und Spalte
                QVector3D * vec_nextRaC = waveSurface.getAt(row + 1, column + 1);

                glBegin(GL_LINES);
                    glVertex3d(x,y,z);
                    glVertex3d(vec_nextRaC->x(), vec_nextRaC->y(), vec_nextRaC->z());
                glEnd();
            }
        }
    }
}

void OGLWidget::drawMeshQuads()
{
    for(int row = 0; row < waveSurface.getRows() - 1; row++){
        for(int column = 0; column < waveSurface.getColumns() - 1; column++){

            QVector3D * vec1 = waveSurface.getAt(row, column);
            QVector3D * vec2 = waveSurface.getAt(row, column + 1);
            QVector3D * vec3 = waveSurface.getAt(row + 1, column + 1);
            QVector3D * vec4 = waveSurface.getAt(row + 1, column);

            glBegin(GL_QUADS);

                QVector3D vecTemp = QVector3D::crossProduct(*vec3-*vec1,*vec4-*vec2);

                glNormal3d(vecTemp.x(), vecTemp.y(), vecTemp.z());

                glVertex3d(vec1->x(), vec1->y(), vec1->z());
                glVertex3d(vec2->x(), vec2->y(), vec2->z());
                glVertex3d(vec3->x(), vec3->y(), vec3->z());
                glVertex3d(vec4->x(), vec4->y(), vec4->z());

            glEnd();
        }
    }
}

void OGLWidget::initializeGL() // initializations to be called once
{
    initializeOpenGLFunctions();
    InitLightingAndProjection();

    // Amplitude, Richtungsvektor, Wellenlänge, Phasenverschiebung, Ursprungspunkt
    waveSurface.addWave(Wave (1.0, QVector2D(1.0,1.0), 7.5, 0.0, QVector2D(0.0, -10.0)));
    //waveSurface.addWave(Wave (1.0, QVector2D(1.0,0.0), 7.5, 0.0, QVector2D(0.0,-50.0)));
    //waveSurface.addWave(Wave (1.0, QVector2D(1.0,0.0), 5, 0.0));
    //waveSurface.addWave(Wave (1.0, QVector2D(0.0,1.0), 5, 0.0));

}

void OGLWidget::paintGL() // draw everything, to be called repeatedly
{
    glEnable(GL_NORMALIZE); // this is necessary when using glScale (keep normals to unit length)

    // set background color
    glClearColor(0.8, 0.8, 0.8, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // draw the scene
    glMatrixMode( GL_MODELVIEW);

    glLoadIdentity();
    SetMaterialColor( 1, 1.0, 0.2, 0.2);
    SetMaterialColor( 2, 0.2, 0.2, 1.0);
    //glScaled(0.1,0.1,0.1);
    glRotated(45.0, 1, -1, 0);
    //glTranslated(0.0, 0.0, -25.0);
    drawMeshQuads();

    // make it appear (before this, it's hidden in the rear buffer)
    glFlush();
}

void OGLWidget::resizeGL(int w, int h) // called when window size is changed
{
    // adjust viewport transform
    glViewport(0,0,w,h);
}
