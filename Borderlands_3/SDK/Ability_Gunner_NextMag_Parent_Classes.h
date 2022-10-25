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
	 * BlueprintGeneratedClass Ability_Gunner_NextMag_Parent.Ability_Gunner_NextMag_Parent_C
	 * Size -> 0x007D (FullSize[0x0288] - InheritedSize[0x020B])
	 */
	class UAbility_Gunner_NextMag_Parent_C : public UAbility_AnointParent_Gunner_C
	{
	public:
		unsigned char                                              UnknownData_BSPV[0x5];                                   // 0x020B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TestEndGame; // 0x0218(0x0028)
		int32_t                                                    ReloadCount;                                             // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3A1T[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOakCharacter*                                       OakCharacterOwner;                                       // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAttributeInitializationData                        MaxReloads;                                              // 0x0250(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnointTriggerEffect(bool TriggerEffect, bool* res);
		void OnActivated();
		void ReloadedWeapon(class AWeapon* EventWeapon, bool bAutoReload);
		void AnointAutoBearStarted();
		void ExecuteUbergraph_Ability_Gunner_NextMag_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
