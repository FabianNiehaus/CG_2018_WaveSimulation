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
 **     class SortFirstWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SortFirstWindowBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SortFirstWindowBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SortFirstWindowPtr SortFirstWindowBase::create(void) 
{
    SortFirstWindowPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SortFirstWindowPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SortFirstWindowPtr SortFirstWindowBase::createEmpty(void) 
{ 
    SortFirstWindowPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the SortFirstWindow::_sfCompression field.
inline
SFString *SortFirstWindowBase::getSFCompression(void)
{
    return &_sfCompression;
}

//! Get the SortFirstWindow::_sfSubtileSize field.
inline
SFUInt32 *SortFirstWindowBase::getSFSubtileSize(void)
{
    return &_sfSubtileSize;
}

//! Get the SortFirstWindow::_sfCompose field.
inline
SFBool *SortFirstWindowBase::getSFCompose(void)
{
    return &_sfCompose;
}

//! Get the SortFirstWindow::_mfRegion field.
inline
MFUInt32 *SortFirstWindowBase::getMFRegion(void)
{
    return &_mfRegion;
}

//! Get the SortFirstWindow::_sfUseFaceDistribution field.
inline
SFBool *SortFirstWindowBase::getSFUseFaceDistribution(void)
{
    return &_sfUseFaceDistribution;
}


//! Get the value of the SortFirstWindow::_sfCompression field.
inline
std::string &SortFirstWindowBase::getCompression(void)
{
    return _sfCompression.getValue();
}

//! Get the value of the SortFirstWindow::_sfCompression field.
inline
const std::string &SortFirstWindowBase::getCompression(void) const
{
    return _sfCompression.getValue();
}

//! Set the value of the SortFirstWindow::_sfCompression field.
inline
void SortFirstWindowBase::setCompression(const std::string &value)
{
    _sfCompression.setValue(value);
}

//! Get the value of the SortFirstWindow::_sfSubtileSize field.
inline
UInt32 &SortFirstWindowBase::getSubtileSize(void)
{
    return _sfSubtileSize.getValue();
}

//! Get the value of the SortFirstWindow::_sfSubtileSize field.
inline
const UInt32 &SortFirstWindowBase::getSubtileSize(void) const
{
    return _sfSubtileSize.getValue();
}

//! Set the value of the SortFirstWindow::_sfSubtileSize field.
inline
void SortFirstWindowBase::setSubtileSize(const UInt32 &value)
{
    _sfSubtileSize.setValue(value);
}

//! Get the value of the SortFirstWindow::_sfCompose field.
inline
bool &SortFirstWindowBase::getCompose(void)
{
    return _sfCompose.getValue();
}

//! Get the value of the SortFirstWindow::_sfCompose field.
inline
const bool &SortFirstWindowBase::getCompose(void) const
{
    return _sfCompose.getValue();
}

//! Set the value of the SortFirstWindow::_sfCompose field.
inline
void SortFirstWindowBase::setCompose(const bool &value)
{
    _sfCompose.setValue(value);
}

//! Get the value of the SortFirstWindow::_sfUseFaceDistribution field.
inline
bool &SortFirstWindowBase::getUseFaceDistribution(void)
{
    return _sfUseFaceDistribution.getValue();
}

//! Get the value of the SortFirstWindow::_sfUseFaceDistribution field.
inline
const bool &SortFirstWindowBase::getUseFaceDistribution(void) const
{
    return _sfUseFaceDistribution.getValue();
}

//! Set the value of the SortFirstWindow::_sfUseFaceDistribution field.
inline
void SortFirstWindowBase::setUseFaceDistribution(const bool &value)
{
    _sfUseFaceDistribution.setValue(value);
}


//! Get the value of the \a index element the SortFirstWindow::_mfRegion field.
inline
UInt32 &SortFirstWindowBase::getRegion(const UInt32 index)
{
    return _mfRegion[index];
}

//! Get the SortFirstWindow::_mfRegion field.
inline
MFUInt32 &SortFirstWindowBase::getRegion(void)
{
    return _mfRegion;
}

//! Get the SortFirstWindow::_mfRegion field.
inline
const MFUInt32 &SortFirstWindowBase::getRegion(void) const
{
    return _mfRegion;
}

OSG_END_NAMESPACE

#define OSGSORTFIRSTWINDOWBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

