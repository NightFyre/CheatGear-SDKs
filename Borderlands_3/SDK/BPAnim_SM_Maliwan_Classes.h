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
	 * AnimBlueprintGeneratedClass BPAnim_SM_Maliwan.BPAnim_SM_Maliwan_C
	 * Size -> 0x0651 (FullSize[0x0AE1] - InheritedSize[0x0490])
	 */
	class UBPAnim_SM_Maliwan_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_DB0207324786FE1645800D92558B6B81;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_0C3713E3469542F33572FEA1D7174FA4;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_97541FC742165569D46187BBA5154ECA;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9E4C3A64409A86BFC2FE5EA9CE7E34B2; // 0x0640(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_111E1C8247693B4422F1ECBD4CD04D4A;     // 0x0760(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_1EAB732843F60D13CF2FE2A24CAB5618; // 0x0810(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8B474EF04B61E2D51388BE99551146EC; // 0x08E0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8417011946156F59875B8B8B46010D91; // 0x0960(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_486E44EF407AF5FAFF817393C388410A; // 0x09E0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9FE18F924984DF4081FBF88604FF79C7; // 0x0A60(0x0080)
		bool                                                       bPrimaryUseMode;                                         // 0x0AE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Maliwan_AnimGraphNode_SequenceEvaluator_486E44EF407AF5FAFF817393C388410A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Maliwan_AnimGraphNode_BlendListByBool_1EAB732843F60D13CF2FE2A24CAB5618();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SM_Maliwan_AnimGraphNode_SequenceEvaluator_9FE18F924984DF4081FBF88604FF79C7();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_SM_Maliwan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
