#include <stdio.h>
#include <raylib.h>
#include "render_util.h"
#include "tetraminos.h"



int main(){
    printf("Hello, World!\n");

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "TETRIS!");

    CurrentTetramino t = {
        .tetra_t = I,
        .offset = 0
    };

    // !TODO: implement code to draw every tetramino.
    // you were working on that last time.

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(bgColor);

        //TetrisDrawPlayfield();
        TetrisDrawTetramino(&t);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}