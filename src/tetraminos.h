#ifndef TETRISC_TETRAMINOS
#define TETRISC_TETRAMINOS

#include <stdint.h>

typedef enum {
    I,
    J,
    L,
    O,
    S,
    T,
    Z
} E_Tetramino;



/* All 28 tetramino permutations
Stored as a 16 bit hex number for convienince 
Each nibble is a row, of a 4x4 matrix
Empty: 0 - Filled: 1 */
extern const uint16_t Tetraminos[28];

typedef struct {
    E_Tetramino tetra_t;
    
    //offset between 0-3
    uint8_t offset; 
} CurrentTetramino;

//helper function to extract data from Tetramino table
uint16_t getTetraminoData(CurrentTetramino *t);

#endif
