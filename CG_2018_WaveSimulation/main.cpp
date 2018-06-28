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
#include <QApplication>

#include "wavesurface.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //WaveSurface ws;

    //QVector3D* vec = ws.getAt(25,25);

    //std::cout << vec->x() << "|" << vec->y() << "|" << vec->z() << std::endl;

    return a.exec();
}
