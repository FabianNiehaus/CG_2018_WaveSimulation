#ifndef WAVE_H
#define WAVE_H

#include <QVector2D>

#include <cmath>

class Wave
{
public:
    Wave(double a, QVector2D D, double W, double phi);

    double a; // Amplitude
    QVector2D D; // Horizontaler Richtungsvektor
    double l; // Wellenlänge
    double phi; // Phasenverschiebung

    double c; // Phasengeschwindigkeit
    double f; // Frequenz
    double k; // Wellenzahl

private:
    const double g = 9.81;
    const double pi = 3.141592653589793;

};

#endif // WAVE_H
