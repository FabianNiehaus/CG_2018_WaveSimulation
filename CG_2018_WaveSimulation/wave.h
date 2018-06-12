#ifndef WAVE_H
#define WAVE_H

#include <QVector2D>

#include <cmath>

class Wave
{
public:
    Wave(double a, double W, double phi, QVector2D O);

    double a; // Amplitude
    double l; // Wellenlänge
    double phi; // Phasenverschiebung
    QVector2D O; // Ursprungspunkt

    double c; // Phasengeschwindigkeit
    double f; // Frequenz
    double k; // Wellenzahl

    const double g = 9.81;
    const double pi = 3.141592653589793;

};

#endif // WAVE_H
