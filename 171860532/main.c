#include<am.h>
#include<amdev.h>
#include<klib.h>
typedef uint8_t Vyi8XZjDoj;
static void PNOyOWxJpK(uint32_t *JIGYRzzmas, uint32_t *J_Sl6Dag5p)
{
  uint32_t Lr13OEObb4 = *JIGYRzzmas;
  *JIGYRzzmas = *J_Sl6Dag5p;
  *J_Sl6Dag5p = Lr13OEObb4;
}
static int RsBhhiFFvE()
{
  uint32_t yAFGLz8ME3 = 0;
  do
  {
    yAFGLz8ME3 = read_key();
  } while ((yAFGLz8ME3 & 0x8000) == 0);
  return yAFGLz8ME3 & ~(0x8000);
}
static void TSiSLYknYn(const char *ExGIFMPbha)
{
  printf("%s\n", ExGIFMPbha);
}
void K7z_BayAM3();
void qBLBhlntx_();
void JCyb92PO2X();
Vyi8XZjDoj WxSdxkcUJN();
Vyi8XZjDoj eZelonvCFU(Vyi8XZjDoj hck0ckSSZL);
Vyi8XZjDoj XD7kFstGd3(int UQRn26Bmz5, Vyi8XZjDoj *hck0ckSSZL);
uint32_t kZ6hP_qvSg[4][4];
uint32_t akI2wblQIp[20] = {0xffffff, 0xff0000, 0xff7f00, 0xffff00, 0x00ff00, 0x00ffff, 0x0000ff, 0x8b00ff};
const int oT4p6Ulx7J[4] = {-1, 0, 1, 0}, W2yp9bnpy5[4] = {0, -1, 0, 1};
typedef enum
{
  erf1kA3ufC,
  IOjC2fkbCg,
} SU7984_mkw;
typedef struct
{
  int GDOlvXNmhT, XQvYgn4qpu;
} c0esYbnYow;
typedef struct
{
  int pu0XGjLhxR, UaykZDyUUN;
} ufBizpkLbx;
c0esYbnYow QkSY7m7Gvu, ukvKuleR4X, h72Vdp9m1b;
ufBizpkLbx vZkqLfCIMW;
SU7984_mkw gZ5nzpxC8r;
int main()
{
  _ioe_init();
  K7z_BayAM3();
  Vyi8XZjDoj OqmibpybCn = 0;
  do
  {
    JCyb92PO2X();
    OqmibpybCn = WxSdxkcUJN();
  } while (eZelonvCFU(OqmibpybCn));
  return 0;
}
void JCyb92PO2X()
{
  TSiSLYknYn("Welcome to 7Colors Game on bare-metal.");
  TSiSLYknYn("Version 1.0. Copyright (C) 2019-2019 StardustDL.");
  TSiSLYknYn("");
  TSiSLYknYn("Rules:");
  TSiSLYknYn("7Colors game is similar to the famous game 2048, but it's more easy.");
  TSiSLYknYn("You will have blocks in 7 colors: red, orange, yellow, green, cyan, blue and purple.");
  TSiSLYknYn("Just like 2, 4, 8, 16, 32 and so on.");
  TSiSLYknYn("Your goal is to make a purple block by using left/right/up/down key.");
  TSiSLYknYn("Each round the game will append a reg block randomly.");
  TSiSLYknYn("If there is no empty block to append, you will lose.");
  TSiSLYknYn("");
  for (int PbckqMrTl2 = 0; PbckqMrTl2 < 4; PbckqMrTl2++)
    for (int XaRzohPKKN = 0; XaRzohPKKN < 4; XaRzohPKKN++)
    {
      kZ6hP_qvSg[PbckqMrTl2][XaRzohPKKN] = 0;
    }
  kZ6hP_qvSg[rand() % 4][rand() % 4] = 1;
  gZ5nzpxC8r = IOjC2fkbCg;
  TSiSLYknYn("Game started.");
}
Vyi8XZjDoj XD7kFstGd3(int UQRn26Bmz5, Vyi8XZjDoj *hck0ckSSZL)
{
  for (int pu0XGjLhxR = 0; pu0XGjLhxR < 4; pu0XGjLhxR++)
  {
    for (int UaykZDyUUN = 0; UaykZDyUUN < 4; UaykZDyUUN++)
    {
      if (kZ6hP_qvSg[pu0XGjLhxR][UaykZDyUUN] == 0)
        continue;
      int cZ5d65ts5U = pu0XGjLhxR, h7WHgbkyVu = UaykZDyUUN;
      int Apv7PJcujL = pu0XGjLhxR + oT4p6Ulx7J[UQRn26Bmz5], raB0cxTuRP = UaykZDyUUN + W2yp9bnpy5[UQRn26Bmz5];
      while (Apv7PJcujL >= 0 && Apv7PJcujL < 4 && raB0cxTuRP >= 0 && raB0cxTuRP < 4)
      {
        if (kZ6hP_qvSg[Apv7PJcujL][raB0cxTuRP] == 0)
          PNOyOWxJpK(&kZ6hP_qvSg[Apv7PJcujL][raB0cxTuRP], &kZ6hP_qvSg[cZ5d65ts5U][h7WHgbkyVu]);
        else if (kZ6hP_qvSg[Apv7PJcujL][raB0cxTuRP] == kZ6hP_qvSg[cZ5d65ts5U][h7WHgbkyVu])
        {
          kZ6hP_qvSg[Apv7PJcujL][raB0cxTuRP] += 1;
          kZ6hP_qvSg[cZ5d65ts5U][h7WHgbkyVu] = 0;
        }
        else
          break;
        cZ5d65ts5U = Apv7PJcujL, h7WHgbkyVu = raB0cxTuRP;
        Apv7PJcujL += oT4p6Ulx7J[UQRn26Bmz5];
        raB0cxTuRP += W2yp9bnpy5[UQRn26Bmz5];
      }
    }
  }
  int AlM0UT25fL = 0;
  *hck0ckSSZL = 0;
  for (int pu0XGjLhxR = 0; pu0XGjLhxR < 4; pu0XGjLhxR++)
    for (int UaykZDyUUN = 0; UaykZDyUUN < 4; UaykZDyUUN++)
    {
      AlM0UT25fL += kZ6hP_qvSg[pu0XGjLhxR][UaykZDyUUN] == 0;
      *hck0ckSSZL = *hck0ckSSZL || kZ6hP_qvSg[pu0XGjLhxR][UaykZDyUUN] >= 7;
    }
  if (AlM0UT25fL == 0)
    return 0;
  int Wv1JqEgtYr = rand() % AlM0UT25fL;
  for (int pu0XGjLhxR = 0; pu0XGjLhxR < 4; pu0XGjLhxR++)
    for (int UaykZDyUUN = 0; UaykZDyUUN < 4; UaykZDyUUN++)
    {
      if (kZ6hP_qvSg[pu0XGjLhxR][UaykZDyUUN] == 0)
      {
        if (Wv1JqEgtYr == 0)
        {
          kZ6hP_qvSg[pu0XGjLhxR][UaykZDyUUN] = 1;
          return 1;
        }
        else
          Wv1JqEgtYr--;
      }
    }
  _halt(1);
}
Vyi8XZjDoj WxSdxkcUJN()
{
  if (gZ5nzpxC8r != IOjC2fkbCg)
  {
    TSiSLYknYn("The game is not running.");
    return 0;
  }
  qBLBhlntx_();
  while (1)
  {
    uint32_t pVquJtRsOw = RsBhhiFFvE();
    Vyi8XZjDoj hRIJHsqzlx = 1, hck0ckSSZL = 0;
    switch (pVquJtRsOw)
    {
    case _KEY_LEFT:
      hRIJHsqzlx = XD7kFstGd3(0, &hck0ckSSZL);
      break;
    case _KEY_UP:
      hRIJHsqzlx = XD7kFstGd3(1, &hck0ckSSZL);
      break;
    case _KEY_RIGHT:
      hRIJHsqzlx = XD7kFstGd3(2, &hck0ckSSZL);
      break;
    case _KEY_DOWN:
      hRIJHsqzlx = XD7kFstGd3(3, &hck0ckSSZL);
      break;
    default:
      break;
    }
    qBLBhlntx_();
    if (hck0ckSSZL)
      return 1;
    if (!hRIJHsqzlx)
      return 0;
  }
}
Vyi8XZjDoj eZelonvCFU(Vyi8XZjDoj hck0ckSSZL)
{
  if (hck0ckSSZL)
  {
    TSiSLYknYn("You have got the final color-purple.");
    TSiSLYknYn("You WIN!");
  }
  else
  {
    TSiSLYknYn("You have no empty block to move.");
    TSiSLYknYn("You LOSE!");
  }
  gZ5nzpxC8r = erf1kA3ufC;
  TSiSLYknYn("Game ended.");
  TSiSLYknYn("");
  TSiSLYknYn("If you want to start another game, press key R. Any other key to exit the game.");
  if (_KEY_R == RsBhhiFFvE())
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void K7z_BayAM3()
{
  QkSY7m7Gvu.GDOlvXNmhT = screen_width();
  QkSY7m7Gvu.XQvYgn4qpu = screen_height();
  if (QkSY7m7Gvu.GDOlvXNmhT == QkSY7m7Gvu.XQvYgn4qpu)
  {
    vZkqLfCIMW.pu0XGjLhxR = 0;
    vZkqLfCIMW.UaykZDyUUN = 0;
    ukvKuleR4X.GDOlvXNmhT = ukvKuleR4X.XQvYgn4qpu = QkSY7m7Gvu.GDOlvXNmhT;
  }
  else if (QkSY7m7Gvu.GDOlvXNmhT < QkSY7m7Gvu.XQvYgn4qpu)
  {
    vZkqLfCIMW.pu0XGjLhxR = 0;
    vZkqLfCIMW.UaykZDyUUN = (QkSY7m7Gvu.XQvYgn4qpu - QkSY7m7Gvu.GDOlvXNmhT) / 2;
    ukvKuleR4X.GDOlvXNmhT = ukvKuleR4X.XQvYgn4qpu = QkSY7m7Gvu.GDOlvXNmhT;
  }
  else
  {
    vZkqLfCIMW.pu0XGjLhxR = (QkSY7m7Gvu.GDOlvXNmhT - QkSY7m7Gvu.XQvYgn4qpu) / 2;
    vZkqLfCIMW.UaykZDyUUN = 0;
    ukvKuleR4X.GDOlvXNmhT = ukvKuleR4X.XQvYgn4qpu = QkSY7m7Gvu.XQvYgn4qpu;
  }
  h72Vdp9m1b.GDOlvXNmhT = ukvKuleR4X.GDOlvXNmhT / 4;
  h72Vdp9m1b.XQvYgn4qpu = ukvKuleR4X.XQvYgn4qpu / 4;
}
void mzR186wepk(c0esYbnYow Ni4LED3jUH, uint32_t MTpeqVwHlI, uint32_t *tl7Kc3Gx6U)
{
  for (int PbckqMrTl2 = 0; PbckqMrTl2 < Ni4LED3jUH.GDOlvXNmhT * Ni4LED3jUH.XQvYgn4qpu; PbckqMrTl2++)
  {
    tl7Kc3Gx6U[PbckqMrTl2] = MTpeqVwHlI;
  }
}
void qBLBhlntx_()
{
  uint32_t Tr4A1w4VGP[4 * 4];
  c0esYbnYow wcwGfNsCkC = (c0esYbnYow){4, 4};
  for (int pu0XGjLhxR = vZkqLfCIMW.pu0XGjLhxR / 4; pu0XGjLhxR * 4 < vZkqLfCIMW.pu0XGjLhxR + ukvKuleR4X.GDOlvXNmhT; pu0XGjLhxR++)
  {
    for (int UaykZDyUUN = vZkqLfCIMW.UaykZDyUUN / 4; UaykZDyUUN * 4 < vZkqLfCIMW.UaykZDyUUN + ukvKuleR4X.XQvYgn4qpu; UaykZDyUUN++)
    {
      int ceO5NPYidU = kZ6hP_qvSg[(pu0XGjLhxR * 4 - vZkqLfCIMW.pu0XGjLhxR) / h72Vdp9m1b.GDOlvXNmhT][(UaykZDyUUN * 4 - vZkqLfCIMW.UaykZDyUUN) / h72Vdp9m1b.XQvYgn4qpu];
      mzR186wepk(wcwGfNsCkC, akI2wblQIp[ceO5NPYidU], Tr4A1w4VGP);
      draw_rect(Tr4A1w4VGP, pu0XGjLhxR * 4, UaykZDyUUN * 4, 4, 4);
    }
  }
  draw_sync();
}
