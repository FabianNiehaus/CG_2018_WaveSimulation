#include "wavesurface.h"

WaveSurface::WaveSurface()
{

    for(int i = 0; i < dimension; i++){

        vector<QVector3D *> temp;

        for(int j = 0; j < dimension; j++){
            temp.push_back(new QVector3D(((double)j-halfDimension) / scaling, 1, ((double)i-halfDimension) / scaling));
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

double WaveSurface::calculateWaveHeight(int x, int z, double time)
{
    double y = 0.0;

    for(unsigned int i = 0; i < waves.size(); i++){
        Wave wave = waves.at(i);

        float distance = (wave.O - QVector2D(x,z)).length();
        double distanceFactor = 0.0;

        if(1.0 / distance < 1){
            distanceFactor = 1.0 / sqrt(distance);
        } else {
            distanceFactor = 1.0;
        }

        y += (wave.a * sin(wave.k * QVector2D::dotProduct(wave.D, QVector2D(x,z)) + time * wave.c * wave.k)) * distanceFactor;
    }

    return y;
}
