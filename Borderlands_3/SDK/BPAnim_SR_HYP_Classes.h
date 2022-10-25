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
	 * AnimBlueprintGeneratedClass BPAnim_SR_HYP.BPAnim_SR_HYP_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SR_HYP_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_CE577EA2475716C904ADB7ABAD0A189F;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6EF900B247F70C6905EFE89516DCE364;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3B6F0C9C406900C9D6B5E9B4DFE93DEB;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_FE35ADED478165390EC7BA96B369B737; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A8CF2E41415DC10050117EB01EEC8406;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_B04FA9B3452C5CDC3AEEC8912E66BA8D; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_83CD15654D3A5ECEC10F3DB9555C7906();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_HYP_AnimGraphNode_SequenceEvaluator_ED78D00849D6B3441C220A9FC9AAB857();
		void ExecuteUbergraph_BPAnim_SR_HYP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
