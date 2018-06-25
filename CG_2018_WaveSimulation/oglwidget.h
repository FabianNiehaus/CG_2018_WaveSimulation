/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 24.06.2018
 *
 */

#ifndef OGLWIDGET_H
#define OGLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QTimer>
#include <QVector3D>

#include <vector>
#include <string>

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

#include "wavesurface.h"

using namespace std;

class OGLWidget : public QOpenGLWidget,
                          protected QOpenGLFunctions
{
    Q_OBJECT

public:
    OGLWidget(QWidget *parent = 0);
    ~OGLWidget();

public slots:
    void stepAnimation();

    void updateWaveX(int sourceX);
    void updateWaveZ(int sourceZ);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

    void SetMaterialColor( int side, float r, float g, float b);
    void InitLightingAndProjection();

    QTimer* animtimer; // Timer needed to step animation every x msec

private:

    WaveSurface * waveSurface;

    void drawMeshWireframe();
    void drawMeshQuads();

    double timer = 0.0;

    int meshDim_X = 50; // -25 bis +25
    int meshDim_Z = 50; // -25 bis +25
    int scaling = 1.0;

    void updateWaves(double sourceX, double sourceZ);
};

#endif // OGLWIDGET_H
