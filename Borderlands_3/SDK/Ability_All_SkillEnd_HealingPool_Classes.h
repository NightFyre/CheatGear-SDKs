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
	 * BlueprintGeneratedClass Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C
	 * Size -> 0x001F (FullSize[0x01E0] - InheritedSize[0x01C1])
	 */
	class UAbility_All_SkillEnd_HealingPool_C : public UAbility_AnointParent_SkillEnd_C
	{
	public:
		unsigned char                                              UnknownData_67DM[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		bool                                                       PhasetranceWorked;                                       // 0x01D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isSiren;                                                 // 0x01D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBeastMaster;                                           // 0x01D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJTC[0x5];                                   // 0x01D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOakPlayerAbilityManagerComponent*                   AbilityManager;                                          // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void SpawnSplat();
		void ExecuteUbergraph_Ability_All_SkillEnd_HealingPool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
