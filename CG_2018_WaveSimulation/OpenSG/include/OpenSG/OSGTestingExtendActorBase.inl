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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TestingExtendActor
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE

//----------------------------------------------------------------------------
//    State Access
//----------------------------------------------------------------------------

/*! Return the StatePtr, cast to this actor's state class
 *  TestingExtendActorBaseState
 */

inline const TestingExtendActorBase::TestingExtendActorBaseState *
TestingExtendActorBase::getCastState(void) const
{
    return reinterpret_cast<const TestingExtendActorBaseState *>(getState());
}

/*! Return the StatePtr, cast to this actor's state class
 *  TestingExtendActorBaseState
 */

inline TestingExtendActorBase::TestingExtendActorBaseState *
TestingExtendActorBase::getCastState(void)
{
    return reinterpret_cast<TestingExtendActorBaseState *>(getState());
}

//----------------------------------------------------------------------------
//    State Class
//----------------------------------------------------------------------------

/*! Default constructor.
 */

inline
TestingExtendActorBase::TestingExtendActorBaseState::TestingExtendActorBaseState(void) :
      _stateTreeLevel(0),
      _stateWorldMatrix(),
      ParentStateType()
{
}

/*! Copy constructor.
 */

inline
TestingExtendActorBase::TestingExtendActorBaseState::TestingExtendActorBaseState(
    const TestingExtendActorBaseState &source) :
      _stateTreeLevel(source._stateTreeLevel),
      _stateWorldMatrix(source._stateWorldMatrix),
      ParentStateType(source)
{
}

/*! Return the state element TreeLevel. For internal use only.
 */

inline const UInt32 &
TestingExtendActorBase::TestingExtendActorBaseState::getTreeLevel(void) const
{
    return _stateTreeLevel;
}

/*! Return the state element TreeLevel. For internal use only.
 */

inline UInt32 &
TestingExtendActorBase::TestingExtendActorBaseState::getTreeLevel(void)
{
    return _stateTreeLevel;
}
/*! Return the state element WorldMatrix. For internal use only.
 */

inline const Matrix &
TestingExtendActorBase::TestingExtendActorBaseState::getWorldMatrix(void) const
{
    return _stateWorldMatrix;
}

/*! Return the state element WorldMatrix. For internal use only.
 */

inline Matrix &
TestingExtendActorBase::TestingExtendActorBaseState::getWorldMatrix(void)
{
    return _stateWorldMatrix;
}

//----------------------------------------------------------------------------
//    Public State Access
//----------------------------------------------------------------------------

/*! Return the state element TreeLevel.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline const UInt32 &
TestingExtendActorBase::getTreeLevel(void) const
{
    return getCastState()->getTreeLevel();
}

/*! Return the state element TreeLevel.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline UInt32 &
TestingExtendActorBase::getTreeLevel(void)
{
    return getCastState()->getTreeLevel();
}

/*! Set the state element TreeLevel.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline void
TestingExtendActorBase::setTreeLevel(const UInt32 &stateVal)
{
    getCastState()->getTreeLevel() = stateVal;
}
/*! Return the state element WorldMatrix.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline const Matrix &
TestingExtendActorBase::getWorldMatrix(void) const
{
    return getCastState()->getWorldMatrix();
}

/*! Return the state element WorldMatrix.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline Matrix &
TestingExtendActorBase::getWorldMatrix(void)
{
    return getCastState()->getWorldMatrix();
}

/*! Set the state element WorldMatrix.
 *  \warning This state element can only be accessed after the actor was
 *  attached to an action.
 */

inline void
TestingExtendActorBase::setWorldMatrix(const Matrix &stateVal)
{
    getCastState()->getWorldMatrix() = stateVal;
}

//----------------------------------------------------------------------------
//    Protected State Access
//----------------------------------------------------------------------------


OSG_END_NAMESPACE

#define OSGTESTINGEXTENDACTORBASE_INLINE_CVSID "@(#)$Id: OSGTestingExtendActorBase.inl,v 1.1 2004/09/17 14:09:47 neumannc Exp $"
