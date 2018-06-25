/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 24.06.2018
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

    // https://stackoverflow.com/questions/4214369/how-to-convert-qstring-to-stdstring
    //for(int i = 0; i < children.size(); i++){
    //    std::cout << children.at(i)->objectName().toLocal8Bit().constData() << std::endl;
    //}

    //std::cout << openGLWidget->objectName().toLocal8Bit().constData() << std::endl;

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
