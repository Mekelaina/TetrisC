#include <stdio.h>
#include <raylib.h>
#include "render_util.h"
// #include "tetraminos.h"
#include "game_grid.h"


void run(){
    initGrid();

    printGrid();


    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "TETRIS!");

  

    // !TODO: implement code to draw every tetramino.
    // you were working on that last time.

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(bgColor);

        TetrisDrawPlayfield();
      
        EndDrawing();
    }

    CloseWindow();
}

void debug(){
    uint16_t d = 0x0F00;
    uint8_t r[3];

    printf("%x\n", r[0]);
    printf("%x\n", r[1]);
    printf("%x\n", r[2]);
    printf("%x\n", r[3]);
}

int main(){

    //run();
    debug();
   

    return 0;
}