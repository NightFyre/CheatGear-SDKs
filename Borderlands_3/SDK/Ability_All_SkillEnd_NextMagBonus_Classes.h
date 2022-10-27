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
	 * BlueprintGeneratedClass Ability_All_SkillEnd_NextMagBonus.Ability_All_SkillEnd_NextMagBonus_C
	 * Size -> 0x007F (FullSize[0x0240] - InheritedSize[0x01C1])
	 */
	class UAbility_All_SkillEnd_NextMagBonus_C : public UAbility_AnointParent_SkillEnd_C
	{
	public:
		unsigned char                                              UnknownData_DRHW[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_SkillEnd_AccuracyHandling; // 0x01D0(0x0028)
		int32_t                                                    ReloadCount;                                             // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5AWF[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakCharacter*                                       OakCharacterOwner;                                       // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        MaxReloads;                                              // 0x0208(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void OnActivated();
		void BindReloadEvent();
		void UnbindReloadEvent();
		void AnointRemoveEffect();
		void ReloadedWeapon(class AWeapon* EventWeapon, bool bCompleted);
		void ExecuteUbergraph_Ability_All_SkillEnd_NextMagBonus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
