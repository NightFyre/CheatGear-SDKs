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
	 * BlueprintGeneratedClass Ability_All_unhealthyraddamage.Ability_All_UnhealthyRadDamage_C
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UAbility_All_UnhealthyRadDamage_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_EG_Generic_LowHealthExecutor; // 0x0108(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void ExecuteUbergraph_Ability_All_UnhealthyRadDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
