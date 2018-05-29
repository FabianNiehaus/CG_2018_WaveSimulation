#ifndef _OSGDITHERSHADOWMAP_H_
#define _OSGDITHERSHADOWMAP_H_
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
#include <OpenSG/OSGSimpleMaterial.h>
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

class OSG_SYSTEMLIB_DLLMAPPING DitherShadowMap : public TreeRenderer
{
public:

    DitherShadowMap(ShadowViewport *source);
    ~DitherShadowMap(void);
    virtual void render(RenderActionBase* action);

  private:

    void createShadowMaps(RenderActionBase* action);
    void createColorMap(RenderActionBase* action);
    void drawCombineMap(RenderActionBase* action);
    void createShadowFactorMap(RenderActionBase* action);
    void createColorMapFBO(RenderActionBase* action);
    void createShadowFactorMapFBO(RenderActionBase* action);
    void createShadowMapsFBO(RenderActionBase* action);
    bool initFBO(Window *win);
    void reInit(Window *win);
    bool checkFrameBufferStatus(Window *win);
    void initTextures(Window *win);

    GLuint                  _fb;
    GLuint                  _fb2;
    GLuint                  _rb_depth;
    Matrix                  _transforms[6];
    TileCameraDecoratorPtr  _tiledeco;
    BlendChunkPtr           _blender;
    TextureChunkPtr         _colorMap;
    TextureChunkPtr         _shadowFactorMap;
    ImagePtr                _colorMapImage;
    ImagePtr                _shadowFactorMapImage;
    ChunkMaterialPtr        _shadowCmat;
    ChunkMaterialPtr        _combineCmat;
    SHLChunkPtr             _shadowSHL;
    SHLChunkPtr             _shadowSHL2;
    SHLChunkPtr             _shadowSHL3;
    SHLChunkPtr             _shadowSHL4;
    SHLChunkPtr             _shadowCubeSHL;
    SHLChunkPtr             _combineSHL;
    DepthChunkPtr           _combineDepth;
    PolygonForegroundPtr    _pf;
    Int32                   _firstRun;
    UInt32                  _width;
    UInt32                  _height;
    UInt32                  _widthHeightPOT;
    UInt32                  _activeFactorMap;
    TextureChunkPtr         _shadowFactorMap2;
    ImagePtr                _shadowFactorMapImage2;
    bool                    _initTexturesDone;
};

OSG_END_NAMESPACE

#endif /* _OSGDITHERSHADOWMAP_H_ */

