#ifndef _OSGVARIANCESHADOWMAP_H_
#define _OSGVARIANCESHADOWMAP_H_
#ifdef __sgi
#pragma once
#endif

#include <vector>
#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGAction.h>
#include <OpenSG/OSGRenderActionBase.h>
#include <OpenSG/OSGSpotLight.h>
#include <OpenSG/OSGDirectionalLight.h>
#include <OpenSG/OSGPerspectiveCamera.h>
#include <OpenSG/OSGMatrixCamera.h>
#include <OpenSG/OSGTransform.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGPassiveBackground.h>
#include <OpenSG/OSGSolidBackground.h>
#include <OpenSG/OSGDynamicVolume.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGSHLChunk.h>
#include <OpenSG/OSGForeground.h>
#include <OpenSG/OSGPolygonForeground.h>
#include <OpenSG/OSGGrabForeground.h>
#include <OpenSG/OSGTextureGrabForeground.h>
#include <OpenSG/OSGFileGrabForeground.h>
#include <OpenSG/OSGImageForeground.h>
#include <OpenSG/OSGTexGenChunk.h>
#include <OpenSG/OSGTextureTransformChunk.h>
#include <OpenSG/OSGPolygonChunk.h>
#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGTileCameraDecorator.h>
#include <OpenSG/OSGDepthChunk.h>

#include "OpenSG/OSGTreeRenderer.h"

OSG_BEGIN_NAMESPACE

class ShadowViewport;
class TreeRenderer;

class OSG_SYSTEMLIB_DLLMAPPING VarianceShadowMap : public TreeRenderer
{

    /*==========================  PUBLIC  =================================*/
  public:

    VarianceShadowMap(ShadowViewport *source);
    ~VarianceShadowMap(void);
    virtual void render(RenderActionBase* action);

private:

    void initTextures(Window *win);
    void drawCombineMap(RenderActionBase* action);
    void createColorMap(RenderActionBase* action);
    void createColorMapFBO(RenderActionBase* action);
    void createShadowFactorMap(RenderActionBase* action, UInt32 num);
    void createShadowFactorMapFBO(RenderActionBase* action, UInt32 num);
    void createShadowMapsFBO(RenderActionBase* action);
    bool initFBO(Window *win);
    void reInit(Window *win);
    bool checkFrameBufferStatus(Window *win);

    TileCameraDecoratorPtr  _tiledeco;
    TextureChunkPtr         _colorMap;
    TextureChunkPtr         _shadowFactorMap;
    ImagePtr                _colorMapImage;
    ImagePtr                _shadowFactorMapImage;
    ChunkMaterialPtr        _shadowCmat;
    SHLChunkPtr             _shadowSHL;
    SHLChunkPtr             _combineSHL;
    DepthChunkPtr           _combineDepth;
    ChunkMaterialPtr        _depthCmat;
    SHLChunkPtr             _depthSHL;
    ChunkMaterialPtr        _combineCmat;
    PolygonForegroundPtr    _pf;
    Int32                   _firstRun;
    UInt32                  _width;
    UInt32                  _height;

    GLuint                  _fb;
    GLuint                  _fb2;
    GLuint                  _rb_depth;
    GLuint                  _rb_depth2;
    bool                    _texChanged;
    UInt32                  _widthHeightPOT;
    bool                    _initTexturesDone;
};

OSG_END_NAMESPACE

#endif /* _OSGVARIANCESHADOWMAP_H_ */

