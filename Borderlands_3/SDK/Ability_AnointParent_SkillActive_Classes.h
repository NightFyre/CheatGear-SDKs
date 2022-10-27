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
	 * BlueprintGeneratedClass Ability_AnointParent_SkillActive.Ability_AnointParent_SkillActive_C
	 * Size -> 0x0051 (FullSize[0x0212] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_SkillActive_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_Y17I[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		struct FAttributeInitializationData                        AnointmentChargeDuration;                                // 0x01D0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class ABPChar_Operative_C*                                 OperativeCharacter;                                      // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerIsOperative;                                       // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceShutdown;                                           // 0x0211(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res);
		void AnointOnActionSkillActivated(class UOakActionAbility* ActionAbility, bool* res);
		void OnActivated();
		void AnointRemoveEffect();
		void OnDeactivated();
		void ExecuteUbergraph_Ability_AnointParent_SkillActive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
