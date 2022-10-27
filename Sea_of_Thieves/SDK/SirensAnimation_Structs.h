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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SirensAnimation.SirenAnimationLocomotion
	 * Size -> 0x0048
	 */
	struct FSirenAnimationLocomotion
	{
	public:
		class UAnimSequence*                                       TreadwaterSequence;                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       AggressiveTreadwaterSequence;                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       LongwaysLocomotionBlendSpace;                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       AggressiveLongwaysLocomotionBlendSpace;                  // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       AlternativeAggressiveLongwaysLocomotionBlendSpace;       // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       LocomotionTurningAdditiveBlendSpace;                     // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       LocomotionSpinningAdditiveBlendSpace;                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       DivingFromSurfaceSequence;                               // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       EmergingToSurfaceSequence;                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SirensAnimation.SirenAnimationDataStructure
	 * Size -> 0x0060
	 */
	struct FSirenAnimationDataStructure
	{
	public:
		struct FSirenAnimationLocomotion                           LocomotionAnims;                                         // 0x0000(0x0048) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		class UCustomAnimationMontageDefinitionListingDataAsset*   FullBodyMontageListings;                                 // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAnimationWeaponDataAsset*                     AttackAnimationAsset;                                    // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitReactionAnimationData                           HitReactAnimationData;                                   // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
