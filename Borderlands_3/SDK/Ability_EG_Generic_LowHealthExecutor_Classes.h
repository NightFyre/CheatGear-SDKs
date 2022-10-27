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
	 * BlueprintGeneratedClass Ability_EG_Generic_LowHealthExecutor.Ability_EG_Generic_LowHealthExecutor_C
	 * Size -> 0x0048 (FullSize[0x0140] - InheritedSize[0x00F8])
	 */
	class UAbility_EG_Generic_LowHealthExecutor_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GenerateTerrorRate;                                      // 0x0108(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        GenerateTerrorDuration;                                  // 0x0110(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_EG_Generic_LowHealthExecutor; // 0x0118(0x0028)

	public:
		void OnActivated();
		void ExecuteUbergraph_Ability_EG_Generic_LowHealthExecutor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
