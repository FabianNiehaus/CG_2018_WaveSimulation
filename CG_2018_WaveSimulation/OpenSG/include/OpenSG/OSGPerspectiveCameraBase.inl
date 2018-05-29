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
 **     class PerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PerspectiveCameraBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PerspectiveCameraBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PerspectiveCameraPtr PerspectiveCameraBase::create(void) 
{
    PerspectiveCameraPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PerspectiveCameraPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PerspectiveCameraPtr PerspectiveCameraBase::createEmpty(void) 
{ 
    PerspectiveCameraPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PerspectiveCamera::_sfFov field.
inline
SFReal32 *PerspectiveCameraBase::getSFFov(void)
{
    return &_sfFov;
}

//! Get the PerspectiveCamera::_sfAspect field.
inline
SFReal32 *PerspectiveCameraBase::getSFAspect(void)
{
    return &_sfAspect;
}


//! Get the value of the PerspectiveCamera::_sfFov field.
inline
Real32 &PerspectiveCameraBase::getFov(void)
{
    return _sfFov.getValue();
}

//! Get the value of the PerspectiveCamera::_sfFov field.
inline
const Real32 &PerspectiveCameraBase::getFov(void) const
{
    return _sfFov.getValue();
}

//! Set the value of the PerspectiveCamera::_sfFov field.
inline
void PerspectiveCameraBase::setFov(const Real32 &value)
{
    _sfFov.setValue(value);
}

//! Get the value of the PerspectiveCamera::_sfAspect field.
inline
Real32 &PerspectiveCameraBase::getAspect(void)
{
    return _sfAspect.getValue();
}

//! Get the value of the PerspectiveCamera::_sfAspect field.
inline
const Real32 &PerspectiveCameraBase::getAspect(void) const
{
    return _sfAspect.getValue();
}

//! Set the value of the PerspectiveCamera::_sfAspect field.
inline
void PerspectiveCameraBase::setAspect(const Real32 &value)
{
    _sfAspect.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPERSPECTIVECAMERABASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

