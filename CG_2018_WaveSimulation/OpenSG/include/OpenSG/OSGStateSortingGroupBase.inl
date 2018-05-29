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
 **     class StateSortingGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StateSortingGroupBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StateSortingGroupBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
StateSortingGroupPtr StateSortingGroupBase::create(void) 
{
    StateSortingGroupPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = StateSortingGroupPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
StateSortingGroupPtr StateSortingGroupBase::createEmpty(void) 
{ 
    StateSortingGroupPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the StateSortingGroup::_sfSorting field.
inline
SFBool *StateSortingGroupBase::getSFSorting(void)
{
    return &_sfSorting;
}


//! Get the value of the StateSortingGroup::_sfSorting field.
inline
bool &StateSortingGroupBase::getSorting(void)
{
    return _sfSorting.getValue();
}

//! Get the value of the StateSortingGroup::_sfSorting field.
inline
const bool &StateSortingGroupBase::getSorting(void) const
{
    return _sfSorting.getValue();
}

//! Set the value of the StateSortingGroup::_sfSorting field.
inline
void StateSortingGroupBase::setSorting(const bool &value)
{
    _sfSorting.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSTATESORTINGGROUPBASE_INLINE_CVSID "@(#)$Id: OSGStateSortingGroupBase.inl,v 1.5 2006/02/20 16:54:23 dirk Exp $"

