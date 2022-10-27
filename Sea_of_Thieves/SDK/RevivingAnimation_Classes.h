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
	 * Class RevivingAnimation.ReviveGhostAnimationData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UReviveGhostAnimationData : public UAnimationData
	{
	public:
		class UReviveGhostAnimationDataAsset*                      ReviveAnimationsDataAsset;                               // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RevivingAnimation.ReviveGhostAnimationDataAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReviveGhostAnimationDataAsset : public UDataAsset
	{
	public:
		struct FReviveGhostAnimations                              Animations;                                              // 0x0028(0x0028) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RevivingAnimation.ReviveGhostAnimationInstance
	 * Size -> 0x0050 (FullSize[0x0490] - InheritedSize[0x0440])
	 */
	class UReviveGhostAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_E379[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReviveGhostAnimations                              ReviveAnimations;                                        // 0x0448(0x0028) BlueprintVisible, BlueprintReadOnly
		bool                                                       FullyInitialised;                                        // 0x0470(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       FullyRevived;                                            // 0x0471(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		bool                                                       FromSwimming;                                            // 0x0472(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQFR[0x1D];                                  // 0x0473(0x001D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
