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
 **     class TileCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTILECAMERADECORATORBASE_H_
#define _OSGTILECAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSystemDef.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGCameraDecorator.h> // Parent

#include <OpenSG/OSGReal32Fields.h> // Left type
#include <OpenSG/OSGReal32Fields.h> // Right type
#include <OpenSG/OSGReal32Fields.h> // Bottom type
#include <OpenSG/OSGReal32Fields.h> // Top type
#include <OpenSG/OSGUInt32Fields.h> // FullWidth type
#include <OpenSG/OSGUInt32Fields.h> // FullHeight type

#include <OpenSG/OSGTileCameraDecoratorFields.h>

OSG_BEGIN_NAMESPACE

class TileCameraDecorator;
class BinaryDataHandler;

//! \brief TileCameraDecorator Base Class.

class OSG_SYSTEMLIB_DLLMAPPING TileCameraDecoratorBase : public CameraDecorator
{
  private:

    typedef CameraDecorator    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TileCameraDecoratorPtr  Ptr;

    enum
    {
        LeftFieldId       = Inherited::NextFieldId,
        RightFieldId      = LeftFieldId       + 1,
        BottomFieldId     = RightFieldId      + 1,
        TopFieldId        = BottomFieldId     + 1,
        FullWidthFieldId  = TopFieldId        + 1,
        FullHeightFieldId = FullWidthFieldId  + 1,
        NextFieldId       = FullHeightFieldId + 1
    };

    static const OSG::BitVector LeftFieldMask;
    static const OSG::BitVector RightFieldMask;
    static const OSG::BitVector BottomFieldMask;
    static const OSG::BitVector TopFieldMask;
    static const OSG::BitVector FullWidthFieldMask;
    static const OSG::BitVector FullHeightFieldMask;


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

           SFReal32            *getSFLeft           (void);
           SFReal32            *getSFRight          (void);
           SFReal32            *getSFBottom         (void);
           SFReal32            *getSFTop            (void);
           SFUInt32            *getSFFullWidth      (void);
           SFUInt32            *getSFFullHeight     (void);

           Real32              &getLeft           (void);
     const Real32              &getLeft           (void) const;
           Real32              &getRight          (void);
     const Real32              &getRight          (void) const;
           Real32              &getBottom         (void);
     const Real32              &getBottom         (void) const;
           Real32              &getTop            (void);
     const Real32              &getTop            (void) const;
           UInt32              &getFullWidth      (void);
     const UInt32              &getFullWidth      (void) const;
           UInt32              &getFullHeight     (void);
     const UInt32              &getFullHeight     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setLeft           ( const Real32 &value );
     void setRight          ( const Real32 &value );
     void setBottom         ( const Real32 &value );
     void setTop            ( const Real32 &value );
     void setFullWidth      ( const UInt32 &value );
     void setFullHeight     ( const UInt32 &value );

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

    static  TileCameraDecoratorPtr      create          (void); 
    static  TileCameraDecoratorPtr      createEmpty     (void); 

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

    SFReal32            _sfLeft;
    SFReal32            _sfRight;
    SFReal32            _sfBottom;
    SFReal32            _sfTop;
    SFUInt32            _sfFullWidth;
    SFUInt32            _sfFullHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TileCameraDecoratorBase(void);
    TileCameraDecoratorBase(const TileCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TileCameraDecoratorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TileCameraDecoratorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TileCameraDecoratorBase *pOther,
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
    void operator =(const TileCameraDecoratorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TileCameraDecoratorBase *TileCameraDecoratorBaseP;

typedef osgIF<TileCameraDecoratorBase::isNodeCore,
              CoredNodePtr<TileCameraDecorator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TileCameraDecoratorNodePtr;

typedef RefPtr<TileCameraDecoratorPtr> TileCameraDecoratorRefPtr;

OSG_END_NAMESPACE

#define OSGTILECAMERADECORATORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTILECAMERADECORATORBASE_H_ */
