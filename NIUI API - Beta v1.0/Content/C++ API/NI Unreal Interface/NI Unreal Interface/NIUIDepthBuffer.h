/*****************************************************************************
*                                                                            *
*  Natural Interaction Unreal Interface (NIUI)                               *
*  Copyright (C) 2011 Matthew Robbins                                        *
*                                                                            *
*  This file is part of NIUI.                                                *
*                                                                            *
*  NIUI is free software: you can redistribute it and/or modify              *
*  it under the terms of the GNU Lesser General Public License as published  *
*  by the Free Software Foundation, either version 3 of the License, or      *
*  (at your option) any later version.                                       *
*                                                                            *
*  NIUI is distributed in the hope that it will be useful,                   *
*  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the              *
*  GNU Lesser General Public License for more details.                       *
*                                                                            *
*  You should have received a copy of the GNU Lesser General Public License  *
*  along with NIUI. If not, see <http://www.gnu.org/licenses/>.              *
*                                                                            *
*****************************************************************************/

#ifndef NIUI_DEPTH_BUFFER_H
#define NIUI_DEPTH_BUFFER_H

//****************************************************************************
//**
//**    NIUIDepthBuffer.h
//**
//**    Copyright (c) 2011 Matthew Robbins
//**
//**    Author:  Matthew Robbins
//**    Created: 04/2011
//**
//****************************************************************************

#include <XnCppWrapper.h>
#include "NIUIBaseBuffer.h"

// Forward Declarations
namespace NIUI
{
}; // End Namespace NIUI

namespace NIUI
{

	// ------------------------------------------------------------------------
	//								DepthBuffer
	// ------------------------------------------------------------------------

	class DepthBuffer : public BaseBuffer
	{
	private:
		xn::DepthGenerator* m_depthGenerator;
		xn::DepthMetaData m_metaData;

	protected:
	public:

		DepthBuffer();
		~DepthBuffer();

		void Initialise(xn::DepthGenerator* depthGenerator);
		void Release();

		void Update();
	};

}; // End Namespace NIUI


#endif // #ifndef NIUI_DEPTH_BUFFER_H