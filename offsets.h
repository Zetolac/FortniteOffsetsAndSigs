
// GetBoneIndex
FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
    DWORD_PTR bonearray;
    bonearray = read<DWORD_PTR>(mesh + 0x4A8);

    if (bonearray == NULL)
    {
        bonearray = read<DWORD_PTR>(mesh + 0x4A8 + 0x8);
    }
    return  read<FTransform>(bonearray + (index * 0x30));
}

// GetBoneWithRotation
Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = read<FTransform>(DriverHandle, processID, mesh + 0x1C0);

	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());

	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

#define UWORLD 0xb613240
#define GameInstance_offset 0x190
#define PlayerState_offset 0x238
#define LocalPawn_offset 0x2B0
#define TeamIndex_offset 0xF50
#define Levels_offset 0x148
#define LocalPlayers_offset 0x38 
#define RootComponent 0x138

//Bones ID
Vector3 vHeadBoneOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 68));
Vector3 vHipOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 2));
Vector3 vNeckOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 67));
Vector3 vUpperArmLeftOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 9));
Vector3 vUpperArmRightOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 38));
Vector3 vLeftHandOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 10));
Vector3 vRightHandOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 39));
Vector3 vLeftHandOut1 = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 11));
Vector3 vRightHandOut1 = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 40));
Vector3 vRightThighOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 76));
Vector3 vLeftThighOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 69));
Vector3 vRightCalfOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 77));
Vector3 vLeftCalfOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 70));
Vector3 vLeftFootOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 73));
Vector3 vRightFootOut = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 80));
