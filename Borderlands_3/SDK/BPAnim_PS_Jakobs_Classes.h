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
	 * AnimBlueprintGeneratedClass BPAnim_PS_Jakobs.BPAnim_PS_Jakobs_C
	 * Size -> 0x05B0 (FullSize[0x0A40] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_Jakobs_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_1AE2714C4978349F824753ACAE58D1C1;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_34475B6D47701ECD7FD3FA858AE8EB5C;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4380062C48C733C6E38512BCFCDCD694;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D3411DD5419680D9A83F82A49314DCCE; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_50DA920748F4A3C435CA258B26FE5672;     // 0x0760(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_151BC18947E58E4E58BB4CBBC70BBCB9;     // 0x0810(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_746D18D34F67622E953A4BAB9167BAF0; // 0x08C0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958; // 0x0940(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574; // 0x09C0(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_ABACB6CF48D95558320649AB827FA574();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Jakobs_AnimGraphNode_SequenceEvaluator_CAE2CD864DAA422145C4EC83E60EE958();
		void ExecuteUbergraph_BPAnim_PS_Jakobs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
