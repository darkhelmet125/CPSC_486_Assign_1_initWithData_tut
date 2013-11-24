//
//  vertexBuffer.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef __CPSC_486_Assign_1_initWithData_tut__vertexBuffer__
#define __CPSC_486_Assign_1_initWithData_tut__vertexBuffer__

#include <iostream>
#include <GLFW/glfw3.h>

class vertexBuffer
{
private:
    GLuint _vertexBufferID;
    GLenum _mode;
    GLsizei _count;
    GLsizei _stride;
    
public:
    GLuint getVertexBuffer();
    void configureVertexAttributes(GLint vertexPosition);
    void renderVertexBuffer();
    vertexBuffer(const GLvoid *data, GLsizeiptr size, GLenum mode, GLsizei count, GLsizei stride);
    ~vertexBuffer();
    
};

#endif /* defined(__CPSC_486_Assign_1_initWithData_tut__vertexBuffer__) */
