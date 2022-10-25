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
	 * BlueprintGeneratedClass Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C
	 * Size -> 0x0049 (FullSize[0x020A] - InheritedSize[0x01C1])
	 */
	class UAbility_AnointParent_Beastmaster_C : public UAbility_AnointParent_C
	{
	public:
		unsigned char                                              UnknownData_NHB5[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		class UBPEventHub_Beastmaster_C*                           BeastmaterEventHub;                                      // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Beastmaster; // 0x01D8(0x0028)
		bool                                                       UsedAttackCommand;                                       // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedGammaBurst;                                          // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedRakkAttack;                                          // 0x0202(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedFadeAway;                                            // 0x0203(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsedGravTrap;                                            // 0x0204(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndGammaBurst;                                           // 0x0205(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndRakkAttack;                                           // 0x0206(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndFadeAway;                                             // 0x0207(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndGravTrap;                                             // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WhileActive;                                             // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res);
		void AnointEndHulkOut();
		void AnointEndGammaBurst();
		void AnointEndFadeAway();
		void AnointUsedBeastmasterSkill(Enum_BeastmasterActionSkill ActionSkill);
		void AnointUsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
		void OnActivated();
		void AnointBeastmasterFindLocation(bool res);
		void BindBeastmasterEvents();
		void ExecuteUbergraph_Ability_AnointParent_Beastmaster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
