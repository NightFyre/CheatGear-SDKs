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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_Airplane.ABP_Prisoner_Airplane_C
	 * Size -> 0x0930 (FullSize[0x0CD0] - InheritedSize[0x03A0])
	 */
	class UABP_Prisoner_Airplane_C : public UPrisonerAnimInstance_Airplane
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x03A8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x03D8(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x04C0(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0560(0x00E8)
		unsigned char                                              UnknownData_FS0A[0x8];                                   // 0x0648(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_4;                                  // 0x0650(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x07E0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0800(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_3;                                  // 0x0820(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x09B0(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x0B40(0x0190)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_Prisoner_Airplane(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
