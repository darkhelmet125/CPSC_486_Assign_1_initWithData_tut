//
//  Scene.cpp
//  CPSC_486_Assign_1_initWithData_tut
//
//  Created by William Short 11/25/13.
//  Copyright (c) 2013 William Short. All rights reserved.
//

#include "Scene.h"
#include "CameraSystem.h"
#include "ResourceManager.h"

std::vector<Entity *>* Scene::getChildren()
{
    return _children;
}

Scene::Scene()
{
    _children = new std::vector<Entity *>();
    
    ResourceManager *resourceManager = &ResourceManager::getResourceManager();
    
    Entity *skybox = new Entity(resourceManager->getVertexBufferArray()->at(2), makeVector3(0.0f, 0.0f, 0.0f));
    skybox->setRotation(makeVector3(0.0f, 0.0f, 0.0f));
    skybox->setScale(makeVector3(10.0f, 10.0f, 10.0f));
    skybox->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    skybox->setRotationVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    skybox->setScaleVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(skybox);
    
    Entity *box = new Entity(resourceManager->getVertexBufferArray()->at(1), makeVector3(-2.0f, 0.0f, 0.0f));
    box->setRotation(makeVector3(0.0f, 45.0f, 45.0f));
    box->setScale(makeVector3(1.0f, 1.0f, 1.0f));
    box->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    box->setRotationVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    box->setScaleVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(box);
    
    Entity *newBox = new Entity(resourceManager->getVertexBufferArray()->at(3), makeVector3(1.0f, 0.0f, 1.0f));
    newBox->setRotation(makeVector3(45.0f, -45.0f, 30.0f));
    newBox->setScale(makeVector3(1.0f, 1.0f, 1.0f));
    newBox->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    newBox->setRotationVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    newBox->setScaleVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(newBox);
    
    Entity *plane = new Entity(resourceManager->getVertexBufferArray()->at(4), makeVector3(0.0f, -9.0f, 0.0f));
    plane->setRotation(makeVector3(0.0f, 0.0f, 0.0f));
    plane->setScale(makeVector3(15.0f, 1.0f, 15.0f));
    plane->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    plane->setRotationVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    plane->setScaleVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(plane);
    
    Entity *thirdCube = new Entity(resourceManager->getVertexBufferArray()->at(5), makeVector3(-5.0f, -3.0f, -7.0f));
    thirdCube->setRotation(makeVector3(60.0f, 0.0f, 30.0f));
    thirdCube->setScale(makeVector3(2.0f, 2.0f, 2.0f));
    thirdCube->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    thirdCube->setRotationVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    thirdCube->setScaleVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(thirdCube);
    
    Entity *camera = new Entity(NULL, makeVector3(0.0f, 0.0f, 10.0f));
    camera->setEyeVector(makeVector3(0.0f, 0.0f, -1000.0f));
    camera->setVelocity(makeVector3(0.0f, 0.0f, 0.0f));
    _children->push_back(camera);
    
    CameraSystem *cameraSystem = &CameraSystem::getCameraSystem();
    cameraSystem->setCurrentCamera(camera);
}

Scene::~Scene()
{
    for (std::vector<Entity *>::iterator iterator = _children->begin(); iterator != _children->end(); ++iterator) {
        delete *iterator;
    }
    
    delete _children;
}