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
	 * AnimBlueprintGeneratedClass BPAnim_Op_Cannon_SkillScreen.BPAnim_Op_Cannon_SkillScreen_C
	 * Size -> 0x02E0 (FullSize[0x0840] - InheritedSize[0x0560])
	 */
	class UBPAnim_Op_Cannon_SkillScreen_C : public UOperativeCannonAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_7DEEA838439E34D9F1D615B42B9397E4;     // 0x0568(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D88743F143E1F630E8B5838066F9C011;     // 0x05B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_51CC20C04089D904BF1DC5A09687A4CB;     // 0x0660(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A9E5E35947C52DAC3B7BCB98E4853AC9;     // 0x0710(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_C29A3820498F40BC1A008F8BFCBA94C2; // 0x07C0(0x0080)

	public:
		void ExecuteUbergraph_BPAnim_Op_Cannon_SkillScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
