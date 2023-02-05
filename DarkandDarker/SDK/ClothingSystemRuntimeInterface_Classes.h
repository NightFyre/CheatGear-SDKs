#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ClothingSystemRuntimeInterface.ClothConfigBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothConfigBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothingSimulationFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothingInteractor
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UClothingInteractor : public UObject
	{
	public:
		unsigned char                                              UnknownData_JR4B[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UClothingSimulationInteractor : public UObject
	{
	public:
		TMap<class FName, class UClothingInteractor*>              ClothingInteractors;                                     // 0x0028(0x0050) UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9MX[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetNumSubsteps(int32_t NumSubsteps);
		void SetNumIterations(int32_t NumIterations);
		void SetMaxNumIterations(int32_t MaxNumIterations);
		void SetAnimDriveSpringStiffness(float InStiffness);
		void PhysicsAssetUpdated();
		float GetSimulationTime();
		int32_t GetNumSubsteps();
		int32_t GetNumKinematicParticles();
		int32_t GetNumIterations();
		int32_t GetNumDynamicParticles();
		int32_t GetNumCloths();
		class UClothingInteractor* GetClothingInteractor(const class FString& ClothingAssetName);
		void EnableGravityOverride(const struct FVector& InVector);
		void DisableGravityOverride();
		void ClothConfigUpdated();
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothSharedSimConfigBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothingAssetBase
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UClothingAssetBase : public UObject
	{
	public:
		class FString                                              ImportedFilePath;                                        // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               AssetGuid;                                               // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UClothPhysicalMeshDataBase_Legacy : public UObject
	{
	public:
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Indices;                                                 // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              InverseMasses;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FClothVertBoneData>                          BoneData;                                                // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumFixedVerts;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBoneWeights;                                          // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           SelfCollisionIndices;                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4DU[0x50];                                  // 0x0090(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
