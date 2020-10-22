#include <legacy.h>

void Vyi8XZjDoj();

int main() {
  if (_ioe_init() != 1)
    _halt(1);

  printf("------------------------------\n");
  Vyi8XZjDoj();

  return 0;
}

struct {
  int PNOyOWxJpK, JIGYRzzmas, J_Sl6Dag5p;
  uint32_t Lr13OEObb4;
} RsBhhiFFvE;

static void yAFGLz8ME3(int PNOyOWxJpK) {
  RsBhhiFFvE.PNOyOWxJpK = PNOyOWxJpK;
  RsBhhiFFvE.JIGYRzzmas = screen_width();
  RsBhhiFFvE.J_Sl6Dag5p = screen_height();
  RsBhhiFFvE.Lr13OEObb4 = 0;
}

static void TSiSLYknYn() {
  while (uptime() < RsBhhiFFvE.Lr13OEObb4)
    continue;
  RsBhhiFFvE.Lr13OEObb4 += 1000 / RsBhhiFFvE.PNOyOWxJpK;
}

struct {
  int ExGIFMPbha;
  int K7z_BayAM3;
} qBLBhlntx_;

static void JCyb92PO2X() {
  qBLBhlntx_.ExGIFMPbha = 0;
  qBLBhlntx_.K7z_BayAM3 = 0;
}

static void WxSdxkcUJN() {
  if (qBLBhlntx_.ExGIFMPbha < 30)
    qBLBhlntx_.ExGIFMPbha++;
}

struct {
  int eZelonvCFU, hck0ckSSZL;
  int XD7kFstGd3[4096];
  int UQRn26Bmz5[4096];
} kZ6hP_qvSg;

static void akI2wblQIp() {
  kZ6hP_qvSg.eZelonvCFU = kZ6hP_qvSg.hck0ckSSZL = 0;
}

static void oT4p6Ulx7J(int XD7kFstGd3, int UQRn26Bmz5) {
  kZ6hP_qvSg.XD7kFstGd3[kZ6hP_qvSg.hck0ckSSZL] = XD7kFstGd3;
  kZ6hP_qvSg.UQRn26Bmz5[kZ6hP_qvSg.hck0ckSSZL] = UQRn26Bmz5;
  kZ6hP_qvSg.hck0ckSSZL++;
  assert(kZ6hP_qvSg.hck0ckSSZL <= 4096);
}

static inline int W2yp9bnpy5(int erf1kA3ufC, int IOjC2fkbCg) {
  assert(erf1kA3ufC < IOjC2fkbCg);
  return rand() % (IOjC2fkbCg - erf1kA3ufC) + erf1kA3ufC;
}

static void SU7984_mkw() {
  int XD7kFstGd3 = kZ6hP_qvSg.XD7kFstGd3[kZ6hP_qvSg.hck0ckSSZL - 1];
  int GDOlvXNmhT = kZ6hP_qvSg.UQRn26Bmz5[kZ6hP_qvSg.hck0ckSSZL - 1];
  int XQvYgn4qpu = W2yp9bnpy5(2, 10);
  int c0esYbnYow = XD7kFstGd3 + W2yp9bnpy5(GDOlvXNmhT + XQvYgn4qpu + 1, 40);
  oT4p6Ulx7J(c0esYbnYow, XQvYgn4qpu);
}

static uint32_t *pu0XGjLhxR;
const uint32_t UaykZDyUUN = 0x00000000;
const uint32_t ufBizpkLbx = 0x006a005f;
const uint32_t QkSY7m7Gvu = 0x00ffff00;
const uint32_t ukvKuleR4X = 0x00ff0000;

static void h72Vdp9m1b(uint32_t vZkqLfCIMW) {
  for (int K7z_BayAM3 = 0; K7z_BayAM3 < RsBhhiFFvE.J_Sl6Dag5p; K7z_BayAM3++)
    for (int XD7kFstGd3 = 0; XD7kFstGd3 < RsBhhiFFvE.JIGYRzzmas; XD7kFstGd3++)
        pu0XGjLhxR[K7z_BayAM3 * RsBhhiFFvE.JIGYRzzmas + XD7kFstGd3] = vZkqLfCIMW;
}

static void gZ5nzpxC8r(uint32_t vZkqLfCIMW, int XD7kFstGd3, int K7z_BayAM3, int OqmibpybCn, int PbckqMrTl2) {
  for (int XaRzohPKKN = K7z_BayAM3; XaRzohPKKN < K7z_BayAM3 + PbckqMrTl2 && XaRzohPKKN < RsBhhiFFvE.J_Sl6Dag5p; ++XaRzohPKKN)
    if (XaRzohPKKN >= 0)
      for (int cZ5d65ts5U = XD7kFstGd3; cZ5d65ts5U < XD7kFstGd3 + OqmibpybCn && cZ5d65ts5U < RsBhhiFFvE.JIGYRzzmas; ++cZ5d65ts5U)
        if (cZ5d65ts5U >= 0)
          pu0XGjLhxR[XaRzohPKKN * RsBhhiFFvE.JIGYRzzmas + cZ5d65ts5U] = vZkqLfCIMW;
}

static void h7WHgbkyVu(uint32_t vZkqLfCIMW) {
  int Apv7PJcujL = 30 - qBLBhlntx_.ExGIFMPbha + 5;
  int raB0cxTuRP = RsBhhiFFvE.J_Sl6Dag5p / 2;

  gZ5nzpxC8r(vZkqLfCIMW, 100 - 2, raB0cxTuRP - qBLBhlntx_.K7z_BayAM3 - Apv7PJcujL,
             2 * 2, Apv7PJcujL);
}

static void AlM0UT25fL(uint32_t vZkqLfCIMW) {
  for (int cZ5d65ts5U = kZ6hP_qvSg.eZelonvCFU; cZ5d65ts5U < kZ6hP_qvSg.hck0ckSSZL; ++cZ5d65ts5U)
    gZ5nzpxC8r(vZkqLfCIMW, kZ6hP_qvSg.XD7kFstGd3[cZ5d65ts5U] - kZ6hP_qvSg.UQRn26Bmz5[cZ5d65ts5U],
               RsBhhiFFvE.J_Sl6Dag5p / 2, kZ6hP_qvSg.UQRn26Bmz5[cZ5d65ts5U] * 2, 3);
}

static void Wv1JqEgtYr() {
  static int OqmibpybCn = 20;
  gZ5nzpxC8r(ukvKuleR4X, 0, 0, RsBhhiFFvE.JIGYRzzmas, OqmibpybCn);
  gZ5nzpxC8r(ukvKuleR4X, 0, RsBhhiFFvE.J_Sl6Dag5p - OqmibpybCn, RsBhhiFFvE.JIGYRzzmas, OqmibpybCn);
  gZ5nzpxC8r(ukvKuleR4X, 0, 0, OqmibpybCn, RsBhhiFFvE.J_Sl6Dag5p);
  gZ5nzpxC8r(ukvKuleR4X, RsBhhiFFvE.JIGYRzzmas - OqmibpybCn, 0, OqmibpybCn, RsBhhiFFvE.J_Sl6Dag5p);
}

static void pVquJtRsOw() {
  h72Vdp9m1b(UaykZDyUUN);
  h7WHgbkyVu(ufBizpkLbx);
  AlM0UT25fL(QkSY7m7Gvu);
}

static void hRIJHsqzlx() {
  for (int K7z_BayAM3 = 0; K7z_BayAM3 < RsBhhiFFvE.J_Sl6Dag5p; K7z_BayAM3++)
    draw_rect(&pu0XGjLhxR[K7z_BayAM3 * RsBhhiFFvE.JIGYRzzmas], 0, K7z_BayAM3, RsBhhiFFvE.JIGYRzzmas, 1);
  draw_sync();
}

static int mzR186wepk, PNOyOWxJpK, Ni4LED3jUH, MTpeqVwHlI;

static void tl7Kc3Gx6U() {
  mzR186wepk = 0;
  PNOyOWxJpK = 60;
  MTpeqVwHlI = 1;
  Ni4LED3jUH = 0;
  pu0XGjLhxR = _heap.start;

  printf("------------------------------\n");
  printf("      score = 0\n");
  yAFGLz8ME3(PNOyOWxJpK);
  JCyb92PO2X();
  akI2wblQIp();
  oT4p6Ulx7J(100, 10);
  SU7984_mkw();
  pVquJtRsOw();
  hRIJHsqzlx();
}

static void wcwGfNsCkC() {
  while (1) {
    TSiSLYknYn();
    if (qBLBhlntx_.ExGIFMPbha <= 0 && qBLBhlntx_.K7z_BayAM3 <= 0)
      break;
    if (qBLBhlntx_.ExGIFMPbha > 0) {
      qBLBhlntx_.ExGIFMPbha--;
      qBLBhlntx_.K7z_BayAM3 += 2;
    } else {
      qBLBhlntx_.K7z_BayAM3 -= 2;
    }
    for (int cZ5d65ts5U = kZ6hP_qvSg.eZelonvCFU; cZ5d65ts5U < kZ6hP_qvSg.hck0ckSSZL; ++cZ5d65ts5U)
      kZ6hP_qvSg.XD7kFstGd3[cZ5d65ts5U]--;
    pVquJtRsOw();
    hRIJHsqzlx();
  }
}

static void ceO5NPYidU() {
  printf("Welcome to my jump game!\n");
  printf("Press SPACE to jmp\n");
  printf("Enter R to restart and q to quit\n");
  printf("Enjoy it!\n");
}

void Vyi8XZjDoj() {
  ceO5NPYidU();
  tl7Kc3Gx6U();

  while (1) {
    TSiSLYknYn();

    int vK_Tb2f4LK = read_key();
    int T2L2xQFOiP = 0;
    if (vK_Tb2f4LK & 0x8000) {
      vK_Tb2f4LK ^= 0x8000;
      T2L2xQFOiP = 1;
    }

    if (vK_Tb2f4LK == _KEY_Q)
      break;

    if (vK_Tb2f4LK == _KEY_R && T2L2xQFOiP) {
      tl7Kc3Gx6U();
      continue;
    }

    if (vK_Tb2f4LK != _KEY_SPACE)
      continue;

    if (mzR186wepk == 0) {
      if (T2L2xQFOiP) {
        WxSdxkcUJN();
        pVquJtRsOw();
        hRIJHsqzlx();
        mzR186wepk = 1;
      }
    }
    else if (mzR186wepk == 1) {
      if (T2L2xQFOiP) {
        WxSdxkcUJN();
        pVquJtRsOw();
        hRIJHsqzlx();
      } else {
        wcwGfNsCkC();
        int XD7kFstGd3 = kZ6hP_qvSg.XD7kFstGd3[kZ6hP_qvSg.hck0ckSSZL - 1];
        int GDOlvXNmhT = kZ6hP_qvSg.UQRn26Bmz5[kZ6hP_qvSg.hck0ckSSZL - 1];
        if (XD7kFstGd3 - GDOlvXNmhT >= 100 + 2 || XD7kFstGd3 + GDOlvXNmhT <= 100 - 2) {
          mzR186wepk = 3;
          Wv1JqEgtYr();
          hRIJHsqzlx();
        } else {
          if(XD7kFstGd3 >= 100 - 1 && XD7kFstGd3 <= 100 + 1)
            MTpeqVwHlI *= 2;
          else
            MTpeqVwHlI = 1;
          Ni4LED3jUH += MTpeqVwHlI;
          printf("+%d    score = %d\n", MTpeqVwHlI, Ni4LED3jUH);
          SU7984_mkw();
          pVquJtRsOw();
          hRIJHsqzlx();
          mzR186wepk = 0;
        }
      }
    }
  }
}
