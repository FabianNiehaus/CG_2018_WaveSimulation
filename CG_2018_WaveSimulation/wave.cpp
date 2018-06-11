#include "wave.h"

Wave::Wave(double a, QVector2D D, double l, double phi, QVector2D O)
{
    this->a = a;
    this->D = QVector2D(D.x(), D.y());
    this->l = l;
    this->phi = phi;
    this->O = O;

    this->c = sqrt( (g*l) / (2*pi) );
    this->f = c / l;
    this->k = (2*pi) / l;
}
