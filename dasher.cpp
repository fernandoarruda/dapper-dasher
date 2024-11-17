#include "raylib.h"

int main ()
{
    //window dimensions
    int width = 1920;
    int height = 1080;
    InitWindow(width, height, "Dapper-Dasher");

    //rectangle dimensions
    const int rec_width =150;
    const int rec_hight = 200;

    int posY = (height - rec_hight);
    int velocity = - 10;


    SetTargetFPS(60);
    while (!WindowShouldClose())  // Simplified this condition
    {
        //start drawing
        BeginDrawing();

        ClearBackground(WHITE);
        

        DrawRectangle 
        ((width / 2 - (rec_width / 2)),posY, rec_width, rec_width, BLUE );

        if (IsKeyPressed(KEY_SPACE))
        {
            posY += velocity;
        }
        




        //end drawing
        EndDrawing();
    }
    CloseWindow();


}