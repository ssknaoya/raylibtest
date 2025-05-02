#include "raylib.h"

int main(void)
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(800, 600, "Raylib Example");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(400, 300, 50, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
