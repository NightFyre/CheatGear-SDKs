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
	 * BlueprintGeneratedClass Ability_Boogeyman.Ability_Boogeyman_C
	 * Size -> 0x0110 (FullSize[0x0208] - InheritedSize[0x00F8])
	 */
	class UAbility_Boogeyman_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		class AOakWeapon*                                          BaseWeapon;                                              // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_WarlordAmmoRegen; // 0x0108(0x0028)
		struct FEnvQueryParams                                     Query;                                                   // 0x0130(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AActor*                                              Target;                                                  // 0x01E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FanLoc;                                                  // 0x01F0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FanRot;                                                  // 0x01FC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnActivated();
		void WeaponFired();
		void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
		void ExecuteUbergraph_Ability_Boogeyman(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
