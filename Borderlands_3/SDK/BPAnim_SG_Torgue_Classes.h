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
	 * AnimBlueprintGeneratedClass BPAnim_SG_Torgue.BPAnim_SG_Torgue_C
	 * Size -> 0x0570 (FullSize[0x0A00] - InheritedSize[0x0490])
	 */
	class UBPAnim_SG_Torgue_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_0187AC594203BCC036C443B8B214CDD1;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B0174F3A4B0D900F4558B5A9C626D2F7;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9D30480C42D9CF6985B3638AFC93681B;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_BA06B1CF46E8ACE6C2B5B281D64D0024; // 0x0640(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E54518AC4C328B25237A44B0E7E44840; // 0x0760(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_CEFA8F134B660D8CBFEA81881438DEFD;     // 0x0850(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D; // 0x0900(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C; // 0x0980(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_D715C2874F535D4512AB51BCF51DE18C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Torgue_AnimGraphNode_SequenceEvaluator_2888225446FBAD4864E412824FCA026D();
		void ExecuteUbergraph_BPAnim_SG_Torgue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
