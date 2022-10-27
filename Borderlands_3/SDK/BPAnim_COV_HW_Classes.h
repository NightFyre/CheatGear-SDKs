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
	 * AnimBlueprintGeneratedClass BPAnim_COV_HW.BPAnim_COV_HW_C
	 * Size -> 0x0D70 (FullSize[0x1200] - InheritedSize[0x0490])
	 */
	class UBPAnim_COV_HW_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F531BCA64B22A291D6188BA4488A2E5E;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_57B2EBA5487786F2B3C8BDB796DFAD51; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_686272B04A9F7F2AAFFFA58A9E90F75D;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5C9717034A8445D491A98B9EA38DDC47;     // 0x06B0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AE93225F462606DDDF56B2BA0F30FA52; // 0x0760(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_91616AE847A3AFD9363981B2C8F50259; // 0x07B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5D4A8D37484CCB82CA1612960253D967; // 0x0800(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9C3690F84475CA93657A6D829E41B6E7; // 0x0850(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8F0E4CC544AF30B5CA4C64BDA581A733; // 0x08A0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_73318EC34820DCFCAC1A7A8AC3DBB1D2; // 0x08F0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_12E4D32E49AB4476CFFD06B42999CBF4; // 0x09E0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1DBEFD5B4DCC2045CE9CBA91CBEF0CBE; // 0x0A28(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A76CA3964F81C13B90441587B81DFA9B; // 0x0B18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_93258F4C4271902F6C77E696623C0CA5; // 0x0B60(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_996C819541486800EEB52FBE62894E77; // 0x0C50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51C2CA994374DAE8F18E0A881C5F6B47; // 0x0C98(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D5D8E76647B43EBE08FFF6ADDB53CDE9; // 0x0D88(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_A7A247CE43AA056F2BFA45AC3021F954; // 0x0DD0(0x0188)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_EF52F04F4977B9DFBADD4497432E1770; // 0x0F58(0x00F0)
		unsigned char                                              UnknownData_V7VI[0x8];                                   // 0x1048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BC5F62C84E6C5C43B4E15DBB1A43CB16;     // 0x1050(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_B96060E74C42C7EF71E1CBA0749B2B08; // 0x1100(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F1073EE64AAB125A577B92B77AD4CF4E; // 0x1180(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequencePlayer_73318EC34820DCFCAC1A7A8AC3DBB1D2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequencePlayer_1DBEFD5B4DCC2045CE9CBA91CBEF0CBE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_8F0E4CC544AF30B5CA4C64BDA581A733();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequenceEvaluator_B96060E74C42C7EF71E1CBA0749B2B08();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_SequenceEvaluator_F1073EE64AAB125A577B92B77AD4CF4E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_9C3690F84475CA93657A6D829E41B6E7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_COV_HW_AnimGraphNode_TransitionResult_91616AE847A3AFD9363981B2C8F50259();
		void ExecuteUbergraph_BPAnim_COV_HW(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
