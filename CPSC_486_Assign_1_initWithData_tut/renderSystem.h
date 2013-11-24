//
//  renderSystem.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef __CPSC_486_Assign_1_initWithData_tut__renderSystem__
#define __CPSC_486_Assign_1_initWithData_tut__renderSystem__

#include <iostream>
#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
#include <vector>
#include "vertexBuffer.h"
#include "shaderInterface.h"

class renderSystem
{
private:
    GLFWwindow *_window;
    std::vector<shaderInterface*> *shaderArray;
    renderSystem();
    ~renderSystem();
    
public:
    void render(vertexBuffer* myBuffer);
    static renderSystem& getRenderSystem();
    static void destroyRenderSystem();
    
};

#endif /* defined(__CPSC_486_Assign_1_initWithData_tut__renderSystem__) */
