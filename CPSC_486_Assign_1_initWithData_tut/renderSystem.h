//
//  RenderSystem.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_RenderSystem_
#define CPSC_486_Assign_1_initWithData_tut_RenderSystem_

#include <iostream>
//#define __gl_h_
#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
//#include <GLKit/GLKit.h>
#include <vector>
#include "CameraSystem.h"
#include "Entity.h"
#include "VertexBuffer.h"
#include "ShaderInterface.h"

class RenderSystem
{
private:
    
    GLFWwindow *_window;
    
    CameraSystem *_cameraSystem;
    Entity *_currentCamera;
    
    RenderSystem();
    ~RenderSystem();
    
public:
    
    Entity *getCurrentCamera();
    void setCurrentCamera(Entity *newCamera);
    
    void render(std::vector<Entity *> *entityArray);
    
    static RenderSystem& getRenderSystem();
    static void destroyRenderSystem();
    
};

#endif
