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
 **     class ClusterWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCLUSTERWINDOWBASE_H_
#define _OSGCLUSTERWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSystemDef.h>

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGWindow.h> // Parent

#include <OpenSG/OSGStringFields.h> // Servers type
#include <OpenSG/OSGStringFields.h> // ConnectionType type
#include <OpenSG/OSGStringFields.h> // ConnectionInterface type
#include <OpenSG/OSGStringFields.h> // ConnectionDestination type
#include <OpenSG/OSGStringFields.h> // ConnectionParams type
#include <OpenSG/OSGUInt32Fields.h> // ServicePort type
#include <OpenSG/OSGStringFields.h> // ServiceAddress type
#include <OpenSG/OSGStringFields.h> // ServiceInterface type
#include <OpenSG/OSGWindowFields.h> // ClientWindow type
#include <OpenSG/OSGUInt32Fields.h> // Interleave type
#include <OpenSG/OSGUInt32Fields.h> // FrameCount type
#include <OpenSG/OSGImageComposerFields.h> // Composer type
#include <OpenSG/OSGStringFields.h> // Autostart type
#include <OpenSG/OSGDisplayCalibrationFields.h> // Calibration type
#include <OpenSG/OSGDisplayFilterForegroundFields.h> // Filter type
#include <OpenSG/OSGBoolFields.h> // Dirty type

#include <OpenSG/OSGClusterWindowFields.h>

OSG_BEGIN_NAMESPACE

class ClusterWindow;
class BinaryDataHandler;

//! \brief ClusterWindow Base Class.

class OSG_SYSTEMLIB_DLLMAPPING ClusterWindowBase : public Window
{
  private:

    typedef Window    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ClusterWindowPtr  Ptr;

    enum
    {
        ServersFieldId               = Inherited::NextFieldId,
        ConnectionTypeFieldId        = ServersFieldId               + 1,
        ConnectionInterfaceFieldId   = ConnectionTypeFieldId        + 1,
        ConnectionDestinationFieldId = ConnectionInterfaceFieldId   + 1,
        ConnectionParamsFieldId      = ConnectionDestinationFieldId + 1,
        ServicePortFieldId           = ConnectionParamsFieldId      + 1,
        ServiceAddressFieldId        = ServicePortFieldId           + 1,
        ServiceInterfaceFieldId      = ServiceAddressFieldId        + 1,
        ClientWindowFieldId          = ServiceInterfaceFieldId      + 1,
        InterleaveFieldId            = ClientWindowFieldId          + 1,
        FrameCountFieldId            = InterleaveFieldId            + 1,
        ComposerFieldId              = FrameCountFieldId            + 1,
        AutostartFieldId             = ComposerFieldId              + 1,
        CalibrationFieldId           = AutostartFieldId             + 1,
        FilterFieldId                = CalibrationFieldId           + 1,
        DirtyFieldId                 = FilterFieldId                + 1,
        NextFieldId                  = DirtyFieldId                 + 1
    };

    static const OSG::BitVector ServersFieldMask;
    static const OSG::BitVector ConnectionTypeFieldMask;
    static const OSG::BitVector ConnectionInterfaceFieldMask;
    static const OSG::BitVector ConnectionDestinationFieldMask;
    static const OSG::BitVector ConnectionParamsFieldMask;
    static const OSG::BitVector ServicePortFieldMask;
    static const OSG::BitVector ServiceAddressFieldMask;
    static const OSG::BitVector ServiceInterfaceFieldMask;
    static const OSG::BitVector ClientWindowFieldMask;
    static const OSG::BitVector InterleaveFieldMask;
    static const OSG::BitVector FrameCountFieldMask;
    static const OSG::BitVector ComposerFieldMask;
    static const OSG::BitVector AutostartFieldMask;
    static const OSG::BitVector CalibrationFieldMask;
    static const OSG::BitVector FilterFieldMask;
    static const OSG::BitVector DirtyFieldMask;


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

           MFString            *getMFServers        (void);
           SFString            *getSFConnectionType (void);
           SFString            *getSFConnectionInterface(void);
           SFString            *getSFConnectionDestination(void);
           SFString            *getSFConnectionParams(void);
           SFUInt32            *getSFServicePort    (void);
           SFString            *getSFServiceAddress (void);
           SFString            *getSFServiceInterface(void);
           SFWindowPtr         *getSFClientWindow   (void);
           SFUInt32            *getSFInterleave     (void);
           SFUInt32            *getSFFrameCount     (void);
           SFImageComposerPtr  *getSFComposer       (void);
           MFString            *getMFAutostart      (void);
           MFDisplayCalibrationPtr *getMFCalibration    (void);
           MFDisplayFilterForegroundPtr *getMFFilter         (void);

           std::string         &getConnectionType (void);
     const std::string         &getConnectionType (void) const;
           std::string         &getConnectionInterface(void);
     const std::string         &getConnectionInterface(void) const;
           std::string         &getConnectionDestination(void);
     const std::string         &getConnectionDestination(void) const;
           std::string         &getConnectionParams(void);
     const std::string         &getConnectionParams(void) const;
           UInt32              &getServicePort    (void);
     const UInt32              &getServicePort    (void) const;
           std::string         &getServiceAddress (void);
     const std::string         &getServiceAddress (void) const;
           std::string         &getServiceInterface(void);
     const std::string         &getServiceInterface(void) const;
           WindowPtr           &getClientWindow   (void);
     const WindowPtr           &getClientWindow   (void) const;
           UInt32              &getInterleave     (void);
     const UInt32              &getInterleave     (void) const;
           UInt32              &getFrameCount     (void);
     const UInt32              &getFrameCount     (void) const;
           ImageComposerPtr    &getComposer       (void);
     const ImageComposerPtr    &getComposer       (void) const;
           std::string         &getServers        (const UInt32 index);
           MFString            &getServers        (void);
     const MFString            &getServers        (void) const;
           std::string         &getAutostart      (const UInt32 index);
           MFString            &getAutostart      (void);
     const MFString            &getAutostart      (void) const;
           DisplayCalibrationPtr &getCalibration    (const UInt32 index);
           MFDisplayCalibrationPtr &getCalibration    (void);
     const MFDisplayCalibrationPtr &getCalibration    (void) const;
           DisplayFilterForegroundPtr &getFilter         (const UInt32 index);
           MFDisplayFilterForegroundPtr &getFilter         (void);
     const MFDisplayFilterForegroundPtr &getFilter         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setConnectionType ( const std::string &value );
     void setConnectionInterface( const std::string &value );
     void setConnectionDestination( const std::string &value );
     void setConnectionParams( const std::string &value );
     void setServicePort    ( const UInt32 &value );
     void setServiceAddress ( const std::string &value );
     void setServiceInterface( const std::string &value );
     void setClientWindow   ( const WindowPtr &value );
     void setInterleave     ( const UInt32 &value );
     void setFrameCount     ( const UInt32 &value );
     void setComposer       ( const ImageComposerPtr &value );

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

    static  ClusterWindowPtr      create          (void); 
    static  ClusterWindowPtr      createEmpty     (void); 

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

    MFString            _mfServers;
    SFString            _sfConnectionType;
    SFString            _sfConnectionInterface;
    SFString            _sfConnectionDestination;
    SFString            _sfConnectionParams;
    SFUInt32            _sfServicePort;
    SFString            _sfServiceAddress;
    SFString            _sfServiceInterface;
    SFWindowPtr         _sfClientWindow;
    SFUInt32            _sfInterleave;
    SFUInt32            _sfFrameCount;
    SFImageComposerPtr   _sfComposer;
    MFString            _mfAutostart;
    MFDisplayCalibrationPtr   _mfCalibration;
    MFDisplayFilterForegroundPtr   _mfFilter;
    SFBool              _sfDirty;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ClusterWindowBase(void);
    ClusterWindowBase(const ClusterWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ClusterWindowBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFBool              *getSFDirty          (void);

           bool                &getDirty          (void);
     const bool                &getDirty          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setDirty          (const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ClusterWindowBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ClusterWindowBase *pOther,
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
    void operator =(const ClusterWindowBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ClusterWindowBase *ClusterWindowBaseP;

typedef osgIF<ClusterWindowBase::isNodeCore,
              CoredNodePtr<ClusterWindow>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ClusterWindowNodePtr;

typedef RefPtr<ClusterWindowPtr> ClusterWindowRefPtr;

OSG_END_NAMESPACE

#define OSGCLUSTERWINDOWBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGCLUSTERWINDOWBASE_H_ */
