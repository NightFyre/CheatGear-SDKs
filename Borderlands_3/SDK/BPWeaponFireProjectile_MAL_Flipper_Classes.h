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
	 * BlueprintGeneratedClass BPWeaponFireProjectile_MAL_Flipper.BPWeaponFireProjectile_MAL_Flipper_C
	 * Size -> 0x000C (FullSize[0x0964] - InheritedSize[0x0958])
	 */
	class UBPWeaponFireProjectile_MAL_Flipper_C : public UBPWeaponFireProjectile_MAL_SMG_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) Transient, DuplicateTransient
		int32_t                                                    ShotCount;                                               // 0x0960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyUsedStarted_Event();
		void NotifyUsedFinished_Event();
		void NotifyUsed_Event();
		void NotifyReloadStarted_Event(class AWeapon* EventWeapon, bool bAutoReload);
		void ExecuteUbergraph_BPWeaponFireProjectile_MAL_Flipper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
