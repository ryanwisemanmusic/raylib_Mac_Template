#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <raylib.h>

using namespace std;

int main()
{
    const int screenWidth = 3840;
    const int screenHeight = 2560;

    InitWindow (screenWidth, screenHeight, "raylib intro");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("You fucking did it!!!!", 800, 810, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
    
}