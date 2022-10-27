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
	 * BlueprintGeneratedClass Ability_InfernalWish.Ability_InfernalWish_C
	 * Size -> 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
	 */
	class UAbility_InfernalWish_C : public UOakAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) Transient, DuplicateTransient
		struct FGbxAbilityResourceController_ScriptDelegate        RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD; // 0x0100(0x0028)

	public:
		void OnActivated();
		void OnDeactivated();
		void WeaponFired(class AWeapon* EventWeapon);
		void ExecuteUbergraph_Ability_InfernalWish(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
