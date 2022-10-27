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
	 * AnimBlueprintGeneratedClass BPAnim_DAL_PS.BPAnim_DAL_PS_C
	 * Size -> 0x07F8 (FullSize[0x0C88] - InheritedSize[0x0490])
	 */
	class UBPAnim_DAL_PS_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_E792443B4554FE6FC64510A3C4280BB7;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_BDBE5BAC44BF3F7DE42D8CBC29F77ECB; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2B52A8764DB96C8E0BC0E1B57C226F11;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A2619D4A497C3107BC95209699533DE0;     // 0x06B0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0; // 0x0760(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6F020FE345605131055B51A1F55C3364; // 0x0830(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_53B91A1A40F83E7D241E87BDAB0275E1;     // 0x08B0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3; // 0x0960(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C; // 0x09E0(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_01959E4947722FDC37E5E59B31524A81; // 0x0A60(0x0118)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_E6A7109046C8F4D829DE208F8BEE5BCB; // 0x0B78(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D; // 0x0BF8(0x0080)
		bool                                                       bAddScopeAnim;                                           // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_48N0[0x7];                                   // 0x0C79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       ScopeAddIdleAnim;                                        // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateScopeAnim(int32_t UseMode);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_EE2C9E80403DF08149DACF8093B4DF2D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_DF7A19C44E53FC736AA49D832CC01C9C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_SequenceEvaluator_A1742C5342CA246F7B3CFB8824862FA3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DAL_PS_AnimGraphNode_BlendListByBool_9F937ABE43ED95715D41FF975123D1B0();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_DAL_PS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
