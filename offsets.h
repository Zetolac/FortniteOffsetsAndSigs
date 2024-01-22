#define GWorld 0x11781328
namespace WorldOffsets
{
    DWORD PersitentLevel = 0x30;
    DWORD GameInstance = 0x1d0;
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
    DWORD CurrentWeapon = 0xa20;
    DWORD ReviveFromDBNOTime = 0x4ae8;
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x230;
    DWORD BoneArray = 0x608;
    DWORD IsCached = 0x650;
};

