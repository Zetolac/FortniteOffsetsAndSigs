
ComponentToWorld : 0x230
__int64 BoneMap = read<uintptr_t>(mesh + 0x5b0 + ( read<int>(mesh + 0x5f8) * 0x10));
FTransform Bone = read<FTransform>(BoneMap + 0x60 * id)

#define FNamePool 0x126A01C0
#define GWorld 0x124BF388
