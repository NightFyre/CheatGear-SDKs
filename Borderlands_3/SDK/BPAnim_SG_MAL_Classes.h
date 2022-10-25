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
	 * AnimBlueprintGeneratedClass BPAnim_SG_MAL.BPAnim_SG_MAL_C
	 * Size -> 0x0508 (FullSize[0x0998] - InheritedSize[0x0490])
	 */
	class UBPAnim_SG_MAL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_21078D1341C6EB2D279C8BB96F53C6C8;     // 0x0498(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_05169A72478AC49DBBB2C680ECBEE670; // 0x04E0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_CD1107B64E85255453B2C49B033CEBD6;     // 0x0600(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_62203ED94CC5AD156A47CCBF8D1766F1;     // 0x06B0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5BE3CE8245D7D0C4145FAAB076B4B7B4;     // 0x0760(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_62F0F82B48C8AE24FFC0D790A2EE0093; // 0x0810(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13771B4741AF805D1985769F4E8B5EDF; // 0x0890(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7714586D4A553D793C254092DB65989C; // 0x0910(0x0080)
		class UAnimSequenceBase*                                   WeaponIdleAnim;                                          // 0x0990(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIdle();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_MAL_AnimGraphNode_SequenceEvaluator_7714586D4A553D793C254092DB65989C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_MAL_AnimGraphNode_SequenceEvaluator_13771B4741AF805D1985769F4E8B5EDF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_MAL_AnimGraphNode_SequenceEvaluator_62F0F82B48C8AE24FFC0D790A2EE0093();
		void BlueprintSwitchedMode(int32_t NewMode);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_SG_MAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
