//
// Created by Andrew Graser on 11/17/2026.
//


#include <../SDL_ImGui_Template/src/Sandbox.h>

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"

#include "UI/ModuleCanvas.h"

ModuleCanvas moduleCanvas;

std::vector<Module> modules = {
    Module(
        "AND",
        ImVec2(500.0f, 250.0f),
        ImVec2(120, 40)
    ),
    Module(
        "NOT",
        ImVec2(250.0f, 350.0f),
        ImVec2(240, 50)
    ),
};

SandBox::SandBox()
{

}


SandBox::~SandBox()
{

}

void SandBox::Start()
{

}

void SandBox::Update()
{

}

void SandBox::OnImGuiRender()
{
    ImGui::Begin("Sandbox");

    moduleCanvas.Draw(modules);

    ImGui::End();
}
