#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Class GbxDestruction.ClothActor
	 * Size -> 0x0018 (FullSize[0x0470] - InheritedSize[0x0458])
	 */
	class AClothActor : public AActor
	{
	public:
		struct FWindDirectionalSensitivity                         WindSensitivity;                                         // 0x0458(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.ClothSkeletalMeshActor
	 * Size -> 0x0018 (FullSize[0x0488] - InheritedSize[0x0470])
	 */
	class AClothSkeletalMeshActor : public AClothActor
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJI3[0x10];                                  // 0x0478(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.ClothStaticMeshActor
	 * Size -> 0x0008 (FullSize[0x0478] - InheritedSize[0x0470])
	 */
	class AClothStaticMeshActor : public AClothActor
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.ClothManager
	 * Size -> 0x0048 (FullSize[0x04A0] - InheritedSize[0x0458])
	 */
	class AClothManager : public AClothManagerInterface
	{
	public:
		unsigned char                                              UnknownData_LV7P[0x40];                                  // 0x0458(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAllowedSimCost;                                       // 0x0498(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOffScreenBeforeSimulationPause;                      // 0x049C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.GbxDestructibleActor
	 * Size -> 0x0080 (FullSize[0x04F8] - InheritedSize[0x0478])
	 */
	class AGbxDestructibleActor : public ADestructibleActor
	{
	public:
		struct FGbxDestructibleNetBuffer                           FractureBuffer;                                          // 0x0478(0x0020) Net, RepNotify, NativeAccessSpecifierPrivate
		struct FGbxDestructibleNetBuffer                           TransformBuffer;                                         // 0x0498(0x0020) Net, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S6A8[0x38];                                  // 0x04B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SyncID;                                                  // 0x04F0(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_19ZY[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetFracturable(bool bFracturable);
		void OnRep_TransformBuffer();
		void OnRep_SyncID();
		void OnRep_FractureBuffer();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.GbxDestructibleComponent
	 * Size -> 0x0090 (FullSize[0x0BD0] - InheritedSize[0x0B40])
	 */
	class UGbxDestructibleComponent : public UDestructibleComponent
	{
	public:
		unsigned char                                              UnknownData_5YVT[0x2C];                                  // 0x0B40(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondsToWaitAfterNotRenderedToCleanUp;                  // 0x0B6C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProbabilityOfTransientChunk;                             // 0x0B70(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractureEventRefireDelay;                                // 0x0B74(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDHC[0x8];                                   // 0x0B78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGbxComponentFracture;                                  // 0x0B80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EDestructibleRelevance                                     DestructibleRelevance;                                   // 0x0B90(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ChunkCollisionChannel;                                   // 0x0B91(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM6Z[0x6];                                   // 0x0B92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImpactData*                                         ChunkImpactData;                                         // 0x0B98(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayFractureEventOnDebris;                              // 0x0BA0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportChunksBlockPawnMovement;                         // 0x0BA1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAssetDamageThreshold;                           // 0x0BA2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4A6[0x1];                                   // 0x0BA3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MetersDroppedToBreak;                                    // 0x0BA4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDestructibleDamageThresholdMagnitude                      DamageThresholdMagnitude;                                // 0x0BA8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COTG[0x3];                                   // 0x0BA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ImpactDamageDefaultDepth;                                // 0x0BAC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoComputeMaterialStrength;                            // 0x0BB0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAccumulateImpactDamage;                                 // 0x0BB1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPUM[0x2];                                   // 0x0BB2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactVelocityThresholdOverride;                         // 0x0BB4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTotalMass;                                           // 0x0BB8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7XM[0x3];                                   // 0x0BB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalMass;                                               // 0x0BBC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideDebrisLifetime;                                 // 0x0BC0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGFS[0x3];                                   // 0x0BC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebrisLifetimeMin;                                       // 0x0BC4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisLifetimeMax;                                       // 0x0BC8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractureEffectOverlapPercent;                            // 0x0BCC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetFracturable(bool bFracturable);
		float GetTotalPercentFractured();
		float GetDamageRequiredToFracture(int32_t Depth);
		void FractureRandomChunk();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxDestruction.GbxUserDestructibleSyncManager
	 * Size -> 0x00A0 (FullSize[0x04F8] - InheritedSize[0x0458])
	 */
	class AGbxUserDestructibleSyncManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_D894[0xA0];                                  // 0x0458(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
