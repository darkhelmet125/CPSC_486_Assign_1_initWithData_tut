//
//  ShaderData.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "ShaderData.h"

Vector4 ShaderData::get_uColorValue()
{
    return _uColorValue;
}

void ShaderData::set_uColorValue(Vector4 newColor)
{
    _uColorValue = newColor;
}

Vector3 ShaderData::get_uLightPosition()
{
    return _uLightPosition;
}

void ShaderData::set_uLightPosition(Vector3 newPosition)
{
    _uLightPosition = newPosition;
}

ShaderData::ShaderData(Vector4 newColor, Vector3 newPosition):
    _uColorValue(newColor), _uLightPosition(newPosition)
{
    
}

ShaderData::~ShaderData()
{
    
}
