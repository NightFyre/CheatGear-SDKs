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
	 * BlueprintGeneratedClass Ability_Tizzy.Ability_Tizzy_C
	 * Size -> 0x0080 (FullSize[0x0178] - InheritedSize[0x00F8])
	 */
	class UAbility_Tizzy_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BinaryOperator; // 0x0100(0x0028)
		class UBPHeatComponent_CoV_C*                              HeatComponent;                                           // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Player;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOakDamageCauserComponent*                           DamageCauserComponent;                                   // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOakAbilityResourceController_WeaponShotModifier    RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Tizzy; // 0x0140(0x0028)
		int32_t                                                    Count;                                                   // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ENQY[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWeapon*                                             Weapon;                                                  // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopTizzy();
		void StartTizzy();
		void OnActivated();
		void NotifyHeatChange();
		void OnDeactivated();
		void WeaponUsed(class AWeapon* EventWeapon);
		void ExecuteUbergraph_Ability_Tizzy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
