//
//  VertexData.h
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#ifndef CPSC_486_Assign_1_initWithData_tut_VertexData_h
#define CPSC_486_Assign_1_initWithData_tut_VertexData_h

#include "Vector3.h"

typedef struct {
    
    Vector3 positionCoordinates;
    
} VertexDataP;

typedef struct {
    
    Vector3 positionCoordinates;
    Vector3 normalCoordinates;
    
} VertexDataPN;

#endif
