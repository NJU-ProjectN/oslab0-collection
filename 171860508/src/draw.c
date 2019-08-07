#include "game.h"

extern struct eIMPc_reQE MYeLW9G9KB;
extern char font8x8_basic[128][8];

char *itoa(int n)  {
  static char s[64];
  int i = sizeof(s) - 1;
  do {
    s[--i] = n % 10 + '0';  
    n /= 10;
  } while (n > 0);
  return &s[i];
}  

void gRYRM3ysUR(char LYiQb, int Un2kp, int Mi2ub) {
  int i, j;
  char *p = font8x8_basic[(int)LYiQb];
  uint32_t black = 0x000000, white = 0xffffff;
  for (i = 0; i < 16; i ++) {
    for (j = 0; j < 16; j ++) { 
      if (Un2kp + j < MYeLW9G9KB.VVytjKCLf2 && Mi2ub + i < MYeLW9G9KB.cRzAco6san) {
        draw_rect((p[i >> 1] >> (j >> 1)) & 1 ? &white : &black, Un2kp + j, Mi2ub + i, 1, 1);
      }
    }
  }
}

void C046olL5DZ(const char *MkVEhCNKoY, int Un2kp, int Mi2ub) {
  while (*MkVEhCNKoY) {
    gRYRM3ysUR(*MkVEhCNKoY ++, Un2kp, Mi2ub);
    if (Un2kp + 16 >= MYeLW9G9KB.VVytjKCLf2) {
      Mi2ub += 16, Un2kp = 0;
    } else {
      Un2kp += 16;
    }
  }
}
