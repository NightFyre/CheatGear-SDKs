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
	 * AnimBlueprintGeneratedClass BPAnim_SG_JAK.BPAnim_SG_JAK_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SG_JAK_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_CA9AE9354FFBD4618BD7ADB8A68E0EFF;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C8B82D824648E73EA673DBA56C2361EA;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_CD4B7EBE4B42443B203363B3A4049A70;     // 0x0590(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_424045D44A765F7DEBA07D9C5D5DC6B6;     // 0x0640(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0B1CA6B84634F0537F6CA89B0236FF98; // 0x06F0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368; // 0x0770(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9; // 0x07F0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7BF79C534750679ACD282CBF2825073A; // 0x0870(0x0120)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368();
		void ExecuteUbergraph_BPAnim_SG_JAK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
