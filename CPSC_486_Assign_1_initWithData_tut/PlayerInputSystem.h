//
//  PlayerInputSystem.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 12/2/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef __CPSC_486_Assign_1_initWithData_tut__PlayerInputSystem__
#define __CPSC_486_Assign_1_initWithData_tut__PlayerInputSystem__

#include <iostream>
#include <GLFW/glfw3.h>

class PlayerInputSystem
{
private:
    PlayerInputSystem();
    ~PlayerInputSystem();
    void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
    
public:
    static PlayerInputSystem& getPlayerInputSystem();
    static void destroyPlayerInputSystem();
    static void keyCallbackPublic(GLFWwindow *window, int key, int scancode, int action, int mods);
};

#endif /* defined(__CPSC_486_Assign_1_initWithData_tut__PlayerInputSystem__) */
