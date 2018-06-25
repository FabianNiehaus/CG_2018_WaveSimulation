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

}

MainWindow::~MainWindow()
{
    delete ui;
}
