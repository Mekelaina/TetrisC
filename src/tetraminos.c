#include "tetraminos.h"

const uint16_t Tetraminos[28] = {
    0x0F00, 0x2222, 0x00F0, 0x4444, //I
    0x08E0, 0x0644, 0x00E2, 0x044C, //J
    0x02E0, 0x0446, 0x00E8, 0x0C44, //L
    0x0660, 0x0660, 0x0660, 0x0660, //O
    0x06C0, 0x0462, 0x006C, 0x08C4, //S
    0x04E0, 0x0464, 0x00E4, 0x04C4, //T
    0x0C60, 0x0264, 0x00C6, 0x04C8  //Z
};  

uint16_t getTetraminoData(CurrentTetramino *t){
    return Tetraminos[(4 * t->tetra_t) + t->offset];
}