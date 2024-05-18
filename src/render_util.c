#include "render_util.h"
#include "game_grid.h"

const size_t SCREEN_WIDTH =  640;
const size_t SCREEN_HEIGHT = 480;
const size_t CELLSIZE = 20;

const size_t GRID_WIDTH = (GRID_COLS * CELLSIZE);
const size_t GRID_HEIGHT = (GRID_ROWS * CELLSIZE);
const size_t GAME_WIDTH = GRID_WIDTH + (2*CELLSIZE);
const size_t GAME_HEIGHT = GRID_HEIGHT + CELLSIZE;

const Color bgColor = {
    .r = 54,
    .g = 55,
    .b = 55,
    .a = 255
};

void TetrisDrawPlayfield(){
    DrawRectangle(SCREEN_WIDTH/2 - GAME_WIDTH/2, CELLSIZE, GAME_WIDTH, GAME_HEIGHT, LIGHTGRAY);
    DrawRectangle(SCREEN_WIDTH/2 - GAME_WIDTH/2 + CELLSIZE, CELLSIZE+1, GRID_WIDTH, GRID_HEIGHT, bgColor);
    for(size_t i = 0; i <= GRID_COLS+2; i++ ){
        DrawLine(SCREEN_WIDTH/2 - GAME_WIDTH/2 + (i*CELLSIZE)+1, CELLSIZE, SCREEN_WIDTH/2 - GAME_WIDTH/2 + (i*CELLSIZE)+1, GAME_HEIGHT+CELLSIZE, BLACK);
    }
    for(size_t j = 1; j <= GRID_ROWS+2; j++){
        DrawLine(SCREEN_WIDTH/2 - GAME_WIDTH/2 + 1,(j*CELLSIZE)+1, (SCREEN_WIDTH/2 - GAME_WIDTH/2) + (GRID_COLS+2)*CELLSIZE, (CELLSIZE)*j, BLACK);
    }
}
void TetrisDrawNextShape(){

}
void TetrisDrawUI(){

}
void TetrisDrawTetramino(Tetramino_t *t){
    uint16_t block = getTetraminoData(t);
}