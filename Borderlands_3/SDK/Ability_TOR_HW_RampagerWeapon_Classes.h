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
	 * BlueprintGeneratedClass Ability_TOR_HW_RampagerWeapon.Ability_TOR_HW_RampagerWeapon_C
	 * Size -> 0x003C (FullSize[0x0134] - InheritedSize[0x00F8])
	 */
	class UAbility_TOR_HW_RampagerWeapon_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_TOR_HW_RampagerWeapon; // 0x0100(0x0028)
		class UWeaponFireProjectileComponent*                      FireProjectile;                                          // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Counter;                                                 // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRegistered();
		void WeaponFired();
		void ExecuteUbergraph_Ability_TOR_HW_RampagerWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
