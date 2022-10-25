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
	 * BlueprintGeneratedClass Passive_Gunner_DLCSkill_10.Passive_Gunner_DLCSkill_9_C
	 * Size -> 0x0024 (FullSize[0x0204] - InheritedSize[0x01E0])
	 */
	class UPassive_Gunner_DLCSkill_9_C : public UPassive_Gunner_CausedElementalEffectParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E0(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               FuelReturnAmount;                                        // 0x01E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      DiminishingReturns;                                      // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GunnerCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
		void Gunner_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear);
		void ExecuteUbergraph_Passive_Gunner_DLCSkill_10(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
