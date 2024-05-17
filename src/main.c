#include <stdio.h>
#include <raylib.h>
#include "render_util.h"




int main(){
    printf("Hello, World!\n");

    InitWindow(640, 480, "TETRIS!");

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(bgColor);

        TetrisDrawPlayfield();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}