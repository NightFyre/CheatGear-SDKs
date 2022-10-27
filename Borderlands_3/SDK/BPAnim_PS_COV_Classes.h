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
	 * AnimBlueprintGeneratedClass BPAnim_PS_COV.BPAnim_PS_COV_C
	 * Size -> 0x0570 (FullSize[0x0A00] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_COV_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_03B6C67B47168729E1B7368669836631;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_50AB93734ED57DABE33477BB1B93C2B4; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F1EFA89A4A6CAA406172E0B0AEAC2E43;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_16EB0252474D80E71E4A498757193915;     // 0x06B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_17683190431222C97DAF5596CD5C9D89;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB; // 0x0890(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E59EFD1648307BEE5A4878953B102BA6; // 0x0910(0x00F0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_4AF55B7840EB34EC6214508E47B217FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_COV_AnimGraphNode_SequenceEvaluator_AFB2C3394F794669F2FC60962D3E74C8();
		void ExecuteUbergraph_BPAnim_PS_COV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
