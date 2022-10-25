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
	 * BlueprintGeneratedClass Ability_All_SkillStart_OverchargeShield.Ability_All_SkillStart_OverchargeShield_C
	 * Size -> 0x0013 (FullSize[0x01D4] - InheritedSize[0x01C1])
	 */
	class UAbility_All_SkillStart_OverchargeShield_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_JENR[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		float                                                      ShieldRefill;                                            // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res);
		void SkillStarted(class UOakActionAbility* ActionAbility);
		void DrainShield();
		void ResetShield();
		void ExecuteUbergraph_Ability_All_SkillStart_OverchargeShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
