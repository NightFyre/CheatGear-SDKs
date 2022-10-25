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
	 * BlueprintGeneratedClass BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C
	 * Size -> 0x000F (FullSize[0x0A00] - InheritedSize[0x09F1])
	 */
	class ABPWeap_HW_TOR_BaseWeapon_C : public ABPWeap_Torgue_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_JN1I[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F8(0x0008) Transient, DuplicateTransient

	public:
		void VisibleAmmoUpdate();
		void ShowRocketBone();
		void HideRocketBone();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void HideRocket();
		void ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
