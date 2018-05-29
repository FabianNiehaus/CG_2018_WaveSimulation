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
 **     class PhysicsAMotorJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsAMotorJointBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsAMotorJointBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsAMotorJointPtr PhysicsAMotorJointBase::create(void) 
{
    PhysicsAMotorJointPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsAMotorJointPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsAMotorJointPtr PhysicsAMotorJointBase::createEmpty(void) 
{ 
    PhysicsAMotorJointPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsAMotorJoint::_sfMode field.
inline
SFInt32 *PhysicsAMotorJointBase::getSFMode(void)
{
    return &_sfMode;
}

//! Get the PhysicsAMotorJoint::_sfNumAxes field.
inline
SFInt32 *PhysicsAMotorJointBase::getSFNumAxes(void)
{
    return &_sfNumAxes;
}


//! Get the value of the PhysicsAMotorJoint::_sfMode field.
inline
Int32 &PhysicsAMotorJointBase::getMode(void)
{
    return _sfMode.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfMode field.
inline
const Int32 &PhysicsAMotorJointBase::getMode(void) const
{
    return _sfMode.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfMode field.
inline
void PhysicsAMotorJointBase::setMode(const Int32 &value)
{
    _sfMode.setValue(value);
}

//! Get the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
Int32 &PhysicsAMotorJointBase::getNumAxes(void)
{
    return _sfNumAxes.getValue();
}

//! Get the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
const Int32 &PhysicsAMotorJointBase::getNumAxes(void) const
{
    return _sfNumAxes.getValue();
}

//! Set the value of the PhysicsAMotorJoint::_sfNumAxes field.
inline
void PhysicsAMotorJointBase::setNumAxes(const Int32 &value)
{
    _sfNumAxes.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSAMOTORJOINTBASE_INLINE_CVSID "@(#)$Id: OSGPhysicsAMotorJointBase.inl,v 1.2 2006/02/20 17:04:20 dirk Exp $"

