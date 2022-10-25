#pragma once

/**
 * Name: Shooter_Game
 * Version: 03.22.2014
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
	 * AnimBlueprintGeneratedClass HeroTPP_AnimBlueprint.HeroTPP_AnimBlueprint_C
	 * Size -> 0x0DA8 (FullSize[0x1060] - InheritedSize[0x02B8])
	 */
	class UHeroTPP_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VC4Y[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpace_2;                              // 0x02C8(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x03B0(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0478(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x04C0(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0580(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x05C8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0720(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0748(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0770(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x07A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x07C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x07F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0818(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0840(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0868(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0890(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x08B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x08E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0908(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0988(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpace;                                // 0x09B8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0AA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0AD0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0B50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0B80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0C00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0C30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0CB0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0CE0(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0D90(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0DB0(0x0020)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x0DD0(0x0190)
		float                                                      AimPitch;                                                // 0x0F60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimYaw;                                                  // 0x0F64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x0F68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x0F6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsJumping;                                               // 0x0F70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MIJZ[0x3];                                   // 0x0F71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpTime;                                                // 0x0F74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRunning;                                               // 0x0F78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDBX[0x7];                                   // 0x0F79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EffectorTransform;                                       // 0x0F80(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TMap<class UPhysicalMaterial*, class USoundCue*>           Footstep_Map;                                            // 0x0FB0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UPhysicalMaterial*, class USoundCue*>           Jumpland_Map;                                            // 0x1000(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundCue*                                           Jumpland_Sound;                                          // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           Footstep_Sound;                                          // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_2321A9F84E5D11B5A25F98953F512310();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_2C883E9C42B867B2498D799B0A738D11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_D7F0836F46C360751AE6BC95922DEC11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_0C5A88D14987F964D888D88152ACB029();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Jumpland();
		void AnimNotify_Footstep();
		void ExecuteUbergraph_HeroTPP_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
