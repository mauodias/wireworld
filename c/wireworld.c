#include <stdio.h>
#include <unistd.h>
#include "structures.h"

uint8_t countHeadNeighbors(generation g, uint8_t w, uint8_t h){
  uint16_t i, j, totalHeads = 0;
  for(i = w-1; i < w+2; ++i){
    if(i < 0) continue;
    if(i == W) break;
    for(j = h-1; j < h+2; ++j){
      if(j < 0) continue;
      if(j == H) break;
      if(i==w && j==h) continue;
      if(g.cells[i][j].state == HEAD) ++totalHeads;
    }
  }
  return totalHeads;
}

generation next(generation g){
  generation out = {.cells = {{0}}};
  uint16_t i,j, headNeighbors;
  for(i = 0; i < H; ++i){
    for(j = 0; j < W; ++j){
      if(g.cells[i][j].state != BLANK){
        switch(g.cells[i][j].state){
          case HEAD:
            out.cells[i][j].state = TAIL;
            break;
          case TAIL:
            out.cells[i][j].state = CONDUCTOR;
            break;
          case CONDUCTOR:
            headNeighbors = countHeadNeighbors(g, i, j);
            if(headNeighbors == 1 || headNeighbors == 2)
              out.cells[i][j].state = HEAD;
            else
              out.cells[i][j].state = CONDUCTOR;
            break;
          default:
            break;
        }
      }
    }
  }
  return out;
}

int main(int argc, char *argv[]){
  generation s = {{0}};
  s.cells[1][3].state = CONDUCTOR; s.cells[1][4].state = CONDUCTOR;
  s.cells[2][2].state = CONDUCTOR; s.cells[2][5].state = TAIL;
  s.cells[3][2].state = CONDUCTOR; s.cells[3][5].state = HEAD;
  s.cells[4][2].state = CONDUCTOR; s.cells[4][5].state = CONDUCTOR;
  s.cells[5][2].state = CONDUCTOR; s.cells[5][4].state = CONDUCTOR; s.cells[5][5].state = CONDUCTOR; s.cells[5][6].state = CONDUCTOR;
  s.cells[6][2].state = CONDUCTOR; s.cells[6][4].state = CONDUCTOR; s.cells[6][6].state = CONDUCTOR;
  s.cells[7][2].state = CONDUCTOR; s.cells[7][5].state = CONDUCTOR;
  s.cells[8][3].state = CONDUCTOR; s.cells[8][4].state = CONDUCTOR;
  uint16_t i, j;
  uint8_t c;
  while(1){
    for(i = 0; i < W; ++i){
      for(j = 0; j < H; ++j){
        switch(s.cells[i][j].state){
          case BLANK:
            c = ' ';
            break;
          case CONDUCTOR:
            c = '.';
            break;
          case HEAD:
            c = 'H';
            break;
          case TAIL:
            c = 't';
            break;
          default:
            break;
        }
        printf("%c", c);
      }
      printf("\n");
    }
    for(i = 0; i < H; ++i){
      printf("\033[F");
    }
    usleep(100000);
    s = next(s);
  }
}
