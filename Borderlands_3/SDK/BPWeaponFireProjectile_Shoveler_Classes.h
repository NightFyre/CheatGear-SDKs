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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_Shoveler.BPWeaponFireProjectile_Shoveler_C
	 * Size -> 0x0008 (FullSize[0x0960] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_Shoveler_C : public UWeaponFireProjectileComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void NotifyReloadStart_Event(class AWeapon* EventWeapon, bool bCompleted);
		void K2_OnDeactivated();
		void ExecuteUbergraph_BPWeaponFireProjectile_Shoveler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
