//
//  VertexBuffer.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_VertexBuffer_
#define CPSC_486_Assign_1_initWithData_tut_VertexBuffer_

#include <iostream>
#include <GLFW/glfw3.h>
#include "ShaderInterface.h"
#include "ShaderData.h"

class VertexBuffer
{
private:
    
    GLuint _vertexBufferID;
    ShaderInterface *_shader;
    ShaderData *_shaderData;
    
    GLenum _mode;
    GLsizei _count;
    GLsizei _stride;
    GLvoid *_positionOffset;
    GLvoid *_normalOffset;
    
public:
    
    GLuint getVertexBufferID();
    ShaderInterface *getShader();
    ShaderData *getShaderData();
    
    VertexBuffer(const GLvoid *data,
                 GLsizeiptr size,
                 GLenum mode,
                 GLsizei count,
                 GLsizei stride,
                 ShaderInterface *shader,
                 ShaderData *shaderData,
                 GLvoid *positionOffset,
                 GLvoid *normalOffset);
    ~VertexBuffer();
    
    void configureVertexAttributes();
    void renderVertexBuffer();
};

#endif
