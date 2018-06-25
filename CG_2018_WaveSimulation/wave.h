/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 24.06.2018
 *
 */

#ifndef WAVE_H
#define WAVE_H

#include <QVector2D>

#include <cmath>

class Wave
{
public:
    Wave(double a, double W, double timeOffset, QVector2D O);

    double a; // Amplitude
    double l; // Wellenlänge
    double timeOffset; // Phasenverschiebung
    QVector2D O; // Ursprungspunkt

    double c; // Phasengeschwindigkeit
    double f; // Frequenz
    double k; // Wellenzahl

    const double g = 9.81;
    const double pi = 3.141592653589793;

};

#endif // WAVE_H
