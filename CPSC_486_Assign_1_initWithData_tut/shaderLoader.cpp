//
//  shaderLoader.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "shaderLoader.h"

//private
GLuint shaderLoader::compileShader(GLenum shader, const char* source)
{
    GLuint shaderHandle = glCreateShader(shader);
    glShaderSource(shaderHandle, 1, &source, NULL);
    glCompileShader(shaderHandle);
    
    return shaderHandle;
}
//public
GLuint shaderLoader::getProgramHandle()
{
    return _programHandle;
}

shaderLoader::shaderLoader(const char* sourceVS, const char* sourceFS)
{
    _programHandle = glCreateProgram();
    GLuint vertexShader = compileShader(GL_VERTEX_SHADER, sourceVS);
    GLuint fragmentShader = compileShader(GL_FRAGMENT_SHADER, sourceFS);
    glAttachShader(_programHandle, vertexShader);
    glAttachShader(_programHandle, fragmentShader);
    glLinkProgram(_programHandle);
    
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
}

shaderLoader::~shaderLoader()
{
    glDeleteProgram(_programHandle);
}
