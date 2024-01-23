
#define FNamePool 0x1150A280
#define GWorld 0x1133C4C8

char* v2 = buff; // rdi
int v4 = 17; // ecx
int v5 = nameLength; // eax
__int64 v6; // rdx

if (v5)
{
	v6 = v5;
	do
	{
		v5 = v4 + ~*v2;
		v4 += 0x1F0B;
		*v2++ = v5;
		--v6;
	} while (v6);
}
