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
	 * BlueprintGeneratedClass BPWeap_SG_Torgue.BPWeap_SG_Torgue_C
	 * Size -> 0x000F (FullSize[0x0A00] - InheritedSize[0x09F1])
	 */
	class ABPWeap_SG_Torgue_C : public ABPWeap_Torgue_BaseWeapon_C
	{
	public:
		unsigned char                                              UnknownData_AZO9[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F8(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void HideSpeedLoader();
		void ResetBoneVisibility();
		void Notify_ReloadEnded(bool bCompleted);
		void ExecuteUbergraph_BPWeap_SG_Torgue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
