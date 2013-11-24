//
//  renderSystem.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "renderSystem.h"

renderSystem::renderSystem(): _window(glfwGetCurrentContext())
{
    shaderArray = new std::vector<shaderInterface*>;
    shaderInterface *shader = new shaderInterface("ColorShader.vsh", "ColorShader.fsh");
    shaderArray->push_back(shader);
}

renderSystem::~renderSystem()
{
    delete shaderArray->at(0);
    delete shaderArray;
}

renderSystem& renderSystem::getRenderSystem()
{
    static renderSystem* mySystem = NULL;
    if(mySystem == NULL)
    {
        mySystem = new renderSystem();
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glViewport(0.0f, 0.0f, 800.0f, 600.0f);
        glMatrixMode(GL_PROJECTION);
        gluPerspective(75.0f, 800.0f/600.0f, 1, 1000);
        glMatrixMode(GL_MODELVIEW);
    }
    
    return *mySystem;
}

void renderSystem::destroyRenderSystem()
{
    renderSystem* mySystem = &getRenderSystem();
    delete mySystem;
}

void renderSystem::render(vertexBuffer* myBuffer)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glUseProgram(1);
    gluLookAt(0.0f, 0.0f, -5.0f,
              0.0f, 0.0f, 0.0f,
              0.0f, 1.0f, 0.0f);
    
    glUniform4f(0, 1.0f, 1.0f, 0.0f, 1.0f);
    
    myBuffer->configureVertexAttributes(0);
    myBuffer->renderVertexBuffer();
    
    glfwSwapBuffers(_window);
    glfwPollEvents();
}
