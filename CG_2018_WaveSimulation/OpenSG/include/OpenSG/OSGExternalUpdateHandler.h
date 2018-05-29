#ifndef _OSGEXTERNALUPDATEHANDLER_H
#define _OSGEXTERNALUPDATEHANDLER_H

#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGBaseFunctions.h>
#include <OpenSG/OSGSimpleGeometry.h>

using namespace osg;

class OSG_SYSTEMLIB_DLLMAPPING ExternalUpdateHandler
{
public:
    virtual ~ExternalUpdateHandler() {}
    virtual void update( NodePtr& TransformNode ) = 0;
};

#endif // _OSGEXTERNALUPDATEHANDLER_H

