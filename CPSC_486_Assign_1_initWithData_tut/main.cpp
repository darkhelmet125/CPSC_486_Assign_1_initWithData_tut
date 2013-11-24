//
//  main.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>
#include "projectManager.h"

int main(int argc, const char * argv[])
{
    projectManager* myManager = &projectManager::getProjectManager();
    myManager -> runLoop();
    projectManager::destroyProjectManager();
    return 0;
}

