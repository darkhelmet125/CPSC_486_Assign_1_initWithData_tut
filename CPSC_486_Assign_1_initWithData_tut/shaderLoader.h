//
//  ShaderLoader.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_ShaderLoader_
#define CPSC_486_Assign_1_initWithData_tut_ShaderLoader_

#include <iostream>
#include <GLFW/glfw3.h>

class ShaderLoader
{
private:
    
    GLuint _programHandle;
    
    GLuint compileShader(GLenum shader, const  char *source);
    
public:
    
    GLuint getProgramHandle();
    
    ShaderLoader(const char *sourceVS, const char *sourceFS);
    ~ShaderLoader();

};

#endif
