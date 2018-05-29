/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TiledTerrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TiledTerrainBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TiledTerrainBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TiledTerrainPtr TiledTerrainBase::create(void) 
{
    TiledTerrainPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TiledTerrainPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TiledTerrainPtr TiledTerrainBase::createEmpty(void) 
{ 
    TiledTerrainPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TiledTerrain::_mfHeightTiles field.
inline
MFImagePtr *TiledTerrainBase::getMFHeightTiles(void)
{
    return &_mfHeightTiles;
}

//! Get the TiledTerrain::_mfHeightTextures field.
inline
MFMaterialPtr *TiledTerrainBase::getMFHeightTextures(void)
{
    return &_mfHeightTextures;
}

//! Get the TiledTerrain::_sfSizeX field.
inline
SFUInt32 *TiledTerrainBase::getSFSizeX(void)
{
    return &_sfSizeX;
}

//! Get the TiledTerrain::_sfSizeY field.
inline
SFUInt32 *TiledTerrainBase::getSFSizeY(void)
{
    return &_sfSizeY;
}

//! Get the TiledTerrain::_sfHeightScale field.
inline
SFReal32 *TiledTerrainBase::getSFHeightScale(void)
{
    return &_sfHeightScale;
}

//! Get the TiledTerrain::_sfVertexSpacing field.
inline
SFReal32 *TiledTerrainBase::getSFVertexSpacing(void)
{
    return &_sfVertexSpacing;
}

//! Get the TiledTerrain::_sfGeoMorphing field.
inline
SFBool *TiledTerrainBase::getSFGeoMorphing(void)
{
    return &_sfGeoMorphing;
}

//! Get the TiledTerrain::_sfDetail field.
inline
SFReal32 *TiledTerrainBase::getSFDetail(void)
{
    return &_sfDetail;
}

//! Get the TiledTerrain::_sfCurrentX field.
inline
SFInt32 *TiledTerrainBase::getSFCurrentX(void)
{
    return &_sfCurrentX;
}

//! Get the TiledTerrain::_sfCurrentY field.
inline
SFInt32 *TiledTerrainBase::getSFCurrentY(void)
{
    return &_sfCurrentY;
}

//! Get the TiledTerrain::_sfSizeROI field.
inline
SFInt32 *TiledTerrainBase::getSFSizeROI(void)
{
    return &_sfSizeROI;
}

//! Get the TiledTerrain::_sfUpdate field.
inline
SFBool *TiledTerrainBase::getSFUpdate(void)
{
    return &_sfUpdate;
}

//! Get the TiledTerrain::_sfUpdateTerrain field.
inline
SFBool *TiledTerrainBase::getSFUpdateTerrain(void)
{
    return &_sfUpdateTerrain;
}

//! Get the TiledTerrain::_sfPerPixelLighting field.
inline
SFBool *TiledTerrainBase::getSFPerPixelLighting(void)
{
    return &_sfPerPixelLighting;
}


//! Get the value of the TiledTerrain::_sfSizeX field.
inline
UInt32 &TiledTerrainBase::getSizeX(void)
{
    return _sfSizeX.getValue();
}

//! Get the value of the TiledTerrain::_sfSizeX field.
inline
const UInt32 &TiledTerrainBase::getSizeX(void) const
{
    return _sfSizeX.getValue();
}

//! Set the value of the TiledTerrain::_sfSizeX field.
inline
void TiledTerrainBase::setSizeX(const UInt32 &value)
{
    _sfSizeX.setValue(value);
}

//! Get the value of the TiledTerrain::_sfSizeY field.
inline
UInt32 &TiledTerrainBase::getSizeY(void)
{
    return _sfSizeY.getValue();
}

//! Get the value of the TiledTerrain::_sfSizeY field.
inline
const UInt32 &TiledTerrainBase::getSizeY(void) const
{
    return _sfSizeY.getValue();
}

//! Set the value of the TiledTerrain::_sfSizeY field.
inline
void TiledTerrainBase::setSizeY(const UInt32 &value)
{
    _sfSizeY.setValue(value);
}

//! Get the value of the TiledTerrain::_sfHeightScale field.
inline
Real32 &TiledTerrainBase::getHeightScale(void)
{
    return _sfHeightScale.getValue();
}

//! Get the value of the TiledTerrain::_sfHeightScale field.
inline
const Real32 &TiledTerrainBase::getHeightScale(void) const
{
    return _sfHeightScale.getValue();
}

//! Set the value of the TiledTerrain::_sfHeightScale field.
inline
void TiledTerrainBase::setHeightScale(const Real32 &value)
{
    _sfHeightScale.setValue(value);
}

//! Get the value of the TiledTerrain::_sfVertexSpacing field.
inline
Real32 &TiledTerrainBase::getVertexSpacing(void)
{
    return _sfVertexSpacing.getValue();
}

//! Get the value of the TiledTerrain::_sfVertexSpacing field.
inline
const Real32 &TiledTerrainBase::getVertexSpacing(void) const
{
    return _sfVertexSpacing.getValue();
}

//! Set the value of the TiledTerrain::_sfVertexSpacing field.
inline
void TiledTerrainBase::setVertexSpacing(const Real32 &value)
{
    _sfVertexSpacing.setValue(value);
}

//! Get the value of the TiledTerrain::_sfGeoMorphing field.
inline
bool &TiledTerrainBase::getGeoMorphing(void)
{
    return _sfGeoMorphing.getValue();
}

//! Get the value of the TiledTerrain::_sfGeoMorphing field.
inline
const bool &TiledTerrainBase::getGeoMorphing(void) const
{
    return _sfGeoMorphing.getValue();
}

//! Set the value of the TiledTerrain::_sfGeoMorphing field.
inline
void TiledTerrainBase::setGeoMorphing(const bool &value)
{
    _sfGeoMorphing.setValue(value);
}

//! Get the value of the TiledTerrain::_sfDetail field.
inline
Real32 &TiledTerrainBase::getDetail(void)
{
    return _sfDetail.getValue();
}

//! Get the value of the TiledTerrain::_sfDetail field.
inline
const Real32 &TiledTerrainBase::getDetail(void) const
{
    return _sfDetail.getValue();
}

//! Set the value of the TiledTerrain::_sfDetail field.
inline
void TiledTerrainBase::setDetail(const Real32 &value)
{
    _sfDetail.setValue(value);
}

//! Get the value of the TiledTerrain::_sfCurrentX field.
inline
Int32 &TiledTerrainBase::getCurrentX(void)
{
    return _sfCurrentX.getValue();
}

//! Get the value of the TiledTerrain::_sfCurrentX field.
inline
const Int32 &TiledTerrainBase::getCurrentX(void) const
{
    return _sfCurrentX.getValue();
}

//! Set the value of the TiledTerrain::_sfCurrentX field.
inline
void TiledTerrainBase::setCurrentX(const Int32 &value)
{
    _sfCurrentX.setValue(value);
}

//! Get the value of the TiledTerrain::_sfCurrentY field.
inline
Int32 &TiledTerrainBase::getCurrentY(void)
{
    return _sfCurrentY.getValue();
}

//! Get the value of the TiledTerrain::_sfCurrentY field.
inline
const Int32 &TiledTerrainBase::getCurrentY(void) const
{
    return _sfCurrentY.getValue();
}

//! Set the value of the TiledTerrain::_sfCurrentY field.
inline
void TiledTerrainBase::setCurrentY(const Int32 &value)
{
    _sfCurrentY.setValue(value);
}

//! Get the value of the TiledTerrain::_sfSizeROI field.
inline
Int32 &TiledTerrainBase::getSizeROI(void)
{
    return _sfSizeROI.getValue();
}

//! Get the value of the TiledTerrain::_sfSizeROI field.
inline
const Int32 &TiledTerrainBase::getSizeROI(void) const
{
    return _sfSizeROI.getValue();
}

//! Set the value of the TiledTerrain::_sfSizeROI field.
inline
void TiledTerrainBase::setSizeROI(const Int32 &value)
{
    _sfSizeROI.setValue(value);
}

//! Get the value of the TiledTerrain::_sfUpdate field.
inline
bool &TiledTerrainBase::getUpdate(void)
{
    return _sfUpdate.getValue();
}

//! Get the value of the TiledTerrain::_sfUpdate field.
inline
const bool &TiledTerrainBase::getUpdate(void) const
{
    return _sfUpdate.getValue();
}

//! Set the value of the TiledTerrain::_sfUpdate field.
inline
void TiledTerrainBase::setUpdate(const bool &value)
{
    _sfUpdate.setValue(value);
}

//! Get the value of the TiledTerrain::_sfUpdateTerrain field.
inline
bool &TiledTerrainBase::getUpdateTerrain(void)
{
    return _sfUpdateTerrain.getValue();
}

//! Get the value of the TiledTerrain::_sfUpdateTerrain field.
inline
const bool &TiledTerrainBase::getUpdateTerrain(void) const
{
    return _sfUpdateTerrain.getValue();
}

//! Set the value of the TiledTerrain::_sfUpdateTerrain field.
inline
void TiledTerrainBase::setUpdateTerrain(const bool &value)
{
    _sfUpdateTerrain.setValue(value);
}

//! Get the value of the TiledTerrain::_sfPerPixelLighting field.
inline
bool &TiledTerrainBase::getPerPixelLighting(void)
{
    return _sfPerPixelLighting.getValue();
}

//! Get the value of the TiledTerrain::_sfPerPixelLighting field.
inline
const bool &TiledTerrainBase::getPerPixelLighting(void) const
{
    return _sfPerPixelLighting.getValue();
}

//! Set the value of the TiledTerrain::_sfPerPixelLighting field.
inline
void TiledTerrainBase::setPerPixelLighting(const bool &value)
{
    _sfPerPixelLighting.setValue(value);
}


//! Get the value of the \a index element the TiledTerrain::_mfHeightTiles field.
inline
ImagePtr &TiledTerrainBase::getHeightTiles(const UInt32 index)
{
    return _mfHeightTiles[index];
}

//! Get the TiledTerrain::_mfHeightTiles field.
inline
MFImagePtr &TiledTerrainBase::getHeightTiles(void)
{
    return _mfHeightTiles;
}

//! Get the TiledTerrain::_mfHeightTiles field.
inline
const MFImagePtr &TiledTerrainBase::getHeightTiles(void) const
{
    return _mfHeightTiles;
}

//! Get the value of the \a index element the TiledTerrain::_mfHeightTextures field.
inline
MaterialPtr &TiledTerrainBase::getHeightTextures(const UInt32 index)
{
    return _mfHeightTextures[index];
}

//! Get the TiledTerrain::_mfHeightTextures field.
inline
MFMaterialPtr &TiledTerrainBase::getHeightTextures(void)
{
    return _mfHeightTextures;
}

//! Get the TiledTerrain::_mfHeightTextures field.
inline
const MFMaterialPtr &TiledTerrainBase::getHeightTextures(void) const
{
    return _mfHeightTextures;
}

OSG_END_NAMESPACE

#define OSGTILEDTERRAINBASE_INLINE_CVSID "@(#)$Id: OSGTiledTerrainBase.inl,v 1.6 2006/02/20 17:04:33 dirk Exp $"

