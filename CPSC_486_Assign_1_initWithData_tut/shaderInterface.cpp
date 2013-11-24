//
//  shaderInterface.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "shaderInterface.h"
#include <stdio.h>
#include <stdlib.h>

//private
char* shaderInterface::loadTextFromFile(const char* file)
{
    FILE* currentFile = fopen(file, "rt");
    fseek(currentFile, 0, SEEK_END);
    int count = (int) ftell(currentFile);
    rewind(currentFile);
    char* data = (char*)malloc(sizeof(char)*(count+1));
    count = (int)fread(data, sizeof(char), count, currentFile);
    data[count] = '\0';
    fclose(currentFile);
    
    return data;
}

//public
GLuint shaderInterface::getProgramHandle()
{
    return shader->getProgramHandle();
    
}

GLint shaderInterface::get_positionVertex()
{
    return _positionVertex;
}

GLint shaderInterface::get_uColor()
{
    return _uColor;
}

shaderInterface::shaderInterface(const char* vs, const char* fs)
{
    _vertexShaderString = loadTextFromFile(vs);
    _fragmentShaderString = loadTextFromFile(fs);
    shader = new shaderLoader(_vertexShaderString, _fragmentShaderString);
    free(_vertexShaderString);
    free(_fragmentShaderString);
    _positionVertex = glGetAttribLocation(shader->getProgramHandle(), "positionVertex");
    _uColor = glGetUniformLocation(shader->getProgramHandle(), "uColor");
}

shaderInterface::~shaderInterface()
{
    delete shader;
}
