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
	 * AnimBlueprintGeneratedClass BPAnim_PS_Tediore.BPAnim_PS_Tediore_C
	 * Size -> 0x0500 (FullSize[0x0990] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_Tediore_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_9D3BA0C2412670F88A54CAA6A8528130;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_941C36444DD9587486C997B902450F45;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4E11B48C4050AB9979B96191F730D172;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2AC01F9A4AE4A6EE6A7A8EBB4CFF73FA; // 0x0640(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_151F5E5046DACFBFD43723A342BE0189; // 0x0760(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BA6732F345C9C5954436C6B458D46C0E;     // 0x07E0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D; // 0x0910(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_92D609B64A4FC4CB995258B2F945653D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_Tediore_AnimGraphNode_SequenceEvaluator_7436507346AE631F5000AF89BB673C82();
		void ExecuteUbergraph_BPAnim_PS_Tediore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
