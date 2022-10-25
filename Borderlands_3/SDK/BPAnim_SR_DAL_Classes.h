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
	 * AnimBlueprintGeneratedClass BPAnim_SR_DAL.BPAnim_SR_DAL_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_SR_DAL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_3F797ABF4DA6DD09DF8BFAB93A1D9609;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C7D5E05248A156D69B6B23B1E83F38F2;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A053F8854D135E746D86FB8E29B77B78;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2BD6180145EF25FABDEDE3BAD71D8636; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_45C54889408FE472B243D9BEDF96F0D9;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_98595DEE45B90DACAC98F88B00B5DD87; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_BF3D7BDC42D2A7DB0286FFA84EAEE67C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SR_DAL_AnimGraphNode_SequenceEvaluator_F2F7F5B94113395F2F4868A9FC51565F();
		void ExecuteUbergraph_BPAnim_SR_DAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
