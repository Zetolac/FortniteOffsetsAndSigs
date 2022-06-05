GNames = 0xCCB6E80
GOBjects = 0xCABA728
GWorld = 0xCC65A08
Free = 0x0DB3210
GetBoneMatrix = 0x0FCF3A0

OFFSETS:
BoneArray: 0x590 | NOT SURE

CompToWorld: 0x240
GameInstance 0x1A8
RootComp: 0x188
AcknowledgedPawn 0x310
RelativeLocation 0x128
RelativeRotation 0x140
TeamIndex 0x1068
CurrentWeapon 0x7F0
PlayerState 0x290
Mesh 0x2F0
bIsDBNO 0x74A
bIsDying 0x6D8
ReviveFromDBNOTime 0x3FC8
bUseGravity(ud vehicle fly) 0x672

VTABLE: // MAYBE WRONG
0x4B -> ProcessEvent index
0x350 -> PlayerCameraManager
0x6F0 -> GetLastFrameCameraCachePOV
0x6E8 -> GetCameraCachePOV
0x798 -> GetCameraRotation
0x7A0 -> GetCameraLocation
0x790 -> GetPlayerViewpoint
0x700 -> SetControlRotation
