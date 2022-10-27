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
	 * AnimBlueprintGeneratedClass BPAnim_SM_Hyperion.BPAnim_SM_Hyperion_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SM_Hyperion_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5754B83B40788B433D763CA8AD34740E;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_0B518AD64C1A78ABB2E29A9B1C8E0681;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5C0DC1FE4C8F398C96F83BBEB5F689A2;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_97EA4D454A904344B5C31C8C5C00CE4F; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E825E7234BDD66C8D489FA82E111F2F5;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F74361BE4FC0F4ADEDEC53B64E5942C1; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_8398C3FE4AA04460E8AC0589CA9EF4A4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Hyperion_AnimGraphNode_SequenceEvaluator_9087D44F42551D7E54FF55B400894993();
		void ExecuteUbergraph_BPAnim_SM_Hyperion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
