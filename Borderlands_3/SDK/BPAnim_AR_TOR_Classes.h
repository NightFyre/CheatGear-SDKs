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
	 * AnimBlueprintGeneratedClass BPAnim_AR_TOR.BPAnim_AR_TOR_C
	 * Size -> 0x05F0 (FullSize[0x0A80] - InheritedSize[0x0490])
	 */
	class UBPAnim_AR_TOR_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_CAFAC3FC40DA13C3BDF30CB0439E9703;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_49B8462F40941AF12B60CD9A7A244AE5; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_299D0E87445C3163F6A3C9BA31B266C7;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F513FFE140D2C0A12A96D8A134C60F6D;     // 0x06B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_46EF68C64D95A41104E203AB4EAC91B1;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F; // 0x0890(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_502C797A4CC649639D04B0BEE2CF0042; // 0x0910(0x00F0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_00BAFCE04C9704271B0003BC9553B839; // 0x0A00(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_FFCB96E94BFD0A40A3E0DE910932637F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_TOR_AnimGraphNode_SequenceEvaluator_9E656D6946FC664459AC9184C95F6FB5();
		void ExecuteUbergraph_BPAnim_AR_TOR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
