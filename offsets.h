0x12B9C140 -< GNames
0x129A7990 -< GObjects
0x1287CF68 -< GEngine
0x129CFDD8 -< GWorld


Exemple:
__int64 va_text = 0;
	for (int i = 0; i < 100; i++)
		if (read<__int32>(f_ProcessBase + (i * 0x1000)) == 0x24448B48) { va_text = f_ProcessBase + (i * 0x1000); break; }
__int64 GWorld = 0x129CFDD8 + va_text;
__int64 UWorld = read<__int64>(GWorld);
__int64 GameInstance = read<__int64>(UWorld + 0x1D8);
