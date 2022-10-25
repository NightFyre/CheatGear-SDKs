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
	 * AnimBlueprintGeneratedClass BPAnim_SR_VLA.BPAnim_SR_VLA_C
	 * Size -> 0x0508 (FullSize[0x0998] - InheritedSize[0x0490])
	 */
	class UBPAnim_SR_VLA_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_ED92A80A4F01F0792A592EADEA8108E0;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_65F3D0F24E6E5CECE31727A539BDFFC3;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_893EDE564EDAF4CADBA2CB86F86BD93F;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_812C4F414AA058A051AE82B30A2DE193; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_311E7C3D4BB949FFA6BD75959663B5F4;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169; // 0x0910(0x0080)
		class UAnimSequence*                                       IdleAnim;                                                // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIdleAnim(int32_t UseMode);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_E448E8F94BD55E44A0FDA1AD3B261AC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_B22972354564BBB6987D87873DDBB3B6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_VLA_AnimGraphNode_SequenceEvaluator_926B43AD4AB2D462D69E50AA74D61169();
		void BlueprintSwitchedMode(int32_t NewMode);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_SR_VLA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
