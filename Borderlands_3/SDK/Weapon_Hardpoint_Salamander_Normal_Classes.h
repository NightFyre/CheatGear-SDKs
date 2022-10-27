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
	 * BlueprintGeneratedClass Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C
	 * Size -> 0x0058 (FullSize[0x0BD0] - InheritedSize[0x0B78])
	 */
	class AWeapon_Hardpoint_Salamander_Normal_C : public AWeapon_Hardpoint_Salamander_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B78(0x0008) Transient, DuplicateTransient
		class UWeaponFireBeamComponent*                            WeaponFireBeam;                                          // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FAttributeEffectData                                AttEffect_Mod1_EffectDamage;                             // 0x0B88(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SetupMod1();
		void UserConstructionScript();
		void K2_InitializeMod();
		void ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
