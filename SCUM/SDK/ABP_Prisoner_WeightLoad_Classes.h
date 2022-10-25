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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_WeightLoad.ABP_Prisoner_WeightLoad_C
	 * Size -> 0x09BC (FullSize[0x0C7C] - InheritedSize[0x02C0])
	 */
	class UABP_Prisoner_WeightLoad_C : public UPrisonerAnimInstance_WeightLoad
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0410(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0430(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0450(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0558(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0660(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0768(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0870(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x0978(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0A68(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0B70(0x0108)
		float                                                      WeightLoadFactor;                                        // 0x0C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_453C5F26411CB286321E8DB6BD390538();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_3BA31DAB4C2251A5551ABF92B5EF6EDC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_CopyBone_C78C6C854660251F8AF393A3FFCDAF3D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_FD4BD31742A3B9C191645FBFBB26ADB3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_5A9718D344432D8EE2C192ACDBA4E8B6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_D664E21F4D373F17D3BDEF8FEBACC61D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_FED9B57C498EF024308E0B88F1D1CA6A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WeightLoad_AnimGraphNode_ModifyBone_5988E94F403D4BF88928DA9CC56F17CD();
		void ExecuteUbergraph_ABP_Prisoner_WeightLoad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
