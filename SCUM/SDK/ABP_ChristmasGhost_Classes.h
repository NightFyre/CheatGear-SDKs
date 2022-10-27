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
	 * AnimBlueprintGeneratedClass ABP_ChristmasGhost.ABP_ChristmasGhost_C
	 * Size -> 0x00A0 (FullSize[0x0358] - InheritedSize[0x02B8])
	 */
	class UABP_ChristmasGhost_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_X7YN[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x02F8(0x0018)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0310(0x0048)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_SpawnChristmasGift();
		void ExecuteUbergraph_ABP_ChristmasGhost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
