//
//  ProjectManager.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "ProjectManager.h"
#define Updates_Per_Second 60.0f

ProjectManager::ProjectManager(bool running):
_running(running), _window(glfwGetCurrentContext()),
_renderSystem(&RenderSystem::getRenderSystem()),
_resourceManager(&ResourceManager::getResourceManager()),
_movementSystem(&MovementSystem::getMovementSystem()),
_cameraSystem(&CameraSystem::getCameraSystem()), scene(new Scene), _playerInputSystem(&PlayerInputSystem::getPlayerInputSystem())
{
}

ProjectManager::~ProjectManager()
{
    ResourceManager::destroyResourceManager();
    CameraSystem::destroyCameraSystem();
    RenderSystem::destroyRenderSystem();
    PlayerInputSystem::destroyPlayerInputSystem();
}

void ProjectManager::runGameLoop()
{
    double lastTime = glfwGetTime();
    double deltaTime = 0.0f;
    
    while (_running)
    {
        
        double currentTime = glfwGetTime();
        deltaTime += (currentTime - lastTime) * Updates_Per_Second;
        lastTime = currentTime;
        
        while (deltaTime >= 1.0f)
        {
            
            _running = !glfwWindowShouldClose(_window);
            
            if(glfwGetKey(_window, GLFW_KEY_UP))
            {
                _cameraSystem->getCurrentCamera()->setPosition(makeVector3(_cameraSystem->getCurrentCamera()->getPosition().x, _cameraSystem->getCurrentCamera()->getPosition().y, (_cameraSystem->getCurrentCamera()->getPosition().z - 0.15)));
                
                std::cout<<"camera position: "<<_cameraSystem->getCurrentCamera()->getPosition().x<<", "<<_cameraSystem->getCurrentCamera()->getPosition().y<<", "<<_cameraSystem->getCurrentCamera()->getPosition().z<<std::endl;
            }
            
            if(glfwGetKey(_window, GLFW_KEY_DOWN))
            {
                _cameraSystem->getCurrentCamera()->setPosition(makeVector3(_cameraSystem->getCurrentCamera()->getPosition().x, _cameraSystem->getCurrentCamera()->getPosition().y, (_cameraSystem->getCurrentCamera()->getPosition().z + 0.15)));
                
                std::cout<<"camera position: "<<_cameraSystem->getCurrentCamera()->getPosition().x<<", "<<_cameraSystem->getCurrentCamera()->getPosition().y<<", "<<_cameraSystem->getCurrentCamera()->getPosition().z<<std::endl;
            }
            
            _movementSystem->update(scene->getChildren());
            
            --deltaTime;
        }
        
        _renderSystem->render(scene->getChildren());
        
        if(glfwGetKey(_window, GLFW_KEY_ESCAPE) || glfwGetKey(_window, GLFW_KEY_Q))
            _running = false;
    }
}

ProjectManager& ProjectManager::getProjectManager()
{
    static ProjectManager *projectManager = NULL;
    
    if (projectManager == NULL) {
        
        glfwInit();
        
        glfwWindowHint(GLFW_DEPTH_BITS, 24);
        glfwWindowHint(GLFW_RED_BITS, 8);
        glfwWindowHint(GLFW_GREEN_BITS, 8);
        glfwWindowHint(GLFW_BLUE_BITS, 8);
        glfwWindowHint(GLFW_ALPHA_BITS, 8);
        glfwWindowHint(GLFW_SAMPLES, 16);
        glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
        GLFWwindow *window = glfwCreateWindow(1280, 720, "CPSC 486 Assign 1", NULL, NULL);
        glfwMakeContextCurrent(window);
        
        projectManager = new ProjectManager(true);
        
        std::cout << "ProjectManager created" << std::endl;
    }
    
    return *projectManager;
}

void ProjectManager::destroyProjectManager()
{
    ProjectManager *projectManager = &getProjectManager();
    delete projectManager;
    
    std::cout << "ProjectManager destroyed" << std::endl;
    
    GLFWwindow *window = glfwGetCurrentContext();
    glfwDestroyWindow(window);
    
    glfwTerminate();
    
}