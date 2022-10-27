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
	 * AnimBlueprintGeneratedClass ABP_Prisoner_Aerial.ABP_Prisoner_Aerial_C
	 * Size -> 0x2498 (FullSize[0x27C8] - InheritedSize[0x0330])
	 */
	class UABP_Prisoner_Aerial_C : public UPrisonerAnimInstance_Aerial
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0338(0x0030)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x0368(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0418(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0498(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x0518(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x05C8(0x00C8)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x0690(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x0740(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x0790(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x07E0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x0880(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x08A8(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x08F8(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x0920(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x0970(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x09C0(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x0A60(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x0BB8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x0C08(0x0050)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0C58(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0CF8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x0D78(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x0ED0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x0F20(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x0F48(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x10A0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x11F8(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x1350(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x14A8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x1600(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x1628(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x1650(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x1678(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x16A0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x16C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x16F0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x1718(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x1740(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x1768(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x1790(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x17B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x17E0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x1808(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x18D0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x1A28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1A50(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1A78(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1AF8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1BA8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1C48(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1CE8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1D88(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1E70(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1F58(0x0158)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot_2;                            // 0x20B0(0x0090)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x2140(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x2168(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x2190(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x21B8(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x21E0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2230(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x22B0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2350(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x23D0(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x2490(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x24E0(0x00C8)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x25A8(0x0090)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x2638(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x2688(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x26D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x2728(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x2778(0x0050)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_TwoWayBlend_B69CEC8040210B9214396AB342D5CDC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_LayeredBoneBlend_0CDD252F459A1A10FC7E8FBBDF992069();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_EEEC8A8D41A21C7990E28C8667CE0A17();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_143172114ACD1D22D1CCDFAB691877FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_EFAA790F4916AE6CD602BD807E6B28D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_TwoWayBlend_6BD6A65E46A88DC37F09809344D888FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_22EB794E4B8387AB2B1C4ABF897CBA7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_109F6CA141AB29E66B05908FB6679860();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_57EC1D294603C9D06B795498FE62C376();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_9076FEE64B60D4DA014EAC83F0E9B2C0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_F13988A1439509B49BC338B32E907892();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_AE7D76034C7E4C4DC5BCC8914C1A8CC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_35E984B048A9C794BB1204B6415945CB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_BlendListByBool_3B5E74FB4897E2BD591CD6A810F3AFBA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_B742D6124F14BBBD8AB5D1A76CC763D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_Aerial_AnimGraphNode_SequenceEvaluator_2D00D9AA4A05B5070974A5A19A83EBF6();
		void ExecuteUbergraph_ABP_Prisoner_Aerial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
