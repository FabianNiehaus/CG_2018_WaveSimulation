#include "wavesurface.h"

WaveSurface::WaveSurface(double meshDim_X, double meshDim_Z, double scaling)
{
    scaledOffset_X = meshDim_X / 2;
    scaledOffset_Z = meshDim_Z / 2;

    for(int i = 0; i < meshDim_X; i++){

        vector<QVector3D *> temp;

        for(int j = 0; j < meshDim_Z; j++){
            temp.push_back(new QVector3D(((double)j - scaledOffset_X)/ scaling, 1, ((double)i - scaledOffset_Z)/ scaling));
        }

        mesh.push_back(temp);
    }
}

QVector3D *WaveSurface::getAt(int row, int column)
{
    if(row < (int)mesh.size() && column < (int)mesh.at(row).size()){
        return mesh.at(row).at(column);
    } else {
        return NULL;
    }
}

void WaveSurface::setAt(int row, int column, QVector3D * vec)
{
    if(row < (int)mesh.size() && column < (int)mesh.at(row).size()){
        mesh.at(row).at(column) = vec;
    }
}

int WaveSurface::getRows()
{
    return (int)mesh.size();
}

int WaveSurface::getColumns()
{
    return (int)mesh.at(0).size();
}

void WaveSurface::addWave(Wave v)
{
    waves.push_back(v);
}

void WaveSurface::recalculateMesh(double time)
{

    for(unsigned int i = 0; i < mesh.size(); i++){
        for(unsigned int j = 0; j < mesh.at(0).size(); j++){
            QVector3D * vec = mesh.at(i).at(j);

            double y = calculateWaveHeight(vec->x(), vec->z(), time);

            vec->setY(y);
        }
    }
}

double WaveSurface::calculateWaveHeight(double x, double z, double time)
{
    double y = 0.0;

    double yScaling = 3.0;

    for(unsigned int i = 0; i < waves.size(); i++){
        Wave wave = waves.at(i);

        double distanceToOrigin = QVector2D(x,z).distanceToPoint(wave.O);
        double phi = -2 * wave.pi * wave.f * (time + wave.phi);

        if(distanceToOrigin < 0.5){ cout << distanceToOrigin << endl;}

        y += wave.a * cos(wave.k * distanceToOrigin + phi) / (distanceToOrigin + 1) * yScaling;
    }

    return y;
}
