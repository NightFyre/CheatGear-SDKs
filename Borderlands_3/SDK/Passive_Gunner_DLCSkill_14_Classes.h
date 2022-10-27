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
	 * BlueprintGeneratedClass Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C
	 * Size -> 0x0008 (FullSize[0x01E8] - InheritedSize[0x01E0])
	 */
	class UPassive_Gunner_DLCSkill_13_C : public UPassive_Gunner_CausedElementalEffectParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient

	public:
		EGbxAbilityState CalculateAbilityState();
		void GunnerCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void ExecuteUbergraph_Passive_Gunner_DLCSkill_14(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
