//
//  MovementSystem.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_MovementSystem_
#define CPSC_486_Assign_1_initWithData_tut_MovementSystem_

#include <iostream>
#include <GLFW/glfw3.h>
#include "Entity.h"
#include "Vector3.h"

class MovementSystem
{
private:
    
    MovementSystem();
    ~MovementSystem();
    
public:
    
    void update(std::vector<Entity *> *entityArray);
    
    static MovementSystem& getMovementSystem();
    static void destroyMovementSystem();
};


#endif
