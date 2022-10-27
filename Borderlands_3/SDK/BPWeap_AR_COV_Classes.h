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
	 * BlueprintGeneratedClass BPWeap_AR_COV.BPWeap_AR_COV_C
	 * Size -> 0x0008 (FullSize[0x09E8] - InheritedSize[0x09E0])
	 */
	class ABPWeap_AR_COV_C : public ABPWeap_COV_BaseWeapon_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09E0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Weapon_NotifyEquipped();
		void ExecuteUbergraph_BPWeap_AR_COV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
