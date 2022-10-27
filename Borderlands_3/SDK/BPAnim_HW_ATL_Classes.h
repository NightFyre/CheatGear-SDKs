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
	 * AnimBlueprintGeneratedClass BPAnim_HW_ATL.BPAnim_HW_ATL_C
	 * Size -> 0x0A85 (FullSize[0x0F15] - InheritedSize[0x0490])
	 */
	class UBPAnim_HW_ATL_C : public UOakWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_33DADE43459CD008CC6BF288EA5C61A2;     // 0x0498(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E5E8ED544C41121CAC47178646D67AE4;     // 0x04E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_BB9DC250472D6EE77E4A4780A46FDB82;     // 0x0590(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5981BAA6477010B1D9D5B59A18473C1E; // 0x0640(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_691D653547CD58D5FA7BFD9C6FB3C554; // 0x0760(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_C09333384C4C3226B1AA679635EC44F5; // 0x0850(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_646D4F764A4C8F3BB9A94380820EE2AC; // 0x0898(0x0048)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_0122B58C47C7186950CDDE812813AB90;   // 0x08E0(0x0290)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7124899B42DF5261635AA0A515B0BACB;     // 0x0B70(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_F700862840F5CC56DBBD16932F31F970; // 0x0C20(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C0FC1B4B4E12F0918A685C9CB1839240; // 0x0CA0(0x00F0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5EE93F2845123ADDC44180A7AD2C2D95; // 0x0D90(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_836C55ED42C5096E65F27A95C6BF8D1E; // 0x0E60(0x0080)
		struct FTransform                                          tShoulder_Socket;                                        // 0x0EE0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ShoulderIK_Weight;                                       // 0x0F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrimaryUseMode;                                         // 0x0F14(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_ATL_AnimGraphNode_SequenceEvaluator_836C55ED42C5096E65F27A95C6BF8D1E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_ATL_AnimGraphNode_BlendListByBool_5EE93F2845123ADDC44180A7AD2C2D95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_ATL_AnimGraphNode_SequenceEvaluator_F700862840F5CC56DBBD16932F31F970();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_HW_ATL_AnimGraphNode_LookAt_0122B58C47C7186950CDDE812813AB90();
		void BlueprintInitializeAnimation();
		void BlueprintSwitchedMode(int32_t NewMode);
		void ExecuteUbergraph_BPAnim_HW_ATL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
