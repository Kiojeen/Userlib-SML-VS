#include "main.h"
#include <imgui/imgui.h>


void Main()
{
    ImGui::Begin("Demo Mode");

    // your code here 

    ImGui::End();
}

void Init()
{

}

EXPORT func Start()
{
    Init();
    return &Main;
}