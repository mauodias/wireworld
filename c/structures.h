#include <stdlib.h>

#ifndef STRUCTURES_H
#define STRUCTURES_H

#ifndef W
#define W 500
#endif

#ifndef H
#define H 500
#endif

typedef enum CELLSTATE {
  BLANK,
  CONDUCTOR,
  HEAD,
  TAIL
} CELLSTATE;

typedef struct cell {
  uint8_t state;
} cell;

typedef struct generation {
  cell cells[W][H];
} generation;

#endif // STRUCTURES_H
