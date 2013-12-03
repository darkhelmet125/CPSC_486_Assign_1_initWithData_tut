//
//  Scene.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_Scene_
#define CPSC_486_Assign_1_initWithData_tut_Scene_

#include <iostream>
#include <vector>
#include "Entity.h"

class Scene
{
private:
    
    std::vector<Entity *> *_children;
    
public:
    
    std::vector<Entity *>* getChildren();
    
    Scene();
    ~Scene();
    
};

#endif
