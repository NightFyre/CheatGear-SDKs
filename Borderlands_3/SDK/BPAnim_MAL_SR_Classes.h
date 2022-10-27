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
	 * AnimBlueprintGeneratedClass BPAnim_MAL_SR.BPAnim_MAL_SR_C
	 * Size -> 0x0508 (FullSize[0x0998] - InheritedSize[0x0490])
	 */
	class UBPAnim_MAL_SR_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_E76D64B043E3F59ED4438C96E7BF4D92;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_954CC0B840588E8149B60ABCD97AAB93;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_57F2658A439C9328861CDCB8E3407DC3;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_EFD9D83048447D1FE480FE8B47F772E6; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BED73AD145578427FB0CC790509AD6BC;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3C815035496E73271D5EFBA5D1CC7A37; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_29F2531442B55761F4EFBB82F2E6D92A; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F0A5E41749554F30431BD2BF8037E22A; // 0x0910(0x0080)
		class UAnimSequence*                                       WeaponIdleAnim;                                          // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIdleAnim(int32_t A);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MAL_SR_AnimGraphNode_SequenceEvaluator_F0A5E41749554F30431BD2BF8037E22A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MAL_SR_AnimGraphNode_SequenceEvaluator_29F2531442B55761F4EFBB82F2E6D92A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MAL_SR_AnimGraphNode_SequenceEvaluator_3C815035496E73271D5EFBA5D1CC7A37();
		void BlueprintSwitchedMode(int32_t NewMode);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_MAL_SR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
