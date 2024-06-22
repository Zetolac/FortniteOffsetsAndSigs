0x11558538 <- GWorld
0x117284C0 <- GNames
usage: .text address + offset


Exemple:
  __int64 va_text = 0;
    for (int i = 0; i < 25; i++)
        if (read<__int32>(base + (i * 0x1000) + 0x250) == 0x260E020B) { va_text = base + ((i + 1) * 0x1000);}
__int64 GWorld = 0x11558538 + va_text;
__int64 UWorld = read<__int64>(GWorld);
__int64 GameInstance = read<__int64>(UWorld + 0x1D8);


DecryptAnsi:

_WORD *v2; // rdi
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // kr00_4
  int v9; // ecx
 
  v2 = buffer;
  v4 = size;
  v5 = read<unsigned int>(va_text + 0x1162E03C);
  v6 = v5 ^ 0x9C677CC5;
  v8 = v5;
  result = 1041204193 * v5;
  v9 = 0;
  if ( v4 )
  {
    do
    {
      result = v9 + v8 % 0x21;
      ++v9;
      v6 += result;
      *v2++ ^= v6;
    }
    while ( v9 < v4 );
  }
