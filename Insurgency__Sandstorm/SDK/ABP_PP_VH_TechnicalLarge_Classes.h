#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass ABP_PP_VH_TechnicalLarge.ABP_PP_VH_TechnicalLarge_C
	 * Size -> 0x1718 (FullSize[0x1980] - InheritedSize[0x0268])
	 */
	class UABP_PP_VH_TechnicalLarge_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XSGU[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_8;                                  // 0x0270(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_7;                                  // 0x0420(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_4;                    // 0x05D0(0x0118) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_3;                    // 0x06E8(0x0118) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_6;                                  // 0x0800(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_5;                                  // 0x09B0(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x0B60(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x0D10(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_2;                    // 0x0EC0(0x0118) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM6B[0x8];                                   // 0x0FD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0FE0(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x1190(0x01B0) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController;                      // 0x1340(0x0118) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1458(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1560(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1668(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1770(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1878(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1898(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x18B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1930(0x0030) NativeAccessSpecifierPublic
		float                                                      VehicleWheelAngle;                                       // 0x1960(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelCurrentAngleFU;                                     // 0x1964(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleRPM;                                              // 0x1968(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AK5G[0x4];                                   // 0x196C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_Vehicle_Final_C*                                K2Node_DynamicCast_AsABP_Vehicle_Final;                  // 0x1970(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x1978(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4XWX[0x3];                                   // 0x1979(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x197C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PP_VH_TechnicalLarge_AnimGraphNode_ModifyBone_FC3B51954F7ECC632B2631A5F2264E9C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PP_VH_TechnicalLarge_AnimGraphNode_ModifyBone_ACCD8A6544322EDEA1066C95AE15DEFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PP_VH_TechnicalLarge_AnimGraphNode_ModifyBone_7634A8A748475B15851C879197DC4411();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PP_VH_TechnicalLarge_AnimGraphNode_ModifyBone_4A86E31D48DD368989C68DA5C2EC0A46();
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
