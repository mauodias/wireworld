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
  int state:2;
} cell;

typedef struct generation {
  cell cells[W][H];
} generation;

#endif // STRUCTURES_H
