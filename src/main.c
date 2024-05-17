#include <stdio.h>
#include <raylib.h>


const Color bgColor = {
    .r = 54,
    .g = 55,
    .b = 55,
    .a = 255
};

int main(){
    printf("Hello, World!\n");

    InitWindow(640, 480, "TETRIS!");

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(bgColor);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}