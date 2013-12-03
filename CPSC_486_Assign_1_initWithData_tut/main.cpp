//
//  CameraSystem.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/23/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//
#include "ProjectManager.h"

int main(int argc, char **argv)
{
    ProjectManager *projectManager = &ProjectManager::getProjectManager();
    projectManager->runGameLoop();
    ProjectManager::destroyProjectManager();
}