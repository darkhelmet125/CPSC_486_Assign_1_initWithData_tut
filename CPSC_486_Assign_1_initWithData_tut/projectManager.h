//
//  ProjectManager.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_ProjectManager_
#define CPSC_486_Assign_1_initWithData_tut_ProjectManager_

#include <iostream>
#include <GLFW/glfw3.h>
#include "CameraSystem.h"
#include "Entity.h"
#include "PlayerInputSystem.h"
#include "RenderSystem.h"
#include "ResourceManager.h"
#include "MovementSystem.h"
#include "Scene.h"

class ProjectManager
{
private:
    
    bool _running;
    RenderSystem *_renderSystem;
    ResourceManager *_resourceManager;
    MovementSystem *_movementSystem;
    CameraSystem *_cameraSystem;
    PlayerInputSystem *_playerInputSystem;
    GLFWwindow *_window;

    Scene *scene;
    
    ProjectManager(bool running);
    ~ProjectManager();

public:

    void runGameLoop();
    
    static ProjectManager& getProjectManager();
    static void destroyProjectManager();
    
};

#endif
