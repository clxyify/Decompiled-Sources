//Okay, so i decompiled Clubdark 'bytecode' version which aka
//uses imperious transpiler! maybe superskater is a pedo?

//i had a headache (fr) while decompiling so i didnt comment but
//enjoy this skidness of 2020 sk8r

// write access to const memory has been detected, the output may be wrong!
char sub_10028450()
{
  unsigned int v0; // edi
  struct tm *v1; // eax
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  bool v7; // cc
  signed int v8; // esi
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  FILE *v12; // eax
  FILE *v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  void *v19; // ecx
  void *v20; // ecx
  void *v21; // ecx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  int v24; // ecx
  void *v25; // ecx
  _BYTE *v26; // ecx
  void *v28; // [esp-18h] [ebp-398h]
  int v29; // [esp-14h] [ebp-394h]
  int v30; // [esp-10h] [ebp-390h]
  int v31; // [esp-Ch] [ebp-38Ch]
  int v32; // [esp-Ch] [ebp-38Ch]
  int v33; // [esp-Ch] [ebp-38Ch]
  int v34; // [esp-8h] [ebp-388h]
  int v35; // [esp-8h] [ebp-388h]
  int v36; // [esp-8h] [ebp-388h]
  int v37; // [esp-4h] [ebp-384h]
  int v38; // [esp-4h] [ebp-384h]
  int v39; // [esp-4h] [ebp-384h]
  char v40; // [esp+0h] [ebp-380h]
  int v41; // [esp+0h] [ebp-380h]
  int v42; // [esp+0h] [ebp-380h]
  char v43; // [esp+0h] [ebp-380h]
  void *v44[5]; // [esp+18h] [ebp-368h] BYREF
  unsigned int v45; // [esp+2Ch] [ebp-354h]
  void *Block[5]; // [esp+30h] [ebp-350h] BYREF
  unsigned int v47; // [esp+44h] [ebp-33Ch]
  void *v48[5]; // [esp+48h] [ebp-338h] BYREF
  unsigned int v49; // [esp+5Ch] [ebp-324h]
  DWORD v50; // [esp+60h] [ebp-320h]
  int v51; // [esp+64h] [ebp-31Ch]
  int v52; // [esp+68h] [ebp-318h]
  int v53; // [esp+6Ch] [ebp-314h]
  int v54; // [esp+70h] [ebp-310h]
  char v55; // [esp+77h] [ebp-309h]
  int v56[44]; // [esp+78h] [ebp-308h] BYREF
  int v57[46]; // [esp+128h] [ebp-258h] BYREF
  void *v58[5]; // [esp+1E0h] [ebp-1A0h] BYREF
  unsigned int v59; // [esp+1F4h] [ebp-18Ch]
  __time64_t Time; // [esp+1F8h] [ebp-188h] BYREF
  void *Src; // [esp+200h] [ebp-180h] BYREF
  int v62; // [esp+210h] [ebp-170h]
  unsigned int v63; // [esp+214h] [ebp-16Ch]
  int v64; // [esp+218h] [ebp-168h] BYREF
  DWORD flOldProtect; // [esp+21Ch] [ebp-164h] BYREF
  int v66[12]; // [esp+220h] [ebp-160h] BYREF
  _QWORD v67[2]; // [esp+250h] [ebp-130h] BYREF
  int v68; // [esp+260h] [ebp-120h]
  int v69; // [esp+264h] [ebp-11Ch]
  char v70[16]; // [esp+268h] [ebp-118h] BYREF
  int v71; // [esp+278h] [ebp-108h]
  int v72; // [esp+27Ch] [ebp-104h]
  char v73[16]; // [esp+280h] [ebp-100h] BYREF
  int v74; // [esp+290h] [ebp-F0h]
  int v75; // [esp+294h] [ebp-ECh]
  char v76[16]; // [esp+298h] [ebp-E8h] BYREF
  int v77; // [esp+2A8h] [ebp-D8h]
  int v78; // [esp+2ACh] [ebp-D4h]
  char v79[16]; // [esp+2B0h] [ebp-D0h] BYREF
  int v80; // [esp+2C0h] [ebp-C0h]
  int v81; // [esp+2C4h] [ebp-BCh]
  char v82[16]; // [esp+2C8h] [ebp-B8h] BYREF
  int v83; // [esp+2D8h] [ebp-A8h]
  int v84; // [esp+2DCh] [ebp-A4h]
  char v85[16]; // [esp+2E0h] [ebp-A0h] BYREF
  int v86; // [esp+2F0h] [ebp-90h]
  int v87; // [esp+2F4h] [ebp-8Ch]
  char v88[16]; // [esp+2F8h] [ebp-88h] BYREF
  int v89; // [esp+308h] [ebp-78h]
  int v90; // [esp+30Ch] [ebp-74h]
  char v91[16]; // [esp+310h] [ebp-70h] BYREF
  int v92; // [esp+320h] [ebp-60h]
  int v93; // [esp+324h] [ebp-5Ch]
  char v94[16]; // [esp+328h] [ebp-58h] BYREF
  int v95; // [esp+338h] [ebp-48h]
  int v96; // [esp+33Ch] [ebp-44h]
  char v97[16]; // [esp+340h] [ebp-40h] BYREF
  int v98; // [esp+350h] [ebp-30h]
  int v99; // [esp+354h] [ebp-2Ch]
  char v100[16]; // [esp+358h] [ebp-28h] BYREF
  int v101; // [esp+368h] [ebp-18h]
  int v102; // [esp+36Ch] [ebp-14h]
  int v103; // [esp+37Ch] [ebp-4h]

  flOldProtect = 0;
  v68 = 0;
  v69 = 15;
  LOBYTE(v67[0]) = 0;
  sub_10002580(v67, "KcP8PS1S", 8u);
  v103 = 0;
  v71 = 0;
  v72 = 15;
  v70[0] = 0;
  sub_10002580(v70, "TTjzHh", 6u);
  LOBYTE(v103) = 1;
  v74 = 0;
  v75 = 15;
  v73[0] = 0;
  sub_10002580(v73, "o3YIs", 5u);
  LOBYTE(v103) = 2;
  v77 = 0;
  v78 = 15;
  v76[0] = 0;
  sub_10002580(v76, "Sz2Cs", 5u);
  LOBYTE(v103) = 3;
  v80 = 0;
  v81 = 15;
  v79[0] = 0;
  sub_10002580(v79, "ILkAl", 5u);
  LOBYTE(v103) = 4;
  v83 = 0;
  v84 = 15;
  v82[0] = 0;
  sub_10002580(v82, "6KjhIOL", 7u);
  LOBYTE(v103) = 5;
  v86 = 0;
  v87 = 15;
  v85[0] = 0;
  sub_10002580(v85, "ILbZ", 4u);
  LOBYTE(v103) = 6;
  v89 = 0;
  v90 = 15;
  v88[0] = 0;
  sub_10002580(v88, "bPvBLy", 6u);
  LOBYTE(v103) = 7;
  v92 = 0;
  v93 = 15;
  v91[0] = 0;
  sub_10002580(v91, "YRtuk0", 6u);
  LOBYTE(v103) = 8;
  v95 = 0;
  v96 = 15;
  v94[0] = 0;
  sub_10002580(v94, "iqtH4Say", 8u);
  LOBYTE(v103) = 9;
  v98 = 0;
  v99 = 15;
  v97[0] = 0;
  sub_10002580(v97, "rjwcA", 5u);
  LOBYTE(v103) = 10;
  v101 = 0;
  v102 = 15;
  v100[0] = 0;
  sub_10002580(v100, "rTNt", 4u);
  v103 = 12;
  memset(v66, 0, sizeof(v66));
  v0 = 15;
  v62 = 0;
  v63 = 15;
  LOBYTE(Src) = 0;
  Time = time64(0);
  v1 = gmtime64(&Time);
  v2 = *(__m128i *)&v1->tm_mon;
  v3 = *(__m128i *)&v1->tm_sec;
  v45 = v1->tm_isdst;
  v4 = _mm_cvtsi128_si32(v2);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 12));
  flOldProtect = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v64 = 0;
  v50 = 100 * (flOldProtect + 100 * (v5 + 100 * v4));
  v53 = _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  v54 = 1410065408 * _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  v6 = _mm_cvtsi128_si32(v3);
  v51 = v6 + v54 + 100 * (v50 + v53);
  v52 = v6;
  if ( v4 == 1 )
  {
    v7 = v5 + 1 <= 28;
  }
  else
  {
    if ( (v4 == 5 || v4 == 3 || v4 == 8 || v4 == 10) && v5 + 1 > 30 )
      goto LABEL_15;
    if ( v4 == 5 || v4 == 3 || v4 == 8 || v4 == 10 )
      goto LABEL_14;
    v7 = v5 + 1 <= 31;
  }
  if ( v7 )
  {
LABEL_14:
    v8 = v52 + v54 + 100 * (v50 + 10000 + v53);
    goto LABEL_17;
  }
LABEL_15:
  v9 = v54;
  v8 = v52 + v54 + 100 * (v53 + 100 * (flOldProtect + 10100 + 10000 * v4));
  v54 = v8;
  if ( v4 + 1 <= 11 )
    goto LABEL_18;
  v8 = v9 + 100 * (v53 + 100 * flOldProtect) + v52 + 1411065408;
LABEL_17:
  v54 = v8;
LABEL_18:
  if ( (unsigned __int8)sub_10028180() != 1 )
  {
    memset(v57, 0, sizeof(v57));
    v57[0] = (int)&unk_100308D8;
    std::ios::ios(&v57[28]);
    LOBYTE(v103) = 14;
    flOldProtect = 1;
    std::istream::istream(v57, &v57[4], 0, 0);
    v103 = 15;
    *(int *)((char *)v57 + *(_DWORD *)(v57[0] + 4)) = (int)&std::ifstream::`vftable';
    *(int *)((char *)&v56[43] + *(_DWORD *)(v57[0] + 4)) = *(_DWORD *)(v57[0] + 4) - 112;
    v50 = (DWORD)&v57[4];
    std::streambuf::streambuf(&v57[4]);
    LOBYTE(v103) = 16;
    v57[4] = (int)&std::filebuf::`vftable';
    LOBYTE(v57[22]) = 0;
    BYTE1(v57[19]) = 0;
    std::streambuf::_Init(&v57[4]);
    v57[23] = 0;
    v57[20] = dword_10034908;
    v57[21] = dword_1003490C;
    v57[18] = 0;
    LOBYTE(v103) = 17;
    if ( !sub_1002A9D0(dword_1003490C, 1, dword_1003490C) )
      std::ios::setstate((char *)v57 + *(_DWORD *)(v57[0] + 4), 2, 0);
    LOBYTE(v103) = 18;
    std::istream::operator>>(v57, &v64);
    if ( v64 >= v51 && v64 <= v8 )
    {
      if ( !sub_1002A970(&v57[4]) )
        std::ios::setstate((char *)v57 + *(_DWORD *)(v57[0] + 4), 2, 0);
      v55 = 1;
LABEL_58:
      sub_10028F60(v57);
      goto LABEL_59;
    }
    v58[4] = 0;
    v59 = 15;
    LOBYTE(v58[0]) = 0;
    sub_10002580(v58, "https://direct-link.net/22769/", 0x1Eu);
    LOBYTE(v103) = 19;
    v11 = time64(0);
    srand(v11);
    flOldProtect = 0;
    VirtualProtect(FreeConsole, 1u, 0x40u, &flOldProtect);
    FreeConsole = (BOOL (__stdcall *)())194;
    AllocConsole();
    v12 = _acrt_iob_func(1u);
    freopen("CONOUT$", "w", v12);
    v13 = _acrt_iob_func(0);
    freopen("CONIN$", "r", v13);
    v14 = GetConsoleWindow();
    SetWindowLongA(v14, -16, 13238400);
    v15 = GetConsoleWindow();
    SetWindowPos(v15, HWND_MESSAGE|0x2, 0, 0, 0, 0, 0x63u);
    SetConsoleTitleA("hi");
    sub_100268F0("24 hours key do all the tasks to get the key!\n", v40);
    do
    {
      v16 = rand() % 12;
      ++v66[v16];
    }
    while ( v66[v16] > 1 );
    v48[4] = 0;
    v49 = 15;
    LOBYTE(v48[0]) = 0;
    sub_10002580(v48, "start ", 6u);
    LOBYTE(v103) = 20;
    v17 = sub_1002ADC0(v44, v48, v58);
    LOBYTE(v103) = 21;
    v18 = sub_1002ADC0(Block, v17, &v67[3 * v16]);
    LOBYTE(v103) = 22;
    if ( *(_DWORD *)(v18 + 20) >= 0x10u )
      v18 = *(_DWORD *)v18;
    system((const char *)v18);
    LOBYTE(v103) = 21;
    if ( v47 >= 0x10 )
    {
      v19 = Block[0];
      if ( v47 + 1 >= 0x1000 )
      {
        v19 = (void *)*((_DWORD *)Block[0] - 1);
        if ( (unsigned int)(Block[0] - v19 - 4) > 0x1F )
          goto LABEL_44;
      }
      sub_1002B9CE(v19);
    }
    LOBYTE(v103) = 20;
    Block[4] = 0;
    v47 = 15;
    LOBYTE(Block[0]) = 0;
    if ( v45 < 0x10 )
      goto LABEL_41;
    v20 = v44[0];
    if ( v45 + 1 < 0x1000 || (v20 = (void *)*((_DWORD *)v44[0] - 1), (unsigned int)(v44[0] - v20 - 4) <= 0x1F) )
    {
      sub_1002B9CE(v20);
LABEL_41:
      LOBYTE(v103) = 19;
      v44[4] = 0;
      v45 = 15;
      LOBYTE(v44[0]) = 0;
      if ( v49 >= 0x10 )
      {
        v21 = v48[0];
        if ( v49 + 1 >= 0x1000 )
        {
          v21 = (void *)*((_DWORD *)v48[0] - 1);
          if ( (unsigned int)(v48[0] - v21 - 4) > 0x1F )
            goto LABEL_44;
        }
        sub_1002B9CE(v21);
      }
      sub_1002AE60(v41);
      sub_1002AE60(v42);
      v22 = std::ios::widen(std::cin + *(_DWORD *)(std::cin + 4), 10);
      sub_1002B4E0(v22);
      if ( !v62 )
      {
        v23 = std::ios::widen(std::cin + *(_DWORD *)(std::cin + 4), 10);
        sub_1002B4E0(v23);
      }
      sub_100024B0(&Src);
      if ( (unsigned __int8)sub_10028270(v28, v29, v30, v32, v35, v38) )
      {
        memset(v56, 0, sizeof(v56));
        sub_1002A4B0(v24, v33, v36, v39);
        LOBYTE(v103) = 23;
        std::ostream::operator<<(v56, v54);
        if ( !sub_1002A970(&v56[1]) )
          std::ios::setstate((char *)v56 + *(_DWORD *)(v56[0] + 4), 2, 0);
        sub_10028EA0();
        v55 = 1;
      }
      else
      {
        sub_100268F0("Wrong keys\n", v43);
        v55 = 0;
      }
      LOBYTE(v103) = 18;
      if ( v59 >= 0x10 )
      {
        v25 = v58[0];
        if ( v59 + 1 >= 0x1000 )
        {
          v25 = (void *)*((_DWORD *)v58[0] - 1);
          if ( (unsigned int)(v58[0] - v25 - 4) > 0x1F )
LABEL_62:
            invalid_parameter_noinfo_noreturn();
        }
        sub_1002B9CE(v25);
      }
      v0 = v63;
      goto LABEL_58;
    }
LABEL_44:
    invalid_parameter_noinfo_noreturn();
  }
  memset(v56, 0, sizeof(v56));
  sub_1002A4B0(v10, v31, v34, v37);
  LOBYTE(v103) = 13;
  std::ostream::operator<<(v56, v8);
  if ( !sub_1002A970(&v56[1]) )
    std::ios::setstate((char *)v56 + *(_DWORD *)(v56[0] + 4), 2, 0);
  sub_10028EA0();
  v55 = 1;
LABEL_59:
  LOBYTE(v103) = 11;
  if ( v0 >= 0x10 )
  {
    v26 = Src;
    if ( v0 + 1 >= 0x1000 )
    {
      v26 = (_BYTE *)*((_DWORD *)Src - 1);
      if ( (unsigned int)((_BYTE *)Src - v26 - 4) > 0x1F )
        goto LABEL_62;
    }
    sub_1002B9CE(v26);
  }
  v103 = -1;

  sub_1002BE34(v67, 24, 12, &loc_10002460);
  return v55;
}
