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
	 * AnimBlueprintGeneratedClass BPAnim_SG_TED.BPAnim_SG_TED_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SG_TED_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5224B7584F57C22EC8B3F3822A16B7A6;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1C13C20D449B7508F6E515905B723E17;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_362D123B4D70B29CDA5C6FAC76E7BED7;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4B7A1E844EE9CC09773401A0A6E9ADB4; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_763EFFAA4F67E81A57FA96A72C95E00C;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_C637A17F48B7EE131749FC99604C46F6; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547();
		void ExecuteUbergraph_BPAnim_SG_TED(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
