//This is the MAIN.cpp part of CocoBytecode.dll
// write access to const memory has been detected, the output may be wrong!
BOOL sub_1027DAA7()//more like Main(); in better understanding
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  const char *v4; // edx
  int v5; // ecx
  const char *v6; // edx
  int v7; // ecx
  const char *v8; // edx
  const char *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  char v27; // al
  BOOL result; // eax
  int v31; // [esp-68h] [ebp-6Ch] BYREF
  int v32; // [esp-5Ch] [ebp-60h]
  HWND v33; // [esp-58h] [ebp-5Ch]
  const char *v34; // [esp-54h] [ebp-58h]
  DWORD v35; // [esp-50h] [ebp-54h]
  _DWORD v36[5]; // [esp-44h] [ebp-48h] BYREF
  unsigned int v37; // [esp-30h] [ebp-34h]
  _DWORD v38[4]; // [esp-2Ch] [ebp-30h] BYREF
  int v39; // [esp-1Ch] [ebp-20h]
  unsigned int v40; // [esp-18h] [ebp-1Ch]
  DWORD v41[4]; // [esp-14h] [ebp-18h] BYREF
  int v42; // [esp-4h] [ebp-8h]

  v42 = -1;//idfk
  v41[3] = (DWORD)sub_101A07D5;//idfk
  v41[2] = (DWORD)NtCurrentTeb()->NtTib.ExceptionList;//idfk
  v35 = v41[1];//idfk
  VirtualProtect(FreeConsole, 1u, 0x40u, v41);//Console
  LOBYTE(FreeConsole) = -61;//console
  VirtualProtect(FreeConsole, 1u, v41[0], 0);//idfk
  AllocConsole();//init input
  SetConsoleTitleA("Coco Debug Console |GET FUCKED BY CLXYTIFY ASSHOLE");//set the console title
  v34 = (const char *)sub_10122B3A(1);//idfk
  sub_1012C7E6("CONOUT$", "w", v34);//idfk
  v34 = (const char *)sub_10122B3A(0);//idfk
  sub_1012C7E6("CONIN$", "r", v34);//idfk
  v16 = sub_1004DE80(&unk_102750D8);//idfk
  v24 = sub_10006910(v16, "[");//idfk
  v33 = (HWND)sub_1004DE40(v24);//idfk
  v1 = sub_10006910(v33, "Coco Z");//output such as {CocoZ} some fancy shit
  v33 = (HWND)sub_1004DE80(v1);//idfk
  v15 = sub_10006910(v33, "] - ");//idfk
  v33 = (HWND)sub_1004DEA0(v15);//idfk
  sub_10006910(v33, "Welcome To Coco!\n");//Welcome to Cock!
  v33 = (HWND)sub_1004DE80(&unk_102750D8);//idfk
  v32 = sub_10006910(v33, "[");//more outpit
  v33 = (HWND)sub_1004DE40(v32);//god damn
  v0 = sub_10006910(v33, "Coco Z");//Cock Z
  v33 = (HWND)sub_1004DE80(v0);//idfk
  v12 = sub_10006910(v33, "] - ");//idfk
  v33 = (HWND)sub_1004DEA0(v12);//idfk
  cockandballtorture(v33, "Please Wait While We Check Your Key!\n");//Check your KEY! Nice messages adam
  sub_1005D9A0(v36);//idfk
  v42 = 0;//idfk
  v41[0] = (DWORD)&v31;//idfk
  sub_10005D40(v36);//idfk
  LOBYTE(v42) = 1;//idfk
  sub_10005E00("https://key.cocotechnology.tech/autologin", 41);//may check key? idk
  LOBYTE(v42) = 0;//idfk
  sub_10071690(v38, 0);//idfk
  if ( (unsigned __int8)sub_100768D0(v38, &dword_10256988) || (v27 = sub_100768D0(v38, &unk_101DFC5A)) != 0 )//idfk
  {
    if ( v40 >= 0x10 )//idfk
    {
      v5 = v38[0];//idfk
      v6 = (const char *)(v40 + 1);//idfk
      if ( (unsigned int)v6 >= 0x1000 )//idfk
      {
        v5 = *(_DWORD *)(v38[0] - 4);//idfk
        v6 = (const char *)(v40 + 36);//idfk
        if ( (unsigned int)(v38[0] - v5 - 4) > 0x1F )//idfk
          goto LABEL_31;//idfk
      }
      v34 = v6;//idfk
      sub_100A27C3(v5);//idfk//idfk
    }
    v42 = -1;//idfk//idfk
    v39 = 0;//idfk//idfk
    v40 = 15;//idfk//idfk
    LOBYTE(v38[0]) = 0;//idfk
    if ( v37 >= 0x10 )//idfk
    {
      v3 = v36[0];//idfk
      v4 = (const char *)(v37 + 1);//idfk
      if ( (unsigned int)v4 >= 0x1000 )//idfk
      {//idfk
        v3 = *(_DWORD *)(v36[0] - 4);//idfk
        v4 = (const char *)(v37 + 36);//idfk
        if ( (unsigned int)(v36[0] - v3 - 4) > 0x1F )//idfk
          goto LABEL_31;//idfk
      }
      v34 = v4;//idfk
      sub_100A27C3(v3);//idfk
    }
    v18 = sub_1004DE80(&unk_102750D8);//idfk
    v32 = sub_10006910(v18, "[");//more text
    v19 = sub_1004DE40(v32);//idfk
    v32 = sub_10006910(v19, "Coco Z");//Cock Z
    v22 = sub_1004DE80(v32);//idfk
    v23 = sub_10006910(v22, "] - ");//idfk
    v34 = "Sorry, Your Key Does Not Appear To Be Valid. Please Reopen Coco To Get A New Key!\n";//idfk
    exit(0);//meme
    v33 = (HWND)sub_1004DEA0(v23);//idfk
    sub_10006910(v33, v34);//idfk
    MEMORY[0](v35);//idfk
    goto LABEL_3;//idfk
  }
  if ( v40 >= 0x10 )//idfk
  {
    v25 = v38[0];//idfk
    v9 = (const char *)(v40 + 1);//idfk
    if ( (unsigned int)v9 >= 0x1000 )//idfk
    {//idfk
      v25 = *(_DWORD *)(v38[0] - 4);//idfk
      v9 = (const char *)(v40 + 36);//idfk
      if ( (unsigned int)(v38[0] - v25 - 4) > 0x1F )//idfk
        goto LABEL_31;//idfk
    }
    v34 = v9;
    sub_100A27C3(v25);
  }
  v42 = -1;//idfk
  v39 = 0;//idfk
  v40 = 15;//idfk
  LOBYTE(v38[0]) = 0;//idfk
  if ( v37 < 0x10 )
    goto LABEL_21;//idfk
  v7 = v36[0];//idfk
  v8 = (const char *)(v37 + 1);//idfk
  if ( (unsigned int)v8 >= 0x1000 )//idfk
  {//idfk
    v7 = *(_DWORD *)(v36[0] - 4);//idfk
    v8 = (const char *)(v37 + 36);//idfk
    if ( (unsigned int)(v36[0] - v7 - 4) > 0x1F )//idfk
LABEL_31://idfk
      sub_1012208E(v35);//idfk
  }
  v34 = v8;//idfk
  sub_100A27C3(v7);//idfk
LABEL_21://idfk
  v20 = sub_1004DE80(&unk_102750D8);//idfk
  v32 = sub_10006910(v20, "[");
  v2 = sub_1004DE40(v32);//idfk
  v32 = sub_10006910(v2, "Coco Z");//idfk
  v17 = sub_1004DE80(v32);
  v14 = sub_10006910(v17, "] - ");
  v34 = "Key Validation Successful!\n";//Valditation? retarded
  v33 = (HWND)sub_1004DEA0(v14);
  sub_10006910(v33, v34);//idfk
LABEL_3:
  sub_10063230();//idfk
  sub_10130D85("cls");//clear console represents as 'system'
  v10 = sub_1004DE80(&unk_102750D8);
  v32 = sub_10006910(v10, "[");
  v13 = sub_1004DE40(v32);
  v32 = sub_10006910(v13, "Coco Z");
  v26 = sub_1004DE80(v32);
  v11 = sub_10006910(v26, "] - ");
  v34 = "Ready For Execution!\n";//who asked u and use endl; retard
  v21 = sub_1004DEA0(v11);//idfk
  sub_10006910(v21, v34);//do some
  CreateThread(0, 0, sub_10071B90, 0, 0, 0);//make pipe
  v34 = 0;//idfk
  v33 = GetConsoleWindow();//hide console
  result = ShowWindow(v33, (int)v34);
  _CX = v35;//idfk
  __asm { rcl     cx, cl }//asm CODE! wtf
  return result;
}

// execute Coc Z script!!!!1!!

int __cdecl sub_1005FB60(int a1)
{
  int v1; // esi
  int v2; // ecx
  __int32 v3; // edi
  int v4; // ecx
  int v5; // esi
  int v6; // ecx
  int (__cdecl *v7)(int, int); // edi
  int v8; // esi
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edi
  __int32 v12; // edi
  int v13; // esi
  __int32 v14; // edi
  int v15; // esi
  int (__cdecl **v16)(int, int); // eax
  __int32 v17; // esi
  __int32 v18; // edx
  int v19; // ecx
  int v20; // esi
  int (__cdecl **v21)(int, int); // eax
  int v22; // ecx
  __int32 v23; // esi
  int (__cdecl *v24)(int, int); // edi
  int v25; // esi
  int v26; // ecx
  int v27; // edi
  int (__cdecl *v28)(int, int); // esi
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int (__cdecl **v33)(int, int); // eax
  int (__cdecl *v34)(int, int); // esi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  _DWORD *v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int32 v49; // [esp-10h] [ebp-1B4h]
  __int32 v50; // [esp-10h] [ebp-1B4h]
  __int32 v51; // [esp-10h] [ebp-1B4h]
  int v52; // [esp-8h] [ebp-1ACh]
  int v53; // [esp-8h] [ebp-1ACh]
  int v54; // [esp-8h] [ebp-1ACh]
  int v55; // [esp-4h] [ebp-1A8h]
  __int32 v56; // [esp-4h] [ebp-1A8h]
  __int32 v57; // [esp-4h] [ebp-1A8h]
  char v58[12]; // [esp+Ch] [ebp-198h] BYREF
  int v59; // [esp+18h] [ebp-18Ch] BYREF
  int (__cdecl *v60)(int, int); // [esp+1Ch] [ebp-188h]
  char v61; // [esp+23h] [ebp-181h] BYREF
  __int128 v62[2]; // [esp+24h] [ebp-180h] BYREF
  __int128 v63[2]; // [esp+44h] [ebp-160h] BYREF
  __m128i v64; // [esp+64h] [ebp-140h] BYREF
  __m128i v65; // [esp+74h] [ebp-130h]
  __m128i v66; // [esp+84h] [ebp-120h] BYREF
  __m128i v67; // [esp+94h] [ebp-110h]
  __m128i v68; // [esp+A4h] [ebp-100h] BYREF
  __m128i v69; // [esp+B4h] [ebp-F0h] BYREF
  __m128i v70; // [esp+C4h] [ebp-E0h] BYREF
  __m128i v71; // [esp+D4h] [ebp-D0h]
  __m128i v72; // [esp+E4h] [ebp-C0h] BYREF
  __m128i v73; // [esp+F4h] [ebp-B0h]
  __m128i v74; // [esp+104h] [ebp-A0h] BYREF
  __m128i v75; // [esp+114h] [ebp-90h]
  __m128i v76; // [esp+124h] [ebp-80h] BYREF
  __m128i v77; // [esp+134h] [ebp-70h]
  __m128i v78; // [esp+144h] [ebp-60h] BYREF
  __m128i v79; // [esp+154h] [ebp-50h]
  char v80[24]; // [esp+164h] [ebp-40h] BYREF
  char v81[16]; // [esp+17Ch] [ebp-28h] BYREF
  int v82; // [esp+18Ch] [ebp-18h]
  int v83; // [esp+1A0h] [ebp-4h]

  v1 = a1;
  dword_102762C8(a1, 1, 9);
  dword_102762C8(a1, 2, 9);
  v78.m128i_i32[0] = dword_102763E8(a1, 1);
  v78.m128i_i32[1] = *(_DWORD *)(v78.m128i_i32[0] + 24) - v78.m128i_i32[0] - 24;
  v2 = *(_DWORD *)(v78.m128i_i32[0] + 24);
  v78.m128i_i32[3] = v78.m128i_i32[0] + 8;
  v79.m128i_i32[0] = v78.m128i_i32[0] + 7;
  v78.m128i_i32[2] = v2 - v78.m128i_i32[0] - 24;
  v79.m128i_i32[1] = v78.m128i_i32[0] + 16;
  v79.m128i_i32[2] = v78.m128i_i32[0] + 44;
  v79.m128i_i32[3] = v78.m128i_i32[0] + 9;
  v77.m128i_i32[0] = 0;
  v76.m128i_i64[0] = (unsigned int)dword_102763E8(a1, 2);
  v73 = v79;
  v3 = *(_DWORD *)(v76.m128i_i32[0] + 24) - v76.m128i_i32[0] - 24;
  v76.m128i_i32[1] = v3;
  v4 = *(_DWORD *)(v76.m128i_i32[0] + 24);
  v76.m128i_i32[3] = v76.m128i_i32[0] + 8;
  v77.m128i_i32[0] = v76.m128i_i32[0] + 7;
  v77.m128i_i32[1] = v76.m128i_i32[0] + 16;
  v77.m128i_i32[2] = v76.m128i_i32[0] + 44;
  v77.m128i_i32[3] = v76.m128i_i32[0] + 9;
  v76.m128i_i32[2] = v4 - v76.m128i_i32[0] - 24;
  v72 = v78;
  v79.m128i_i32[0] = _mm_cvtsi128_si32(v79);
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    v78.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v78, 4));
    if ( v78.m128i_i32[1] == dword_10276350 )
    {
      sub_10074110(&v72);
    }
    else
    {
      v70 = v76;
      v71 = v77;
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        if ( v3 == dword_10276350 )
        {
          sub_10074110(&v70);
        }
        else
        {
          v49 = v78.m128i_i32[1];
          *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v76.m128i_i32[1] + 24;
          dword_10276410(a1, v49, 0, 0, 0);
        }
      }
    }
  }
  v66 = v78;
  v67 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v66) != sub_1005F500 )
    {
      v64 = v76;
      v65 = v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        v76.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v76, 4));
        if ( v76.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v64) != sub_1005F500 )
        {
          sub_10074110(&v78);
          v5 = *(_DWORD *)sub_10074110(&v76);
          *(_DWORD *)sub_10074110(&v78) = v5;
          v1 = a1;
          sub_1004EC50(v6);
        }
      }
    }
  }
  v63[0] = (__int128)v78;
  v63[1] = (__int128)v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(v63) == sub_1005F500 )
    {
      v62[0] = (__int128)v76;
      v62[1] = (__int128)v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        v76.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v76, 4));
        if ( v76.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(v62) == sub_1005F500 )
        {
          v7 = *(int (__cdecl **)(int, int))sub_10074110(&v78);
          v8 = *(_DWORD *)sub_10074110(&v76);
          *(_DWORD *)sub_10074110(&v78) = v8;
          v1 = a1;
          sub_1004EC50(v9);
          v59 = dword_102763E8(a1, -1);
          v60 = v7;
          sub_100785C0(&v69.m128i_u64[1], &v59);
        }
      }
    }
  }
  v68 = v78;
  v69 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 )
      sub_10074110(&v68);
  }
  else
  {
    v74 = v76;
    v75 = v77;
    if ( *(_BYTE *)v77.m128i_i32[0] )
    {
      if ( v76.m128i_i32[1] == dword_10276350 )
        sub_10074110(&v74);
    }
    else
    {
      *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v76.m128i_i32[1] + 24;
      v10 = (_DWORD *)dword_1027640C(v1, 0, *(_DWORD *)(v78.m128i_i32[0] + 56), v78.m128i_i32[1]);
      v10[6] = (char *)v10 + v78.m128i_i32[1] + 24;
      v10[2] = *(_DWORD *)v78.m128i_i32[3];
      v10[4] = *(_DWORD *)v79.m128i_i32[1];
      *(_DWORD *)((char *)v10 + 9) = *(_DWORD *)(v78.m128i_i32[1] + 82);
      *(_DWORD *)(*(_DWORD *)(v1 + 24) + 12) = 9;
      **(_DWORD **)(v1 + 24) = v10;
      *(_DWORD *)(v1 + 24) += 16;
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 )
    {
      sub_10074110(&v74);
    }
    else
    {
      v74 = v76;
      v75 = v77;
      if ( *(_BYTE *)v77.m128i_i32[0]
        && v76.m128i_i32[1] == dword_10276350
        && *(int (__cdecl **)(int, int))sub_10074110(&v74) != sub_1005F500 )
      {
        v12 = v78.m128i_i32[1];
        *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + dword_10276350 + 24;
        v13 = *(_DWORD *)sub_10074110(&v76);
        v50 = v12;
        v11 = a1;
        *(_DWORD *)sub_10074110(&v78) = v13;
        dword_10276410(a1, v50, 0, 0, 0);
        goto LABEL_33;
      }
    }
  }
  v11 = a1;
LABEL_33:
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 )
    {
      sub_10074110(&v74);
    }
    else
    {
      v74 = v76;
      v75 = v77;
      if ( *(_BYTE *)v77.m128i_i32[0]
        && v76.m128i_i32[1] == dword_10276350
        && *(int (__cdecl **)(int, int))sub_10074110(&v74) == sub_1005F500 )
      {
        v14 = v78.m128i_i32[1];
        *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + dword_10276350 + 24;
        v15 = *(_DWORD *)sub_10074110(&v76);
        *(_DWORD *)sub_10074110(&v78) = v15;
        v16 = (int (__cdecl **)(int, int))sub_10074110(&v76);
        v59 = v78.m128i_i32[0];
        v60 = *v16;
        sub_100785C0(&v69.m128i_u64[1], &v59);
        v51 = v14;
        v11 = a1;
        dword_10276410(a1, v51, 0, 0, 0);
      }
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 )
      goto LABEL_46;
    v74 = v76;
    v75 = v77;
    if ( !*(_BYTE *)v77.m128i_i32[0] )
    {
      v17 = v78.m128i_i32[1];
      v60 = sub_1005F500;
      *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + dword_10276350 + 24;
      v59 = v78.m128i_i32[0];
      sub_100785C0(&v69.m128i_u64[1], &v59);
      sub_100741D0(&v78);
      v59 = v78.m128i_i32[0];
      v60 = (int (__cdecl *)(int, int))v76.m128i_i32[0];
      sub_100785C0(&v69.m128i_u64[1], &v59);
      v18 = v76.m128i_i32[0];
      *(_DWORD *)(*(_DWORD *)(v11 + 24) + 12) = 9;
      **(_DWORD **)(v11 + 24) = v18;
      *(_DWORD *)(v11 + 24) += 16;
      dword_10276378(v11, -10000);
      dword_10276410(v11, v17, 0, 0, 0);
      goto LABEL_51;
    }
    if ( v76.m128i_i32[1] == dword_10276350 )
LABEL_46:
      sub_10074110(&v74);
  }
LABEL_51:
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) != sub_1005F500 )
    {
      v74 = v76;
      v75 = v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        if ( v76.m128i_i32[1] == dword_10276350 )
        {
          sub_10074110(&v74);
        }
        else
        {
          sub_10074110(&v78);
          *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v76.m128i_i32[1] + 24;
          sub_100741D0(&v78);
          sub_1004EC50(v19);
        }
      }
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) != sub_1005F500 )
    {
      v74 = v76;
      v75 = v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        if ( v76.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) == sub_1005F500 )
        {
          sub_10074110(&v78);
          v20 = *(_DWORD *)sub_10074110(&v76);
          *(_DWORD *)sub_10074110(&v78) = v20;
          v21 = (int (__cdecl **)(int, int))sub_10074110(&v76);
          v59 = v78.m128i_i32[0];
          v60 = *v21;
          sub_100785C0(&v69.m128i_u64[1], &v59);
          sub_1004EC50(v22);
        }
      }
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0]
    && v78.m128i_i32[1] == dword_10276350
    && *(int (__cdecl **)(int, int))sub_10074110(&v74) != sub_1005F500 )
  {
    v74 = v76;
    v75 = v77;
    v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
    if ( *(_BYTE *)v77.m128i_i32[0] )
    {
      if ( v76.m128i_i32[1] == dword_10276350 )
        sub_10074110(&v74);
    }
    else
    {
      sub_10074110(&v78);
      *(_DWORD *)sub_10074110(&v78) = sub_1005F500;
      sub_100741D0(&v78);
      v59 = v78.m128i_i32[0];
      v60 = (int (__cdecl *)(int, int))v76.m128i_i32[0];
      sub_100785C0(&v69.m128i_u64[1], &v59);
      v23 = v76.m128i_i32[0];
      *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) = 9;
      **(_DWORD **)(a1 + 24) = v23;
      *(_DWORD *)(a1 + 24) += 16;
      dword_10276378(a1, -10000);
      sub_1004EC50(v55);
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) == sub_1005F500 )
    {
      v74 = v76;
      v75 = v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        if ( v76.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) != sub_1005F500 )
        {
          v24 = *(int (__cdecl **)(int, int))sub_10074110(&v78);
          v25 = *(_DWORD *)sub_10074110(&v76);
          *(_DWORD *)sub_10074110(&v78) = v25;
          sub_1004EC50(v26);
          sub_100741D0(&v78);
          v59 = dword_102763E8(a1, -1);
          v60 = v24;
          sub_100785C0(&v69.m128i_u64[1], &v59);
        }
      }
    }
  }
  v74 = v78;
  v75 = v79;
  if ( *(_BYTE *)v79.m128i_i32[0] )
  {
    if ( v78.m128i_i32[1] == dword_10276350 && *(int (__cdecl **)(int, int))sub_10074110(&v74) == sub_1005F500 )
    {
      v74 = v76;
      v75 = v77;
      v77.m128i_i32[0] = _mm_cvtsi128_si32(v77);
      if ( *(_BYTE *)v77.m128i_i32[0] )
      {
        if ( v76.m128i_i32[1] != dword_10276350 )
        {
          v33 = (int (__cdecl **)(int, int))sub_10074110(&v78);
          v27 = a1;
          v57 = v78.m128i_i32[0];
          v34 = *v33;
          *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v76.m128i_i32[1] + 24;
          sub_1004EC50(v57);
          sub_100741D0(&v78);
          v59 = dword_102763E8(a1, -1);
          v60 = v34;
          sub_100785C0(&v69.m128i_u64[1], &v59);
          goto LABEL_86;
        }
        sub_10074110(&v74);
      }
    }
  }
  v27 = a1;
LABEL_86:
  if ( sub_1005F8E0(v78.m128i_i8[0], v78.m128i_i32[1], v78.m128i_i32[2], v78.m128i_i32[3], v79.m128i_i32[0]) == 1
    && sub_1005F8E0(v76.m128i_i8[0], v76.m128i_i32[1], v76.m128i_i32[2], v76.m128i_i32[3], v77.m128i_i32[0]) == 3 )
  {
    v28 = *(int (__cdecl **)(int, int))sub_10074110(&v78);
    sub_10051C60(9);
    dword_10276378(v27, -10000);
    v29 = (_DWORD *)sub_10074110(&v78);
    v56 = v76.m128i_i32[0];
    *v29 = v76.m128i_i32[0];
    sub_1004EC50(v56);
    v59 = dword_102763E8(v27, -1);
    v60 = v28;
    sub_100768B0(&v69.m128i_u64[1], &v59);
  }
  if ( sub_1005F8E0(v78.m128i_i8[0], v78.m128i_i32[1], v78.m128i_i32[2], v78.m128i_i32[3], v79.m128i_i32[0]) == 3
    && !sub_1005F8E0(v76.m128i_i8[0], v76.m128i_i32[1], v76.m128i_i32[2], v76.m128i_i32[3], v77.m128i_i32[0]) )
  {
    v72 = 0i64;
    v52 = *(_DWORD *)(v78.m128i_i32[0] + 56);
    v73 = 0i64;
    v30 = dword_1027640C(v27, 0, v52, v78.m128i_i32[1]);
    sub_1004EB90(v30);
    *(_DWORD *)(v72.m128i_i32[0] + 24) = v72.m128i_i32[0] + v78.m128i_i32[1] + 24;
    *(_DWORD *)v72.m128i_i32[3] = *(_DWORD *)v78.m128i_i32[3];
    *(_DWORD *)v73.m128i_i32[1] = *(_DWORD *)v79.m128i_i32[1];
    *(_DWORD *)v73.m128i_i32[3] = *(_DWORD *)(v78.m128i_i32[1] + 82);
    sub_10005CD0("return Coco.internals.PointerCall(");
    v83 = 0;
    v31 = sub_1004DD60(&v68.m128i_u64[1], v76.m128i_i32[0]);
    LOBYTE(v83) = 1;
    sub_10005C20(v31);
    v32 = sub_10005BF0(", 1, ...)");
    sub_10005D40(v32);
    sub_10005C40(&v68.m128i_u64[1]);
    LOBYTE(v83) = 4;
    sub_10005C40(&v70.m128i_u64[1]);
    sub_1002D9B0();
    sub_10079CB0(&v66.m128i_u64[1], &v61);
    LOBYTE(v83) = 5;
    sub_10074740(0);
    if ( !v61 )
      goto LABEL_104;
    v35 = sub_10005BE0(&v64.m128i_u64[1]);
    dword_102762C0(v27, "@Coco", v35, v65.m128i_i32[2], 0);
    v70 = 0i64;
    v71 = 0i64;
    v36 = dword_102763E8(v27, -1);
    sub_1004EB90(v36);
    dword_10276378(v27, -10000);
    *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v70.m128i_i32[1] + 24;
    sub_10051C60(9);
    sub_10005C40(&v64.m128i_u64[1]);
    v83 = -1;
    sub_10005C40(&v66.m128i_u64[1]);
  }
  if ( sub_1005F8E0(v78.m128i_i8[0], v78.m128i_i32[1], v78.m128i_i32[2], v78.m128i_i32[3], v79.m128i_i32[0]) == 3
    && sub_1005F8E0(v76.m128i_i8[0], v76.m128i_i32[1], v76.m128i_i32[2], v76.m128i_i32[3], v77.m128i_i32[0]) == 2 )
  {
    v72 = 0i64;
    v53 = *(_DWORD *)(v78.m128i_i32[0] + 56);
    v73 = 0i64;
    v37 = dword_1027640C(v27, 0, v53, v78.m128i_i32[1]);
    sub_1004EB90(v37);
    *(_DWORD *)(v72.m128i_i32[0] + 24) = v72.m128i_i32[0] + v78.m128i_i32[1] + 24;
    *(_DWORD *)v72.m128i_i32[3] = *(_DWORD *)v78.m128i_i32[3];
    *(_DWORD *)v73.m128i_i32[1] = *(_DWORD *)v79.m128i_i32[1];
    *(_DWORD *)v73.m128i_i32[3] = *(_DWORD *)(v78.m128i_i32[1] + 82);
    sub_10005CD0("return Coco.internals.PointerCall(");
    v83 = 6;
    v38 = sub_1004DD60(&v70.m128i_u64[1], v76.m128i_i32[1]);
    LOBYTE(v83) = 7;
    sub_10005C20(v38);
    v39 = sub_10005BF0(", 3, ...)");
    sub_10005D40(v39);
    sub_10005C40(&v70.m128i_u64[1]);
    LOBYTE(v83) = 10;
    sub_10005C40(&v68.m128i_u64[1]);
    sub_1002D9B0();
    sub_10079CB0(&v64.m128i_u64[1], &v61);
    LOBYTE(v83) = 11;
    sub_10074740(0);
    if ( v61 )
    {
      v40 = sub_10005BE0(&v66.m128i_u64[1]);
      dword_102762C0(v27, "@Coco", v40, v67.m128i_i32[2], 0);
      v70 = 0i64;
      v71 = 0i64;
      v41 = dword_102763E8(v27, -1);
      sub_1004EB90(v41);
      dword_10276378(v27, -10000);
      *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v70.m128i_i32[1] + 24;
      sub_10051C60(9);
      sub_10005C40(&v66.m128i_u64[1]);
      v83 = -1;
      sub_10005C40(&v64.m128i_u64[1]);
      goto LABEL_98;
    }
LABEL_104:
    sub_10003900("hook failure: lclosure compile fail");
    sub_1011F7BA((char *)v69.m128i_i64 + 4, &_TI1_AVexception_std__);
LABEL_105:
    JUMPOUT(0x10060EC8);
  }
LABEL_98:
  if ( sub_1005F8E0(v78.m128i_i8[0], v78.m128i_i32[1], v78.m128i_i32[2], v78.m128i_i32[3], v79.m128i_i32[0]) == 3
    && sub_1005F8E0(v76.m128i_i8[0], v76.m128i_i32[1], v76.m128i_i32[2], v76.m128i_i32[3], v77.m128i_i32[0]) == 1 )
  {
    v72 = 0i64;
    v54 = *(_DWORD *)(v78.m128i_i32[0] + 56);
    v73 = 0i64;
    v42 = dword_1027640C(v27, 0, v54, v78.m128i_i32[1]);
    sub_1004EB90(v42);
    *(_DWORD *)(v72.m128i_i32[0] + 24) = v72.m128i_i32[0] + v78.m128i_i32[1] + 24;
    *(_DWORD *)v72.m128i_i32[3] = *(_DWORD *)v78.m128i_i32[3];
    *(_DWORD *)v73.m128i_i32[1] = *(_DWORD *)v79.m128i_i32[1];
    *(_DWORD *)v73.m128i_i32[3] = *(_DWORD *)(v78.m128i_i32[1] + 82);
    sub_10005CD0("return Coco.internals.PointerCall(");
    v83 = 12;
    v43 = (_DWORD *)sub_10074110(&v76);
    v44 = sub_1004DD60(&v70.m128i_u64[1], *v43);
    LOBYTE(v83) = 13;
    sub_10005C20(v44);
    v45 = sub_10005BF0(", 2, ...)");
    sub_10005D40(v45);
    sub_10005C40(&v70.m128i_u64[1]);
    LOBYTE(v83) = 16;
    sub_10005C40(&v66.m128i_u64[1]);
    sub_1002D9B0();
    sub_10079CB0(v80, &v61);
    LOBYTE(v83) = 17;
    sub_10074740(0);
    if ( !v61 )
    {
      sub_10003900("hook failure: lclosure compile fail");
      sub_1011F7BA(v58, &_TI1_AVexception_std__);
      goto LABEL_105;
    }
    v46 = sub_10005BE0(v81);
    dword_102762C0(v27, "@Coco", v46, v82, 0);
    v70 = 0i64;
    v71 = 0i64;
    v47 = dword_102763E8(v27, -1);
    sub_1004EB90(v47);
    dword_10276378(v27, -10000);
    *(_DWORD *)(v78.m128i_i32[0] + 24) = v78.m128i_i32[0] + v70.m128i_i32[1] + 24;
    sub_10051C60(9);
    sub_10005C40(v81);
    sub_10005C40(v80);
  }
  return 1;
}
