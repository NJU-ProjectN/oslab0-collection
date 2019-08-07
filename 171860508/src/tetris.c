#include <game.h>

const int kg2duBv_7F[5] = { 0, 500, 1000, 2000, 4000 };
const struct SpcDLRV53l ZIWertCUJ1 = { r_V6mywj2X / 2, 2 };
const struct rEdRgKb4mF bkgzoZklYz = { {-1, -1}, 0 };
const struct Eu9EZvtdyC tI8cNM3Rkq[20] = {
  {{{ 0,  0}, { 0,  0}, { 0,  0}, { 0,  0}}, OFuBE,  0,  0},
  {{{-1,  0}, { 0,  0}, { 1,  0}, { 2,  0}}, dAOmI,  2,  2},
  {{{ 0, -1}, { 0,  0}, { 0,  1}, { 0,  2}}, dAOmI,  1,  1},
  {{{ 0,  0}, { 0, -1}, { 0, -2}, {-1,  0}}, cPUc4,  6,  4},
  {{{ 0,  0}, {-1,  0}, {-2,  0}, { 0,  1}}, cPUc4,  3,  5},
  {{{ 0,  0}, { 0,  1}, { 0,  2}, { 1,  0}}, cPUc4,  4,  6},
  {{{ 0,  0}, { 1,  0}, { 2,  0}, { 0, -1}}, cPUc4,  5,  3},
  {{{ 0,  0}, { 0, -1}, { 0, -2}, { 1,  0}}, Fimo3, 10,  8},
  {{{ 0,  0}, {-1,  0}, {-2,  0}, { 0, -1}}, Fimo3,  7,  9},
  {{{ 0,  0}, { 0,  1}, { 0,  2}, {-1,  0}}, Fimo3,  8, 10},
  {{{ 0,  0}, { 1,  0}, { 2,  0}, { 0,  1}}, Fimo3,  9,  7},
  {{{ 0,  0}, { 1,  0}, { 0,  1}, { 1,  1}}, KAnWO, 11, 11},
  {{{ 0,  0}, { 1,  0}, { 0,  1}, {-1,  1}}, n4_TO, 13, 13},
  {{{ 0,  0}, { 0, -1}, { 1,  0}, { 1,  1}}, n4_TO, 12, 12},
  {{{ 0,  0}, {-1,  0}, { 0,  1}, { 1,  0}}, CHUTX, 17, 15},
  {{{ 0,  0}, { 0, -1}, {-1,  0}, { 0,  1}}, CHUTX, 14, 16},
  {{{ 0,  0}, { 1,  0}, { 0, -1}, {-1,  0}}, CHUTX, 15, 17},
  {{{ 0,  0}, { 0,  1}, { 1,  0}, { 0, -1}}, CHUTX, 16, 14},
  {{{ 0,  0}, {-1,  0}, { 0,  1}, { 1,  1}}, TpMuz, 19, 19},
  {{{ 0,  0}, { 0, -1}, {-1,  0}, {-1,  1}}, TpMuz, 18, 18}
};
const int _NV_0tDQiE[8] = { 1, 2, 4, 4, 1, 2, 4, 2 };
const int Kz9b_M4fod = 7;
const int Id_7icZrez = 20;

const struct u9dCm2lE24 Co90e2zZS_[] = {
  { _KEY_NONE, "T", &Ny4ry1unbf, false},
  {    _KEY_W, "E", &PIRQO3zu9H,  true},
  {    _KEY_S, "T", &Ny4ry1unbf,  true},
  {    _KEY_A, "R", &Hk_brxsogu,  true},
  {    _KEY_D, "I", &Hk_brxsogu, false},
  {   _KEY_UP, "S", &PIRQO3zu9H,  true},
  { _KEY_DOWN, "+", &Ny4ry1unbf,  true},
  { _KEY_LEFT, "O", &Hk_brxsogu,  true},
  {_KEY_RIGHT, "S", &Hk_brxsogu, false},
  {_KEY_SPACE, "0", &QkRE61M9NX, false}
};
const int Y9OrS4jdWM = sizeof(Co90e2zZS_) / sizeof(struct u9dCm2lE24);

int _y5xhPxXXk[PTom4tKiSv][r_V6mywj2X];

void GV7nRJKG1W() {
  memset(_y5xhPxXXk, 0, sizeof(_y5xhPxXXk));
  MYeLW9G9KB.r_DdgRHoec = TQ10R4UhZw();
  for (int i = 0; i < RbPLYmf78y; ++i) {
    MYeLW9G9KB.xS8OFE5FGV[i] = PcW_0hQOvT();
  }
  KnuRdtSbSD(MYeLW9G9KB.r_DdgRHoec);
  TTqx2hHlV3();
}

bool bWcn_BZN1h(int Y114514191) {
  MYeLW9G9KB.__________--;
  struct rEdRgKb4mF OloxcctUS_ = MYeLW9G9KB.r_DdgRHoec;
  for (int i = 0; i < Y9OrS4jdWM; ++i) {
    if (Y114514191 == Co90e2zZS_[i].vxgQf2gQ1O) {
      OloxcctUS_ = Co90e2zZS_[i].xTKOM9jwsC(OloxcctUS_, Co90e2zZS_[i].i3Sfk61iC0);
      break;
    }
  }

  if (memcmp(&OloxcctUS_, &bkgzoZklYz, sizeof(struct rEdRgKb4mF)) == 0) {
    printf("Game Over!\n");
    printf("Your score: %d\n", MYeLW9G9KB.__________);
    KTA4p4QQDk();
    return false;
  } else {
    MYeLW9G9KB.r_DdgRHoec = OloxcctUS_;
  }

  KnuRdtSbSD(MYeLW9G9KB.r_DdgRHoec);
  return true;
}

int PcW_0hQOvT() {
  int sum = 0;
  int genre = rand() % (Kz9b_M4fod - 1) + 1;
  int yXAP9_Afa6 = rand() % _NV_0tDQiE[genre];
  for (int i = 0; i < genre; ++i) {
    sum += _NV_0tDQiE[i];
  }
  return sum + yXAP9_Afa6;
}

struct rEdRgKb4mF TQ10R4UhZw() {
  struct rEdRgKb4mF OloxcctUS_;
  OloxcctUS_.rBWwe7C8xM = ZIWertCUJ1;
  OloxcctUS_.yXAP9_Afa6 = PcW_0hQOvT();
  return OloxcctUS_;
}

struct rEdRgKb4mF QkRE61M9NX(struct rEdRgKb4mF ysNCLHZmv2, bool dGVzyJ9PDn) {
  if (dGVzyJ9PDn) ;
  struct rEdRgKb4mF HRppbmO14M;
  HRppbmO14M.rBWwe7C8xM = ZIWertCUJ1;
  HRppbmO14M.yXAP9_Afa6 = MYeLW9G9KB.xS8OFE5FGV[0];
  if (TAODQ5727T(HRppbmO14M)) {
    MYeLW9G9KB.xS8OFE5FGV[0] = ysNCLHZmv2.yXAP9_Afa6;
    TTqx2hHlV3();
    return HRppbmO14M;
  } else {
    return ysNCLHZmv2;
  }
}

struct rEdRgKb4mF Hk_brxsogu(struct rEdRgKb4mF ysNCLHZmv2, bool dGVzyJ9PDn) {
  struct rEdRgKb4mF HRppbmO14M = ysNCLHZmv2;
  HRppbmO14M.rBWwe7C8xM.L5Ybs1daPq += dGVzyJ9PDn ? -1 : 1;
  return TAODQ5727T(HRppbmO14M) ? HRppbmO14M : ysNCLHZmv2;
}

struct rEdRgKb4mF Ny4ry1unbf(struct rEdRgKb4mF ysNCLHZmv2, bool dGVzyJ9PDn) {
  struct rEdRgKb4mF S_UMCYYFD2 = ysNCLHZmv2;
  {
    bool r7vy8Xb24nIsValid = false;
    struct rEdRgKb4mF r7vy8Xb24nT = S_UMCYYFD2;
    do {
      r7vy8Xb24nT.rBWwe7C8xM.UWSiVbUuKY++;
      r7vy8Xb24nIsValid = TAODQ5727T(r7vy8Xb24nT);
      S_UMCYYFD2 = r7vy8Xb24nIsValid ? r7vy8Xb24nT : S_UMCYYFD2;
    } while (dGVzyJ9PDn && r7vy8Xb24nIsValid);
  }
  if (dGVzyJ9PDn || memcmp(&S_UMCYYFD2, &ysNCLHZmv2, sizeof(struct rEdRgKb4mF)) == 0) {
    if (!TAODQ5727T(S_UMCYYFD2)) {
      return bkgzoZklYz;
    } else {
      cgbMnyBo7x(S_UMCYYFD2);
      s8GhDMvSsY();
      S_UMCYYFD2.rBWwe7C8xM = ZIWertCUJ1;
      S_UMCYYFD2.yXAP9_Afa6 = MYeLW9G9KB.xS8OFE5FGV[0];
      for (int i = 0; i < RbPLYmf78y - 1; ++i) MYeLW9G9KB.xS8OFE5FGV[i] = MYeLW9G9KB.xS8OFE5FGV[i + 1];
      MYeLW9G9KB.xS8OFE5FGV[RbPLYmf78y - 1] = PcW_0hQOvT();
      if (TAODQ5727T(S_UMCYYFD2)) {
        TTqx2hHlV3();
        return S_UMCYYFD2;
      } else {
        return bkgzoZklYz;
      }
    }
  } else {
    return S_UMCYYFD2;
  }
}

struct rEdRgKb4mF PIRQO3zu9H(struct rEdRgKb4mF ysNCLHZmv2, bool DKhZQ_wCCG) {
  struct rEdRgKb4mF HRppbmO14M = ysNCLHZmv2;
  HRppbmO14M.yXAP9_Afa6 = DKhZQ_wCCG ? tI8cNM3Rkq[ysNCLHZmv2.yXAP9_Afa6].lA2omWFEH7 : tI8cNM3Rkq[ysNCLHZmv2.yXAP9_Afa6].r7vy8Xb24n;
  return TAODQ5727T(HRppbmO14M) ? HRppbmO14M : ysNCLHZmv2;
}

void cgbMnyBo7x(struct rEdRgKb4mF v3D929LlV9) {
  struct SpcDLRV53l p;
  for (int i = 0; i < 4; ++i) {
    p.L5Ybs1daPq = v3D929LlV9.rBWwe7C8xM.L5Ybs1daPq + tI8cNM3Rkq[v3D929LlV9.yXAP9_Afa6].YImdmJK1pU[i].L5Ybs1daPq;
    p.UWSiVbUuKY = v3D929LlV9.rBWwe7C8xM.UWSiVbUuKY + tI8cNM3Rkq[v3D929LlV9.yXAP9_Afa6].YImdmJK1pU[i].UWSiVbUuKY;
    assert(fZzTeaG5C4(p));
    _y5xhPxXXk[p.UWSiVbUuKY][p.L5Ybs1daPq] = v3D929LlV9.yXAP9_Afa6;
  }
}

void s8GhDMvSsY() {
  for (int i = PTom4tKiSv - 1; i >= 0; --i) {
    if (VAbfc5ZJ8R(i)) {
      int XBSVO = 0;
      do {
        --i, ++XBSVO;
      } while (VAbfc5ZJ8R(i));
      yeaHSZ4sug(i, XBSVO);
      MYeLW9G9KB.__________ += kg2duBv_7F[XBSVO];
      return;
    }
  }
}

bool TAODQ5727T(struct rEdRgKb4mF v3D929LlV9) {
  struct SpcDLRV53l p;
  for (int i = 0; i < 4; ++i) {
    p.L5Ybs1daPq = v3D929LlV9.rBWwe7C8xM.L5Ybs1daPq + tI8cNM3Rkq[v3D929LlV9.yXAP9_Afa6].YImdmJK1pU[i].L5Ybs1daPq;
    p.UWSiVbUuKY = v3D929LlV9.rBWwe7C8xM.UWSiVbUuKY + tI8cNM3Rkq[v3D929LlV9.yXAP9_Afa6].YImdmJK1pU[i].UWSiVbUuKY;
    if (!fZzTeaG5C4(p)) return false;
  }
  return true;
}

bool fZzTeaG5C4(struct SpcDLRV53l u73AK) {
  return DCVQx5L4sz(u73AK)
    && (_y5xhPxXXk[u73AK.UWSiVbUuKY][u73AK.L5Ybs1daPq] == 0);
}

bool DCVQx5L4sz(struct SpcDLRV53l u73AK) {
  return (u73AK.L5Ybs1daPq >= 0 && u73AK.L5Ybs1daPq < r_V6mywj2X)
    && (u73AK.UWSiVbUuKY >= 0 && u73AK.UWSiVbUuKY < PTom4tKiSv);
}

bool VAbfc5ZJ8R(int tPXeW) {
  for (int j = 0; j < r_V6mywj2X; ++j) {
    if (_y5xhPxXXk[tPXeW][j] == 0) return false;
  }
  return true;
}

void yeaHSZ4sug(int tPXeW, int XBSVO) {
  assert(tPXeW >= 0 && XBSVO > 0 && tPXeW + XBSVO < PTom4tKiSv);
  for (int i = tPXeW; i >= 0; --i) {
    memcpy(&_y5xhPxXXk[i + XBSVO][0], &_y5xhPxXXk[i][0], r_V6mywj2X * sizeof(int));
  }
  memset(_y5xhPxXXk, 0, XBSVO * r_V6mywj2X * sizeof(int));
}

void A6na0RWF9g(struct SpcDLRV53l rBWwe7C8xM, uint32_t DKhZQ_wCCG) {
  if (!DCVQx5L4sz(rBWwe7C8xM)) return;
  struct SpcDLRV53l v3D929LlV9 = { 
    MYeLW9G9KB.KzIlN_MKj4.L5Ybs1daPq + rBWwe7C8xM.L5Ybs1daPq * MYeLW9G9KB.C5hfRGV2n6, 
    MYeLW9G9KB.KzIlN_MKj4.UWSiVbUuKY + rBWwe7C8xM.UWSiVbUuKY * MYeLW9G9KB.C5hfRGV2n6
  };
  S3pi0L8wqA(v3D929LlV9, MYeLW9G9KB.C5hfRGV2n6, DKhZQ_wCCG);
}

void LfVFfgpsNl() {
  struct SpcDLRV53l jqtsbRdDkm;
  for (int i = 0; i < 2; ++i) {
    jqtsbRdDkm.UWSiVbUuKY = MYeLW9G9KB.KzIlN_MKj4.UWSiVbUuKY + 2 * MYeLW9G9KB.C5hfRGV2n6 - i;
    for (int j = 0; j < r_V6mywj2X * MYeLW9G9KB.C5hfRGV2n6; ++j) {
      jqtsbRdDkm.L5Ybs1daPq = MYeLW9G9KB.KzIlN_MKj4.L5Ybs1daPq + j;
      S3pi0L8wqA(jqtsbRdDkm, 1, 0xff0000);
    }
  }
}

void KnuRdtSbSD(struct rEdRgKb4mF Tyo9VUc6au) {
  struct SpcDLRV53l EXgJZDYTKJ;
  for (int i = 0; i < PTom4tKiSv; ++i) {
    for (int j = 0; j < r_V6mywj2X; ++j) {
      EXgJZDYTKJ.L5Ybs1daPq = j, EXgJZDYTKJ.UWSiVbUuKY = i;
      A6na0RWF9g(EXgJZDYTKJ, tI8cNM3Rkq[_y5xhPxXXk[i][j]].o_InnIL3cz);
    }
  }
  LfVFfgpsNl();
  for (int i = 0; i < 4; ++i) {
    EXgJZDYTKJ.L5Ybs1daPq = Tyo9VUc6au.rBWwe7C8xM.L5Ybs1daPq + tI8cNM3Rkq[Tyo9VUc6au.yXAP9_Afa6].YImdmJK1pU[i].L5Ybs1daPq;
    EXgJZDYTKJ.UWSiVbUuKY = Tyo9VUc6au.rBWwe7C8xM.UWSiVbUuKY + tI8cNM3Rkq[Tyo9VUc6au.yXAP9_Afa6].YImdmJK1pU[i].UWSiVbUuKY;
    A6na0RWF9g(EXgJZDYTKJ, tI8cNM3Rkq[Tyo9VUc6au.yXAP9_Afa6].o_InnIL3cz);
  }
}

void TTqx2hHlV3() {
  struct SpcDLRV53l FA5PKfdFdH;
  char Dpd1sogQwy[16] = "";
  sprintf(Dpd1sogQwy, "%d", MYeLW9G9KB.__________);

  zW7N0ZlDrD(MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq - 3 * MYeLW9G9KB.C5hfRGV2n6, 0, (3 + 6 * RbPLYmf78y) * MYeLW9G9KB.C5hfRGV2n6, MYeLW9G9KB.cRzAco6san);
  C046olL5DZ("NEXT", MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq - MYeLW9G9KB.C5hfRGV2n6, MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY);
  for (int i = 0; i < RbPLYmf78y; ++i) {
    int yXAP9_Afa6 = MYeLW9G9KB.xS8OFE5FGV[i];
    for (int j = 0; j < 4; ++j) {
      FA5PKfdFdH.L5Ybs1daPq = MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq + tI8cNM3Rkq[yXAP9_Afa6].YImdmJK1pU[j].L5Ybs1daPq * MYeLW9G9KB.C5hfRGV2n6;
      FA5PKfdFdH.UWSiVbUuKY = MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY + 32 + (2 + 6 * i + tI8cNM3Rkq[yXAP9_Afa6].YImdmJK1pU[j].UWSiVbUuKY) * MYeLW9G9KB.C5hfRGV2n6;
      S3pi0L8wqA(FA5PKfdFdH, MYeLW9G9KB.C5hfRGV2n6, tI8cNM3Rkq[yXAP9_Afa6].o_InnIL3cz);
    }
  }
  C046olL5DZ("SCORE", MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq - MYeLW9G9KB.C5hfRGV2n6, MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY + 32 + (2 + 6 * RbPLYmf78y) * MYeLW9G9KB.C5hfRGV2n6);
  C046olL5DZ(Dpd1sogQwy, MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq - MYeLW9G9KB.C5hfRGV2n6, MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY + 32 + (2 + 6 * RbPLYmf78y) * MYeLW9G9KB.C5hfRGV2n6 + 16);
}

void KTA4p4QQDk() {
  C046olL5DZ("Game Over", MYeLW9G9KB.mMIqyim3L6.L5Ybs1daPq - MYeLW9G9KB.C5hfRGV2n6, MYeLW9G9KB.mMIqyim3L6.UWSiVbUuKY + 32 + (2 + 6 * RbPLYmf78y) * MYeLW9G9KB.C5hfRGV2n6 + 2 * 16);
}
