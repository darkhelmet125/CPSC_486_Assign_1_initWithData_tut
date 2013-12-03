//
//  ShaderInterface.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_ShaderInterface_
#define CPSC_486_Assign_1_initWithData_tut_ShaderInterface_

#include <iostream>
#include "ShaderLoader.h"

class ShaderInterface
{
private:
    
    ShaderLoader *shader;
    
    GLint _aPositionVertex;
    GLint _aPositionNormal;
    GLint _uColor;
    GLint _uLightPosition;
    
    char *_vertexShaderString;
    char *_fragmentShaderString;
    
    char *loadTextFromFile(const char *file);
    
public:
    
    GLuint getProgramHandle();
    GLint get_aPositionVertex();
    GLint get_aPositionNormal();
    GLint get_uColor();
    GLint get_uLightPosition();
    
    ShaderInterface(const char *VS, const char *FS);
    ~ShaderInterface();

};

#endif
