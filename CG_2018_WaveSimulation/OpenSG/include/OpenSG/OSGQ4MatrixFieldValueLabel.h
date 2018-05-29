/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGQMATRIXFIELDVALUELABEL_H_
#define _OSGQMATRIXFIELDVALUELABEL_H_
#ifdef __sgi
#pragma once
#endif

#include "OpenSG/OSGWindowQT4Def.h"
#include "OpenSG/OSGQ4FieldValueLabel.h"

OSG_BEGIN_NAMESPACE

/*! \brief Flyweight label, specialized for Matrix fields.
 */

template <class MatrixTypeT>
class OSG_WINDOWQTLIB_DLLTMPLMAPPING QMatrixFieldValueLabel : 
    public QFieldValueLabelBase
{
public:
    typedef          MatrixTypeT            MatrixType;
    typedef typename MatrixTypeT::ValueType ValueType;
    
             QMatrixFieldValueLabel(QFieldViewBase *pView, UInt32 uiIndex);
    virtual ~QMatrixFieldValueLabel(void                                 );

    static   QFieldValueLabelBase *create(QFieldViewBase    *pView, 
                                          UInt32             uiIndex);

    virtual  void paint                  (      QPainter    *pPainter,
                                          const QColorGroup &colGrp,
                                          const QRect       &rect        );

    virtual QSize sizeHint               (void                           );
    virtual QSize minimumSizeHint        (void                           );

    virtual void  valueChanged           (void                           );

protected:
    const   QString &getCachedValue(UInt32 uiRow, UInt32 uiCol);
    const   QSize   &getCachedSize (void                      );

private:
    typedef QFieldValueLabelBase Inherited;

    void updateCache(void);

    QString _strCachedValues[16];
    QSize   _cachedSize;
    bool    _bCacheValid;
};

OSG_END_NAMESPACE

#define OSGQMATRIXFIELDVALUELABEL_HEADER_CVSID "@(#)$Id: OSGQ4MatrixFieldValueLabel.h,v 1.1 2006/03/10 18:30:35 a-m-z Exp $"

#include "OpenSG/OSGQ4MatrixFieldValueLabel.inl"

#endif /* _OSGQMATRIXFIELDVALUELABEL_H_ */

