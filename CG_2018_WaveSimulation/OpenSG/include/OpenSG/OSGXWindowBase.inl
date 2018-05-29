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
 **     class XWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &XWindowBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 XWindowBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
XWindowPtr XWindowBase::create(void) 
{
    XWindowPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = XWindowPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
XWindowPtr XWindowBase::createEmpty(void) 
{ 
    XWindowPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the XWindow::_sfDisplay field.
inline
SFDisplayP *XWindowBase::getSFDisplay(void)
{
    return &_sfDisplay;
}

//! Get the XWindow::_sfWindow field.
inline
SFX11Window *XWindowBase::getSFWindow(void)
{
    return &_sfWindow;
}

//! Get the XWindow::_sfContext field.
inline
SFGLXContext *XWindowBase::getSFContext(void)
{
    return &_sfContext;
}


//! Get the value of the XWindow::_sfDisplay field.
inline
DisplayP &XWindowBase::getDisplay(void)
{
    return _sfDisplay.getValue();
}

//! Get the value of the XWindow::_sfDisplay field.
inline
const DisplayP &XWindowBase::getDisplay(void) const
{
    return _sfDisplay.getValue();
}

//! Set the value of the XWindow::_sfDisplay field.
inline
void XWindowBase::setDisplay(const DisplayP &value)
{
    _sfDisplay.setValue(value);
}

//! Get the value of the XWindow::_sfWindow field.
inline
X11Window &XWindowBase::getWindow(void)
{
    return _sfWindow.getValue();
}

//! Get the value of the XWindow::_sfWindow field.
inline
const X11Window &XWindowBase::getWindow(void) const
{
    return _sfWindow.getValue();
}

//! Set the value of the XWindow::_sfWindow field.
inline
void XWindowBase::setWindow(const X11Window &value)
{
    _sfWindow.setValue(value);
}

//! Get the value of the XWindow::_sfContext field.
inline
GLXContext &XWindowBase::getContext(void)
{
    return _sfContext.getValue();
}

//! Get the value of the XWindow::_sfContext field.
inline
const GLXContext &XWindowBase::getContext(void) const
{
    return _sfContext.getValue();
}

//! Set the value of the XWindow::_sfContext field.
inline
void XWindowBase::setContext(const GLXContext &value)
{
    _sfContext.setValue(value);
}


OSG_END_NAMESPACE

#define OSGXWINDOWBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

