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
	 * AnimBlueprintGeneratedClass BPAnim_EchoCommunicator.BPAnim_EchoCommunicator_C
	 * Size -> 0x1570 (FullSize[0x1AD0] - InheritedSize[0x0560])
	 */
	class UBPAnim_EchoCommunicator_C : public UEchoDeviceAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_81A5960549EF16182118A0903CF36C11;     // 0x0568(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_54A56D6A4E655C2582025DA308F0EC33; // 0x05B0(0x0120)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9CF07E224087BE27DAF58D8DBFFD83CF; // 0x06D0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B16AE8D34A818E198E5D469C88F24629; // 0x0720(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_EDB5C8A6437B2E65B6DA069E59D667A2; // 0x0770(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61B3C3394B716A26C2B7AF8EF58AFB8D; // 0x07C0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7786695C4091B472410109974A0A1FAA; // 0x0810(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6ED654FD4C105C5572BB66B0D8037A5E; // 0x0860(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B5E5445F4C82DA8E32961982FA664ACB; // 0x08B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0AB92A184B0F8A5628CD97A808B98D6D; // 0x0900(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_CC3E95204B8D21AFB5A59288AEFB5846; // 0x0950(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1B331AF24468B5BCA92BA7A0B61C9753; // 0x0A20(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BB31793D459B3442C475ADAD6D9EAD26; // 0x0B10(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_37EC57AB4F9FDF1545D133A5328F14FB; // 0x0C00(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_A988A9C34F27A0CF5C556481B7ED6A33; // 0x0C48(0x00F0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_AB99F8134A0170F87AC347A65860034C; // 0x0D38(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AF9BFBD24BD21E18FB13708824E8DA06; // 0x0E08(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_199C8B534383115BF5EBE1915CF7AC65; // 0x0EF8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_F270B2704095146BCB1FBE8312DA13E2; // 0x0F40(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DE8829A248475A7988DD95BFA5243027; // 0x1010(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2B7D746046FC31772CF0F99228923E14; // 0x1100(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_DC9DF40C40D469CD270975AB27C92F3B; // 0x11F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38978AB94037E65A03B72FB24C59AE66; // 0x1238(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D95E856946B4573FD33A2197DD87A724; // 0x1328(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D92C1BCA48EFD6201C7D5BB6EB0ACBD4; // 0x1370(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_9084575B48A98401458B4B951449E986; // 0x1460(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DCA771804F974A3980382DAC727B33F0; // 0x14A8(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C9D3E78242F657245A66D0944955C6D0; // 0x1528(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8E23EDC04D711612E988BDA8197F2DEC; // 0x1570(0x0188)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_39AE145A4A94421443581CBF12501E39; // 0x16F8(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_B948304F42BBA22A653BCF9B09A90BB4; // 0x1740(0x0048)
		struct FAnimNode_BlendSpaceEvaluator                       AnimGraphNode_BlendSpaceEvaluator_16F7C3F241F2360E24D1219D4587E70B; // 0x1788(0x0168)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C940E11B47DFB41B5EDD808858F77338;     // 0x18F0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BFA2AD844F8EF48D63F5FCB14606A687;     // 0x19A0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0A908D874FF782CF96A37F998C89C416; // 0x1A50(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_B5E5445F4C82DA8E32961982FA664ACB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_7786695C4091B472410109974A0A1FAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_0AB92A184B0F8A5628CD97A808B98D6D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_BlendListByBool_CC3E95204B8D21AFB5A59288AEFB5846();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_BlendListByBool_AB99F8134A0170F87AC347A65860034C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_61B3C3394B716A26C2B7AF8EF58AFB8D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_BlendListByBool_F270B2704095146BCB1FBE8312DA13E2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_EDB5C8A6437B2E65B6DA069E59D667A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_B16AE8D34A818E198E5D469C88F24629();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_BlendSpaceEvaluator_16F7C3F241F2360E24D1219D4587E70B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_9CF07E224087BE27DAF58D8DBFFD83CF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EchoCommunicator_AnimGraphNode_TransitionResult_6ED654FD4C105C5572BB66B0D8037A5E();
		void ExecuteUbergraph_BPAnim_EchoCommunicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
