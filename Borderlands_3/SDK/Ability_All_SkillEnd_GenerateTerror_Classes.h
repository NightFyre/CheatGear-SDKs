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
	 * BlueprintGeneratedClass Ability_All_SkillEnd_GenerateTerror.Ability_All_SkillEnd_GenerateTerror_C
	 * Size -> 0x0027 (FullSize[0x01E8] - InheritedSize[0x01C1])
	 */
	class UAbility_All_SkillEnd_GenerateTerror_C : public UAbility_AnointParent_SkillEnd_C
	{
	public:
		unsigned char                                              UnknownData_MLTG[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GenerateTerrorRate;                                      // 0x01D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FTimerHandle                                        GenerateTerrorDuration;                                  // 0x01E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void SkillCoolingDown(class UOakActionAbility* ActionAbility);
		void GenerateTerror();
		void ResetTimers();
		void AnointRemoveEffect();
		void OnActivated();
		void ExecuteUbergraph_Ability_All_SkillEnd_GenerateTerror(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
