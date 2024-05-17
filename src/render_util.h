#ifndef TETRISC_RENDER_UTIL
#define TETRISC_RENDER_UTIL

#include <raylib.h>
#include <stddef.h>
#include "tetraminos.h"


extern const size_t SCREEN_WIDTH;
extern const size_t SCREEN_HEIGHT;
extern const Color bgColor;

// extern const size_t CELLSIZE;
// extern const size_t GRID_ROWS;
// extern const size_t GRID_COLS;
// extern const size_t GAME_WIDTH;
// extern const size_t GAME_HEIGHT;


void TetrisDrawPlayfield();
void TetrisDrawNextShape();
void TetrisDrawUI();
void TetrisDrawTetramino(CurrentTetramino *t);

#endif