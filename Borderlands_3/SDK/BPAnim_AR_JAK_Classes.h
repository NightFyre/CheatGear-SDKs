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
	 * AnimBlueprintGeneratedClass BPAnim_AR_JAK.BPAnim_AR_JAK_C
	 * Size -> 0x0941 (FullSize[0x0DD1] - InheritedSize[0x0490])
	 */
	class UBPAnim_AR_JAK_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_65D61765405514CFD4DE61A728DA65B5;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_AFDAA879489D75587CCA90B9D095A6EC;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1FFC08D54788B5207EA3AAB4D511C509;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D774ABD644B43591C11A7597402BFBD8; // 0x0640(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0CB23B1B4A1E02A2FB4E059EF87A23C5; // 0x0760(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A3315CEB48B079F1D04B42A22A6E05B3;     // 0x07E0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4; // 0x0890(0x0080)
		struct FAnimNode_BlendSpaceEvaluator                       AnimGraphNode_BlendSpaceEvaluator_ECA38BFD43AF093E08D8BBA91F9454CF; // 0x0910(0x0168)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25; // 0x0A78(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E; // 0x0AF8(0x00D0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_86551BF64175C7499DE100A18AED4CF7; // 0x0BC8(0x0048)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_92BBC3264C1309D8B50075830DCDE378; // 0x0C10(0x0178)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_27DCB5D5456854616C410CB4A45E7B9B; // 0x0D88(0x0048)
		bool                                                       bIsCrankGrip;                                            // 0x0DD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_1FD2F75841D91445643045A38773FE25();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_SequenceEvaluator_B23BAB3F4420E8E52A34939016E61FF4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_JAK_AnimGraphNode_BlendListByBool_613EC15D49888B7414BA309F4687CD9E();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_AR_JAK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
