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
	 * AnimBlueprintGeneratedClass BPAnim_SirenBrawler_GhostArms_1st.BPAnim_SirenBrawler_GhostArms_1st_C
	 * Size -> 0x0358 (FullSize[0x0E40] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_SirenBrawler_GhostArms_1st_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7TDI[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_063BECBB4A704EAFE18582A0C5C9DD10;     // 0x0AF8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8D46CD48434C08B0D716C9B6AC6E4608;     // 0x0B40(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_FF0E01FB4715D9AB48FCB3A767577BF7;     // 0x0BF0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45DFF43C44FD17484C5A31ACEE3C88C3; // 0x0CA0(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5A0981D945C0641A0F73BEBE08D2B032;     // 0x0D90(0x00B0)

	public:
		void ExecuteUbergraph_BPAnim_SirenBrawler_GhostArms_1st(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
