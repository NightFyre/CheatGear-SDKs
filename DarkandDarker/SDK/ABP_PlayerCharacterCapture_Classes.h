#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * AnimBlueprintGeneratedClass ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C
	 * Size -> 0x1353 (FullSize[0x1873] - InheritedSize[0x0520])
	 */
	class UABP_PlayerCharacterCapture_C : public UDCPlayerCharacterAnimInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UABP_PlayerCharacterCapture_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0528(0x0058) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0580(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0588(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0590(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x05B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x05D8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0600(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0640(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0660(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x06A0(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x06C0(0x0068)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0728(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0808(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0850(0x0068)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x08B8(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0920(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0940(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0980(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x09A0(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x0A58(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0B60(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0BA8(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0C88(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x0CD0(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0DD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0E00(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0E28(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0E68(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0E88(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0EC8(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0EE8(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0F50(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0F70(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0FB0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0FD0(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1088(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x1190(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x11B0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x11D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1200(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1228(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1250(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1278(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x12A0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x12C0(0x0020)
		struct FAnimNode_HandIKRetargeting                         AnimGraphNode_HandIKRetargeting;                         // 0x12E0(0x0120)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK_2;                                   // 0x1400(0x00F8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x14F8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1518(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1540(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1560(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1618(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1720(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1748(0x0020)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK;                                     // 0x1768(0x00F8)
		class UAnimSequence*                                       ItemStandIdleAnimation;                                  // 0x1860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SecondItemStandIdleAnimation;                            // 0x1868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSecondaryItemSet;                                       // 0x1870(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrimaryItemSet;                                         // 0x1871(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTwoHandedItemSet;                                       // 0x1872(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_13B7D8DC4933DEA9CC67E9B6899A7B72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_77039C684C830BD8EA19CD9467D2FE60();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_F687E8504BC5699DFC15BF8BD33D36BB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerCharacterCapture_AnimGraphNode_TransitionResult_EF973B2C44DD253581F000A709F601E6();
		void OnChangedStandIdle(class UAnimSequence* ItemStandIdleAnimation, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
		void ExecuteUbergraph_ABP_PlayerCharacterCapture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
