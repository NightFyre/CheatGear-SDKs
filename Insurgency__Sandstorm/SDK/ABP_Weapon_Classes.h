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
	 * DynamicClass ABP_Weapon.ABP_Weapon_C
	 * Size -> 0x15B00 (FullSize[0x17FA0] - InheritedSize[0x24A0])
	 */
	class UABP_Weapon_C : public UWeaponAnimInstance
	{
	public:
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_89;                          // 0x24A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0x24C8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_88;                          // 0x25D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_63;                       // 0x25F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x26B8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0x26D8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0x27E0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_88;                          // 0x28E8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0x29B0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_60;                                   // 0x2AB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_17;                    // 0x2B00(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_34;                        // 0x2B38(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_84;                         // 0x2BD8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_87;                          // 0x2C50(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_87;                          // 0x2D18(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_33;                        // 0x2D40(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_86;                          // 0x2DE0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_83;                         // 0x2E08(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_63;                      // 0x2E80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_2;                          // 0x2EC8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_59;                                   // 0x2F68(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_58;                                   // 0x2FB0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_32;                        // 0x2FF8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_62;                      // 0x3098(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_61;                      // 0x30E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_62;                       // 0x3128(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_60;                      // 0x31E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_59;                      // 0x3230(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_58;                      // 0x3278(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_57;                      // 0x32C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x3308(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_61;                       // 0x33A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_57;                                   // 0x3468(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_56;                      // 0x34B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_56;                                   // 0x34F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x3540(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x3570(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x3620(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x36D8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x37E0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x38E8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_55;                                   // 0x39F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_60;                       // 0x3A38(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_55;                      // 0x3AF8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x3B40(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x3C48(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_54;                                   // 0x3D50(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_53;                                   // 0x3D98(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x3DE0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x3EE8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_38;                           // 0x3FF0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_59;                       // 0x4008(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_86;                          // 0x40C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_85;                          // 0x4190(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_37;                           // 0x4258(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_52;                                   // 0x4270(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_51;                                   // 0x42B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_50;                                   // 0x4300(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_49;                                   // 0x4348(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_48;                                   // 0x4390(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_47;                                   // 0x43D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_36;                           // 0x4420(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_58;                       // 0x4438(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_35;                           // 0x44F8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_46;                                   // 0x4510(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_45;                                   // 0x4558(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_44;                                   // 0x45A0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_84;                          // 0x45E8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_28;                            // 0x46B0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_34;                           // 0x4778(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_33;                           // 0x4790(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_32;                           // 0x47A8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_43;                                   // 0x47C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_42;                                   // 0x4808(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_41;                                   // 0x4850(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_40;                                   // 0x4898(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_39;                                   // 0x48E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_38;                                   // 0x4928(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_31;                           // 0x4970(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_31;                        // 0x4988(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_54;                      // 0x4A28(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_83;                          // 0x4A70(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x4B38(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x4B68(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x4C18(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_37;                                   // 0x4CD0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x4D18(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x4E20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x4E48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x4E70(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x4E98(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x4EC0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x4EE8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x4F10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x4F38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_85;                          // 0x4F60(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_82;                          // 0x4F88(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_53;                      // 0x5050(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_30;                        // 0x5098(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_82;                         // 0x5138(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_81;                         // 0x51B0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_57;                       // 0x5228(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x52E8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_84;                          // 0x5318(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_81;                          // 0x5340(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_52;                      // 0x5408(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x5450(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_83;                          // 0x5480(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_80;                          // 0x54A8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_80;                         // 0x5570(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_11;                       // 0x55E8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_56;                       // 0x56C8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_29;                        // 0x5788(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_79;                         // 0x5828(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x58A0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_55;                       // 0x5980(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x5A40(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x5AF0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_78;                         // 0x5BF8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_28;                        // 0x5C70(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x5D10(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_54;                       // 0x5DF0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x5EB0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x5F90(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x6098(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x60B8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x60D8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_51;                      // 0x6108(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_82;                          // 0x6150(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_79;                          // 0x6178(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_16;                    // 0x6240(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_50;                      // 0x6278(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_49;                      // 0x62C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_53;                       // 0x6308(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x63C8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x64A8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x6558(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_52;                       // 0x6660(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x6720(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_27;                        // 0x6800(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x68A0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x69A8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x69C8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x69E8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x6AC8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x6AF8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_78;                          // 0x6BA8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_77;                         // 0x6C70(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_51;                       // 0x6CE8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_48;                      // 0x6DA8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_36;                                   // 0x6DF0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_15;                    // 0x6E38(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_47;                      // 0x6E70(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_77;                          // 0x6EB8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_46;                      // 0x6F80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_76;                          // 0x6FC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_75;                          // 0x7090(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_27;                            // 0x7158(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_30;                           // 0x7220(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_29;                           // 0x7238(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_28;                           // 0x7250(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_26;                            // 0x7268(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_25;                            // 0x7330(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_27;                           // 0x73F8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_26;                           // 0x7410(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_50;                       // 0x7428(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_45;                      // 0x74E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_44;                      // 0x7530(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_43;                      // 0x7578(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_35;                                   // 0x75C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x7608(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x7630(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x7658(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x7680(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x76A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x76D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x76F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x7720(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x7748(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x7770(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x7798(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x77C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x77E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x7810(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x7838(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x7860(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x7888(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x78B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x78D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_49;                       // 0x7900(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_76;                         // 0x79C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_75;                         // 0x7A38(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_74;                          // 0x7AB0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_74;                         // 0x7B78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x7BF0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_48;                       // 0x7C20(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_73;                         // 0x7CE0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_72;                         // 0x7D58(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_73;                          // 0x7DD0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_71;                         // 0x7E98(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x7F10(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70;                         // 0x7F40(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_69;                         // 0x7FB8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_72;                          // 0x8030(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x80F8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_68;                         // 0x8128(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_47;                       // 0x81A0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_67;                         // 0x8260(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66;                         // 0x82D8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_71;                          // 0x8350(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x8418(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_70;                          // 0x8448(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65;                         // 0x8510(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_46;                       // 0x8588(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_64;                         // 0x8648(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_63;                         // 0x86C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26;                        // 0x8738(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_42;                      // 0x87D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_41;                      // 0x8820(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_40;                      // 0x8868(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_39;                      // 0x88B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_69;                          // 0x88F8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_45;                       // 0x89C0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25;                        // 0x8A80(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x8B20(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_62;                         // 0x8B50(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_68;                          // 0x8BC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_61;                         // 0x8C90(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x8D08(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_67;                          // 0x8D38(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_60;                         // 0x8E00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_59;                         // 0x8E78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x8EF0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_58;                         // 0x8F20(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_66;                          // 0x8F98(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57;                         // 0x9060(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x90D8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_25;                           // 0x9108(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_44;                       // 0x9120(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_24;                           // 0x91E0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_43;                       // 0x91F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_56;                         // 0x92B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_55;                         // 0x9330(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_65;                          // 0x93A8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_54;                         // 0x9470(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53;                         // 0x94E8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_64;                          // 0x9560(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0x9628(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0x96C8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0x9768(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0x97E0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0x9880(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_63;                          // 0x98F8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0x99C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_42;                       // 0x9A38(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0x9AF8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0x9B70(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0x9C10(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x9C88(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0x9D28(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_62;                          // 0x9DA0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0x9E68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_41;                       // 0x9EE0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x9FA0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0xA018(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_34;                                   // 0xA048(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_33;                                   // 0xA090(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_23;                           // 0xA0D8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_61;                          // 0xA0F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_24;                            // 0xA1B8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_32;                                   // 0xA280(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0xA2C8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_31;                                   // 0xA340(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0xA388(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0xA400(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_40;                       // 0xA430(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0xA4F0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0xA568(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0xA608(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_60;                          // 0xA680(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0xA748(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0xA7C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0xA838(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0xA868(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0xA890(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_59;                          // 0xA940(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_81;                          // 0xAA08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_39;                       // 0xAA30(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_38;                      // 0xAAF0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0xAB38(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0xABF0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_23;                            // 0xACD0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0xAD98(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0xAE78(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_22;                            // 0xAF30(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_22;                           // 0xAFF8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_38;                       // 0xB010(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_21;                           // 0xB0D0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_21;                            // 0xB0E8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_20;                           // 0xB1B0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0xB1C8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0xB2D0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0xB3D8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_37;                      // 0xB3F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0xB440(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_36;                      // 0xB548(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0xB590(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0xB630(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_19;                           // 0xB6D0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_37;                       // 0xB6E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_35;                      // 0xB7A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0xB7F0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_34;                      // 0xB890(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_58;                          // 0xB8D8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_33;                      // 0xB9A0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_32;                      // 0xB9E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_31;                      // 0xBA30(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_30;                      // 0xBA78(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0xBAC0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0xBAE0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_20;                            // 0xBB00(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_29;                      // 0xBBC8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_28;                      // 0xBC10(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_36;                       // 0xBC58(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_30;                                   // 0xBD18(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_18;                           // 0xBD60(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_19;                            // 0xBD78(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_17;                           // 0xBE40(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_35;                       // 0xBE58(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_16;                           // 0xBF18(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_34;                       // 0xBF30(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_15;                           // 0xBFF0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_33;                       // 0xC008(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_14;                    // 0xC0C8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_27;                      // 0xC100(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_13;                    // 0xC148(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_26;                      // 0xC180(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_57;                          // 0xC1C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_12;                    // 0xC290(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_14;                           // 0xC2C8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_32;                       // 0xC2E0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_56;                          // 0xC3A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_55;                          // 0xC468(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_25;                      // 0xC530(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_11;                    // 0xC578(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0xC5B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0xC5F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_54;                          // 0xC640(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_53;                          // 0xC708(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0xC7D0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_52;                          // 0xC848(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_51;                          // 0xC910(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0xC9D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_13;                           // 0xCA20(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0xCA38(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0xCA68(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0xCB18(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0xCBD0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0xCC88(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0xCD40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_31;                       // 0xCD88(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0xCE48(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_29;                                   // 0xCF00(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0xCF48(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_50;                          // 0xCF90(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0xD058(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_10;                    // 0xD0A0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0xD0D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0xD120(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_80;                          // 0xD1D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_28;                                   // 0xD200(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0xD248(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0xD2E8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_79;                          // 0xD360(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_78;                          // 0xD388(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0xD3B0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_9;                     // 0xD468(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_77;                          // 0xD4A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_49;                          // 0xD4C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0xD590(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0xD5D8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0xD5F8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_18;                            // 0xD618(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0xD6E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0xD708(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0xD730(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0xD758(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0xD780(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0xD7A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0xD7D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0xD7F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0xD820(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0xD848(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0xD870(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_48;                          // 0xD8E8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_17;                            // 0xD9B0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_4;                 // 0xDA78(0x0058) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_3;                 // 0xDAD0(0x0058) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult_2;                  // 0xDB28(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0xDB58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0xDB80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0xDBA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0xDBD0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0xDBF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0xDC20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0xDC48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0xDC70(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0xDC98(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0xDCC0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0xDCE8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0xDD10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0xDD38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0xDD60(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0xDD88(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0xDDB0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_76;                          // 0xDDD8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_47;                          // 0xDE00(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_27;                                   // 0xDEC8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0xDF10(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0xDF58(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_75;                          // 0xDFF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0xE020(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_8;                     // 0xE068(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_74;                          // 0xE0A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_30;                       // 0xE0C8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_46;                          // 0xE188(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_73;                          // 0xE250(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_29;                       // 0xE278(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_26;                                   // 0xE338(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_72;                          // 0xE380(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0xE3A8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0xE3D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_71;                          // 0xE420(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_28;                       // 0xE448(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_12;                           // 0xE508(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_45;                          // 0xE520(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_11;                           // 0xE5E8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_27;                       // 0xE600(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_25;                                   // 0xE6C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_26;                       // 0xE708(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_70;                          // 0xE7C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_69;                          // 0xE7F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0xE818(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_44;                          // 0xE890(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_25;                       // 0xE958(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_68;                          // 0xEA18(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_43;                          // 0xEA40(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0xEB08(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0xEBA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0xEC20(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_67;                          // 0xEC50(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_16;                            // 0xEC78(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_66;                          // 0xED40(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_24;                       // 0xED68(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_10;                           // 0xEE28(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0xEE40(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0xEF00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_42;                          // 0xEF78(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_65;                          // 0xF040(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_64;                          // 0xF068(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_63;                          // 0xF090(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_15;                            // 0xF0B8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_14;                            // 0xF180(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0xF248(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_62;                          // 0xF278(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_41;                          // 0xF2A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0xF368(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0xF470(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0xF490(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0xF4B0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_24;                                   // 0xF5B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_61;                          // 0xF600(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_60;                          // 0xF628(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_13;                            // 0xF650(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_12;                            // 0xF718(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_59;                          // 0xF7E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0xF808(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_11;                            // 0xF838(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_58;                          // 0xF900(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0xF928(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_23;                                   // 0xF9E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_57;                          // 0xFA30(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_9;                            // 0xFA58(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_22;                                   // 0xFA70(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_40;                          // 0xFAB8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_56;                          // 0xFB80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_39;                          // 0xFBA8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0xFC70(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0xFC90(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0xFCB0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_8;                            // 0xFDB8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0xFDD0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0xFE90(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_55;                          // 0xFED8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_7;                     // 0xFF00(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_54;                          // 0xFF38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_38;                          // 0xFF60(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x10028(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_53;                          // 0x100E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_37;                          // 0x10110(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_21;                                   // 0x101D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_20;                                   // 0x10220(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x10268(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x102B0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_52;                          // 0x10350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_51;                          // 0x10378(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_7;                            // 0x103A0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x103B8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_36;                          // 0x10478(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_19;                                   // 0x10540(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_35;                          // 0x10588(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x10650(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_34;                          // 0x10698(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_18;                                   // 0x10760(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_50;                          // 0x107A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x107D0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_6;                     // 0x10818(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_49;                          // 0x10850(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x10878(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_33;                          // 0x10938(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_17;                                   // 0x10A00(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_16;                                   // 0x10A48(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_15;                                   // 0x10A90(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_14;                                   // 0x10AD8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_13;                                   // 0x10B20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_6;                            // 0x10B68(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_32;                          // 0x10B80(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_12;                                   // 0x10C48(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x10C90(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x10CD8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x10D20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_48;                          // 0x10D68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x10D90(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x10E50(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_31;                          // 0x10E98(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x10F60(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_47;                          // 0x10FA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_46;                          // 0x10FD0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_45;                          // 0x10FF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_44;                          // 0x11020(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_10;                            // 0x11048(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9;                             // 0x11110(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x111D8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x11208(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_30;                          // 0x11230(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x112F8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x11398(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x113E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x11428(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x11470(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_43;                          // 0x114A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_29;                          // 0x114C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_5;                            // 0x11590(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x115A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x11668(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_4;                            // 0x11728(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x11740(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_3;                            // 0x11788(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x117A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x11868(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x11948(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_5;                     // 0x11A28(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_28;                          // 0x11A60(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_27;                          // 0x11B28(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x11BF0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_26;                          // 0x11C38(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_2;                            // 0x11D00(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x11D18(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x11DD8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_4;                     // 0x11E50(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x11E88(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_25;                          // 0x11F00(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x11FC8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x12010(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x12088(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x12100(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x121C0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42;                          // 0x121F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_24;                          // 0x12218(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x122E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_41;                          // 0x12328(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_40;                          // 0x12350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x12378(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x12440(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39;                          // 0x12508(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x12530(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38;                          // 0x12560(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_23;                          // 0x12588(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_37;                          // 0x12650(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_36;                          // 0x12678(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x126A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x12768(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x12830(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator_2;                 // 0x12858(0x0058) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x128B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x128F8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionPoseEvaluator                   AnimGraphNode_TransitionPoseEvaluator;                   // 0x129C0(0x0058) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_CustomTransitionResult;                    // 0x12A18(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x12A48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x12A70(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x12A98(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x12AC0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x12AE8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x12B10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x12B38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x12B60(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x12C00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x12C78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x12CF0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x12D20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x12D68(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x12D98(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_22;                          // 0x12DE0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x12EA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x12F20(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x12FC0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x13038(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x13068(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x130E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x13110(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x13188(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x13200(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_21;                          // 0x13248(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x13310(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x133B0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x133E0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x13480(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x134F8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x13570(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x135A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x13618(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x136B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_20;                          // 0x13730(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x137F8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x13870(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x138E8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x13998(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x13A38(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x13AB0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_19;                          // 0x13B28(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x13BF0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x13C68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_18;                          // 0x13CE0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x13DA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x13E20(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x13E98(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x13F48(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x13F78(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x13FA0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x13FD0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x14080(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x140B0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x14170(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x14198(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x14260(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x14288(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_3;                     // 0x142B0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_17;                          // 0x142E8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x143B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_16;                          // 0x143D8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x144A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x144C8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x14540(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_15;                          // 0x14568(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x14630(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x146F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_14;                          // 0x14718(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x147E0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x14858(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x148F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x14920(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x149E0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x14A58(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x14B18(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x14B40(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x14B68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_13;                          // 0x14BE0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x14CA8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x14D48(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x14E08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_12;                          // 0x14E30(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x14EF8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x14F70(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x14FA0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x14FC8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x15088(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x150B0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x15178(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x151A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x151C8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_11;                          // 0x15200(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x152C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x152F0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_10;                          // 0x15368(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x15430(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_9;                           // 0x154F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x155B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x155E0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8;                           // 0x156A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x15768(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x15780(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x157C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0x157F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x158B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x158E0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x159A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x159D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x159F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x15A20(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x15A98(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x15B60(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x15C20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x15C48(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x15D10(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x15DB0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x15E28(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x15E58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x15E80(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x15EB0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x15ED8(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K60T[0x8];                                   // 0x15F88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x15F90(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x16170(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x16350(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x16440(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x164F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x165B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x165E0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x166E8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x16708(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x16728(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x16750(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x16840(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x16888(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x16940(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x16A00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x16A28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x16A50(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x16A98(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x16AC8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x16B68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x16BE0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x16C08(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x16C40(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x16D08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x16D30(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x16DF0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x16EF8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x16F18(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x16F38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x16F60(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x17028(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x17050(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x17098(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x17150(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x17178(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x17240(0x0028) NativeAccessSpecifierPublic
		class APlayerCameraManager*                                Camera;                                                  // 0x17268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BobbigLocal;                                             // 0x17270(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BobbingWorld;                                            // 0x1727C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BobbingRotation;                                         // 0x17288(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AdjustedGameTime;                                        // 0x17294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraAnimAlpha;                                         // 0x17298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RecoilSlotCycle;                                         // 0x1729C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbsoluteDirection;                                       // 0x172A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeleeSwingDirection                                       SwingDirectionStart;                                     // 0x172A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRelaxed;                                              // 0x172A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SUA[0x2];                                   // 0x172A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelaxStartTime;                                          // 0x172A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelaxDuration;                                           // 0x172AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelaxResetTime;                                          // 0x172B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitialCookThrow;                                       // 0x172B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCommonSprint;                                        // 0x172B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCommonCrawl;                                         // 0x172B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEF9[0x1];                                   // 0x172B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdjustedIronGameTime;                                    // 0x172B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGM8[0x4];                                   // 0x172BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CurrentFiremodeAnim;                                     // 0x172C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCommonDraw;                                          // 0x172C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCommonHolster;                                       // 0x172C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCommonDown;                                          // 0x172CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProneTransitionDirection;                               // 0x172CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CommonSprintAdjustment;                                  // 0x172CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CommonCrawlAdjustment;                                   // 0x172D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELadderState                                               LadderState;                                             // 0x172E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLadderAiming;                                           // 0x172E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLadderAimLeft;                                          // 0x172E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLadderAimRight;                                         // 0x172E7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasProneTransition;                                     // 0x172E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4675[0x7];                                   // 0x172E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        AnimReloadEmpty;                                         // 0x172F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimReload;                                              // 0x172F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimReloadStages;                                        // 0x17300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFactionAnimationStyle                                     AnimationStyle;                                          // 0x17308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlanting;                                             // 0x17309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCancelPlant;                                            // 0x1730A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDrop;                                                // 0x1730B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           CurrentFireMode;                                         // 0x1730C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           TargetFireMode;                                          // 0x1730D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldPlayReady;                                        // 0x1730E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LT1[0x1];                                   // 0x1730F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedReady;                                           // 0x17310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedReload;                                          // 0x17314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesUnderbarrelBlend;                                   // 0x17318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasUnderbarrelIdle;                                     // 0x17319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasVault;                                               // 0x1731A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDeploy;                                              // 0x1731B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RecoilTranslation;                                       // 0x1731C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBoltRelease;                                         // 0x17328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YMT[0x7];                                   // 0x17329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       ReloadStagesAdditiveLayer;                               // 0x17330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasCharge;                                              // 0x17338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78FP[0x7];                                   // 0x17339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CurrentFiremodeMontage2;                                 // 0x17340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustedReloadRate;                                      // 0x17348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponReloadType                                          WeaponReloadType;                                        // 0x1734C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17AY[0x3];                                   // 0x1734D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FastReloadPosition;                                      // 0x17350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFastReload;                                           // 0x17354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UY5[0x3];                                   // 0x17355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SightAlignmentOffset;                                    // 0x17358(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightTranslationAdjustment;                              // 0x17364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAmmoCheck;                                           // 0x17368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1N6[0x3];                                   // 0x17369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NextTickUpdateVerySlow;                                  // 0x1736C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickUpdateDelaySlow;                                     // 0x17370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickUpdateDelayMedium;                                   // 0x17374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickUpdateVerySlow;                                      // 0x17378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickUpdateSlow;                                          // 0x17379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickUpdateMedium;                                        // 0x1737A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickUpdateFast;                                          // 0x1737B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TickUpdateDelayFast;                                     // 0x1737C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TickUpdateVeryFast;                                      // 0x17380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85C7[0x3];                                   // 0x17381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickUpdateDelayVeryFast;                                 // 0x17384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSprintTransition;                                    // 0x17388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXFJ[0x7];                                   // 0x17389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      EquipablePrevious;                                       // 0x17390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemEquipable*                                      EquipableNext;                                           // 0x17398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CurrentDeployedFiremodeAnim;                             // 0x173A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsQuickDrawWeapon;                                      // 0x173A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasExplicitReady;                                       // 0x173A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMolotovEmitter;                                         // 0x173AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIBQ[0x5];                                   // 0x173AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            MolotovEmitter;                                          // 0x173B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            GearItemEquipableState;                                  // 0x173B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYLY[0x7];                                   // 0x173B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AmmoContainer;                                           // 0x173C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SoldierAccelerationLocal;                                // 0x173C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesMorphMagazine;                                      // 0x173D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDryReload;                                            // 0x173D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJRA[0x2];                                   // 0x173D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireDeltaZeroPosition;                                   // 0x173D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireDeltaExtremePosition;                                // 0x173DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMagazineDelta;                                       // 0x173E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YSY[0x3];                                   // 0x173E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnderBarrelTransitionStartTime;                          // 0x173E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        GearItemMontageReference;                                // 0x173E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SightAdjustmentRotator;                                  // 0x173F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDeployedMaster;                                         // 0x173FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BL68[0x3];                                   // 0x173FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         SprintAnim;                                              // 0x17400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTransitionInPosition;                              // 0x17408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintTransitionOutPosition;                             // 0x1740C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SprintTransitionIn;                                      // 0x17410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       SprintTransitionOut;                                     // 0x17418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasActorInteraction;                                    // 0x17420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasPointSightDelta;                                     // 0x17421(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO4X[0x2];                                   // 0x17422(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirearmAlpha;                                            // 0x17424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeleeSwingDirection                                       LastSwingDirection;                                      // 0x17428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVZZ[0x3];                                   // 0x17429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ToggleRotatorOffset;                                     // 0x1742C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TogglePositionOffset;                                    // 0x17438(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB6I[0x4];                                   // 0x17444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       OpticABPReference;                                       // 0x17448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponOpticComponent*                               WeaponOpticComponent;                                    // 0x17450(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForegripReloadRate;                                      // 0x17458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQO3[0x4];                                   // 0x1745C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       ForegripDeltaSequence;                                   // 0x17460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseForegripADS;                                         // 0x17468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1IH[0x3];                                   // 0x17469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SightAlignmentOffsetAlternate;                           // 0x1746C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlternateSightOffset;                                   // 0x17478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD3R[0x3];                                   // 0x17479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ToggleOpticAlpha;                                        // 0x1747C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CalculatedSightAlignment;                                // 0x17480(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpticCycleDuration;                                      // 0x1748C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        OpticMontageReference;                                   // 0x17490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesLastBoltFire;                                       // 0x17498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IL39[0x3];                                   // 0x17499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireLastAnimTime;                                        // 0x1749C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimation_Equip_Event;                                  // 0x174A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JMP[0x7];                                   // 0x174A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemInteractableGear*                               InteractableGear;                                        // 0x174A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<ERevolverChamberState>                              RevolverChamberState;                                    // 0x174B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRevolver;                                             // 0x174C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I92E[0x3];                                   // 0x174C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BPTEMP_HandIKLeftCurve;                                  // 0x174C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BPTEMP_HandIKRightCurve;                                 // 0x174C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BPTEMP_MovementSpeed;                                    // 0x174CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UABP_Weapon_Revolver_C*                              RevolverPostProcessABP;                                  // 0x174D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BPTEMP_EmptyAlpha;                                       // 0x174D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTX1[0x4];                                   // 0x174DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        BPTEMP_CurrentFiremodeMontage1;                          // 0x174E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BPTEMP_FiremodePlaying;                                  // 0x174E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACGB[0x3];                                   // 0x174E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BPTEMP_FiremodeSlot;                                     // 0x174EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        BPTEMP_DeployedSequenceMontageReference;                 // 0x174F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   scavengeAnim;                                            // 0x174F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ScavengeMagazineEvent;                                   // 0x17500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KMV[0x7];                                   // 0x17501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_NVGAppearance;                                     // 0x17508(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndexSwitchMagazineAnimation;                            // 0x17510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAfterSwitchMagazine;                                    // 0x17514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBlendTubeSwap;                                    // 0x17515(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYP7[0x2];                                   // 0x17516(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_RemainingAmmo;                              // 0x17518(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCBA[0x4];                                   // 0x1751C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ERevolverChamberState>                              K2Node_Event_Chambers;                                   // 0x17520(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x17530(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnable;                                    // 0x17531(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x17532(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6C6[0x1];                                   // 0x17533(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_State;                                      // 0x17534(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoldierMovementComponent*                           K2Node_DynamicCast_AsSoldier_Movement_Component;         // 0x17538(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x17540(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x17541(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFGD[0x6];                                   // 0x17542(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemRevolver*                                       K2Node_DynamicCast_AsItem_Revolver;                      // 0x17548(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x17550(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x17551(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_2;                     // 0x17552(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_2;                           // 0x17553(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_2;                          // 0x17554(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_3;                     // 0x17555(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_3;                           // 0x17556(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_bKickWillSucceed;                     // 0x17557(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_OnPlayReload_MontageReference;                  // 0x17558(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_OnPlayBoltReload_Montage_Reference;             // 0x17560(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_OnPlayRevolverReload_MontageReference;          // 0x17568(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_4;                     // 0x17570(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_4;                           // 0x17571(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q2CP[0x6];                                   // 0x17572(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemPlantedExplosive*                               K2Node_DynamicCast_AsItem_Planted_Explosive;             // 0x17578(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x17580(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D25O[0x7];                                   // 0x17581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemDetonator*                                      K2Node_DynamicCast_AsItem_Detonator;                     // 0x17588(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_4;                           // 0x17590(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWTJ[0x7];                                   // 0x17591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                         K2Node_CustomEvent_DamageType;                           // 0x17598(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNetHitReaction                                     K2Node_CustomEvent_HitReaction;                          // 0x175A0(0x0040) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_3;                          // 0x175E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUU7[0x7];                                   // 0x175E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReloadGroup                                        CallFunc_Array_Get_Item;                                 // 0x175E8(0x0198) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Event_FireOrigin;                                 // 0x17780(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Event_FireDirection;                              // 0x1778C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload_4;                               // 0x17798(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bSingleReload_2;                            // 0x17799(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0QN[0x2];                                   // 0x1779A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_RateMultiplier_4;                           // 0x1779C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload_3;                               // 0x177A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZLJ[0x3];                                   // 0x177A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_RateMultiplier_3;                           // 0x177A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           K2Node_Event_OldFiremode;                                // 0x177A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           K2Node_Event_NewFiremode;                                // 0x177A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_OldState_2;                                 // 0x177AA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_NewState_2;                                 // 0x177AB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_OldState;                                   // 0x177AC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_NewState;                                   // 0x177AD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W2L[0x2];                                   // 0x177AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponUpgradeComponent*                             K2Node_Event_Upgrade_2;                                  // 0x177B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponBipodComponent*                               K2Node_DynamicCast_AsWeapon_Bipod_Component;             // 0x177B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_5;                           // 0x177C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78H8[0x7];                                   // 0x177C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor;                           // 0x177C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemWeapon*                                         K2Node_CustomEvent_Weapon;                               // 0x177D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X;                                  // 0x177D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y;                                  // 0x177DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z;                                  // 0x177E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcBobbing_Location;                           // 0x177E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_CalcBobbing_Rotator;                            // 0x177F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcBobbing_AdjustedGameTime;                   // 0x177FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_RateMultiplier_2;                           // 0x17800(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload_2;                               // 0x17804(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FIY[0x3];                                   // 0x17805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_AnimationInterruptTime;                     // 0x17808(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4O55[0x4];                                   // 0x1780C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       CallFunc_Array_Get_Item_2;                               // 0x17810(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       CallFunc_Array_Get_Item_3;                               // 0x17818(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_OnPlayBoltReloadAfterSwitchMagazine_Montage_Reference; // 0x17820(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload;                                 // 0x17828(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bSingleReload;                              // 0x17829(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2GM[0x2];                                   // 0x1782A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_RateMultiplier;                             // 0x1782C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Grenade_Molotov_C*                               K2Node_DynamicCast_AsBP_Grenade_Molotov;                 // 0x17830(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_6;                           // 0x17838(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BXW[0x3];                                   // 0x17839(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_CalcBobbing_Location_2;                         // 0x1783C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_CalcBobbing_Rotator_2;                          // 0x17848(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcBobbing_AdjustedGameTime_2;                 // 0x17854(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemFirearm*                                        K2Node_DynamicCast_AsItem_Firearm;                       // 0x17858(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_7;                           // 0x17860(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7V1[0x7];                                   // 0x17861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponVisualUpgradeComponent*                       K2Node_DynamicCast_AsWeapon_Visual_Upgrade_Component;    // 0x17868(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_8;                           // 0x17870(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEJX[0x7];                                   // 0x17871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           K2Node_Event_Mesh;                                       // 0x17878(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponVisualUpgradeComponent*                       K2Node_Event_Upgrade;                                    // 0x17880(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponOpticComponent*                               K2Node_DynamicCast_AsWeapon_Optic_Component;             // 0x17888(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_9;                           // 0x17890(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCR7[0x3];                                   // 0x17891(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x17894(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x178A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x178AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location_2;                      // 0x178B8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_2;                      // 0x178C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_2;                         // 0x178D0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_LatchedMode_3;                        // 0x178DC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_DesiredMode_3;                        // 0x178E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_4;                          // 0x178E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP5F[0x3];                                   // 0x178E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_Item;                                       // 0x178E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemFirearm*                                        K2Node_DynamicCast_AsItem_Firearm_2;                     // 0x178F0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_10;                          // 0x178F8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VC0[0x3];                                   // 0x178F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x178FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x17900(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable;                                     // 0x17910(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable;                                      // 0x17914(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_2;                                    // 0x17915(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5ML[0x2];                                   // 0x17916(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x17918(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_3;                                    // 0x17928(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3350[0x7];                                   // 0x17929(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Temp_object_Variable;                                    // 0x17930(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Temp_object_Variable_2;                                  // 0x17938(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_4;                                    // 0x17940(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_5;                                    // 0x17941(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_6;                                    // 0x17942(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBAV[0x1];                                   // 0x17943(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x17944(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_7;                                    // 0x17948(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSAQ[0x3];                                   // 0x17949(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_2;                                   // 0x1794C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_8;                                    // 0x17950(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_5;                     // 0x17951(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_5;                           // 0x17952(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E62C[0x1];                                   // 0x17953(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_3;                                   // 0x17954(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_4;                                   // 0x17958(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_9;                                    // 0x1795C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_10;                                   // 0x1795D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_In;                                   // 0x1795E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJQH[0x1];                                   // 0x1795F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location_3;                      // 0x17960(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_3;                      // 0x1796C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_3;                         // 0x17978(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location_4;                      // 0x17984(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_4;                      // 0x17990(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_4;                         // 0x1799C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_2;                                // 0x179A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_2;                                // 0x179AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_2;                                // 0x179B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetAnimMontageFromMap_bOutFound;                // 0x179B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetAnimMontageFromMap_bOutFound_2;              // 0x179B5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_11;                                   // 0x179B6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetAnimMontageFromMap_bOutFound_3;              // 0x179B7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_12;                                   // 0x179B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_13;                                   // 0x179B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_14;                                   // 0x179BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX5B[0x5];                                   // 0x179BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_Select_Default;                                   // 0x179C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_15;                                   // 0x179C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHZ8[0x7];                                   // 0x179C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_Select_Default_2;                                 // 0x179D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetReloadGroupFromMap_bOutFound;                // 0x179D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKLV[0x7];                                   // 0x179D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReloadGroup>                                K2Node_MakeArray_Array;                                  // 0x179E0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                K2Node_Select_Default_3;                                 // 0x179F0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_16;                                   // 0x17A00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetReloadGroupFromMap_bOutFound_2;              // 0x17A01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18M9[0x6];                                   // 0x17A02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReloadGroup>                                K2Node_MakeArray_Array_2;                                // 0x17A08(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        K2Node_Select_Default_4;                                 // 0x17A18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                K2Node_Select_Default_5;                                 // 0x17A20(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetReloadGroupFromMap_bOutFound_3;              // 0x17A30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJWX[0x7];                                   // 0x17A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReloadGroup>                                K2Node_MakeArray_Array_3;                                // 0x17A38(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                K2Node_Select_Default_6;                                 // 0x17A48(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Temp_object_Variable_3;                                  // 0x17A58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll;                              // 0x17A60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch;                             // 0x17A64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw;                               // 0x17A68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RF02[0x4];                                   // 0x17A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Temp_object_Variable_4;                                  // 0x17A70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_SightAlignment_Return;                          // 0x17A78(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_17;                                   // 0x17A84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIXA[0x3];                                   // 0x17A85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   K2Node_Select_Default_7;                                 // 0x17A88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_GetReloadGroupFromMap_bOutFound_4;              // 0x17A90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGS4[0x7];                                   // 0x17A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReloadGroup>                                K2Node_MakeArray_Array_4;                                // 0x17A98(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReloadGroup>                                K2Node_Select_Default_8;                                 // 0x17AA8(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FReloadGroup                                        CallFunc_Array_Get_Item_4;                               // 0x17AB8(0x0198) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              K2Node_DynamicCast_AsWeapon_Anim_Interface[0x10];        // 0x17C50(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_11;                          // 0x17C60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3MG[0x7];                                   // 0x17C61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Temp_object_Variable_5;                                  // 0x17C68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemRevolver*                                       K2Node_DynamicCast_AsItem_Revolver_2;                    // 0x17C70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_12;                          // 0x17C78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOCF[0x7];                                   // 0x17C79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_Weapon_Revolver_C*                              K2Node_DynamicCast_AsABP_Weapon_Revolver;                // 0x17C80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_13;                          // 0x17C88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNMD[0x7];                                   // 0x17C89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   Temp_object_Variable_6;                                  // 0x17C90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Temp_object_Variable_7;                                  // 0x17C98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bBash;                                      // 0x17CA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            Temp_byte_Variable;                                      // 0x17CA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9L23[0x6];                                   // 0x17CA2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   K2Node_Select_Default_9;                                 // 0x17CA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_18;                                   // 0x17CB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YGF[0x3];                                   // 0x17CB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_10;                                // 0x17CB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_11;                                // 0x17CB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallFunc_GetRandomSequence_OutChosenIndex;               // 0x17CBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_12;                                // 0x17CC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_3;                  // 0x17CC4(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bInstant;                                   // 0x17CD4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA98[0x3];                                   // 0x17CD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_SwitchingFrom;                              // 0x17CD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bWantsFirstEquip;                           // 0x17CE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bInstant_2;                                 // 0x17CE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KH7E[0x6];                                   // 0x17CE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_SwitchingTo;                                // 0x17CE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemInteractableGear*                               K2Node_Event_GearItem;                                   // 0x17CF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_NewState_3;                                 // 0x17CF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYQI[0x7];                                   // 0x17CF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor_2;                         // 0x17D00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_CustomEvent_InteractingActor;                     // 0x17D08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUseItem                                                   K2Node_CustomEvent_Item;                                 // 0x17D10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ABE[0x7];                                   // 0x17D11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSequenceRandom                                 K2Node_Select_Default_13;                                // 0x17D18(0x0030) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		int32_t                                                    CallFunc_GetRandomSequence_OutChosenIndex_2;             // 0x17D48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                K2Node_Select_Default_14;                                // 0x17D4C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          K2Node_Event_Hit;                                        // 0x17D54(0x0088) Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Select_Default_15;                                // 0x17DDC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPGM[0x3];                                   // 0x17DDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeleeConfig                                        K2Node_Event_SelectedAttack;                             // 0x17DE0(0x0040) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_OnPlayRechamber_Reference;                      // 0x17E20(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_19;                                   // 0x17E28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6UL[0x7];                                   // 0x17E29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_Select_Default_16;                                // 0x17E30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponReloadType                                          Temp_byte_Variable_2;                                    // 0x17E38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWS4[0x7];                                   // 0x17E39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FReloadGroup>                                K2Node_Select_Default_17;                                // 0x17E40(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_SelectReload_Reload;                            // 0x17E50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_SelectReload_ReloadEmpty;                       // 0x17E58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_SelectReload_ReloadStages;                      // 0x17E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallFunc_SelectReload_SelectedReload;                    // 0x17E68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_20;                                   // 0x17E6C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AY9A[0x3];                                   // 0x17E6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_Select_Default_18;                                // 0x17E70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_4;                  // 0x17E78(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_5;                  // 0x17E88(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Temp_object_Variable_8;                                  // 0x17E98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   K2Node_Select_Default_19;                                // 0x17EA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   Temp_object_Variable_9;                                  // 0x17EA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_21;                                   // 0x17EB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICVK[0x7];                                   // 0x17EB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsWeapon_Anim_Interface_2[0x10];      // 0x17EB8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_14;                          // 0x17EC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFEF[0x7];                                   // 0x17EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   K2Node_Select_Default_20;                                // 0x17ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_21;                                // 0x17ED8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_22;                                // 0x17EDC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_22;                                   // 0x17EE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWB9[0x3];                                   // 0x17EE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            K2Node_Select_Default_23;                                // 0x17EEC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_LatchedMode_2;                        // 0x17EF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_DesiredMode_2;                        // 0x17EFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_6;                  // 0x17F00(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_7;                  // 0x17F10(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_8;                  // 0x17F20(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_24;                                // 0x17F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcVariableInterp_Output;                      // 0x17F34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_9;                  // 0x17F38(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_10;                 // 0x17F48(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_LatchedMode;                          // 0x17F58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_CustomEvent_DesiredMode;                          // 0x17F5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_11;                 // 0x17F60(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class AItemFirearm*                                        K2Node_DynamicCast_AsItem_Firearm_3;                     // 0x17F70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_15;                          // 0x17F78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FHC[0x7];                                   // 0x17F79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponVisualUpgradeComponent*                       K2Node_DynamicCast_AsWeapon_Visual_Upgrade_Component_2;  // 0x17F80(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_16;                          // 0x17F88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSV1[0x3];                                   // 0x17F89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_12;                 // 0x17F8C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHID[0x4];                                   // 0x17F9C(0x0004) MISSED OFFSET (PADDING)

	public:
		void Update_Optic_Toggle_Attachment(class UObject* bpp__Upgrade__pf, const class FScriptDelegate& bpp__Delegate__pf__const);
		void Update_Attached_Weapon_Sight_Offset(class AItemFirearm* bpp__ParentFirearm__pf);
		void UpdateUsePointShoot();
		void UpdateTransform();
		void UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const);
		void UpdateRevolverChamberPostProcess(TArray<ERevolverChamberState>* bpp__Chambers__pf);
		void UpdateOpticToggleState(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const);
		void UpdateOpticToggle(class UObject* bpp__Upgrade__pf, const class FScriptDelegate& bpp__Delegate__pf__const);
		void UpdateOpticState(int32_t bpp__Mode__pf, int32_t bpp__DesiredMode__pf, class UObject* bpp__Upgrade__pf);
		void UpdateOpticOnAttachment(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const);
		void UpdateMorphMagazine();
		void UpdateEquipable();
		void ToggleVisibilityOfNVG_On();
		void ToggleVisibilityOfNVG_Off();
		void ToggleOpticState(bool bpp__Enable__pf);
		void ToggleADS(bool bpp__In__pf);
		void StopToggleOpticMontage();
		void StopAmmoCheck(float bpp__BlendOutTime__pf);
		void SightAlignment(class USkeletalMeshComponent* bpp__EquipableComponent__pf, class USkeletalMeshComponent* bpp__AttachmentComponent__pf, float bpp__SightRotation__pf, float bpp__ModelFlattenScale__pf, struct FVector* bpp__Return__pf);
		void SetupReloadVariables(bool bpp__DryReload__pf, bool bpp__SingleReload__pf, float bpp__RateMultiplier__pf);
		void SetSprintAnimations();
		void SetFireModeBase(bool bpp__TwoFireModes__pf);
		void SetEquipable(class AItemEquipable* bpp__Item__pf);
		void SetAmmoContainer(bool bpp__AlternateMag__pf);
		void SelectReload(TArray<struct FReloadGroup>* bpp__Reloads__pf, class UAnimMontage** bpp__Reload__pf, class UAnimMontage** bpp__ReloadEmpty__pf, class UAnimMontage** bpp__ReloadStages__pf, int32_t* bpp__SelectedReload__pf);
		void ScavengeAnimation();
		void PointShootToggle();
		void Play_Ready();
		void PlaySwitchMagazine(TArray<class UAnimSequence*>* bpp__Animation__pf, int32_t bpp__Index__pf, float bpp__Speed__pf);
		void PlayReady();
		void PlayDetonatorActivate();
		void PlayActorInteraction(class AActor* bpp__InteractingxActor__pfT, EUseItem bpp__UsableActorType__pf);
		void PlantStart();
		void PlantFinished();
		void PlantAbondoned();
		void OnUseActorInteracted(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf);
		void OnTakeDamage(class UDamageType* bpp__DamageType__pf__const, const struct FNetHitReaction& bpp__HitReaction__pf);
		void OnScavengeMagazine(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf);
		void OnPlayWeaponMelee(bool bpp__Bash__pf);
		void OnPlayRevolverReload(bool bpp__DryReload__pf, bool bpp__Debug__pf, class UAnimMontage** bpp__MontageReference__pf);
		void OnPlayReload(bool bpp__bDryReload__pf, class UAnimMontage** bpp__MontageReference__pf);
		void OnPlayRechamber(float bpp__BoltSpeed__pf, class UAnimMontage** bpp__Reference__pf);
		void OnPlayMeleeDamage(class UDamageType* bpp__DamagexType__pfT__const, const struct FNetHitReaction& bpp__HitReaction__pf);
		void OnPlayKick();
		void OnPlayGearItemChangeState(class AItemInteractableGear* bpp__ItemGear__pf, EEquipableState bpp__NewState__pf);
		void OnPlayFiremodeCycle();
		void OnPlayFireExplcit();
		void OnPlayFire();
		void OnPlayDetonate();
		void OnPlayBoltReloadAfterSwitchMagazine(class UAnimMontage* bpp__AnimReloadBoltAfterSwitchMagazine__pf, class UAnimMontage** bpp__MontagexReference__pfT);
		void OnPlayBoltReload(bool bpp__DryReload__pf, class UAnimMontage** bpp__MontagexReference__pfT);
		void OnPlayBoltFire();
		void OnPlayAmmoCheck();
		void OnMeleeAttack();
		void OnInterruptReload();
		void OnFireStart();
		void OnFireEnd();
		void OnDoorKick(bool bpp__bKickWillSucceed__pf);
		void InterfaceUpdateSimulationBlend(float bpp__State__pf);
		void InteractOneHandNVG(class AItemInteractableGear* bpp__GearItem__pf, EEquipableState bpp__State__pf);
		void IKCurve_Alpha(bool bpp__Condition__pf, bool bpp__Subtract__pf, const class FName& bpp__CurveName__pf, float* bpp__Alpha__pf);
		void GetRevolverEmpty(bool bpp__Revolver__pf, TArray<ERevolverChamberState>* bpp__RevolverChambers__pf, bool bpp__Debug__pf, bool* bpp__Return__pf);
		void ForceToggleOpticState(bool bpp__bEnable__pf);
		void ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf);
		void ExecuteUbergraph_ABP_Weapon_94(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Weapon_5(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Weapon_119(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Weapon_1(int32_t bpp__EntryPoint__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4();
		void DeltaRotatorAxis(float bpp__A__pf, float bpp__B__pf, float* bpp__Output__pf);
		void ClampedFLerp(float bpp__A__pf, float bpp__B__pf, float bpp__Alpha__pf, float* bpp__Return__pf);
		void CheckTickUpdate(float bpp__DelayTime__pf, float bpp__NextTickUpdate__pf, bool* bpp__Reutrn__pf, float* bpp__ReturnNextTickUpdate__pf);
		void CheckBelt();
		void ChangeRagPaticleState(bool bpp__ForceKill__pf);
		void CancelBolting();
		void CancelBolting_3();
		void Calc_Generic_Float_Alpha(float bpp__Target__pf, float bpp__AlphaInput__pf, float bpp__Speed__pf, float* bpp__AlphaOutput__pf, bool* bpp__Finished__pf);
		void Calc_Axis_Interp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void CalcVectorInterp(const struct FVector& bpp__Current__pf, const struct FVector& bpp__Target__pf, float bpp__Speed__pf, struct FVector* bpp__Output__pf);
		void CalcVariableInterp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void Calculate_Magazine_Offset(class USceneComponent* bpp__Magazine__pf, class USceneComponent* bpp__Weapon__pf, const class FName& bpp__ExtendedSocket__pf, const class FName& bpp__StandardSocket__pf, struct FVector* bpp__Position__pf, struct FRotator* bpp__Rotation__pf);
		float CalcSprintIKAlpha(float bpp__Sprint__pf, float bpp__Charge__pf, float bpp__BipodLegState__pf);
		void CalcSinusoid(float bpp__Frequency__pf, float bpp__Amplitude__pf, float bpp__GameTime__pf, float bpp__Speed__pf, bool bpp__Positionx__pfzy, float* bpp__Output__pf);
		void CalcRotatorInterp(const struct FRotator& bpp__Current__pf, const struct FRotator& bpp__Target__pf, float bpp__Speed__pf, struct FRotator* bpp__Output__pf);
		void CalcLeanOffsets();
		void CalcGenericAlpha(bool bpp__Target__pf, float bpp__AlphaInput__pf, float bpp__Speed__pf, bool bpp__Constant__pf, float* bpp__AlphaOutput__pf, bool* bpp__Finished__pf);
		void CalcFireOffsetLimits(const struct FVector& bpp__OpticOffset__pf);
		void CalcBobbing(float bpp__BobbingxScale__pfT, float bpp__BobbingxSpeed__pfT, float bpp__InputAdjustedTime__pf, struct FVector* bpp__Location__pf, struct FRotator* bpp__Rotator__pf, float* bpp__AdjustedGameTime__pf);
		float CalcAnimPositionLength(class UAnimSequenceBase* bpp__Sequence__pf, bool bpp__Reverse__pf);
		void CalcAlphaInterp(float bpp__Alpha__pf, bool bpp__Switch__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintOnUpgradeMeshLoaded(class UINSSkeletalMeshComponent* bpp__Mesh__pf, class UWeaponVisualUpgradeComponent* bpp__Upgrade__pf);
		void BlueprintOnUpgradeInstalled(class UWeaponUpgradeComponent* bpp__Upgrade__pf);
		void BlueprintOnSwitchMagazineInterrupt(float bpp__AnimationInterruptTime__pf__const);
		void BlueprintOnSwitchMagazine(float bpp__RateMultiplier__pf__const, bool bpp__bDryReload__pf__const);
		void BlueprintOnRevolverChambersUpdated();
		void BlueprintOnReloadInterrupt();
		void BlueprintOnReloadAfterSwitchMagazine(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const);
		void BlueprintOnReload(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const);
		void BlueprintOnPlayerClassAttributesUpdated();
		void BlueprintOnMeshLoaded();
		void BlueprintOnMeleeWeaponHit(const struct FHitResult& bpp__Hit__pf__const);
		void BlueprintOnMeleeWeaponAttack(const struct FMeleeConfig& bpp__SelectedAttack__pf__const);
		void BlueprintOnItemUnequip(bool bpp__bInstant__pf, class AItemEquipable* bpp__SwitchingTo__pf);
		void BlueprintOnItemEquip(bool bpp__bInstant__pf__const, class AItemEquipable* bpp__SwitchingFrom__pf, bool bpp__bWantsFirstEquip__pf__const);
		void BlueprintOnGenericMeleeAttack(bool bpp__bBash__pf);
		void BlueprintOnGearInteracted(class AItemInteractableGear* bpp__GearItem__pf, EEquipableState bpp__NewState__pf);
		void BlueprintOnFirearmStopFire();
		void BlueprintOnFirearmFired(const struct FVector& bpp__FireOrigin__pf__const, const struct FVector& bpp__FireDirection__pf__const);
		void BlueprintOnFirearmDryFire();
		void BlueprintOnFastReload(bool bpp__bDryReload__pf__const, float bpp__RateMultiplier__pf__const);
		void BlueprintOnCycleFiremode(EFirearmFiremode bpp__OldFiremode__pf__const, EFirearmFiremode bpp__NewFiremode__pf__const);
		void BlueprintOnBoltCycle();
		void BlueprintOnBipodLegsStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const);
		void BlueprintOnBipodDeployedStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const);
		void BlueprintOnBecomeViewTarget();
		void BlueprintOnAmmoCheck();
		void BlueprintInitializeAnimation();
		void AttachmentUpdateOpticDelegate(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const);
		void AnimNotify_UnderbarrelBlend();
		void AnimNotify_TubeSwapFinished();
		void AnimNotify_SwitchMagazineFinished();
		void AnimNotify_StopReady();
		void AnimNotify_RevolverForceVisibility();
		void AnimNotify_ReloadResume();
		void AnimNotify_ReloadMagTypeChange();
		void AnimNotify_PlayReady();
		void AnimNotify_MolotovRag();
		void AnimNotify_MeleeBlend();
		void AnimNotify_GrenadePullback();
		void AnimNotify_FirePinState();
		void AnimNotify_Finish_Reload();
		void AnimNotify_FinishedReload();
		void AnimNotify_EndScavenge();
		void AnimNotify_End_Equip_Animation();
		void AnimNotify_End_Anim();
		void AnimNotify_DrawChamber();
		void AnimNotify_DeployedLeftHand();
		void AnimNotify_BeltReplace();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		void AdjustMontageRate(class UAnimMontage* bpp__MontageReference__pf, float bpp__RateMultiplier__pf);
		void OnUsableInteractionDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf);
		void OnPlantStartDelegate__DelegateSignature();
		void OnPlantFinishedDelegate__DelegateSignature();
		void OnPlantAbandonedDelegate__DelegateSignature();
		void OnDetonatorUsedDelegate__DelegateSignature();
		void OnCycleOpticDelegate__DelegateSignature(int32_t bpp__LatchedMode__pf, int32_t bpp__DesiredMode__pf);
		void OnCharacterTakeDamageDelegate__DelegateSignature(class UDamageType* bpp__DamageType__pf, const struct FNetHitReaction& bpp__HitReaction__pf);
		void DelegateDoorKick__DelegateSignature(bool bpp__bKickWillSucceed__pf);
		void AmmoGatheredDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
