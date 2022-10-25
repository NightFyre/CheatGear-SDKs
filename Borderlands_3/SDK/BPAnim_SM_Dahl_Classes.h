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
	 * AnimBlueprintGeneratedClass BPAnim_SM_Dahl.BPAnim_SM_Dahl_C
	 * Size -> 0x0B21 (FullSize[0x0FB1] - InheritedSize[0x0490])
	 */
	class UBPAnim_SM_Dahl_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_3FB4731B40B990C58C7063B173A9ED0F;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6B29C3C0489CC355C3FE909C2961C74E;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2D871C2B4DB5494F600EB38E3A513FF2;     // 0x0590(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6A048A9749BC2AA8E5D5519504D28137; // 0x0640(0x0118)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96; // 0x0758(0x00D0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_35465ABC44CB94A6F2C6229154346344; // 0x0828(0x0118)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9C916E514E0C77BE368A6AAF6C80BA39; // 0x0940(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4B0F591F4C5FBB94763931B5F8D5AEBE; // 0x0A60(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_439C427F4A13B463C15261BC38BAA54E; // 0x0AE0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_BB3A0DBD48837C2D66C98D8056D32455; // 0x0B60(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_E03041D342ED4AA5D1C8C6AABD50592E; // 0x0BE0(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A29182854D075974C10DE1B4618D39A5;     // 0x0C60(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67; // 0x0D10(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308; // 0x0D90(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_16EE34C049965FB49821F0A6628B0378; // 0x0E10(0x0118)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47; // 0x0F28(0x0080)
		class UAnimSequence*                                       ScopeIdleAnim;                                           // 0x0FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAddScopeIdleAnim;                                       // 0x0FB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateScopeAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_8A8EEF98420BDA318477CFB05548C308();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_238ADA344A6389E30DD685B3F1FD9B47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_SequenceEvaluator_AA7807E8434F6DC42D04AE9189F49D67();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Dahl_AnimGraphNode_BlendListByBool_CFAE1CB94B838CB07657CCB879FE6A96();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_SM_Dahl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
