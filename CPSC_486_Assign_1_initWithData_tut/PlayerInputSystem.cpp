//
//  PlayerInputSystem.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 12/2/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "PlayerInputSystem.h"

//private
PlayerInputSystem::PlayerInputSystem()
{
    
}

PlayerInputSystem::~PlayerInputSystem()
{
    
}

void PlayerInputSystem::keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if(key == GLFW_KEY_M && action == GLFW_PRESS)
    {
        if(GLFW_CURSOR_DISABLED == glfwGetInputMode(glfwGetCurrentContext(), GLFW_CURSOR))
            glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_NORMAL);
    else
        glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    }
}

//public
PlayerInputSystem& PlayerInputSystem::getPlayerInputSystem()
{
    static PlayerInputSystem *playerInputSystem = NULL;
    
    if(playerInputSystem == NULL)
    {
        glfwSetKeyCallback(glfwGetCurrentContext(), *keyCallbackPublic);
        glfwSetInputMode(glfwGetCurrentContext(), GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        
        playerInputSystem = new PlayerInputSystem();
    }
    
    return *playerInputSystem;
}

void PlayerInputSystem::destroyPlayerInputSystem()
{
    PlayerInputSystem *playerInputSystem = &getPlayerInputSystem();
    delete playerInputSystem;
}
                           
void PlayerInputSystem::keyCallbackPublic(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    PlayerInputSystem *playerInputSystem = &getPlayerInputSystem();
    playerInputSystem->keyCallback(window, key, scancode, action, mods);
}
