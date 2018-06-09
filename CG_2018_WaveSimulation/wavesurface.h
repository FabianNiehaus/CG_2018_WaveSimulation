#ifndef WAVESURFACE_H
#define WAVESURFACE_H

#include <QVector3D>
#include <vector>

using namespace std;

class WaveSurface
{
public:
    WaveSurface();

    QVector3D* getAt(int row, int column);
    void setAt(int row, int column, QVector3D* vec);

    int getRows();
    int getColumns();

public slots:


private:
    vector<vector<QVector3D*>> mesh;

};

#endif // WAVESURFACE_H
