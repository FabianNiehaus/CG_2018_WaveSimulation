#ifndef WAVESURFACE_H
#define WAVESURFACE_H

#include <QVector3D>
#include <vector>

#include <cmath>
#include <iostream>

#include <wave.h>

using namespace std;

class WaveSurface
{
public:
    WaveSurface(double meshDim_X, double meshDim_Z, double scaling);

    QVector3D* getAt(int row, int column);
    void setAt(int row, int column, QVector3D* vec);

    int getRows();
    int getColumns();

    void addWave(Wave v);
    void recalculateMesh(double time);

public slots:


private:
    vector<vector<QVector3D*>> mesh;
    vector<Wave> waves;

    double calculateWaveHeight(double x, double z, double time);

    double scaledOffset_X;
    double scaledOffset_Z;

};

#endif // WAVESURFACE_H
