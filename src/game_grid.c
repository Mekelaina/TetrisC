#include "game_grid.h"
#include <stdio.h>
#include <stdlib.h>


GridCell GameGrid[GRID_SIZE];

uint8_t *getRowVals(Tetramino_t *t){
    uint8_t r[3];
    uint16_t d = getTetraminoData(t);
    r[3] = (d >> 0 ) & 0xF;
    r[2] = (d >> 4)  & 0xF;
    r[1] = (d >> 8)  & 0xF;
    r[0] = (d >> 12) & 0xF;
    return r;
}

void initGrid(){
    GridCell Buff = {0};
    for(int i = 0; i < GRID_SIZE-1; i++){
        Buff.color = GRID_WHITE;
        Buff.isFilled = 0;
        GameGrid[i] = Buff;
    }
    printf("egg\n");
}
void writeTetramino(Tetramino_t *t, size_t row, size_t col){
    uint8_t r[] = getRowVals(t);
    //TODO finish this function. too tired to do the math
}
void moveTetramino(Tetramino_t *t, E_Tetra_Action *a, size_t row, size_t col){

}
void printGrid(){
    for(int j = 0; j < GRID_ROWS; j++){
        for(int i = 0; i < GRID_COLS; i++){
            if(GameGrid[i].isFilled == 0){
                printf("0,");
            } else {
                printf("1,");
            }
        }
        printf("\n");
    }
}