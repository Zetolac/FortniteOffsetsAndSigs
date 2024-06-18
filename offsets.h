0x129DEDD8 <- GWorld
0x12A61590 <- GObjects
0x12BAE1C0 <- GNames


Exemple:
  __int64 va_text = 0;
    for (int i = 0; i < 25; i++)
        if (read<__int32>(base + (i * 0x1000) + 0x250) == 0x260E020B) { va_text = base + ((i + 1) * 0x1000);}
__int64 GWorld = 0x129CFDD8 + va_text;
__int64 UWorld = read<__int64>(GWorld);
__int64 GameInstance = read<__int64>(UWorld + 0x1D8);


DecryptAnsi:
 _WORD *v3; // rdi@1
  signed int v5; // edx@1
  __int64 result; // rax@1
  __int64 v7; // r8@2
  unsigned int v8; // edx@3
 
v3 = buffer;
  v5 = 26;
  result = size;
  if ( (_DWORD)result )
  {
    v7 = (unsigned int)result;
    do
    {
      v8 = v5 + 45297;
      *v3 = v8 + ~*v3;
      result = v8 << 8;
      ++v3;
      v5 = result | (v8 >> 8);
      --v7;
    }
    while ( v7 );
  }
