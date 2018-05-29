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
 **     class Light
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLIGHTBASE_H_
#define _OSGLIGHTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSystemDef.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGGroup.h> // Parent

#include <OpenSG/OSGColor4fFields.h> // Ambient type
#include <OpenSG/OSGColor4fFields.h> // Diffuse type
#include <OpenSG/OSGColor4fFields.h> // Specular type
#include <OpenSG/OSGNodeFields.h> // Beacon type
#include <OpenSG/OSGBoolFields.h> // On type
#include <OpenSG/OSGReal32Fields.h> // ConstantAttenuation type
#include <OpenSG/OSGReal32Fields.h> // LinearAttenuation type
#include <OpenSG/OSGReal32Fields.h> // QuadraticAttenuation type
#include <OpenSG/OSGReal32Fields.h> // ShadowIntensity type
#include <OpenSG/OSGUInt32Fields.h> // ShadowMode type

#include <OpenSG/OSGLightFields.h>

OSG_BEGIN_NAMESPACE

class Light;
class BinaryDataHandler;

//! \brief Light Base Class.

class OSG_SYSTEMLIB_DLLMAPPING LightBase : public Group
{
  private:

    typedef Group    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef LightPtr  Ptr;

    enum
    {
        AmbientFieldId              = Inherited::NextFieldId,
        DiffuseFieldId              = AmbientFieldId              + 1,
        SpecularFieldId             = DiffuseFieldId              + 1,
        BeaconFieldId               = SpecularFieldId             + 1,
        OnFieldId                   = BeaconFieldId               + 1,
        ConstantAttenuationFieldId  = OnFieldId                   + 1,
        LinearAttenuationFieldId    = ConstantAttenuationFieldId  + 1,
        QuadraticAttenuationFieldId = LinearAttenuationFieldId    + 1,
        ShadowIntensityFieldId      = QuadraticAttenuationFieldId + 1,
        ShadowModeFieldId           = ShadowIntensityFieldId      + 1,
        NextFieldId                 = ShadowModeFieldId           + 1
    };

    static const OSG::BitVector AmbientFieldMask;
    static const OSG::BitVector DiffuseFieldMask;
    static const OSG::BitVector SpecularFieldMask;
    static const OSG::BitVector BeaconFieldMask;
    static const OSG::BitVector OnFieldMask;
    static const OSG::BitVector ConstantAttenuationFieldMask;
    static const OSG::BitVector LinearAttenuationFieldMask;
    static const OSG::BitVector QuadraticAttenuationFieldMask;
    static const OSG::BitVector ShadowIntensityFieldMask;
    static const OSG::BitVector ShadowModeFieldMask;


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

           SFColor4f           *getSFAmbient        (void);
           SFColor4f           *getSFDiffuse        (void);
           SFColor4f           *getSFSpecular       (void);
           SFNodePtr           *getSFBeacon         (void);
           SFBool              *getSFOn             (void);
           SFReal32            *getSFConstantAttenuation(void);
           SFReal32            *getSFLinearAttenuation(void);
           SFReal32            *getSFQuadraticAttenuation(void);
           SFReal32            *getSFShadowIntensity(void);
           SFUInt32            *getSFShadowMode     (void);

           Color4f             &getAmbient        (void);
     const Color4f             &getAmbient        (void) const;
           Color4f             &getDiffuse        (void);
     const Color4f             &getDiffuse        (void) const;
           Color4f             &getSpecular       (void);
     const Color4f             &getSpecular       (void) const;
           NodePtr             &getBeacon         (void);
     const NodePtr             &getBeacon         (void) const;
           bool                &getOn             (void);
     const bool                &getOn             (void) const;
           Real32              &getConstantAttenuation(void);
     const Real32              &getConstantAttenuation(void) const;
           Real32              &getLinearAttenuation(void);
     const Real32              &getLinearAttenuation(void) const;
           Real32              &getQuadraticAttenuation(void);
     const Real32              &getQuadraticAttenuation(void) const;
           Real32              &getShadowIntensity(void);
     const Real32              &getShadowIntensity(void) const;
           UInt32              &getShadowMode     (void);
     const UInt32              &getShadowMode     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setAmbient        ( const Color4f &value );
     void setDiffuse        ( const Color4f &value );
     void setSpecular       ( const Color4f &value );
     void setBeacon         ( const NodePtr &value );
     void setOn             ( const bool &value );
     void setConstantAttenuation( const Real32 &value );
     void setLinearAttenuation( const Real32 &value );
     void setQuadraticAttenuation( const Real32 &value );
     void setShadowIntensity( const Real32 &value );
     void setShadowMode     ( const UInt32 &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFColor4f           _sfAmbient;
    SFColor4f           _sfDiffuse;
    SFColor4f           _sfSpecular;
    SFNodePtr           _sfBeacon;
    SFBool              _sfOn;
    SFReal32            _sfConstantAttenuation;
    SFReal32            _sfLinearAttenuation;
    SFReal32            _sfQuadraticAttenuation;
    SFReal32            _sfShadowIntensity;
    SFUInt32            _sfShadowMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LightBase(void);
    LightBase(const LightBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LightBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      LightBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      LightBase *pOther,
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
    void operator =(const LightBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef LightBase *LightBaseP;

typedef osgIF<LightBase::isNodeCore,
              CoredNodePtr<Light>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet LightNodePtr;

typedef RefPtr<LightPtr> LightRefPtr;

OSG_END_NAMESPACE

#define OSGLIGHTBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGLIGHTBASE_H_ */
