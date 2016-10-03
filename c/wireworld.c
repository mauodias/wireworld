#include <stdio.h>
#include <stdlib.h>

#include "structures.h"

int main(int argc, char *argv[]){
  generation s = {{0}};
  int i, j;
  for(i = 0; i < W; ++i){
    for(j = 0; j < H; ++j){
      printf("%d", s.cells[i][j].state);
    }
  }
}
