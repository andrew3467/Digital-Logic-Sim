//
// Created by Andrew Graser on 11/19/2026.
//

#include "ModuleCanvas.h"

#include "imgui.h"
#include "imgui_internal.h"
#include "Module.h"


ModuleCanvas::ModuleCanvas()
{

}

void ModuleCanvas::Draw(std::vector<Module>& modules)
{
    auto drawList = ImGui::GetWindowDrawList();
    ImRect drawBounds(drawList->GetClipRectMin(), drawList->GetClipRectMax());

    for (auto& module : modules)
    {
        drawList->AddRectFilled(module.RectMin(), module.RectMax(), ImColor(1.0f, 1.0f, 1.0f, 1.0f));

        constexpr float FONT_SIZE = 24.0f;

        ImVec2 textSize = ImGui::GetFont()->CalcTextSizeA(
            FONT_SIZE,
            FLT_MAX,
            0.0f,
            module.Name.c_str()
        );
        ImVec2 textPos = module.RectMin() + (module.RectSize() - textSize) * 0.5f;

        drawList->AddText(ImGui::GetFont(), 24.0f, textPos, ImColor(0.0, 0.0, 0.0, 1.0f), module.Name.c_str());
    }
}
