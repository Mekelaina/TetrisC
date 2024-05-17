#ifndef TETRISC_RENDER_UTIL
#define TETRISC_RENDER_UTIL

#include <raylib.h>
#include <stddef.h>

const Color bgColor = {
    .r = 54,
    .g = 55,
    .b = 55,
    .a = 255
};

extern const size_t SCREEN_WIDTH;
extern const size_t SCREEN_HEIGHT;
extern const size_t CELLSIZE;
extern const size_t GRID_ROWS;
extern const size_t GRID_COLS;
extern const size_t GAME_WIDTH;
extern const size_t GAME_HEIGHT;



void TetrisDrawPlayfield();
void TetrisDrawNextShape();
void TetrisDrawUI();
void TetrisDrawCurrentBlock();

#endif