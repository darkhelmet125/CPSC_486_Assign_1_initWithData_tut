//
//  shaderLoader.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef __CPSC_486_Assign_1_initWithData_tut__shaderLoader__
#define __CPSC_486_Assign_1_initWithData_tut__shaderLoader__

#include <iostream>
#include <GLFW/glfw3.h>

class shaderLoader
{
private:
    GLuint _programHandle;
    GLuint compileShader(GLenum target, const char* source);
    
public:
    GLuint getProgramHandle();
    shaderLoader(const char* sourceVS, const char* sourceFS);
    ~shaderLoader();
};

#endif /* defined(__CPSC_486_Assign_1_initWithData_tut__shaderLoader__) */
