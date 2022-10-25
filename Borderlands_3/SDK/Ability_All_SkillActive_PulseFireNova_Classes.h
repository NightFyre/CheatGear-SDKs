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
	 * BlueprintGeneratedClass Ability_All_SkillActive_PulseFireNova.Ability_All_SkillActive_PulseFireNova_C
	 * Size -> 0x001F (FullSize[0x0231] - InheritedSize[0x0212])
	 */
	class UAbility_All_SkillActive_PulseFireNova_C : public UAbility_AnointParent_SkillActive_C
	{
	public:
		unsigned char                                              UnknownData_WMI8[0x6];                                   // 0x0212(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0218(0x0008) Transient, DuplicateTransient
		struct FTimerHandle                                        NovaTimer;                                               // 0x0220(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UClass*                                              OverrideDamageSource;                                    // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChargeBasedSkill;                                        // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsChargeBasedSkill(class UObject* ActionSkill, bool* res);
		void AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res);
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void TriggerNova();
		void AnointRemoveEffect();
		void ExecuteUbergraph_Ability_All_SkillActive_PulseFireNova(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
