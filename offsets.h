#define GWorld 0xe762638
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
    DWORD RotationInput = 0x520;
};
namespace FortPawnOffsets
{
    DWORD CurrentWeapon = 0x948;
    DWORD ReviveFromDBNOTime = 0x4af8;
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x600;
    DWORD IsCached = 0x648;
};

// New Viewpoint Decryption (UNTESTED) (UNSURE)
CamewaDescwipsion GetViewPoint(ProtectedClass* p)
{
    __int64 result; // rax
    __int64 v7; // rcx
 
    result = p->Read<__int64>(base_address + 0xE2CED18);
    v7 = base_address + 0xE2CECD8;
    if (result)
        v7 = result;
 
    __int64 CameraBuffer = p->Read<__int64>(p->Read<__int64>(v7) + 8) ^ 0x4CF1F15DFE2D977Fi64;
    return p->Read<CamewaDescwipsion>(CameraBuffer);
}
