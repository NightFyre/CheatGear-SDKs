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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_TheSeventhSense.BPWeaponFireProjectile_TheSeventhSense_C
	 * Size -> 0x0008 (FullSize[0x0988] - InheritedSize[0x0980])
	 */
	class UBPWeaponFireProjectile_TheSeventhSense_C : public UBPWeaponFireProjectileComponent_JAK_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
		void HomeOnReload(class ULightProjectile* Projectile);
		void ExecuteUbergraph_BPWeaponFireProjectile_TheSeventhSense(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
