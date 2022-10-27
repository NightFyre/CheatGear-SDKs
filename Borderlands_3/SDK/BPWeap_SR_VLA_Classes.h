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
	 * BlueprintGeneratedClass BPWeap_SR_VLA.BPWeap_SR_VLA_C
	 * Size -> 0x0008 (FullSize[0x09E0] - InheritedSize[0x09D8])
	 */
	class ABPWeap_SR_VLA_C : public ABPWeap_VLA_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient

	public:
		void OnPutDown();
		void OnSwitchedMode();
		void OnEquipped();
		void UpdateResourceLocks(bool Enable);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
		void ExecuteUbergraph_BPWeap_SR_VLA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
