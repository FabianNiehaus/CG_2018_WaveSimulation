/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 24.06.2018
 *
 */

#include "wave.h"

Wave::Wave(double a, double l, double phi, QVector2D O)
{
    this->a = a;
    this->l = l;
    this->timeOffset = phi;
    this->O = O;

    this->c = sqrt( (g*l) / (2*pi) );
    this->f = c / l;
    this->k = (2*pi) / l;
}
