#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class TrinketFramework.TrinketLoadoutFinderPolicyBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTrinketLoadoutFinderPolicyBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketAudioInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTrinketAudioInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketCategory
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UTrinketCategory : public UCategoryBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.InvalidTrinketCategory
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UInvalidTrinketCategory : public UTrinketCategory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketDesc
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	class UTrinketDesc : public UEntitlementDesc
	{
	public:
		struct FStringClassReference                               TrinketClass;                                            // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringClassReference                               PreviousItem;                                            // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringClassReference                               NextItem;                                                // 0x00E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketLoadoutControlInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTrinketLoadoutControlInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.SameActorTrinketLoadoutFinderPolicy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USameActorTrinketLoadoutFinderPolicy : public UTrinketLoadoutFinderPolicyBase
	{
	public:
		unsigned char                                              UnknownData_QF10[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketLoadoutViewInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTrinketLoadoutViewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketReplacementActor
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class ATrinketReplacementActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_HP6U[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (PADDING)

	public:
		void RegisterTrinketReplacementMesh(class AActor* ActorWithTrinkets, class UStaticMeshComponent* ReplacementMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketSetControlInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTrinketSetControlInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrinketFramework.TrinketSfxDataAsset
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTrinketSfxDataAsset : public UDataAsset
	{
	public:
		class UWwiseEvent*                                         MountSfx;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         RemoveSfx;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         NudgeSfx;                                                // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StraightenSfx;                                           // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
