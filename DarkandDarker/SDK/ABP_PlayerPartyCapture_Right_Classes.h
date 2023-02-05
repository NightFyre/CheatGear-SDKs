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
	 * AnimBlueprintGeneratedClass ABP_PlayerPartyCapture_Right.ABP_PlayerPartyCapture_Right_C
	 * Size -> 0x0E3B (FullSize[0x135B] - InheritedSize[0x0520])
	 */
	class UABP_PlayerPartyCapture_Right_C : public UDCPlayerCharacterAnimInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UABP_PlayerPartyCapture_Right_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0528(0x0058) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0580(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0588(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0590(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x05B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05D8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0600(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0640(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0660(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x06A0(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x06C0(0x0068)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0728(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0808(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0850(0x0068)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x08B8(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0920(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0940(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0980(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x09A0(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0A58(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0B60(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0C40(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D20(0x0048)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0D68(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0DE0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0E00(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0E40(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0E60(0x00B8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0F18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0F40(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0F68(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0FA8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0FC8(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1008(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1028(0x0068)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1090(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x10B0(0x0040)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x10F0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1110(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x11C8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x12D0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x12F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1320(0x0028)
		class UAnimSequenceBase*                                   ItemStandIdleAnimation;                                  // 0x1348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SecondItemStandIdleAnimation;                            // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSecondaryItemSet;                                       // 0x1358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrimaryItemSet;                                         // 0x1359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTwoHandedItemSet;                                       // 0x135A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Right_AnimGraphNode_TransitionResult_EDBE7E914FAFDD5FAC51A88C657845A1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Right_AnimGraphNode_TransitionResult_ECE6C75E4CCB5F80CDA85CB5FE4ECBF5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Right_AnimGraphNode_TransitionResult_1A339B6446EA22A9C5B4FCAA9FC1A8AD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerPartyCapture_Right_AnimGraphNode_TransitionResult_730ED3FC467DD73404EF5CB49E99070A();
		void OnChangedStandIdle(class UAnimSequence* ItemStandIdleAnimation, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
		void ExecuteUbergraph_ABP_PlayerPartyCapture_Right(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
