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
	 * AnimBlueprintGeneratedClass VehicleAnimationBlueprint.VehicleAnimationBlueprint_C
	 * Size -> 0x2F10 (FullSize[0x3890] - InheritedSize[0x0980])
	 */
	class UVehicleAnimationBlueprint_C : public UVehicleAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0980(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0988(0x0030)
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler;                              // 0x09B8(0x00E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0A98(0x0020)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x0AB8(0x0010)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_20;                               // 0x0AC8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_19;                               // 0x0BB8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_18;                               // 0x0CA8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_17;                               // 0x0D98(0x00F0)
		unsigned char                                              UnknownData_O1Y4[0x8];                                   // 0x0E88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_16;                                 // 0x0E90(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_15;                                 // 0x1040(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_14;                                 // 0x11F0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_13;                                 // 0x13A0(0x01B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_16;                               // 0x1550(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_15;                               // 0x1640(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_14;                               // 0x1730(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0x1820(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_12;                                 // 0x1910(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_11;                                 // 0x1AC0(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_10;                                 // 0x1C70(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_9;                                  // 0x1E20(0x01B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x1FD0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x20C0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x21B0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x22A0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x2390(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_8;                                  // 0x2480(0x01B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x2630(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_7;                                  // 0x2720(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_6;                                  // 0x28D0(0x01B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x2A80(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x2B70(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x2C60(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_5;                                  // 0x2D50(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x2F00(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x30B0(0x01B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x3260(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x3350(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x3440(0x00F0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x3530(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x36E0(0x01B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_VehicleAnimationBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
