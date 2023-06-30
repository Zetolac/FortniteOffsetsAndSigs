
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
	CamewaDescwipsion ViewPoint = Read<CamewaDescwipsion>(base_address + 0xe9ad420);
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
 
	

#define GWorld 0xea84a78
#define FNamePool 0xeb03740
#define GetNameById 0xcaea9c
#define DecryptAnsi 0x303cbe0
#define ProjectWorldLocationToScreen 0x775ad9c
#define EncryptedViewPoint 0xe9ad420

namespace WorldOffsets
{
    DWORD PersitentLevel = 0x30;
    DWORD GameInstance = 0x1b8;
};
namespace ActorOffsets
{
    DWORD PlayerState = 0x2a8; //Can be Wrong
    DWORD Mesh = 0x310;
};
namespace PlayerControllerOffsets
{
    DWORD AcknowledgedPawn = 0x330;
    DWORD PlayerCameraManager = 0x340;
    DWORD RotationInput = 0x518;
};
namespace FortPawnOffsets
{
    DWORD CurrentWeapon = 0x948;
    DWORD ReviveFromDBNOTime = 0x4698;
};
namespace PlayerStateOffsets
{
    DWORD TeamIndex = 0x10c8; 
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x600;
    DWORD IsCached = 0x648;
};
