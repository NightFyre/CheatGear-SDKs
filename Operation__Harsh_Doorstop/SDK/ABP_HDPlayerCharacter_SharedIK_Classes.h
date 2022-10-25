#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_SharedIK.ABP_HDPlayerCharacter_SharedIK_C
	 * Size -> 0x0C21 (FullSize[0x0E89] - InheritedSize[0x0268])
	 */
	class UABP_HDPlayerCharacter_SharedIK_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QXF0[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0x0278(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_3;                         // 0x02A8(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x0320(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x0350(0x0078)
		struct FAnimNode_HandIKRetargeting                         AnimGraphNode_HandIKRetargeting;                         // 0x03C8(0x0120)
		unsigned char                                              UnknownData_B2YS[0x8];                                   // 0x04E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x04F0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x06D0(0x01E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x08B0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x08D0(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x0A60(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0BF0(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0C10(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0C40(0x0078)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0x0CB8(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x0D68(0x00B0)
		unsigned char                                              UnknownData_B0ZZ[0x8];                                   // 0x0E18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHandIKTransform;                                     // 0x0E20(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          RightHandIKTransform;                                    // 0x0E50(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseLeftHandIK;                                          // 0x0E80(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRightHandIK;                                         // 0x0E81(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseHandIKRetargeting;                                   // 0x0E82(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJX7[0x1];                                   // 0x0E83(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HandFKWeight;                                            // 0x0E84(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventAOHandDriftFromWeapon;                           // 0x0E88(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FootIK(const struct FPoseLink& InLocoPose, struct FPoseLink* FootIK);
		void HandIK(const struct FPoseLink& InLocoPose, struct FPoseLink* HandIK);
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_HDPlayerCharacter_SharedIK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
