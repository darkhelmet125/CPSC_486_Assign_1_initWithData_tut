//
//  Vector3.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_Vector3_
#define CPSC_486_Assign_1_initWithData_tut_Vector3_

#include <iostream>
#include <GLFW/glfw3.h>

typedef struct {
    
    GLfloat x;
    GLfloat y;
    GLfloat z;
    
} Vector3;

Vector3 makeVector3(GLfloat x, GLfloat y, GLfloat z);
Vector3 addVector3(Vector3 vectorA, Vector3 vectorB);

#endif
