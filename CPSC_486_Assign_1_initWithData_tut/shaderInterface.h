//
//  shaderInterface.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef __CPSC_486_Assign_1_initWithData_tut__shaderInterface__
#define __CPSC_486_Assign_1_initWithData_tut__shaderInterface__

#include <iostream>
#include "shaderLoader.h"

class shaderInterface
{
private:
    shaderLoader *shader;
    GLint _positionVertex;
    GLint _uColor;
    char* _vertexShaderString;
    char* _fragmentShaderString;
    char* loadTextFromFile(const char* file);
    
public:
    GLuint getProgramHandle();
    GLint get_positionVertex();
    GLint get_uColor();
    
    shaderInterface(const char* vs, const char* fs);
    ~shaderInterface();
};

#endif /* defined(__CPSC_486_Assign_1_initWithData_tut__shaderInterface__) */
