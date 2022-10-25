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
	 * AnimBlueprintGeneratedClass BPAnim_AR_COV.BPAnim_AR_COV_C
	 * Size -> 0x0570 (FullSize[0x0A00] - InheritedSize[0x0490])
	 */
	class UBPAnim_AR_COV_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_00394B09495B9C48FF94AEA0FAB5452F;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_B866D7984649E934D270BCB6DC97F43F; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_50EACE9D46963D05B328FAA26DFE2F12;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_734E483B48D50F406204F398654602F1;     // 0x06B0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7A6E3B134B891D3BD1F7B6BB2B1CF622; // 0x0760(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_618C86274BC6D63C7B1B93AE529B85BA;     // 0x0850(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6; // 0x0900(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786; // 0x0980(0x0080)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6();
		void ExecuteUbergraph_BPAnim_AR_COV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
