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
	 * AnimBlueprintGeneratedClass BPAnim_AR_DAL.BPAnim_AR_DAL_C
	 * Size -> 0x0E09 (FullSize[0x1299] - InheritedSize[0x0490])
	 */
	class UBPAnim_AR_DAL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_1D1218EA4A02E2734F76C5B10C236E5C;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_946E665B44B7F4B6B0C689B51B92C1F2; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9914CA044F45AFCCBF9B5B8C8CC6AFF1;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_61D33CFE4B0467283F9DB888E710DAD0;     // 0x06B0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_0ACB729D404CD32B28467E922D77CF19; // 0x0760(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FAD2F6F44A82C3F13D9AD998D38974F3; // 0x07B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45; // 0x0800(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16; // 0x0850(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F; // 0x08A0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C4E1B0AC4DA6C84AAB9B178164C468D1; // 0x0990(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238; // 0x09D8(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D1B0C5904AB897502725168A4A05519F; // 0x0AC8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2EC907224541F5F77C796180E34F0DBA; // 0x0B10(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_530E88DD4C8AED40F6901EB645BAC44A; // 0x0C00(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_1563EBBE4FEFC9EEB4AAB2B812C9D844; // 0x0C48(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_7CFF05A4452053F7D16B16A4E3A91C9E; // 0x0D38(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_F114E6AE41FDC771862BEB9668491929; // 0x0D80(0x0188)
		unsigned char                                              UnknownData_5X8W[0x8];                                   // 0x0F08(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_119863164273F897AEA07F94E8968161;     // 0x0F10(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35; // 0x0FC0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B; // 0x1040(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442; // 0x10C0(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C; // 0x1190(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_881686B54A5BA46EE9C27686975FD20D; // 0x1210(0x0080)
		class UAnimSequence*                                       IdleAddAnim;                                             // 0x1290(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAddIdleAnim;                                            // 0x1298(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateIdleAnim(unsigned char NewParam, int32_t A);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_AR_DAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
