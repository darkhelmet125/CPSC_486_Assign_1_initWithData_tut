//
//  ResourceManager.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/24/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_ResourceManager_
#define CPSC_486_Assign_1_initWithData_tut_ResourceManager_

#include <iostream>
#include <vector>
#include "ShaderInterface.h"
#include "VertexBuffer.h"
#include "ShaderData.h"

class ResourceManager
{
private:
    
    std::vector<ShaderInterface *> *_shaderArray;
    std::vector<VertexBuffer *> *_vertexBufferArray;
    std::vector<ShaderData *> *_shaderData;
    
    ResourceManager();
    ~ResourceManager();
    
public:
    
    std::vector<ShaderInterface *>* getShaderArray();
    std::vector<VertexBuffer *>* getVertexBufferArray();
    
    static ResourceManager& getResourceManager();
    static void destroyResourceManager();
    
};

#endif
