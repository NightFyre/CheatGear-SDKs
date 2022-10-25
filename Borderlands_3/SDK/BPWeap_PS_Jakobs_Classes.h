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
	 * BlueprintGeneratedClass BPWeap_PS_Jakobs.BPWeap_PS_Jakobs_C
	 * Size -> 0x0008 (FullSize[0x0A08] - InheritedSize[0x0A00])
	 */
	class ABPWeap_PS_Jakobs_C : public ABPWeap_Jakobs_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A00(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void HideSpeedLoader();
		void ReceiveBeginPlay();
		void HideAmmo();
		void Notify_ReloadEnded(bool bCompleted);
		void ResetCylinder();
		void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
		void ExecuteUbergraph_BPWeap_PS_Jakobs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
