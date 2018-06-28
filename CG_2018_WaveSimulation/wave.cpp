/*
 * CG_2018_WaveSimulation
 *
 * Fabian Niehaus
 * Tuyet Nguyen
 *
 * Letzte Bearbeitung: 26.06.2018
 *
 */

#include "wave.h"

Wave::Wave(double a, double l, double phi, QVector2D O)
{
    this->a = a;
    this->l = l;
    this->timeOffset = phi;
    this->O = O;

    // Phasengeschwindigkeit = Wurzel aus ( Erdbeschleunigung * Wellenlänge / 2*pi )
    this->c = sqrt( (g*l) / (2*pi) );

    // Frequenz = Phasengeschwindigkeit / Wellenlänge
    this->f = c / l;

    // Wellenzahl = 2*pi / Wellenlännge
    this->k = (2*pi) / l;
}
