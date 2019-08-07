#include <game.h>

const struct SpcDLRV53l V_lgvnvLWh[4] = { { 0, -1 }, { 0, 1 }, { -1, 0 }, { 1, 0 } };

struct eIMPc_reQE MYeLW9G9KB;

int main() {
  _ioe_init();
  while (1) {
    MdDF_wRsf9();
    while (1) {
      while (uptime() < MYeLW9G9KB.aitAUtKF0M) ;
      while ((MYeLW9G9KB.Y114514191 = read_key()) != _KEY_NONE) {
        if (MYeLW9G9KB.Y114514191 & 0x8000) continue;
        bWcn_BZN1h(MYeLW9G9KB.Y114514191);
      }
      if (uptime() >= MYeLW9G9KB.Uzp21RcRp6) {
        if (!bWcn_BZN1h(_KEY_NONE)) break;
        MYeLW9G9KB.Uzp21RcRp6 += 1000 / MiTgN_AsOa;
      }
      MYeLW9G9KB.aitAUtKF0M += 1000 / zYEoKEA6n7;
    }
    while ((MYeLW9G9KB.Y114514191 = read_key()) != _KEY_SPACE) ;
  }
  return 0;
}

void MdDF_wRsf9() {
  MYeLW9G9KB.VVytjKCLf2 = screen_width();
  MYeLW9G9KB.cRzAco6san = screen_height();
  MYeLW9G9KB.C5hfRGV2n6 = (MYeLW9G9KB.cRzAco6san - 2) / PTom4tKiSv;

  if (MYeLW9G9KB.VVytjKCLf2 / MYeLW9G9KB.C5hfRGV2n6 > 2 * r_V6mywj2X) {
    MYeLW9G9KB.KzIlN_MKj4.L5Ybs1daPq = (MYeLW9G9KB.VVytjKCLf2 - MYeLW9G9KB.C5hfRGV2n6 * r_V6mywj2X) / 4;
    MYeLW9G9KB.KzIlN_MKj4.UWSiVbUuKY = (MYeLW9G9KB.cRzAco6san - MYeLW9G9KB.C5hfRGV2n6 * PTom4tKiSv) / 2;
  } else {
    MYeLW9G9KB.KzIlN_MKj4.L5Ybs1daPq = 0;
    MYeLW9G9KB.KzIlN_MKj4.UWSiVbUuKY = (MYeLW9G9KB.cRzAco6san - MYeLW9G9KB.C5hfRGV2n6 * PTom4tKiSv) / 2;
  }
  MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq = MYeLW9G9KB.KzIlN_MKj4.L5Ybs1daPq + MYeLW9G9KB.C5hfRGV2n6 * (r_V6mywj2X + 3);
  MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY = MYeLW9G9KB.KzIlN_MKj4.UWSiVbUuKY;

  MYeLW9G9KB.aitAUtKF0M = 0;
  MYeLW9G9KB.Uzp21RcRp6 = 0;
  MYeLW9G9KB.__________ = 0;
  MYeLW9G9KB.Y114514191 = 0;

  zW7N0ZlDrD(0, 0, MYeLW9G9KB.VVytjKCLf2, MYeLW9G9KB.cRzAco6san);
  printf("Welcome to TETRIS!\n");
  printf("Press SPACEBAR to start!\n");
  C046olL5DZ("Welcome to TETRIS!", 0, 0);
  C046olL5DZ("Press SPACEBAR to start!", 0, 16);
  while ((MYeLW9G9KB.Y114514191 = read_key()) != _KEY_SPACE) ;
  zW7N0ZlDrD(0, 0, MYeLW9G9KB.VVytjKCLf2, MYeLW9G9KB.cRzAco6san);
  
  srand(uptime());
  MYeLW9G9KB.aitAUtKF0M = uptime();
  MYeLW9G9KB.Uzp21RcRp6 = uptime();
  GV7nRJKG1W();
}

void zW7N0ZlDrD(int ENUbr, int tPX6U, int ooe4Z, int DEJlE) {
  uint32_t black = 0x000000;
  for (int i = 0; i < DEJlE; ++i) {
    for (int j = 0; j < ooe4Z; ++j) {
      if ((ENUbr + j >= 0 && ENUbr + j < MYeLW9G9KB.VVytjKCLf2)
          && (tPX6U + i >= 0 && tPX6U + i < MYeLW9G9KB.cRzAco6san)) {
        draw_rect(&black, ENUbr + j, tPX6U + i, 1, 1);
      }
    }
  }
}

void S3pi0L8wqA(struct SpcDLRV53l JHWgt_YLpD, int Ix1TW4TNYk, uint32_t qyOzk1kUBD) {
  assert(Ix1TW4TNYk < 20);
  assert(JHWgt_YLpD.L5Ybs1daPq >= 0 && JHWgt_YLpD.L5Ybs1daPq + Ix1TW4TNYk < screen_width());
  assert(JHWgt_YLpD.UWSiVbUuKY >= 0 && JHWgt_YLpD.UWSiVbUuKY + Ix1TW4TNYk < screen_height());
  uint32_t MX7EDFx7dC[Ix1TW4TNYk][Ix1TW4TNYk];
  for (int i = 0; i < Ix1TW4TNYk; ++i) {
    for (int j = 0; j < Ix1TW4TNYk; ++j) {
      MX7EDFx7dC[i][j] = qyOzk1kUBD;
    }
  }
  draw_rect((uint32_t*)MX7EDFx7dC, JHWgt_YLpD.L5Ybs1daPq, JHWgt_YLpD.UWSiVbUuKY, Ix1TW4TNYk, Ix1TW4TNYk);
}
