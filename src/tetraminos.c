#include "tetraminos.h"

uint16_t getTetraminoData(CurrentTetramino *t){
    return Tetraminos[(4 * t->tetra_t) + t->offset];
}