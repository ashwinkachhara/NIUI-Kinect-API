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

#ifndef NIUI_IMAGE_MAP_H
#define NIUI_IMAGE_MAP_H

//****************************************************************************
//**
//**    NIUIImageBuffer.h
//**
//**    Copyright (c) 2011 Matthew Robbins
//**
//**    Author:  Matthew Robbins
//**    Created: 01/2011
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
	//								ImageBuffer
	// ------------------------------------------------------------------------

	class ImageBuffer : public BaseBuffer
	{
	private:
		xn::ImageGenerator* m_imageGenerator;
		xn::ImageMap* m_imageMap;
		xn::ImageMetaData m_metaData;

	protected:
	public:

		ImageBuffer();
		~ImageBuffer();

		void Initialise(xn::ImageGenerator* imageGenerator);
		void Release();

		void Update();
	};

}; // End Namespace NIUI


#endif // #ifndef NIUI_IMAGE_MAP_H