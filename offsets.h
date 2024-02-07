ComponentToWorld : 0x230
__int64 BoneMap = read<uintptr_t>(mesh + 0x598 + ( read<int>(mesh + 0x5e0) * 0x10));
FTransform Bone = read<FTransform>(BoneMap + 0x60 * id)

#define FNamePool 0x11944BC0
#define GWorld 0x11770D88
