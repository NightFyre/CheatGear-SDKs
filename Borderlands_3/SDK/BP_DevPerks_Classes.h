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
	 * BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C
	 * Size -> 0x0008 (FullSize[0x01A8] - InheritedSize[0x01A0])
	 */
	class UBP_DevPerks_C : public UOakDeveloperPerks
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A0(0x0008) Transient, DuplicateTransient

	public:
		void UnlimitedAmmo();
		void UnlockAllCustomizations();
		void KillEnemies();
		void SpawnAwesomeItems();
		void GiveGoldenKeys();
		void GiveEridium();
		void GiveCash();
		void GiveLevels();
		void OnDeveloperPerkActivated(unsigned char Perk);
		void ExecuteUbergraph_BP_DevPerks(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
