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
	 * AnimBlueprintGeneratedClass BPAnim_PS_TOR.BPAnim_PS_TOR_C
	 * Size -> 0x0570 (FullSize[0x0A00] - InheritedSize[0x0490])
	 */
	class UBPAnim_PS_TOR_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_EE7C9BB1457A371E29A47392CB5D9124;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6B3E578A4CCE63C8AB2E35BC929C3662;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_72D6E89141845C0F400060BA11C180D8;     // 0x0590(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_91049C4A4E0F95015826E7BB77DDF254;     // 0x0640(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E; // 0x06F0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8; // 0x0770(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6B654A7648640A8280B49999A25BFFBC; // 0x07F0(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FA6486F7493E73E5A424E49743C997BF; // 0x0910(0x00F0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DD571AA042A0A900CE5732B929D8BAD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PS_TOR_AnimGraphNode_SequenceEvaluator_DEB151E64D3429611A73ED932E21967E();
		void ExecuteUbergraph_BPAnim_PS_TOR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
