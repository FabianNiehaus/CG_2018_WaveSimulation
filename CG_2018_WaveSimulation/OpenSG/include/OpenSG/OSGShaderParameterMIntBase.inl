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
 **     class ShaderParameterMInt!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMIntBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMIntBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderParameterMIntPtr ShaderParameterMIntBase::create(void) 
{
    ShaderParameterMIntPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderParameterMIntPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderParameterMIntPtr ShaderParameterMIntBase::createEmpty(void) 
{ 
    ShaderParameterMIntPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameterMInt::_mfValue field.
inline
MFInt32 *ShaderParameterMIntBase::getMFValue(void)
{
    return &_mfValue;
}



//! Get the value of the \a index element the ShaderParameterMInt::_mfValue field.
inline
Int32 &ShaderParameterMIntBase::getValue(const UInt32 index)
{
    return _mfValue[index];
}

//! Get the ShaderParameterMInt::_mfValue field.
inline
MFInt32 &ShaderParameterMIntBase::getValue(void)
{
    return _mfValue;
}

//! Get the ShaderParameterMInt::_mfValue field.
inline
const MFInt32 &ShaderParameterMIntBase::getValue(void) const
{
    return _mfValue;
}

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERMINTBASE_INLINE_CVSID "@(#)$Id: OSGShaderParameterMIntBase.inl,v 1.1 2007/03/09 18:11:48 a-m-z Exp $"

