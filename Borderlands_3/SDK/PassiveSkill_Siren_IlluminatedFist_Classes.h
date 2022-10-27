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
	 * BlueprintGeneratedClass PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C
	 * Size -> 0x00E0 (FullSize[0x02C8] - InheritedSize[0x01E8])
	 */
	class UPassiveSkill_Siren_IlluminatedFist_C : public UOakPassiveAbility_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient
		class UOakActionAbility_PhaseTrance*                       OwnerActionAbility;                                      // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FEnvQueryParams                                     EQS_Query;                                               // 0x01F8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AActor*                                              EQS_Result_Actor;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPhaseTranceEffectType                                     PhasetranceEffectType;                                   // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZPIG[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerMeleeStateComponent*                          MeleeComponent;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnPaused();
		void OnDeactivated();
		void ToothAndNail_SetDamageType();
		void ToothAndNail_RemoveDamageType();
		void OnAttunedElementChanged();
		void OnActivated();
		void ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
