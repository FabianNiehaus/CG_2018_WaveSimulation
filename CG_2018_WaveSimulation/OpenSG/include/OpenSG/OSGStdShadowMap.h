#ifndef _OSGSTDSHADOWMAP_H_
#define _OSGSTDSHADOWMAP_H_
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
#include <OpenSG/OSGMaterialGroup.h>
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
#include <OpenSG/OSGSimpleTexturedMaterial.h>
#include <OpenSG/OSGTileCameraDecorator.h>
#include <OpenSG/OSGPolygonForeground.h>
#include <OpenSG/OSGDepthChunk.h>

#include "OpenSG/OSGTreeRenderer.h"

OSG_BEGIN_NAMESPACE

class ShadowViewport;
class TreeRenderer;

class OSG_SYSTEMLIB_DLLMAPPING StdShadowMap : public TreeRenderer
{
  public:

    StdShadowMap(ShadowViewport *source);
    ~StdShadowMap(void);
    virtual void render(RenderActionBase* action);

  private:

    bool initFBO(Window *win);
    void reInit(Window *win);
    
    void initTextures(Window *win);
    bool checkFrameBufferStatus(Window *win);
    void createShadowMapsFBO(RenderActionBase* action);
    void createShadowMaps(RenderActionBase* action);
    void createShadowMapsNOGLSL(RenderActionBase* action);
    void projectShadowMaps(RenderActionBase* action);
    void createColorMapFBO(RenderActionBase* action);
    void createShadowFactorMapFBO(RenderActionBase* action);
    void createShadowFactorMap(RenderActionBase* action);
    void createColorMap(RenderActionBase* action);
    void drawCombineMap(RenderActionBase* action);

    GLuint _fb;
    GLuint _fb2;
    GLuint _rb_depth;
    UInt32 _activeFactorMap;
    UInt32 _widthHeightPOT;
    Matrix _transforms[6];
    
    TileCameraDecoratorPtr  _tiledeco;
    BlendChunkPtr           _blender;
    TextureChunkPtr         _colorMap;
    TextureChunkPtr         _shadowFactorMap;
    ImagePtr                _colorMapImage;
    ImagePtr                _shadowFactorMapImage;
    TextureChunkPtr         _shadowFactorMap2;
    ImagePtr                _shadowFactorMapImage2;
    ChunkMaterialPtr        _shadowCmat;
    ChunkMaterialPtr        _combineCmat;
    SHLChunkPtr             _shadowSHL;
    SHLChunkPtr             _shadowCubeSHL;
    SHLChunkPtr             _shadowSHL2;
    SHLChunkPtr             _shadowSHL3;
    SHLChunkPtr             _shadowSHL4;
    SHLChunkPtr             _shadowSHL5;
    SHLChunkPtr             _shadowSHL6;
    SHLChunkPtr             _shadowSHL7;
    SHLChunkPtr             _combineSHL;
    DepthChunkPtr           _combineDepth;
    PolygonForegroundPtr    _pf;
    Int32                   _firstRun;
    UInt32                  _width;
    UInt32                  _height;
    bool                    _initTexturesDone;
};

OSG_END_NAMESPACE

#endif /* _OSGSTDSHADOWMAP_H_ */

