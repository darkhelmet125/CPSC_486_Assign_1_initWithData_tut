//
//  projectManager.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "projectManager.h"

GLfloat vertices[] =
{   -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f};

//private
projectManager::projectManager(bool running): _running(running), _window(glfwGetCurrentContext()), _mySystem(&renderSystem::getRenderSystem())
{
    _vertexBuffer = new vertexBuffer(vertices, sizeof(vertices), GL_TRIANGLES, 3, sizeof(GLfloat)*3);
}

projectManager::~projectManager()
{
    renderSystem::destroyRenderSystem();
}

//public
void projectManager::runLoop()
{
    while (_running)
    {
        _running = !glfwWindowShouldClose(_window);
        
        _mySystem->render(_vertexBuffer);
        if(glfwGetKey(_window, GLFW_KEY_ESCAPE))
            _running = false;
    }
}

projectManager& projectManager::getProjectManager()
{
    static projectManager* myManager = NULL;
    
    if(myManager == NULL)
    {
        glfwInit();
        glfwWindowHint(GLFW_DEPTH_BITS, 24);
        glfwWindowHint(GLFW_RED_BITS, 8);
        glfwWindowHint(GLFW_GREEN_BITS, 8);
        glfwWindowHint(GLFW_BLUE_BITS, 8);
        GLFWwindow *window = glfwCreateWindow(800, 600, "Assign 1", NULL, NULL);
        glfwMakeContextCurrent(window);
        
        myManager = new projectManager(true);
        
        std::cout<<"manager created"<<std::endl;
    }
    
    return *myManager;
}

void projectManager::destroyProjectManager()
{
    projectManager *myManager = &getProjectManager();
    delete myManager;
    
    std::cout<<"manager destroyed"<<std::endl;
    GLFWwindow* window = glfwGetCurrentContext();
    glfwDestroyWindow(window);
    glfwTerminate();
}
