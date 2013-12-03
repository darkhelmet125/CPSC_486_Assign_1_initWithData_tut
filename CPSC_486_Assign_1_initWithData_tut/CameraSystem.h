//
//  CameraSystem.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short on 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_CameraSystem_
#define CPSC_486_Assign_1_initWithData_tut_CameraSystem_

#include <iostream>
#include "Entity.h"

class CameraSystem
{
private:
    
    Entity *_currentCamera;
    
    CameraSystem();
    ~CameraSystem();
    
public:
    
    Entity *getCurrentCamera();
    void setCurrentCamera(Entity *newCamera);
    
    static CameraSystem& getCameraSystem();
    static  void destroyCameraSystem();
};


#endif
