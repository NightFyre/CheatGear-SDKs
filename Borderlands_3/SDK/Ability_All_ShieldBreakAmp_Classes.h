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
	 * BlueprintGeneratedClass Ability_All_ShieldBreakAmp.Ability_All_ShieldBreakAmp_C
	 * Size -> 0x008A (FullSize[0x0182] - InheritedSize[0x00F8])
	 */
	class UAbility_All_ShieldBreakAmp_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class ABPChar_Player_C*                                    Player;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_All_ShieldBreakAmp; // 0x0108(0x0028)
		struct FGbxAbilityResourceController_ResourcePoolDelegate  RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_All_ShieldBreakAmp; // 0x0130(0x0028)
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_ShieldBreakAmp; // 0x0158(0x0028)
		bool                                                       ShieldReset;                                             // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShotModActive;                                           // 0x0181(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShieldDepleted(const struct FGameResourcePoolReference& ResourcePool);
		void ShieldRefilled(const struct FGameResourcePoolReference& ResourcePool);
		void ShotFired(class AWeapon* EventWeapon);
		void OnDeactivated();
		void OnActivated();
		void ExecuteUbergraph_Ability_All_ShieldBreakAmp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
