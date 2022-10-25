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
	 * DynamicClass ABP_PP_VIP.ABP_PP_VIP_C
	 * Size -> 0x01D8 (FullSize[0x0440] - InheritedSize[0x0268])
	 */
	class UABP_PP_VIP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0268(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0298(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_PoseDriver                                AnimGraphNode_PoseDriver;                                // 0x0310(0x0128) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHRY[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		void ExecuteUbergraph_ABP_PP_VIP(int32_t bpp__EntryPoint__pf);
		void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
