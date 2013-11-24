//
//  vertexBuffer.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "vertexBuffer.h"

//public

//public
GLuint vertexBuffer::getVertexBuffer()
{
    return _vertexBufferID;
}

void vertexBuffer::configureVertexAttributes(GLint vertexPosition)
{
    if(vertexPosition != -1)
    {
        glEnableVertexAttribArray(vertexPosition);
        glVertexAttribPointer(vertexPosition, 3, GL_FLOAT, GL_FALSE, _stride, NULL);
    }
}

void vertexBuffer::renderVertexBuffer()
{
    glDrawArrays(_mode, 0, _count);
}

vertexBuffer::vertexBuffer(const GLvoid* data, GLsizeiptr size, GLenum mode, GLsizei count, GLsizei stride): _mode(mode), _count(count), _stride(stride)
{
    glGenBuffers(1, &_vertexBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, _vertexBufferID);
    glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

vertexBuffer::~vertexBuffer()
{
    glDeleteBuffers(1, &_vertexBufferID);
    _vertexBufferID = 0;
}
