#ifndef STRUCTURES_H
#define STRUCTURES_H

#ifndef W
#define W 500
#endif

#ifndef H
#define H 500
#endif

enum CELLSTATE {
  BLANK,
  CONDUCTOR,
  HEAD,
  TAIL
};

typedef enum CELLSTATE CELLSTATE;

struct cell {
  int state:2;
};

typedef struct cell cell;

struct generation {
  cell cells[W][H];
};

typedef struct generation generation;

#endif // STRUCTURES_H
