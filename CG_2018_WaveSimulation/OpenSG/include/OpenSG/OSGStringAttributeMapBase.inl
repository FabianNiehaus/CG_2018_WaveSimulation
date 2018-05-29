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
 **     class StringAttributeMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StringAttributeMapBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StringAttributeMapBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
StringAttributeMapPtr StringAttributeMapBase::create(void) 
{
    StringAttributeMapPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = StringAttributeMapPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
StringAttributeMapPtr StringAttributeMapBase::createEmpty(void) 
{ 
    StringAttributeMapPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the StringAttributeMap::_mfKeys field.
inline
MFString *StringAttributeMapBase::getMFKeys(void)
{
    return &_mfKeys;
}

//! Get the StringAttributeMap::_mfValues field.
inline
MFString *StringAttributeMapBase::getMFValues(void)
{
    return &_mfValues;
}



//! Get the value of the \a index element the StringAttributeMap::_mfKeys field.
inline
std::string &StringAttributeMapBase::getKeys(const UInt32 index)
{
    return _mfKeys[index];
}

//! Get the StringAttributeMap::_mfKeys field.
inline
MFString &StringAttributeMapBase::getKeys(void)
{
    return _mfKeys;
}

//! Get the StringAttributeMap::_mfKeys field.
inline
const MFString &StringAttributeMapBase::getKeys(void) const
{
    return _mfKeys;
}

//! Get the value of the \a index element the StringAttributeMap::_mfValues field.
inline
std::string &StringAttributeMapBase::getValues(const UInt32 index)
{
    return _mfValues[index];
}

//! Get the StringAttributeMap::_mfValues field.
inline
MFString &StringAttributeMapBase::getValues(void)
{
    return _mfValues;
}

//! Get the StringAttributeMap::_mfValues field.
inline
const MFString &StringAttributeMapBase::getValues(void) const
{
    return _mfValues;
}

OSG_END_NAMESPACE

#define OSGSTRINGATTRIBUTEMAPBASE_INLINE_CVSID "@(#)$Id: OSGStringAttributeMapBase.inl,v 1.2 2006/02/20 16:54:57 dirk Exp $"

