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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C
	 * Size -> 0x12F8 (FullSize[0x1698] - InheritedSize[0x03A0])
	 */
	class UABP_Prisoner_WheelBarrow_C : public UPrisonerAnimInstance_WheelBarrow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_SGIL[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x03B0(0x0190)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0540(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0560(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x0580(0x0190)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0710(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x07F8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0898(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0938(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0A20(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0AE0(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0B60(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0C68(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0D70(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0DA0(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0E88(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0FE0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1008(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1030(0x00A0)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x10D0(0x0128)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x11F8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1218(0x0020)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK;                                     // 0x1238(0x00F8)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x1330(0x0128)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1458(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x14F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1598(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1618(0x0080)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE();
		void ExecuteUbergraph_ABP_Prisoner_WheelBarrow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
