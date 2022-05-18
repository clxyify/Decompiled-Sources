/*

  __  __       _         _____       _           _   _             
 |  \/  |     (_)       |_   _|     (_)         | | (_)            
 | \  / | __ _ _ _ __     | |  _ __  _  ___  ___| |_ _  ___  _ __  
 | |\/| |/ _` | | '_ \    | | | '_ \| |/ _ \/ __| __| |/ _ \| '_ \ 
 | |  | | (_| | | | | |  _| |_| | | | |  __/ (__| |_| | (_) | | | |
 |_|  |_|\__,_|_|_| |_| |_____|_| |_| |\___|\___|\__|_|\___/|_| |_|
                                   _/ |                            
                                  |__/                             
*/

//This is the main injection particurallary for NIHON's LBI
int StartAddress_0()//start up the injection
{
  HWND v0; // eax
  HANDLE v1; // eax
  _DWORD *v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v12; // [esp-1Ch] [ebp-194h] BYREF
  int v13; // [esp-8h] [ebp-180h]
  int v14; // [esp-4h] [ebp-17Ch]
  int v15; // [esp+0h] [ebp-178h]
  int v16; // [esp+10h] [ebp-168h]
  int v17; // [esp+14h] [ebp-164h]
  int v18; // [esp+1Ch] [ebp-15Ch]
  char *v19; // [esp+28h] [ebp-150h]
  char v20[24]; // [esp+34h] [ebp-144h] BYREF
  char v21[216]; // [esp+4Ch] [ebp-12Ch] BYREF
  int v22; // [esp+124h] [ebp-54h]
  int v23; // [esp+130h] [ebp-48h]
  int v24; // [esp+13Ch] [ebp-3Ch]
  char v25[24]; // [esp+148h] [ebp-30h] BYREF
  int v26; // [esp+160h] [ebp-18h]
  int v27; // [esp+174h] [ebp-4h]

  __CheckForDebuggerJustMyCode(&unk_1012603C);
  sub_10052C16(100);
  sub_10052A4A();
  SetConsoleTitleA("Nihon | Lua Bytecode Interperter | DeepPain");//set console title
  v14 = 0;
  v0 = GetConsoleWindow();//HWND
  ShowWindow(v0, v14);//Window settings
  v14 = 0;
  v1 = GetCurrentProcess();
  sub_10051974(v1, v14);
  v14 = 1;
  v17 = sub_100515CD(v21, "The meta", 1);//wtf
  v16 = v17;
  v27 = 0;
  v2 = (_DWORD *)sub_10052F72(v14);
  v26 = sub_10052333(*v2);
  v27 = -1;
  sub_1005149C(v21);
  sub_10051F9B(0x10u);
  v3 = sub_1005233D(v26, 0, 0);
  sub_10052801(v25, v3);
  v27 = 1;
  v14 = 0;
  v4 = (_DWORD *)sub_10052F72(0);
  v24 = sub_1005233D(*v4, 0, v14);
  v14 = 0;
  v17 = sub_10052B76(v20, v24 + 3, 5, 8, 1);
  v23 = *(_DWORD *)sub_10052F72(v14);
  sub_1005149C(v20);
  v14 = (int)sub_10052469;
  v5 = sub_10051F1E(std::cout, "got crappy lua state");//crappy
  std::ostream::operator<<(v5, v14);//std deez nuts
  sub_10051B59(v23, "game");//bruh
  dword_101149F0(v23, -1, "Script Context");//sc
  v22 = *(_DWORD *)dword_1011498C(v23, -1);//idk
  dword_10114984 = *(_DWORD *)(v22 + 236) ^ (v22 + 236);//lua state right here
  v14 = (int)sub_10052469;//idk
  v6 = sub_10051F1E(std::cout, "got better lua state");//wtf
  std::ostream::operator<<(v6, v14);//idk
  v14 = (int)sub_10052469;//idk
  v13 = v22;//idk
  v7 = sub_10051F1E(std::cout, "ScriptContext: ");//finally show sc
  v8 = std::ostream::operator<<(v7, v13, v14);//idk
  std::ostream::operator<<(v8, v15);//idk
  v14 = (int)sub_10052469;//idk
  v13 = dword_10114984;//idk
  v9 = sub_10051F1E(std::cout, "lua state: ");//show lua state
  v10 = std::ostream::operator<<(v9, v13, v14);//show lua state
  std::ostream::operator<<(v10, v15);//stop
  sub_10052ED2(dword_10114984, 7);//register functions
  sub_1005289C(dword_10114984, sub_100512DF, "loadstring");//wow loadstring
  sub_1005289C(dword_10114984, sub_1005249B, "getreg");
  sub_1005289C(dword_10114984, sub_1005249B, "debug.getreg");
  sub_1005289C(dword_10114984, sub_1005249B, "getregistry");
  sub_1005289C(dword_10114984, sub_1005249B, "debug.getregistry");
  sub_1005289C(dword_10114984, sub_1005275C, "httpget");//wtf
  sub_1005289C(dword_10114984, sub_1005275C, "HttpGet");//wtf
  sub_1005289C(dword_10114984, sub_1005188E, "getgenv");
  CreateThread(0, 0, sub_10051898, 0, 0, 0);//create pipe
  v19 = &v12;
  sub_1005121C(//execute code
    "game.StarterGui:SetCore('SendNotification', { Title = 'Nihon'; Text = 'Injection Successful, Thanks For Using Nihon\nlol'"
    "; Icon = 'rbxassetid://5888290650';  Duration = 15; })");//i hate messages
  sub_10051D34(dword_10114984, v12);//idk
  v18 = 0;//idk
  v27 = -1;//idk
  sub_1005149C(v25);//idk
  return v18;//idk
}

/*

  _____ _                 
 |  __ (_)                
 | |__) | _ __   ___  ___ 
 |  ___/ | '_ \ / _ \/ __|
 | |   | | |_) |  __/\__ \
 |_|   |_| .__/ \___||___/
         | |              
         |_|              
*/
//Mostly pipe settings over here. They dont call any other function (THANK GOD!)
HANDLE sub_1007F3B0()//create pipe (use CreateThread)
{
  HANDLE result; // eax
  char v1; // [esp-1Ch] [ebp-F48A4h] BYREF
  char *v2; // [esp+10h] [ebp-F4878h]
  DWORD v3; // [esp+1Ch] [ebp-F486Ch]
  DWORD NumberOfBytesRead; // [esp+628h] [ebp-F4260h] BYREF
  char Buffer[1000008]; // [esp+634h] [ebp-F4254h] BYREF
  HANDLE hNamedPipe; // [esp+F487Ch] [ebp-Ch]

  __CheckForDebuggerJustMyCode(&unk_1012603C);
  result = CreateNamedPipeW(L"\\\\.\\pipe\\NihonWinning", 3u, 6u, 1u, 0x98967Fu, 0x98967Fu, 0, 0);//create pipe name
  for ( hNamedPipe = result; hNamedPipe != (HANDLE)-1; result = (HANDLE)DisconnectNamedPipe(hNamedPipe) )//idk
  {
    if ( ConnectNamedPipe(hNamedPipe, 0) )//connect
    {
      while ( ReadFile(hNamedPipe, Buffer, 0xF423Eu, &NumberOfBytesRead, 0) )//read
      {
        v3 = NumberOfBytesRead;//ok
        if ( NumberOfBytesRead >= 0xF423F )//ok
          j____report_rangecheckfailure();//ok
        Buffer[v3] = 0;//ok
        if ( j_strlen(Buffer) )//iodk
        {
          v2 = &v1;//iodk
          sub_1005121C(Buffer);//iodk
          sub_10051D34(dword_10114984, v1);//iodk
        }
      }
    }
  }
  return result;//return something
}

/*

  ______                     _   _             
 |  ____|                   | | (_)            
 | |__  __  _____  ___ _   _| |_ _  ___  _ __  
 |  __| \ \/ / _ \/ __| | | | __| |/ _ \| '_ \ 
 | |____ >  <  __/ (__| |_| | |_| | (_) | | | |
 |______/_/\_\___|\___|\__,_|\__|_|\___/|_| |_|
                                               
                                              
*/
//Execute code including the LBI bytecode
int __cdecl sub_1007EE20(int a1, int a2)//string, int as in roblox state then script
{
  int v2; // eax
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  char v7; // [esp-24h] [ebp-2C0h] BYREF
  int v8; // [esp-20h] [ebp-2BCh]
  int v9; // [esp-1Ch] [ebp-2B8h] BYREF
  int v10; // [esp-18h] [ebp-2B4h]
  int v11; // [esp-14h] [ebp-2B0h]
  int v12; // [esp-10h] [ebp-2ACh]
  int v13; // [esp-Ch] [ebp-2A8h]
  char *v14; // [esp-8h] [ebp-2A4h]
  char *v15; // [esp-4h] [ebp-2A0h]
  int v16; // [esp+10h] [ebp-28Ch]
  int v17; // [esp+14h] [ebp-288h]
  int v18; // [esp+18h] [ebp-284h]
  char v19[36]; // [esp+20h] [ebp-27Ch] BYREF
  int *v20; // [esp+44h] [ebp-258h]
  int v21[9]; // [esp+50h] [ebp-24Ch] BYREF
  int v22[9]; // [esp+74h] [ebp-228h] BYREF
  char v23[36]; // [esp+98h] [ebp-204h] BYREF
  char *v24; // [esp+BCh] [ebp-1E0h]
  char v25[36]; // [esp+C8h] [ebp-1D4h] BYREF
  char v26[36]; // [esp+ECh] [ebp-1B0h] BYREF
  char v27[36]; // [esp+110h] [ebp-18Ch] BYREF
  char *v28; // [esp+134h] [ebp-168h]
  char v29[36]; // [esp+140h] [ebp-15Ch] BYREF
  char v30[228]; // [esp+164h] [ebp-138h] BYREF
  char v31[36]; // [esp+248h] [ebp-54h] BYREF
  int v32; // [esp+26Ch] [ebp-30h]
  int v33[3]; // [esp+278h] [ebp-24h] BYREF
  int v34; // [esp+284h] [ebp-18h]
  int v35; // [esp+298h] [ebp-4h]

  v35 = 2;
  __CheckForDebuggerJustMyCode(&unk_1012603B);//check for deez nuts
  sub_1005121C("HttpGet");//sploit/replaceAll
  sub_1005121C("game:HttpGet");//sploit/replaceAll
  v15 = v30;//idfk
  v14 = v29;//idfk
  v28 = &v7;//idfk
  sub_100523A6(&a2);//idfk
  v18 = sub_100524C3(v27, v7, v8, v9, v10, v11, v12, v13, v14, v15);//idfk
  v17 = v18;//idfk
  sub_10052AFE(v18);//idfk
  sub_10052153(v27);
  LOBYTE(v35) = 1;//idfk
  sub_10052153(v29);//idfk
  LOBYTE(v35) = 0;//idfk
  sub_10052153(v30);//idfk
  sub_1005121C("httpget");//htpgt
  LOBYTE(v35) = 3;//idfk
  sub_1005121C("game:httpget");//ok
  LOBYTE(v35) = 4;//idfk
  v15 = v26;//idfk
  v14 = v25;//idfk
  v24 = &v7;//idfk
  sub_100523A6(&a2);//idfk
  v18 = sub_100524C3(v23, v7, v8, v9, v10, v11, v12, v13, v14, v15);//idfk
  v17 = v18;//idfk
  sub_10052AFE(v18);//idfk
  sub_10052153(v23);//idfk
  LOBYTE(v35) = 3;//idfk
  sub_10052153(v25);//idfk
  LOBYTE(v35) = 0;//idfk
  sub_10052153(v26);//idfk
  v15 = "\r\nend)";//script + to add strings
  v18 = sub_1005158C(
          (int)v22,//imagine create 'script' mind splosion
          "spawn(function() script = Instance.new('LocalScript') script.Disabled = true script.Parent = nil\r\n",
          (int)&a2);
  v17 = v18;//idfk
  LOBYTE(v35) = 5;//idfk
  v16 = sub_10052BC1((int)v21, v18, v15);//idfk
  sub_10052AFE(v16);//idfk
  sub_10052153(v21);//idfk
  LOBYTE(v35) = 0;//idfk
  sub_10052153(v22);//idfk
  v34 = sub_1005151E();//idfk
  sub_100520B8(v34);//idfk
  v15 = "@NIHON";//mostly a chunk
  v14 = (char *)sub_10052C34(&a2);//idfk
  v2 = sub_10051604(&a2);//idfk
  if ( sub_10052B94(v34, v2, v14, v15) )//idfk
  {
    v15 = (char *)sub_10052469;//idfk
    v3 = (char *)sub_10051195(v34, -1, 0);//idfk
    v4 = sub_10051F1E(std::cout, v3);//idfk
    std::ostream::operator<<(v4, v15);//idfk
  }
  else
  {
    sub_10051FFA(v34, -10002, "string");//lua c func
    sub_10051FFA(v34, -1, "dump");//idfk
    sub_10051D07(v34, -3);//idfk
    sub_10052752(v34, 1, 1, 0);//idfk
    v32 = sub_10051195(v34, -1, v33);//idfk
    sub_10051B59(a1, "_G");//idfk
    dword_101149EC(a1, v32, v33[0]);//idfk
    dword_101149B4(a1, -2, "BYTES");//bytes
    sub_1005121C("https://cdn.discordapp.com/attachments/742002775205871649/770261417512271892/lbi.txt");//download LBI
    //NOTE: owners account got banned so file no long exists on servers
    LOBYTE(v35) = 6;//idfk
    v20 = &v9;//idfk
    sub_100525F4(&v9, v19);//idfk
    v18 = sub_100527BB(v31, v9);//idfk
    LOBYTE(v35) = 8;//idfk
    sub_10052153(v19);//idfk
    v15 = (char *)28;//idfk
    v5 = sub_10051604(v31);//idfk
    dword_10114990(a1, "@NIHON", v5);//chunk?
    sub_10051B59(a1, "spawn");//spawnn
    dword_101149C4(a1, -2);//idfk
    dword_101149BC(a1, 1, 1, 0);//idfk
    LOBYTE(v35) = 0;//idfk
    sub_10052153(v31);//idfk
  }
  v35 = -1;//idfk
  return sub_10052153(&a2);//idfk
}

/*

  ______                _   _                 
 |  ____|              | | (_)                
 | |__ _   _ _ __   ___| |_ _  ___  _ __  ___ 
 |  __| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
 | |  | |_| | | | | (__| |_| | (_) | | | \__ \
 |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
                                              
                                             
*/
//NIHON LBI functions (you can skid these for your LBI)

//I MADE THIS COMPATAIBLE AND EASIER FOR YOU TO READ UR WELCOME!!!!

int getgenv(int rbx)//getgenv uses 1 argument called 'DWORD'
{
  rlua_getfield(rbx, -10002);//i think getfield not sure ngl
  return 1;//return
}

int debug.getregistery(int a1)//using 1 argument i think idfk
{
  dword_101149C4(a1, -10000);//i dunno what this is im confused like you:)
  return 1;
}

int __cdecl getreg(int rbx)
{
  dword_101149C4(rbx, -10000);//this code is the same as the first one so EITHER this is fake functions idk
  return 1;
}

//ENJOY having FUN with this decompiled shit :))
