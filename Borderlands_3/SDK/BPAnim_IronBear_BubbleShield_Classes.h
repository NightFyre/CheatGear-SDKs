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
	 * AnimBlueprintGeneratedClass BPAnim_IronBear_BubbleShield.BPAnim_IronBear_BubbleShield_C
	 * Size -> 0x04F8 (FullSize[0x0978] - InheritedSize[0x0480])
	 */
	class UBPAnim_IronBear_BubbleShield_C : public UIronBearBubbleShieldAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_224D57B94812BB0BFD52E689437DA48E;     // 0x0488(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C06332F6482F72F09EB209897D240A20;     // 0x04D0(0x00B0)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5; // 0x0580(0x00D0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442; // 0x0650(0x0198)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_42FD1AE8461DCE5A930B30813A8E9360; // 0x07E8(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8E10A29143DCB69BB66DB9BCCAE71E8E; // 0x0830(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_1801836147A791C1C3F691B0459BC5E9; // 0x0878(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_A922CE2B48A80FD46BAE4AB60BE30B1E; // 0x08F8(0x0080)

	public:
		void SetBlendPose(int32_t Pose);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_ModifyBone_205B69CA40CD25BBCF3F7F8B566A2442();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBear_BubbleShield_AnimGraphNode_BlendListByInt_727D640B47E78EAB60B8CEABDAF763D5();
		void ExecuteUbergraph_BPAnim_IronBear_BubbleShield(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
