/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 24.06.2018
 *
 */

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
    waveSurface->recalculateMesh(timer);
    timer += 0.05;
    update();      // Trigger redraw of scene with paintGL
}

void OGLWidget::updateWaveX(int sourceX)
{
    const Wave * w = waveSurface->getWave(0);
    double sourceZ = w->O.y();
    double amplitude = w->a;
    double wavelength = w->l;

    updateWaves(amplitude, wavelength, (double) sourceX, sourceZ);
}

void OGLWidget::updateWaveZ(int sourceZ)
{
    const Wave * w = waveSurface->getWave(0);
    double sourceX = w->O.x();
    double amplitude = w->a;
    double wavelength = w->l;

    updateWaves(amplitude, wavelength, sourceX, (double) sourceZ);
}

void OGLWidget::updateWaveA(int amplitude)
{
    const Wave * w = waveSurface->getWave(0);
    double sourceX = w->O.x();
    double sourceZ = w->O.y();
    double wavelength = w->l;

    updateWaves((double) amplitude, wavelength, sourceX, sourceZ);
}

void OGLWidget::updateWaveL(int wavelength)
{
    const Wave * w = waveSurface->getWave(0);
    double sourceX = w->O.x();
    double sourceZ = w->O.y();
    double amplitude = w->a;

    updateWaves(amplitude, (double) wavelength, sourceX, sourceZ);
}

void OGLWidget::updateReflection(int reflect)
{
    this->reflect = reflect;

    const Wave * w = waveSurface->getWave(0);
    double sourceX = w->O.x();
    double sourceZ = w->O.y();
    double amplitude = w->a;
    double wavelength = w->l;

    updateWaves(amplitude, wavelength, sourceX, sourceZ);
}


void OGLWidget::updateWaves(double amplitude, double wavelength, double sourceX, double sourceZ)
{
    waveSurface = new WaveSurface(meshDim_X, meshDim_Z, scaling);

    waveSurface->clearWaves();

    // Amplitude, Wellenlänge, Phasenverschiebung, Ursprungspunkt
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, QVector2D(sourceX, sourceZ)));

    if(reflect > 0){
    /*
     * Reflektion über Image Source Methode
     */

    // Benachbarte Ursprungspunkte berechnen
    QVector2D n1 = QVector2D(-1 * meshDim_X - sourceX, meshDim_Z - sourceZ); // links oben
    QVector2D n2 = QVector2D(sourceX, meshDim_Z - sourceZ); // oben
    QVector2D n3 = QVector2D(meshDim_X - sourceX, meshDim_Z - sourceZ); // rechts oben
    QVector2D n4 = QVector2D(-1 * meshDim_X - sourceX, sourceZ); // links
    QVector2D n5 = QVector2D(meshDim_X - sourceX, sourceZ); // rechts
    QVector2D n6 = QVector2D(-1 * meshDim_X - sourceX, -1 * meshDim_Z - sourceZ); // links unten
    QVector2D n7 = QVector2D(sourceX, -1 * meshDim_Z - sourceZ); // unten
    QVector2D n8 = QVector2D(meshDim_X - sourceX, -1 * meshDim_Z - sourceZ); // rechts unten

    // Urpsungspunkt ausgeben für Debugging
    cout << "N1: " << n1.x() << " | " << n1.y() << endl;
    cout << "N2: " << n2.x() << " | " << n2.y() << endl;
    cout << "N3: " << n3.x() << " | " << n3.y() << endl;
    cout << "N4: " << n4.x() << " | " << n4.y() << endl;
    cout << "N5: " << n5.x() << " | " << n5.y() << endl;
    cout << "N6: " << n6.x() << " | " << n6.y() << endl;
    cout << "N7: " << n7.x() << " | " << n7.y() << endl;
    cout << "N8: " << n8.x() << " | " << n8.y() << endl;

    // Wellen mit entsprechenden Ursprungspunkten einfügen
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n1));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n2));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n3));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n4));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n5));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n6));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n7));
    waveSurface->addWave(Wave (amplitude, wavelength, 0.0, n8));
    }
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
    for(int row = 0; row < waveSurface->getRows(); row++){
        for(int column = 0; column < waveSurface->getColumns(); column++){

            QVector3D * vec = waveSurface->getAt(row, column);

            float x = vec->x();
            float y = vec->y();
            float z = vec->z();

            //std::cout << x << "|" << y << "|" << z << std::endl;

            if(row < waveSurface->getRows() - 1){
                // Nachbar in nächster Zeile
                QVector3D * vec_nextR = waveSurface->getAt(row + 1, column);

                glBegin(GL_LINES);
                    glVertex3d(x,y,z);
                    glVertex3d(vec_nextR->x(), vec_nextR->y(), vec_nextR->z());
                glEnd();

            }

            if(column < waveSurface->getColumns() -1){
                // Nachbar in nächster Spalte
                QVector3D * vec_nextC = waveSurface->getAt(row, column + 1);

                glBegin(GL_LINES);
                    glVertex3d(x,y,z);
                    glVertex3d(vec_nextC->x(), vec_nextC->y(), vec_nextC->z());
                glEnd();
            }

            if(row < waveSurface->getRows() - 1 && column < waveSurface->getColumns() -1){
                // Nachbar diagonal in nächster Zeile und Spalte
                QVector3D * vec_nextRaC = waveSurface->getAt(row + 1, column + 1);

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
    for(int row = 0; row < waveSurface->getRows() - 1; row++){
        for(int column = 0; column < waveSurface->getColumns() - 1; column++){

            QVector3D * vec1 = waveSurface->getAt(row, column);
            QVector3D * vec2 = waveSurface->getAt(row + 1, column);
            QVector3D * vec3 = waveSurface->getAt(row + 1, column + 1);
            QVector3D * vec4 = waveSurface->getAt(row, column + 1);

            QVector3D vecTemp = QVector3D::crossProduct(*vec3-*vec1, *vec4-*vec2);

            glBegin(GL_QUADS);

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

    // Amplitude, Wavelength, SourceX, SourceZ
    updateWaves(3.0, 7.5, 0.0, 0.0);
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
    SetMaterialColor( 1, 0.25, 0.64, 0.87);
    glRotated(45.0, 1, -1, 0);

    drawMeshQuads();
    //drawMeshWireframe();

    // make it appear (before this, it's hidden in the rear buffer)
    glFlush();
}

void OGLWidget::resizeGL(int w, int h) // called when window size is changed
{
    // adjust viewport transform
    glViewport(0,0,w,h);
}
