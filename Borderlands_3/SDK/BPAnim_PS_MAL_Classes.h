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
	 * AnimBlueprintGeneratedClass BPAnim_PS_MAL.BPAnim_PS_MAL_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_MAL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_50163D27440B51BCC00AAFAE8C86926E;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_80FAB878477C47F3D98E3182AA922E1E; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_655BFEAA4093F1AD688020BD9DA6036C;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C6EEA2C14490AE0377B1A2A3656967AB;     // 0x06B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_28DFB595428F6117C70932AFB41C4417;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_80E8BA834E1052769B84C7BAFB0C0BBC; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_CB21E8844ADFB9D42985849B85A1A18E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_MAL_AnimGraphNode_SequenceEvaluator_570623C2490A645BA98039BE822A9CD9();
		void ExecuteUbergraph_BPAnim_PS_MAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
