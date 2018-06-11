#ifndef WAVESURFACE_H
#define WAVESURFACE_H

#include <QVector3D>
#include <vector>

#include <cmath>

#include <wave.h>

using namespace std;

class WaveSurface
{
public:
    WaveSurface();

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

    double calculateWaveHeight(int x, int z, double time);

    int dimension = 50;
    double halfDimension = ((double) dimension) / 2;
    double scaling = 1;

};

#endif // WAVESURFACE_H
