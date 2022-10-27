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
	 * BlueprintGeneratedClass Ability_Narp.Ability_Narp_C
	 * Size -> 0x003C (FullSize[0x0134] - InheritedSize[0x00F8])
	 */
	class UAbility_Narp_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class AActor*                                              Killed;                                                  // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD; // 0x0108(0x0028)
		int32_t                                                    LoadedAmmo;                                              // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
		void OnReloadEnded(class AWeapon* EventWeapon, bool bCompleted);
		void OnDeactivated();
		void OnUnregistered();
		void ExecuteUbergraph_Ability_Narp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
