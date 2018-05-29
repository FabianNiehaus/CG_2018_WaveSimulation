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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERPARAMETERVEC4FFIELDS_H_
#define _OSGSHADERPARAMETERVEC4FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include <OpenSG/OSGSystemDef.h>

#include <OpenSG/OSGShaderParameterFields.h>

OSG_BEGIN_NAMESPACE

class ShaderParameterVec4f;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! ShaderParameterVec4fPtr

typedef FCPtr<ShaderParameterPtr, ShaderParameterVec4f> ShaderParameterVec4fPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<ShaderParameterVec4fPtr> : 
    public FieldTraitsRecurseMapper<ShaderParameterVec4fPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFShaderParameterVec4fPtr"; }
    static const char *getMName(void) { return "MFShaderParameterVec4fPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<ShaderParameterVec4fPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SField<ShaderParameterVec4fPtr> SFShaderParameterVec4fPtr;
#endif

#ifndef OSG_COMPILESHADERPARAMETERVEC4FINST
OSG_DLLEXPORT_DECL1(SField, ShaderParameterVec4fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MField<ShaderParameterVec4fPtr> MFShaderParameterVec4fPtr;
#endif

#ifndef OSG_COMPILESHADERPARAMETERVEC4FINST
OSG_DLLEXPORT_DECL1(MField, ShaderParameterVec4fPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERVEC4FFIELDS_HEADER_CVSID "@(#)$Id: OSGShaderParameterVec4fFields.h,v 1.5 2006/02/20 17:04:38 dirk Exp $"

#endif /* _OSGSHADERPARAMETERVEC4FFIELDS_H_ */
