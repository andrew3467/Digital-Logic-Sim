//
// Created by Andrew Graser on 11/19/2026.
//


#pragma once
#include <string>

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"


struct Module
{
    std::string Name;

    ImVec2 Position;
    ImVec2 Size;

    ImVec2 RectMin() const {return ImVec2(Position - Size);}
    ImVec2 RectMax() const {return ImVec2(Position + Size);}

    ImVec2 RectSize() const {return RectMax() - RectMin();}
};
