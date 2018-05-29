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
 **     class ColorDisplayFilter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ColorDisplayFilterBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ColorDisplayFilterBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ColorDisplayFilterPtr ColorDisplayFilterBase::create(void) 
{
    ColorDisplayFilterPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ColorDisplayFilterPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ColorDisplayFilterPtr ColorDisplayFilterBase::createEmpty(void) 
{ 
    ColorDisplayFilterPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ColorDisplayFilter::_sfGamma field.
inline
SFReal32 *ColorDisplayFilterBase::getSFGamma(void)
{
    return &_sfGamma;
}

//! Get the ColorDisplayFilter::_sfMatrix field.
inline
SFMatrix *ColorDisplayFilterBase::getSFMatrix(void)
{
    return &_sfMatrix;
}

//! Get the ColorDisplayFilter::_sfWidth field.
inline
SFUInt32 *ColorDisplayFilterBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the ColorDisplayFilter::_sfHeight field.
inline
SFUInt32 *ColorDisplayFilterBase::getSFHeight(void)
{
    return &_sfHeight;
}

//! Get the ColorDisplayFilter::_sfDepth field.
inline
SFUInt32 *ColorDisplayFilterBase::getSFDepth(void)
{
    return &_sfDepth;
}

//! Get the ColorDisplayFilter::_mfTable field.
inline
MFColor3f *ColorDisplayFilterBase::getMFTable(void)
{
    return &_mfTable;
}


//! Get the value of the ColorDisplayFilter::_sfGamma field.
inline
Real32 &ColorDisplayFilterBase::getGamma(void)
{
    return _sfGamma.getValue();
}

//! Get the value of the ColorDisplayFilter::_sfGamma field.
inline
const Real32 &ColorDisplayFilterBase::getGamma(void) const
{
    return _sfGamma.getValue();
}

//! Set the value of the ColorDisplayFilter::_sfGamma field.
inline
void ColorDisplayFilterBase::setGamma(const Real32 &value)
{
    _sfGamma.setValue(value);
}

//! Get the value of the ColorDisplayFilter::_sfMatrix field.
inline
Matrix &ColorDisplayFilterBase::getMatrix(void)
{
    return _sfMatrix.getValue();
}

//! Get the value of the ColorDisplayFilter::_sfMatrix field.
inline
const Matrix &ColorDisplayFilterBase::getMatrix(void) const
{
    return _sfMatrix.getValue();
}

//! Set the value of the ColorDisplayFilter::_sfMatrix field.
inline
void ColorDisplayFilterBase::setMatrix(const Matrix &value)
{
    _sfMatrix.setValue(value);
}

//! Get the value of the ColorDisplayFilter::_sfWidth field.
inline
UInt32 &ColorDisplayFilterBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the ColorDisplayFilter::_sfWidth field.
inline
const UInt32 &ColorDisplayFilterBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the ColorDisplayFilter::_sfWidth field.
inline
void ColorDisplayFilterBase::setWidth(const UInt32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the ColorDisplayFilter::_sfHeight field.
inline
UInt32 &ColorDisplayFilterBase::getHeight(void)
{
    return _sfHeight.getValue();
}

//! Get the value of the ColorDisplayFilter::_sfHeight field.
inline
const UInt32 &ColorDisplayFilterBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the ColorDisplayFilter::_sfHeight field.
inline
void ColorDisplayFilterBase::setHeight(const UInt32 &value)
{
    _sfHeight.setValue(value);
}

//! Get the value of the ColorDisplayFilter::_sfDepth field.
inline
UInt32 &ColorDisplayFilterBase::getDepth(void)
{
    return _sfDepth.getValue();
}

//! Get the value of the ColorDisplayFilter::_sfDepth field.
inline
const UInt32 &ColorDisplayFilterBase::getDepth(void) const
{
    return _sfDepth.getValue();
}

//! Set the value of the ColorDisplayFilter::_sfDepth field.
inline
void ColorDisplayFilterBase::setDepth(const UInt32 &value)
{
    _sfDepth.setValue(value);
}


//! Get the value of the \a index element the ColorDisplayFilter::_mfTable field.
inline
Color3f &ColorDisplayFilterBase::getTable(const UInt32 index)
{
    return _mfTable[index];
}

//! Get the ColorDisplayFilter::_mfTable field.
inline
MFColor3f &ColorDisplayFilterBase::getTable(void)
{
    return _mfTable;
}

//! Get the ColorDisplayFilter::_mfTable field.
inline
const MFColor3f &ColorDisplayFilterBase::getTable(void) const
{
    return _mfTable;
}

OSG_END_NAMESPACE

#define OSGCOLORDISPLAYFILTERBASE_INLINE_CVSID "@(#)$Id: $"

