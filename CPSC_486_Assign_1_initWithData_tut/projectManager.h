//
//  projectManager.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_projectManager_h
#define CPSC_486_Assign_1_initWithData_tut_projectManager_h
#include <iostream>
#include <GLFW/glfw3.h>
#include "renderSystem.h"
#include "shaderLoader.h"
#include "shaderInterface.h"
#include "vertexBuffer.h"

class projectManager
{
private:
    bool _running;
    GLFWwindow *_window;
    renderSystem *_mySystem;
    vertexBuffer *_vertexBuffer;
    projectManager(bool running);
    ~projectManager();
    
public:
    void runLoop();
    static projectManager& getProjectManager();
    static void destroyProjectManager();
};

#endif
