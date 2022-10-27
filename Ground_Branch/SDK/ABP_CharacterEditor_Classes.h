#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * AnimBlueprintGeneratedClass ABP_CharacterEditor.ABP_CharacterEditor_C
	 * Size -> 0x0D34 (FullSize[0x0FEC] - InheritedSize[0x02B8])
	 */
	class UABP_CharacterEditor_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9JUU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x02F8(0x00A0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x0398(0x0070)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0408(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0450(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x04D0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0570(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x05F0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x06B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0730(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x07B0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0830(0x00A0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x08D0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x09C0(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0AB0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0AD0(0x0020)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0AF0(0x0050)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x0B40(0x0090)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x0BD0(0x00C8)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x0C98(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0D88(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0DA8(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0DC8(0x00C0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x0E88(0x00F0)
		int32_t                                                    IdleAnim;                                                // 0x0F78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80XL[0x4];                                   // 0x0F7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimSequence*>                               FidgetAnimations;                                        // 0x0F80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        TimerHandle_Fidget;                                      // 0x0F90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasFirearm;                                             // 0x0F98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AT4S[0x7];                                   // 0x0F99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       RightHandOverlay;                                        // 0x0FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightHandOverlayAlpha;                                   // 0x0FA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LZR3[0x4];                                   // 0x0FAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       CopiedSnapShot;                                          // 0x0FB0(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      SnapShotAlpha;                                           // 0x0FE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CopyPoseFrom(class UAnimInstance* AnimInstance);
		void BlueprintInitializeAnimation();
		void RandomiseFidgetTimer(float Time);
		void Fidget();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_ABP_CharacterEditor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
