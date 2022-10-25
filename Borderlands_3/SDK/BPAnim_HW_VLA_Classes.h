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
	 * AnimBlueprintGeneratedClass BPAnim_HW_VLA.BPAnim_HW_VLA_C
	 * Size -> 0x0508 (FullSize[0x0998] - InheritedSize[0x0490])
	 */
	class UBPAnim_HW_VLA_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_EE89BBA645CCAA0E06D4BE963920A0C1;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_678646C847DF528AC1787897DFA947C6; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_89B768DF48CCEB83CE1A6D9DC9E0D410;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C2FA373C4D34CA94FD383283DA415ECF;     // 0x06B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_56BBA7D044F3F52FCED1B5919D7D129B;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0; // 0x0910(0x0080)
		class UAnimSequence*                                       IdleAnim;                                                // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIdleAnim(int32_t UseMode);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_80B973BA490D96EC1A6863BBAAFE80D0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_DD8E2BA748CADFB3FC227CB8DD499581();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_VLA_AnimGraphNode_SequenceEvaluator_FFBDA08E4295C7EECEA95B9044BB5FC8();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_HW_VLA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
