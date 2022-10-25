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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_SpineLeaning.ABP_Prisoner_SpineLeaning_C
	 * Size -> 0x06D4 (FullSize[0x098C] - InheritedSize[0x02B8])
	 */
	class UABP_Prisoner_SpineLeaning_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DOEG[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0410(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0518(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0620(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0728(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0830(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0938(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0958(0x0020)
		float                                                      LeanAmount;                                              // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine1LeanAngle;                                         // 0x097C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine2LeanAngle;                                         // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine3LeanAngle;                                         // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RibcageLeanAngle;                                        // 0x0988(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FAB4A1C4E652A3ACA30BB80394E75FE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_D5F2A724426CF36597430D97858CACD2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_C383BBD944F2587C3A4D5089DAF6C903();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_5FD8259E4B3B8F00065B209AE0625CC4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_SpineLeaning_AnimGraphNode_ModifyBone_64A56C344D3C0A2EFC816D8AF1FEDA04();
		void ExecuteUbergraph_ABP_Prisoner_SpineLeaning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
