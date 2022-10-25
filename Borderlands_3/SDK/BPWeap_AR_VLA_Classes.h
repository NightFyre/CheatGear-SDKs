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
	 * BlueprintGeneratedClass BPWeap_AR_VLA.BPWeap_AR_VLA_C
	 * Size -> 0x0008 (FullSize[0x09E0] - InheritedSize[0x09D8])
	 */
	class ABPWeap_AR_VLA_C : public ABPWeap_VLA_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09D8(0x0008) Transient, DuplicateTransient

	public:
		void Update_Bipod_FX();
		void UpdateResourceLocks(bool Enable);
		void OnSwitchedMode();
		void OnPutDown(class AWeapon* Weapon);
		void OnEquipped();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BPWeap_AR_VLA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
