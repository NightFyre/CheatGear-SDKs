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
	 * AnimBlueprintGeneratedClass BPAnim_SG_TED_Legs.BPAnim_SG_TED_Legs_C
	 * Size -> 0x0CA8 (FullSize[0x1790] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_SG_TED_Legs_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_U856[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E82AA8D24F85B2E7D7093285773449D9; // 0x0AF8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7F48D41D4B6DA1EC88799D9D20640DF7; // 0x0B48(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6DA07E3F488502CAE54AD595EC700687; // 0x0B98(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F6AD89EC41FCBA7D6B521FAECEEECD72; // 0x0BE8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0CF75ED74FD7ECB607FAB6A55905D379; // 0x0C38(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F5FB416042D0C5AC3CC494BF3BDE4682; // 0x0D28(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_BDF9D9B54F2B063035B1A89C06D5F2ED; // 0x0D70(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_35A4016647103CFDA047F5BBC706C4F3; // 0x0ED0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_D0C5057B490C38D69A95A3BCE3E09E79; // 0x0F18(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_1FC641494593EE55DA7CFE8782E630B3; // 0x0F98(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_EBF6F299466E3829614E569B96F5CC20; // 0x1018(0x00D0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_96F1D2ED41072D0D68E7BD8C9A4FCEBC; // 0x10E8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_273809A74FB26279F866F0A5ACC36B12; // 0x1130(0x0188)
		unsigned char                                              UnknownData_LUKF[0x8];                                   // 0x12B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5745974249A3AE10CD9026B6DA3860CF;     // 0x12C0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_97F883804FA924EC34A626887226F513;     // 0x1370(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2C4B40954B44C5EBE8B419AE24542BB4;     // 0x1420(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3271880445D0A666E46DAB910C49E7DE; // 0x1468(0x0048)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_B638F8A849728771AAA606A37D726416;   // 0x14B0(0x0290)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5096B01A47B3DDA66FD0BC987D97206C; // 0x1740(0x0048)
		class ABPChar_TedioreTurret_C*                             Base_BPChar;                                             // 0x1788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_BlendListByBool_EBF6F299466E3829614E569B96F5CC20();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_TransitionResult_F6AD89EC41FCBA7D6B521FAECEEECD72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_LookAt_B638F8A849728771AAA606A37D726416();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_TransitionResult_6DA07E3F488502CAE54AD595EC700687();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_BlendSpacePlayer_BDF9D9B54F2B063035B1A89C06D5F2ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_Legs_AnimGraphNode_TransitionResult_E82AA8D24F85B2E7D7093285773449D9();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_SG_TED_Legs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
