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
	 * BlueprintGeneratedClass Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C
	 * Size -> 0x0014 (FullSize[0x01C4] - InheritedSize[0x01B0])
	 */
	class UPassive_Gunner_TorgueCrossPromo_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FRandomStream                                       RandStream_TorgueCrossPromo;                             // 0x01B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      NewChance;                                               // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnResumed();
		void OnAbilityTimerEnded(const struct FOakAbilityTimerSpec& Spec, const struct FOakAbilityTimerResult& Result);
		void OnGradeChanged();
		void DetermineNewChance();
		void ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
