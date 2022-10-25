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
	 * AnimBlueprintGeneratedClass HeroFPP_AnimationBlueprint.HeroFPP_AnimationBlueprint_C
	 * Size -> 0x13F0 (FullSize[0x16A8] - InheritedSize[0x02B8])
	 */
	class UHeroFPP_AnimationBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2GC2[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x02F8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0398(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0418(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x0498(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0538(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0560(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0588(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x05B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x05D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0600(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0628(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0650(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0678(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x06A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x06C8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x06F0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0790(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0810(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0890(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x08C0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0960(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x09E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0A60(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0A90(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0B30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0BB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0C30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0C60(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0CE0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0D80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0E00(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0E30(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0ED0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0F50(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0FD0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1000(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x10A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1120(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x11A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x11D0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1280(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x13D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1400(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x1428(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x1470(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x14B8(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1558(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x15A0(0x0048)
		bool                                                       IsJumping;                                               // 0x15E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRifle;                                                 // 0x15E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRunning;                                               // 0x15EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTargeting;                                             // 0x15EB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      JumpTime;                                                // 0x15EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x15F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWalking;                                               // 0x15F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKG6[0x3];                                   // 0x15F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPhysicalMaterial*, class USoundCue*>           Footstep_Map;                                            // 0x15F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundCue*                                           Footstep_Sound;                                          // 0x1648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UPhysicalMaterial*, class USoundCue*>           Jumpland_Map;                                            // 0x1650(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class USoundCue*                                           Jumpland_Sound;                                          // 0x16A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_663925D24DF32B6AC7F34AB905521A2F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_HeroFPP_AnimationBlueprint_AnimGraphNode_TransitionResult_EBA6C0224B9F3AC09D7303B401AB8889();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Footstep();
		void AnimNotify_Jumpland();
		void ExecuteUbergraph_HeroFPP_AnimationBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
