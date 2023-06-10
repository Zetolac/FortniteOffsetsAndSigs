
struct CamewaDescwipsion
{
	Vector3 Location;
	Vector3 Rotation;
	float FieldOfView;
	char Useless[0x18];
};
CamewaDescwipsion GetViewPoint()
{
	char v1; // r8
	CamewaDescwipsion ViewPoint = Read<CamewaDescwipsion>(base_address + 0xf0d7a50);
	BYTE* v2 = (BYTE*)&ViewPoint;
	int i; // edx
	__int64 result; // rax
 
	v1 = 0x40;
	for (i = 0; i < 0x40; ++i)
	{
		*v2 ^= v1;
		result = (unsigned int)(i + 0x17);
		v1 += i + 0x17;
		v2++;
	}
 
	

#define GWorld 0xf1add68
#define FNamePool 0xf226880
#define GetNameById 0xce7a60
#define DecryptAnsi 0x3022da8
#define ProjectWorldLocationToScreen 0x78c5f84
#define EncryptedViewPoint 0xf0d7a50

#define BoneArray 0x600
#define IsBoneCached 0x648
#define ComponentToWorld 0x240
