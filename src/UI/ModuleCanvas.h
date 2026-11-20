//
// Created by Andrew Graser on 11/19/2026.
//


#pragma once
#include <vector>

#include "Module.h"

class ModuleCanvas
{
public:
    ModuleCanvas();
    ~ModuleCanvas() = default;


    void Draw(std::vector<Module>& modules);
};
