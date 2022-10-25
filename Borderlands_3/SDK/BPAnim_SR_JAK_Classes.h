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
	 * AnimBlueprintGeneratedClass BPAnim_SR_JAK.BPAnim_SR_JAK_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SR_JAK_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_280BD84D48EEFC7A694C9FBD2FFAD397;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4DC963A34814BAA42745BEBAC4A90447;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_46349F2F40412F46D18390BFFA354BA8;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_A4FB113845085DF45D273DB2E5377D3C; // 0x0640(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0B4C484B4E4ACC9F3A2AD4A000522E2F; // 0x0760(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C17FD5B64A2BDB0492F392837FD3E817;     // 0x07E0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_02E50AB34D74AB6CD463B2B9500A4B9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_JAK_AnimGraphNode_SequenceEvaluator_CF0573074FFFD9ABECDD7EA02A869DB2();
		void ExecuteUbergraph_BPAnim_SR_JAK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
