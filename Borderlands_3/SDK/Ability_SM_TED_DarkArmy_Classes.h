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
	 * BlueprintGeneratedClass Ability_SM_TED_DarkArmy.Ability_SM_TED_DarkArmy_C
	 * Size -> 0x0050 (FullSize[0x0148] - InheritedSize[0x00F8])
	 */
	class UAbility_SM_TED_DarkArmy_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class UWeaponFireProjectileComponent*                      MyFireComponent;                                         // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator; // 0x0108(0x0028)
		class ABPWeap_SM_TED_C*                                    BPWeap;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADroneProj_TED_DarkArmy_C*>                   DroneArray;                                              // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void OnRegistered();
		void ReloadStartedDelegate(class AWeapon* EventWeapon, bool bCompleted);
		void OnDeactivated();
		void OnUnregistered();
		void OnPaused();
		void OnActivated();
		void ExecuteUbergraph_Ability_SM_TED_DarkArmy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
