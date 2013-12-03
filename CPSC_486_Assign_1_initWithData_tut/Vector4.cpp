//
//  Vector4.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "Vector4.h"

Vector4 makeVector4(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    Vector4 newVector;
    newVector.x = x;
    newVector.y = y;
    newVector.z = z;
    newVector.w = w;
    
    return newVector;
}