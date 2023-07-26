
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
	CamewaDescwipsion ViewPoint = Read<CamewaDescwipsion>(base_address + 0xed57310);
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
 
	

#define GWorld 0xee2f8e8
#define FNamePool 0xeeb2c80
#define GetNameById 0xd1d6ac
#define DecryptAnsi 0x569fc70
#define ProjectWorldLocationToScreen 0x7ac9d04
#define EncryptedViewPoint 0xed57310

namespace WorldOffsets
{
    DWORD PersitentLevel = 0x30;
    DWORD GameInstance = 0x1b8;
};
namespace ActorOffsets
{
    DWORD PlayerState = 0x2b0;
    DWORD Mesh = 0x318;
};
namespace PlayerControllerOffsets
{
    DWORD AcknowledgedPawn = 0x338;
    DWORD PlayerCameraManager = 0x348;
    DWORD RotationInput = 0x520;
};
namespace FortPawnOffsets
{
    DWORD CurrentWeapon = 0x948;
    DWORD ReviveFromDBNOTime = 0x46b8;
};
namespace PlayerStateOffsets
{
    DWORD TeamIndex = 0x10d0;
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x600;
    DWORD IsCached = 0x648;
};
