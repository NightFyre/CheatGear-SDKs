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
	 * BlueprintGeneratedClass BPWeap_HW_ATL.BPWeap_HW_ATL_C
	 * Size -> 0x000C (FullSize[0x0A70] - InheritedSize[0x0A64])
	 */
	class ABPWeap_HW_ATL_C : public ABPWeap_ATL_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_5U4L[0x4];                                   // 0x0A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A68(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void Hide_Pod();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPWeap_HW_ATL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
