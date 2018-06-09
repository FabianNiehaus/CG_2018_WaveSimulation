#include "wavesurface.h"

WaveSurface::WaveSurface()
{

    for(int i = 0; i < 50; i++){

        vector<QVector3D *> temp;

        for(int j = 0; j < 50; j++){
            temp.push_back(new QVector3D(j-25, 1,i-25));
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
