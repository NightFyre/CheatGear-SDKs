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
	 * AnimBlueprintGeneratedClass BPAnim_EFabricator.BPAnim_EFabricator_C
	 * Size -> 0x0570 (FullSize[0x0A00] - InheritedSize[0x0490])
	 */
	class UBPAnim_EFabricator_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_803B8B5D456FD240CB55B99F691CB321;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_B920227E43E55923947D75935FAE6F5E;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A88BE71441822CD9FDE1C183777D0A18;     // 0x0590(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B7239D9E46FFBA3CA98B34889CDD4CEC; // 0x0640(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_229462F04A8D818ACE12B9AF2ABEA1C4;     // 0x0730(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6; // 0x07E0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A; // 0x0860(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F8335054443DDF64744F839204C7402B; // 0x08E0(0x0120)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_F2EBB1D54E3068EA2E8880B390087E6A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_EFabricator_AnimGraphNode_SequenceEvaluator_5CAE9E1842A68ABF1DBDD49BEC15DAC6();
		void ExecuteUbergraph_BPAnim_EFabricator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
