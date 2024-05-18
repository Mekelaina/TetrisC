#ifndef TETRISC_GAME_GRID
#define TETRISC_GAME_GRID

#include <stddef.h>
#include "tetraminos.h"

//defining these as macros fixes an issue of having other
//constant definitions include them outside of defined file
#define GRID_ROWS 20
#define GRID_COLS 10
#define GRID_SIZE GRID_ROWS * GRID_COLS

#define GRID_WHITE  0b000
#define GRID_LBLUE  0b001
#define GRID_BLUE   0b010
#define GRID_ORANGE 0b011
#define GRID_YELLOW 0b100
#define GRID_GREEN  0b101
#define GRID_PINK   0b110
#define GRID_RED    0b111

typedef struct{
    uint8_t color : 3;
    uint8_t isFilled  : 1;
} GridCell;



//extern GridCell GameGrid[GRID_SIZE];

void initGrid();
void writeTetramino(Tetramino_t *t, size_t row, size_t col);
void moveTetramino(Tetramino_t *t, E_Tetra_Action *a, size_t row, size_t col);
void printGrid();


#endif