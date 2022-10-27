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
	 * ScriptStruct OceanCrawlersAnimation.OceanCrawlerLocomotionAnimationDataStructure
	 * Size -> 0x0030
	 */
	struct FOceanCrawlerLocomotionAnimationDataStructure
	{
	public:
		class UBlendSpace1D*                                       LocomotionIntoAsBlendspace;                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LocomotionOutOf;                                         // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       LocomotionOutOfAsBlendspace;                             // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         Locomotion;                                              // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IntoDeadZone;                                            // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OutOfDeadZone;                                           // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OceanCrawlersAnimation.OceanCrawlerSporeBreathAnimationData
	 * Size -> 0x0018
	 */
	struct FOceanCrawlerSporeBreathAnimationData
	{
	public:
		class UBlendSpace1D*                                       Into;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       Locomotion;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       Outof;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
	 * Size -> 0x0090
	 */
	struct FOceanCrawlerAnimationDataStructure
	{
	public:
		struct FOceanCrawlerLocomotionAnimationDataStructure       LocomotionData;                                          // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		class UCustomAnimationMontageDefinitionListingDataAsset*   MontageData;                                             // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAnimationWeaponDataAsset*                     AttackAnimations;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitReactionAnimationData                           HitReactionData;                                         // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FOceanCrawlerSporeBreathAnimationData               SporeBreathData;                                         // 0x0048(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		TArray<struct FCustomAnimationMontageId>                   AttackInterruptMontages;                                 // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
		struct FCustomAnimationMontageId                           DeathMontageId;                                          // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FCustomAnimationMontageId                           SpawnMontageId;                                          // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FCustomAnimationMontageId                           SpawnOnShipMontageId;                                    // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
		struct FCustomAnimationMontageId                           SpawnBoardedMontageId;                                   // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
