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
	 * BlueprintGeneratedClass Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C
	 * Size -> 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
	 */
	class UAbility_Gunner_NextMagFireDamage_C : public UAbility_Gunner_NextMag_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) Transient, DuplicateTransient

	public:
		void ReloadedWeapon(class AWeapon* EventWeapon, bool bAutoReload);
		void ExecuteUbergraph_Ability_Gunner_NextMagFireDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
