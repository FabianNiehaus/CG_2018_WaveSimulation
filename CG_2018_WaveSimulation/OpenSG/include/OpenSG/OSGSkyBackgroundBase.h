/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class SkyBackground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKYBACKGROUNDBASE_H_
#define _OSGSKYBACKGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSystemDef.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGBackground.h> // Parent

#include <OpenSG/OSGColor4fFields.h> // SkyColor type
#include <OpenSG/OSGReal32Fields.h> // SkyAngle type
#include <OpenSG/OSGColor4fFields.h> // GroundColor type
#include <OpenSG/OSGReal32Fields.h> // GroundAngle type
#include <OpenSG/OSGUInt32Fields.h> // SphereRes type
#include <OpenSG/OSGTextureChunkFields.h> // BackTexture type
#include <OpenSG/OSGTextureChunkFields.h> // BottomTexture type
#include <OpenSG/OSGTextureChunkFields.h> // FrontTexture type
#include <OpenSG/OSGTextureChunkFields.h> // LeftTexture type
#include <OpenSG/OSGTextureChunkFields.h> // RightTexture type
#include <OpenSG/OSGTextureChunkFields.h> // TopTexture type
#include <OpenSG/OSGBoolFields.h> // BoxInside type
#include <OpenSG/OSGVec3fFields.h> // TopTexCoord type
#include <OpenSG/OSGVec3fFields.h> // BottomTexCoord type
#include <OpenSG/OSGVec3fFields.h> // RightTexCoord type
#include <OpenSG/OSGVec3fFields.h> // LeftTexCoord type
#include <OpenSG/OSGVec3fFields.h> // FrontTexCoord type
#include <OpenSG/OSGVec3fFields.h> // BackTexCoord type
#include <OpenSG/OSGNodeFields.h> // Beacon type
#include <OpenSG/OSGInt32Fields.h> // ClearStencilBit type

#include <OpenSG/OSGSkyBackgroundFields.h>

OSG_BEGIN_NAMESPACE

class SkyBackground;
class BinaryDataHandler;

//! \brief SkyBackground Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SkyBackgroundBase : public Background
{
  private:

    typedef Background    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SkyBackgroundPtr  Ptr;

    enum
    {
        SkyColorFieldId        = Inherited::NextFieldId,
        SkyAngleFieldId        = SkyColorFieldId        + 1,
        GroundColorFieldId     = SkyAngleFieldId        + 1,
        GroundAngleFieldId     = GroundColorFieldId     + 1,
        SphereResFieldId       = GroundAngleFieldId     + 1,
        BackTextureFieldId     = SphereResFieldId       + 1,
        BottomTextureFieldId   = BackTextureFieldId     + 1,
        FrontTextureFieldId    = BottomTextureFieldId   + 1,
        LeftTextureFieldId     = FrontTextureFieldId    + 1,
        RightTextureFieldId    = LeftTextureFieldId     + 1,
        TopTextureFieldId      = RightTextureFieldId    + 1,
        BoxInsideFieldId       = TopTextureFieldId      + 1,
        TopTexCoordFieldId     = BoxInsideFieldId       + 1,
        BottomTexCoordFieldId  = TopTexCoordFieldId     + 1,
        RightTexCoordFieldId   = BottomTexCoordFieldId  + 1,
        LeftTexCoordFieldId    = RightTexCoordFieldId   + 1,
        FrontTexCoordFieldId   = LeftTexCoordFieldId    + 1,
        BackTexCoordFieldId    = FrontTexCoordFieldId   + 1,
        BeaconFieldId          = BackTexCoordFieldId    + 1,
        ClearStencilBitFieldId = BeaconFieldId          + 1,
        NextFieldId            = ClearStencilBitFieldId + 1
    };

    static const OSG::BitVector SkyColorFieldMask;
    static const OSG::BitVector SkyAngleFieldMask;
    static const OSG::BitVector GroundColorFieldMask;
    static const OSG::BitVector GroundAngleFieldMask;
    static const OSG::BitVector SphereResFieldMask;
    static const OSG::BitVector BackTextureFieldMask;
    static const OSG::BitVector BottomTextureFieldMask;
    static const OSG::BitVector FrontTextureFieldMask;
    static const OSG::BitVector LeftTextureFieldMask;
    static const OSG::BitVector RightTextureFieldMask;
    static const OSG::BitVector TopTextureFieldMask;
    static const OSG::BitVector BoxInsideFieldMask;
    static const OSG::BitVector TopTexCoordFieldMask;
    static const OSG::BitVector BottomTexCoordFieldMask;
    static const OSG::BitVector RightTexCoordFieldMask;
    static const OSG::BitVector LeftTexCoordFieldMask;
    static const OSG::BitVector FrontTexCoordFieldMask;
    static const OSG::BitVector BackTexCoordFieldMask;
    static const OSG::BitVector BeaconFieldMask;
    static const OSG::BitVector ClearStencilBitFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFColor4f           *getMFSkyColor       (void);
           MFReal32            *getMFSkyAngle       (void);
           MFColor4f           *getMFGroundColor    (void);
           MFReal32            *getMFGroundAngle    (void);
           SFUInt32            *getSFSphereRes      (void);
           SFTextureChunkPtr   *getSFBackTexture    (void);
           SFTextureChunkPtr   *getSFBottomTexture  (void);
           SFTextureChunkPtr   *getSFFrontTexture   (void);
           SFTextureChunkPtr   *getSFLeftTexture    (void);
           SFTextureChunkPtr   *getSFRightTexture   (void);
           SFTextureChunkPtr   *getSFTopTexture     (void);
           SFBool              *getSFBoxInside      (void);
           MFVec3f             *getMFTopTexCoord    (void);
           MFVec3f             *getMFBottomTexCoord (void);
           MFVec3f             *getMFRightTexCoord  (void);
           MFVec3f             *getMFLeftTexCoord   (void);
           MFVec3f             *getMFFrontTexCoord  (void);
           MFVec3f             *getMFBackTexCoord   (void);
           SFNodePtr           *getSFBeacon         (void);
           SFInt32             *getSFClearStencilBit(void);

           UInt32              &getSphereRes      (void);
     const UInt32              &getSphereRes      (void) const;
           TextureChunkPtr     &getBackTexture    (void);
     const TextureChunkPtr     &getBackTexture    (void) const;
           TextureChunkPtr     &getBottomTexture  (void);
     const TextureChunkPtr     &getBottomTexture  (void) const;
           TextureChunkPtr     &getFrontTexture   (void);
     const TextureChunkPtr     &getFrontTexture   (void) const;
           TextureChunkPtr     &getLeftTexture    (void);
     const TextureChunkPtr     &getLeftTexture    (void) const;
           TextureChunkPtr     &getRightTexture   (void);
     const TextureChunkPtr     &getRightTexture   (void) const;
           TextureChunkPtr     &getTopTexture     (void);
     const TextureChunkPtr     &getTopTexture     (void) const;
           bool                &getBoxInside      (void);
     const bool                &getBoxInside      (void) const;
           NodePtr             &getBeacon         (void);
     const NodePtr             &getBeacon         (void) const;
           Int32               &getClearStencilBit(void);
     const Int32               &getClearStencilBit(void) const;
           Color4f             &getSkyColor       (const UInt32 index);
           MFColor4f           &getSkyColor       (void);
     const MFColor4f           &getSkyColor       (void) const;
           Real32              &getSkyAngle       (const UInt32 index);
           MFReal32            &getSkyAngle       (void);
     const MFReal32            &getSkyAngle       (void) const;
           Color4f             &getGroundColor    (const UInt32 index);
           MFColor4f           &getGroundColor    (void);
     const MFColor4f           &getGroundColor    (void) const;
           Real32              &getGroundAngle    (const UInt32 index);
           MFReal32            &getGroundAngle    (void);
     const MFReal32            &getGroundAngle    (void) const;
           Vec3f               &getTopTexCoord    (const UInt32 index);
           MFVec3f             &getTopTexCoord    (void);
     const MFVec3f             &getTopTexCoord    (void) const;
           Vec3f               &getBottomTexCoord (const UInt32 index);
           MFVec3f             &getBottomTexCoord (void);
     const MFVec3f             &getBottomTexCoord (void) const;
           Vec3f               &getRightTexCoord  (const UInt32 index);
           MFVec3f             &getRightTexCoord  (void);
     const MFVec3f             &getRightTexCoord  (void) const;
           Vec3f               &getLeftTexCoord   (const UInt32 index);
           MFVec3f             &getLeftTexCoord   (void);
     const MFVec3f             &getLeftTexCoord   (void) const;
           Vec3f               &getFrontTexCoord  (const UInt32 index);
           MFVec3f             &getFrontTexCoord  (void);
     const MFVec3f             &getFrontTexCoord  (void) const;
           Vec3f               &getBackTexCoord   (const UInt32 index);
           MFVec3f             &getBackTexCoord   (void);
     const MFVec3f             &getBackTexCoord   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setSphereRes      ( const UInt32 &value );
     void setBackTexture    ( const TextureChunkPtr &value );
     void setBottomTexture  ( const TextureChunkPtr &value );
     void setFrontTexture   ( const TextureChunkPtr &value );
     void setLeftTexture    ( const TextureChunkPtr &value );
     void setRightTexture   ( const TextureChunkPtr &value );
     void setTopTexture     ( const TextureChunkPtr &value );
     void setBoxInside      ( const bool &value );
     void setBeacon         ( const NodePtr &value );
     void setClearStencilBit( const Int32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SkyBackgroundPtr      create          (void); 
    static  SkyBackgroundPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFColor4f           _mfSkyColor;
    MFReal32            _mfSkyAngle;
    MFColor4f           _mfGroundColor;
    MFReal32            _mfGroundAngle;
    SFUInt32            _sfSphereRes;
    SFTextureChunkPtr   _sfBackTexture;
    SFTextureChunkPtr   _sfBottomTexture;
    SFTextureChunkPtr   _sfFrontTexture;
    SFTextureChunkPtr   _sfLeftTexture;
    SFTextureChunkPtr   _sfRightTexture;
    SFTextureChunkPtr   _sfTopTexture;
    SFBool              _sfBoxInside;
    MFVec3f             _mfTopTexCoord;
    MFVec3f             _mfBottomTexCoord;
    MFVec3f             _mfRightTexCoord;
    MFVec3f             _mfLeftTexCoord;
    MFVec3f             _mfFrontTexCoord;
    MFVec3f             _mfBackTexCoord;
    SFNodePtr           _sfBeacon;
    SFInt32             _sfClearStencilBit;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkyBackgroundBase(void);
    SkyBackgroundBase(const SkyBackgroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkyBackgroundBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SkyBackgroundBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SkyBackgroundBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SkyBackgroundBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SkyBackgroundBase *SkyBackgroundBaseP;

typedef osgIF<SkyBackgroundBase::isNodeCore,
              CoredNodePtr<SkyBackground>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SkyBackgroundNodePtr;

typedef RefPtr<SkyBackgroundPtr> SkyBackgroundRefPtr;

OSG_END_NAMESPACE

#define OSGSKYBACKGROUNDBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSKYBACKGROUNDBASE_H_ */
