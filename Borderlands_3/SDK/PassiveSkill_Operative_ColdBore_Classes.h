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
	 * BlueprintGeneratedClass PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C
	 * Size -> 0x0059 (FullSize[0x0209] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_ColdBore_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Operative_HotSwap; // 0x01B8(0x0028)
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_PassiveSkill_Operative_HotSwap; // 0x01E0(0x0028)
		bool                                                       bIsListeningForFirstShot;                                // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetManualHUDIconValues(int32_t* outStackCount, float* outDuration, float* outTimeRemaining);
		void OnActivated();
		void OnWeaponUsed(class AWeapon* EventWeapon);
		void ColdBore_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
		void ExecuteUbergraph_PassiveSkill_Operative_ColdBore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
