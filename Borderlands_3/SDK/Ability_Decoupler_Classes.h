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
	 * BlueprintGeneratedClass Ability_Decoupler.Ability_Decoupler_C
	 * Size -> 0x0044 (FullSize[0x013C] - InheritedSize[0x00F8])
	 */
	class UAbility_Decoupler_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class UOakDamageCauserComponent*                           OakDamageCauser;                                         // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Quickdraw; // 0x0108(0x0028)
		class AOakCharacter*                                       OakChar;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PercentLoaded;                                           // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnActivated();
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
		void ReloadFinished(class AWeapon* EventWeapon, bool bCompleted);
		void ExecuteUbergraph_Ability_Decoupler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
