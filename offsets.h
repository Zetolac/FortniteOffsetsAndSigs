#define GWorld 0xef005e0
#define FNamePool 0xef22b40
#define GetNameById 0x47a2364
#define DecryptAnsi 0x2afc858
 
#define ProjectWorldLocationToScreen 0x9cc7e7c
 
__int64 __fastcall DecryptAnsi(unsigned __int16 *a1, _WORD *a2)
{
  _WORD *v2; // rdi
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // r8d
 
  v2 = a2;
  ((void (__fastcall *)(_WORD *, unsigned __int16 *, unsigned __int64))memcpy)(
    a2,
    a1 + 2,
    2 * ((unsigned __int64)*a1 >> 6));
  v4 = *a1 >> 6;
  result = read<int>(base + 0xEE27DC0); // If not work try this: 0xEFE88D0
  v6 = ((_DWORD)result << 8) | ((unsigned int)result >> 8);
  v7 = (unsigned int)result >> 4;
  if ( v4 )
  {
    result = v4;
    do
    {
      v6 += v7;
      *v2++ ^= v6;
      --result;
    }
    while ( result );
  }
  return result;
}
void __fastcall DecryptWide(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rax
 
  v2 = a2;
  ((void (__fastcall *)(_BYTE *, unsigned __int16 *, unsigned __int64))memcpy)(a2, a1 + 2, (unsigned __int64)*a1 >> 6);
  v4 = *a1 >> 6;
  v5 = read<int>(base + 0xEE27DC0); // If not work try this: 0xEFE88D0
  v6 = (v5 << 8) | (v5 >> 8);
  v7 = v5 >> 4;
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v6 += v7;
      *v2++ ^= v6;
      --v8;
    }
    while ( v8 );
  }
}
namespace WorldOffsets
{
    DWORD PersitentLevel = 0x30;
    DWORD GameInstance = 0x1b8;
};
namespace ActorOffsets
{
    DWORD RootComponent = 0x190;
    DWORD PlayerState = 0x2a8; //Can be Wrong
    DWORD Mesh = 0x310;
};
namespace PlayerControllerOffsets
{
    DWORD AcknowledgedPawn = 0x330;
    DWORD PlayerCameraManager = 0x340;
    DWORD LocalPlayerCachedLODDistanceFactor = 0x38c;
    DWORD GetControlRotation = 0x720; //vtable
    DWORD SetControlRotation = 0x728; //vtable
};
namespace PlayerCameraManagerOffsets
{
    DWORD GetCameraCachePOV = 0x710; //vtable
    DWORD GetLastFrameCameraCachePOV = 0x718; //vtable
};
namespace FortPawnOffsets
{
    DWORD CurrentVehicle = 0x2428;
    DWORD CurrentWeapon = 0x8f8;
    DWORD ReviveFromDBNOTime = 0x44a0;
};
namespace PlayerStateOffsets
{
    
};
namespace MeshAndUSceneComponentOffsets
{
    DWORD ComponentToWorld = 0x240;
    DWORD BoneArray = 0x5e8;
};
namespace LocalPlayerOffsets
{
    DWORD ViewStates = 0xD0;
};
