/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 26.06.2018
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSlider * originXSlider = this->centralWidget()->findChild<QSlider *>("originXSlider");
    QSlider * originYSlider = this->centralWidget()->findChild<QSlider *>("originYSlider");
    QSlider * amplitudeSlider = this->centralWidget()->findChild<QSlider *>("amplitudeSlider");
    QSlider * wavelengthSlider = this->centralWidget()->findChild<QSlider *>("wavelengthSlider");

    QCheckBox * reflectionCheckBox = this->centralWidget()->findChild<QCheckBox *>("reflectionCheckBox");

    OGLWidget * openGLWidget = this->centralWidget()->findChild<OGLWidget *>("openGLWidget");

    connect(originXSlider, SIGNAL(valueChanged(int)),
                openGLWidget, SLOT(updateWaveX(int)));

    connect(originYSlider, SIGNAL(valueChanged(int)),
                openGLWidget, SLOT(updateWaveZ(int)));

    connect(amplitudeSlider, SIGNAL(valueChanged(int)),
                openGLWidget, SLOT(updateWaveA(int)));

    connect(wavelengthSlider, SIGNAL(valueChanged(int)),
                openGLWidget, SLOT(updateWaveL(int)));

    connect(reflectionCheckBox, SIGNAL(stateChanged(int)),
                openGLWidget, SLOT(updateReflection(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
