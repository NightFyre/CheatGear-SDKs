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
	 * AnimBlueprintGeneratedClass BPAnim_SG_Hyperion.BPAnim_SG_Hyperion_C
	 * Size -> 0x0E20 (FullSize[0x12B0] - InheritedSize[0x0490])
	 */
	class UBPAnim_SG_Hyperion_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_90D5B67D4418B63AFC860088E591AFCB;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C3FA170542D2EEE64B1F9BA4588204CF;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_0EE4EF444C75EB0FD7EA01B2CE2F07D2;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_316FC28E4460F0913BFD709A4C078281; // 0x0640(0x0120)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0ACB729D404CD32B28467E922D77CF19; // 0x0760(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_875C517B4B5B593E9AEBAEBF27F655B7; // 0x07B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FAD2F6F44A82C3F13D9AD998D38974F3; // 0x0800(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45; // 0x0850(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16; // 0x08A0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C4373DB943B58302F17D9483687E5275; // 0x08F0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C4E1B0AC4DA6C84AAB9B178164C468D1; // 0x09E0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_98D3301C448A213761039184589DD727; // 0x0A28(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D1B0C5904AB897502725168A4A05519F; // 0x0B18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EC2354B042D771E12566C7B6606EF905; // 0x0B60(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_530E88DD4C8AED40F6901EB645BAC44A; // 0x0C50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_84D9C4AD4A1C705B207A47881FAD91AC; // 0x0C98(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_7CFF05A4452053F7D16B16A4E3A91C9E; // 0x0D88(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_741F75D5453E1070E19D1EB92E1A731A; // 0x0DD0(0x0188)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4D5AE16746C5D8E615FEB38159B1C674; // 0x0F58(0x0120)
		unsigned char                                              UnknownData_FFSI[0x8];                                   // 0x1078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7A27CFE548AD5EB826FE3BAC4EF660D7;     // 0x1080(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F1ED16894046120BCF2AB1B649C90FD2; // 0x1130(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2D6BD9134F45BE212B88899834D6F370; // 0x11B0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_904BDB2445A788C1F28C31BB23A81CAE; // 0x1230(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequencePlayer_C4373DB943B58302F17D9483687E5275();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequencePlayer_98D3301C448A213761039184589DD727();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequenceEvaluator_2D6BD9134F45BE212B88899834D6F370();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequenceEvaluator_904BDB2445A788C1F28C31BB23A81CAE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_875C517B4B5B593E9AEBAEBF27F655B7();
		void ExecuteUbergraph_BPAnim_SG_Hyperion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
