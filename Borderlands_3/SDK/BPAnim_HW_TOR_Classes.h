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
	 * AnimBlueprintGeneratedClass BPAnim_HW_TOR.BPAnim_HW_TOR_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_HW_TOR_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_10C6FB7B497B277CACAAE38CB328DBF8;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_BF061179421BD737FA5105AE9355AE98; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F90A2BD6416BAB270DC5C7B818022889;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_801F025F4DC06C67637C32A50932F445;     // 0x06B0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_309A5115458C62638FFE8F8EC2B039FE; // 0x0760(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BB1EC844446DD18E629DAD8A1BB068CB;     // 0x07E0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_309FBC644596AB02D0B2CC9CC36080A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_TOR_AnimGraphNode_SequenceEvaluator_10603C404B1A669D30349AB230F8ABF3();
		void ExecuteUbergraph_BPAnim_HW_TOR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
