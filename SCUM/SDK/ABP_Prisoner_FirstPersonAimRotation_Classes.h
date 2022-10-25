#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C
	 * Size -> 0x0D72 (FullSize[0x102A] - InheritedSize[0x02B8])
	 */
	class UABP_Prisoner_FirstPersonAimRotation_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_0KFU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0410(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x0430(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0538(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x0558(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0660(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0700(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0808(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0910(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0930(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0950(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0AA8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0AD0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0AF8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0C00(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0D08(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0E10(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0F18(0x0108)
		float                                                      FirstPersonAimPitch;                                     // 0x1020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstPersonAimYawDelta;                                  // 0x1024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldApplyArmsPitchCorrection;                          // 0x1028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EPrisonerStance                                            stance;                                                  // 0x1029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7FEAD1104F7E24B7BADE00849E93A0CF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_5EAEB903484741C202D511A9F80ED66B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_3D0C005446712A1FEEA6CC84D045C94D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7EF1CC914243739F132643878A96F729();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_942654FD4E41254B19E4E99849EA6B1A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_9FA2B355412280F805FC40811E4A8D40();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_8811180F4208B187BA6F7E9E903E48F4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_4F3E79E542374E72B87472A8A11E27D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_0FAC8D61494943BE4F3F04AC005DA2EF();
		void ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
