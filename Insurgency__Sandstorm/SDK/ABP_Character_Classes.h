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
	 * DynamicClass ABP_Character.ABP_Character_C
	 * Size -> 0x26610 (FullSize[0x27090] - InheritedSize[0x0A80])
	 */
	class UABP_Character_C : public UThirdPersonAnimInstance
	{
	public:
		unsigned char                                              UnknownData_YCO0[0x8];                                   // 0x0A80(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_28;                             // 0x0A88(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_27;                             // 0x0B90(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_26;                             // 0x0C98(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_44;                        // 0x0DA0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3;                            // 0x0E40(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_25;                             // 0x0E58(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_15;                               // 0x0F60(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_161;                      // 0x1050(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_160;                      // 0x1078(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_159;                      // 0x10A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_158;                      // 0x10C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_157;                      // 0x10F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_156;                      // 0x1118(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_155;                      // 0x1140(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_154;                      // 0x1168(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_153;                      // 0x1190(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_152;                      // 0x11B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_151;                      // 0x11E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_150;                      // 0x1208(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_149;                      // 0x1230(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_89;                            // 0x1258(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_141;                     // 0x1288(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_52;                          // 0x12D0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_26;                    // 0x1398(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_140;                     // 0x13D0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_51;                          // 0x1418(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_139;                     // 0x14E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_25;                    // 0x1528(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_138;                     // 0x1560(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_137;                     // 0x15A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_24;                    // 0x15F0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_50;                          // 0x1628(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_136;                     // 0x16F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_43;                        // 0x1738(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_84;                         // 0x17D8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_83;                         // 0x1850(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_88;                            // 0x18C8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_135;                     // 0x18F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_49;                          // 0x1940(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_23;                    // 0x1A08(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_134;                     // 0x1A40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_133;                     // 0x1A88(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_22;                    // 0x1AD0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_48;                          // 0x1B08(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_132;                     // 0x1BD0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_131;                     // 0x1C18(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_21;                    // 0x1C60(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_47;                          // 0x1C98(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_130;                     // 0x1D60(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_42;                        // 0x1DA8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_82;                         // 0x1E48(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_81;                         // 0x1EC0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_87;                            // 0x1F38(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_148;                      // 0x1F68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_86;                            // 0x1F90(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_151;                         // 0x1FC0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_129;                     // 0x1FE8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_128;                     // 0x2030(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_46;                          // 0x2078(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_127;                     // 0x2140(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_125;                      // 0x2188(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_124;                      // 0x2248(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_85;                            // 0x2308(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_84;                            // 0x2338(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_83;                            // 0x2368(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_44;               // 0x2398(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x2520(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x2600(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_35;                            // 0x26E0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_45;                          // 0x27A8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_80;                         // 0x2870(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_126;                     // 0x28E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_125;                     // 0x2930(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_41;                        // 0x2978(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_20;                    // 0x2A18(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_124;                     // 0x2A50(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_123;                     // 0x2A98(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_44;                          // 0x2AE0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x2BA8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x2C88(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_43;                          // 0x2D68(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_122;                     // 0x2E30(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_42;                          // 0x2E78(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_121;                     // 0x2F40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_41;                          // 0x2F88(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_120;                     // 0x3050(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_40;                          // 0x3098(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_123;                      // 0x3160(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_12;                           // 0x3220(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_119;                     // 0x3238(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_37;                        // 0x3280(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_82;                            // 0x3330(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_34;                            // 0x3360(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_118;                     // 0x3428(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_117;                     // 0x3470(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_116;                     // 0x34B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_115;                     // 0x3500(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_36;                        // 0x3548(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_81;                            // 0x35F8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x3628(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x36D8(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_147;                      // 0x3790(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_146;                      // 0x37B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_145;                      // 0x37E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_144;                      // 0x3808(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_143;                      // 0x3830(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_142;                      // 0x3858(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_141;                      // 0x3880(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_140;                      // 0x38A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_139;                      // 0x38D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_138;                      // 0x38F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_137;                      // 0x3920(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_136;                      // 0x3948(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_135;                      // 0x3970(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_134;                      // 0x3998(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_133;                      // 0x39C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_132;                      // 0x39E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_131;                      // 0x3A10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_130;                      // 0x3A38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_129;                      // 0x3A60(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_128;                      // 0x3A88(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_127;                      // 0x3AB0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_126;                      // 0x3AD8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_125;                      // 0x3B00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_124;                      // 0x3B28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_123;                      // 0x3B50(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_150;                         // 0x3B78(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_49;                                   // 0x3BA0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_122;                      // 0x3BE8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_149;                         // 0x3CA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_80;                            // 0x3CD0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_79;                            // 0x3D00(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_148;                         // 0x3D30(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_121;                      // 0x3D58(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_79;                         // 0x3E18(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_78;                            // 0x3E90(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_78;                         // 0x3EC0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_147;                         // 0x3F38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_43;               // 0x3F60(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_120;                      // 0x40E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_77;                         // 0x41A8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_146;                         // 0x4220(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_42;               // 0x4248(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_119;                      // 0x43D0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_40;                        // 0x4490(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_77;                            // 0x4530(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_76;                         // 0x4560(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_75;                         // 0x45D8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_74;                         // 0x4650(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_73;                         // 0x46C8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_35;                        // 0x4740(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_39;                          // 0x47F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_145;                         // 0x48B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_118;                      // 0x48E0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_41;               // 0x49A0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_72;                         // 0x4B28(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_71;                         // 0x4BA0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_34;                        // 0x4C18(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_38;                          // 0x4CC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_144;                         // 0x4D90(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_117;                      // 0x4DB8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_40;               // 0x4E78(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_39;                        // 0x5000(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_76;                            // 0x50A0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70;                         // 0x50D0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_143;                         // 0x5148(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_39;               // 0x5170(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_116;                      // 0x52F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_69;                         // 0x53B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_142;                         // 0x5430(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_38;               // 0x5458(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_115;                      // 0x55E0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_38;                        // 0x56A0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_75;                            // 0x5740(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_68;                         // 0x5770(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_37;                        // 0x57E8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_67;                         // 0x5888(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_36;                        // 0x5900(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_141;                         // 0x59A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_35;                        // 0x59C8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_140;                         // 0x5A68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66;                         // 0x5A90(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65;                         // 0x5B08(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_114;                      // 0x5B80(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_139;                         // 0x5C40(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_113;                      // 0x5C68(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_138;                         // 0x5D28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_33;                        // 0x5D50(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_34;                        // 0x5E00(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_137;                         // 0x5EA0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_112;                      // 0x5EC8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_136;                         // 0x5F88(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_64;                         // 0x5FB0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_63;                         // 0x6028(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_111;                      // 0x60A0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_135;                         // 0x6160(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_110;                      // 0x6188(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_134;                         // 0x6248(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_32;                        // 0x6270(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_74;                            // 0x6320(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_133;                         // 0x6350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_48;                                   // 0x6378(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_132;                         // 0x63C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_109;                      // 0x63E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_73;                            // 0x64A8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_33;                            // 0x64D8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_32;                            // 0x65A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_114;                     // 0x6668(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_31;                            // 0x66B0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_113;                     // 0x6778(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_131;                         // 0x67C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_47;                                   // 0x67E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_46;                                   // 0x6830(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_130;                         // 0x6878(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_129;                         // 0x68A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_45;                                   // 0x68C8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_128;                         // 0x6910(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_108;                      // 0x6938(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_44;                                   // 0x69F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_112;                     // 0x6A40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_107;                      // 0x6A88(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_37;                          // 0x6B48(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_111;                     // 0x6C10(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_43;                                   // 0x6C58(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_19;                    // 0x6CA0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_127;                         // 0x6CD8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_106;                      // 0x6D00(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_72;                            // 0x6DC0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_126;                         // 0x6DF0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_105;                      // 0x6E18(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_42;                                   // 0x6ED8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_41;                                   // 0x6F20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_104;                      // 0x6F68(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_125;                         // 0x7028(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_124;                         // 0x7050(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_40;                                   // 0x7078(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_30;                            // 0x70C0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_123;                         // 0x7188(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_39;                                   // 0x71B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_71;                            // 0x71F8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_38;                                   // 0x7228(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_62;                         // 0x7270(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_103;                      // 0x72E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_122;                         // 0x73A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_70;                            // 0x73D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_110;                     // 0x7400(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_102;                      // 0x7448(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_121;                         // 0x7508(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_69;                            // 0x7530(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_68;                            // 0x7560(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_101;                      // 0x7590(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_100;                      // 0x7650(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_120;                         // 0x7710(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_37;                                   // 0x7738(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_36;                                   // 0x7780(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_119;                         // 0x77C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_118;                         // 0x77F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_99;                       // 0x7818(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_35;                                   // 0x78D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_109;                     // 0x7920(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_98;                       // 0x7968(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_117;                         // 0x7A28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_67;                            // 0x7A50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x7A80(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x7B30(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_122;                      // 0x7BE8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_121;                      // 0x7C10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_120;                      // 0x7C38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_119;                      // 0x7C60(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_118;                      // 0x7C88(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_117;                      // 0x7CB0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_116;                      // 0x7CD8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_115;                      // 0x7D00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_114;                      // 0x7D28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_113;                      // 0x7D50(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_112;                      // 0x7D78(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_111;                      // 0x7DA0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_110;                      // 0x7DC8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_109;                      // 0x7DF0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_66;                            // 0x7E18(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_108;                      // 0x7E48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_36;                          // 0x7E70(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_108;                     // 0x7F38(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_18;                    // 0x7F80(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_107;                     // 0x7FB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_35;                          // 0x8000(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_106;                     // 0x80C8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_17;                    // 0x8110(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_105;                     // 0x8148(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_104;                     // 0x8190(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_16;                    // 0x81D8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_34;                          // 0x8210(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_103;                     // 0x82D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_33;                        // 0x8320(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_61;                         // 0x83C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_60;                         // 0x8438(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_65;                            // 0x84B0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_33;                          // 0x84E0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_102;                     // 0x85A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_15;                    // 0x85F0(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_101;                     // 0x8628(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_100;                     // 0x8670(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_14;                    // 0x86B8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_32;                          // 0x86F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_99;                      // 0x87B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_98;                      // 0x8800(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_13;                    // 0x8848(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_31;                          // 0x8880(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_97;                      // 0x8948(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_32;                        // 0x8990(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_59;                         // 0x8A30(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_58;                         // 0x8AA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_64;                            // 0x8B20(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_63;                            // 0x8B50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_96;                      // 0x8B80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_30;                          // 0x8BC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_95;                      // 0x8C90(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_94;                      // 0x8CD8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_93;                      // 0x8D20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_97;                       // 0x8D68(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_96;                       // 0x8E28(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_62;                            // 0x8EE8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_12;                    // 0x8F18(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_29;                          // 0x8F50(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_92;                      // 0x9018(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_91;                      // 0x9060(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x90A8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_31;                        // 0x9188(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_29;                            // 0x9228(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_28;                          // 0x92F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57;                         // 0x93B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_90;                      // 0x9430(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_89;                      // 0x9478(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x94C0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x95A0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_27;                          // 0x9680(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_88;                      // 0x9748(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_26;                          // 0x9790(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_87;                      // 0x9858(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_25;                          // 0x98A0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_86;                      // 0x9968(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_37;               // 0x99B0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_31;                        // 0x9B38(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_61;                            // 0x9BE8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_28;                            // 0x9C18(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_85;                      // 0x9CE0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_84;                      // 0x9D28(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_83;                      // 0x9D70(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_82;                      // 0x9DB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_30;                        // 0x9E00(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_60;                            // 0x9EB0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x9EE0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x9F90(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_107;                      // 0xA048(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_106;                      // 0xA070(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_105;                      // 0xA098(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_104;                      // 0xA0C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_103;                      // 0xA0E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_102;                      // 0xA110(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_101;                      // 0xA138(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_100;                      // 0xA160(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_99;                       // 0xA188(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_98;                       // 0xA1B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_97;                       // 0xA1D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_96;                       // 0xA200(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_95;                       // 0xA228(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_94;                       // 0xA250(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_93;                       // 0xA278(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_92;                       // 0xA2A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_91;                       // 0xA2C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_90;                       // 0xA2F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_89;                       // 0xA318(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_88;                       // 0xA340(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_87;                       // 0xA368(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_116;                         // 0xA390(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_95;                       // 0xA3B8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_34;                                   // 0xA478(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_115;                         // 0xA4C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_59;                            // 0xA4E8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_94;                       // 0xA518(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_114;                         // 0xA5D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_56;                         // 0xA600(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_58;                            // 0xA678(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_113;                         // 0xA6A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_112;                         // 0xA6D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_55;                         // 0xA6F8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_36;               // 0xA770(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_93;                       // 0xA8F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_54;                         // 0xA9B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_35;               // 0xAA30(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_92;                       // 0xABB8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_30;                        // 0xAC78(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_57;                            // 0xAD18(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_111;                         // 0xAD48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_110;                         // 0xAD70(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53;                         // 0xAD98(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_34;               // 0xAE10(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_91;                       // 0xAF98(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0xB058(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_33;               // 0xB0D0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_90;                       // 0xB258(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_29;                        // 0xB318(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_56;                            // 0xB3B8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_109;                         // 0xB3E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_108;                         // 0xB410(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0xB438(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0xB4B0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0xB528(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0xB5A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_29;                        // 0xB618(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_24;                          // 0xB6C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_89;                       // 0xB790(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_32;               // 0xB850(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0xB9D8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0xBA50(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_28;                        // 0xBAC8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_23;                          // 0xBB78(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_88;                       // 0xBC40(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_31;               // 0xBD00(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_28;                        // 0xBE88(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_55;                            // 0xBF28(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_107;                         // 0xBF58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_87;                       // 0xBF80(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_27;                        // 0xC040(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0xC0E0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_106;                         // 0xC158(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0xC180(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26;                        // 0xC1F8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25;                        // 0xC298(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_105;                         // 0xC338(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_104;                         // 0xC360(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_103;                         // 0xC388(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0xC3B0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0xC428(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_86;                       // 0xC4A0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_85;                       // 0xC560(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_27;                        // 0xC620(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_54;                            // 0xC6D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_102;                         // 0xC700(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_101;                         // 0xC728(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_33;                                   // 0xC750(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_84;                       // 0xC798(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_53;                            // 0xC858(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_100;                         // 0xC888(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_83;                       // 0xC8B0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_32;                                   // 0xC970(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_31;                                   // 0xC9B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_99;                          // 0xCA00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_98;                          // 0xCA28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_30;                                   // 0xCA50(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_82;                       // 0xCA98(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_27;                            // 0xCB58(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_97;                          // 0xCC20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_29;                                   // 0xCC48(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_52;                            // 0xCC90(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_81;                       // 0xCCC0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0xCD80(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_28;                                   // 0xCE20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_96;                          // 0xCE68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_95;                          // 0xCE90(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0xCEB8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_94;                          // 0xCF58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_81;                      // 0xCF80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_26;                            // 0xCFC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_80;                      // 0xD090(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_79;                      // 0xD0D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_78;                      // 0xD120(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_27;                                   // 0xD168(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_26;                                   // 0xD1B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_25;                                   // 0xD1F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_24;                                   // 0xD240(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_93;                          // 0xD288(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_92;                          // 0xD2B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_80;                       // 0xD2D8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_22;                          // 0xD398(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_11;                    // 0xD460(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_79;                       // 0xD498(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_51;                            // 0xD558(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_78;                       // 0xD588(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_91;                          // 0xD648(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_23;                                   // 0xD670(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_90;                          // 0xD6B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_22;                                   // 0xD6E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_77;                       // 0xD728(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_89;                          // 0xD7E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_76;                       // 0xD810(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_21;                                   // 0xD8D0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_77;                      // 0xD918(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_75;                       // 0xD960(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_88;                          // 0xDA20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_50;                            // 0xDA48(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0xDA78(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0xDB28(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_86;                       // 0xDBE0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_85;                       // 0xDC08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_84;                       // 0xDC30(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_83;                       // 0xDC58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_82;                       // 0xDC80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81;                       // 0xDCA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_49;                            // 0xDCD0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_48;                            // 0xDD00(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_21;                          // 0xDD30(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_76;                      // 0xDDF8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_75;                      // 0xDE40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_74;                      // 0xDE88(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_74;                       // 0xDED0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_73;                       // 0xDF90(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_73;                      // 0xE050(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_47;                            // 0xE098(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_25;                            // 0xE0C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_72;                      // 0xE190(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_71;                      // 0xE1D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0xE220(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0xE2C0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_46;                            // 0xE3A0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_24;                            // 0xE3D0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_70;                      // 0xE498(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_69;                      // 0xE4E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_68;                      // 0xE528(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_26;                        // 0xE570(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_45;                            // 0xE620(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0xE650(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0xE700(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0xE7B8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_80;                       // 0xE7D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_79;                       // 0xE800(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_78;                       // 0xE828(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77;                       // 0xE850(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_76;                       // 0xE878(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_75;                       // 0xE8A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_74;                       // 0xE8C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_73;                       // 0xE8F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_72;                       // 0xE918(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_71;                       // 0xE940(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70;                       // 0xE968(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_69;                       // 0xE990(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0xE9B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0xE9E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0xEA08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0xEA30(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0xEA58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0xEA80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0xEAA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_44;                            // 0xEAD0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0xEB00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0xEB78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_25;                        // 0xEBF0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0xECA0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0xECD0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0xED00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0xED28(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0xED58(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0xED78(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController_2;                    // 0xEE80(0x0118) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0xEF98(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0xEFB8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0xF0C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0xF138(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_30;               // 0xF168(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_67;                      // 0xF2F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0xF338(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_66;                      // 0xF3D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_65;                      // 0xF420(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_23;                            // 0xF468(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_64;                      // 0xF530(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_20;                          // 0xF578(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_29;               // 0xF640(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0xF7C8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0xF7F8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0xF828(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_87;                          // 0xF858(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_86;                          // 0xF880(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_63;                      // 0xF8A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_72;                       // 0xF8F0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_71;                       // 0xF9B0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_70;                       // 0xFA70(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0xFB30(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_62;                      // 0xFBD0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_61;                      // 0xFC18(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0xFC60(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_85;                          // 0xFC90(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_24;                        // 0xFCB8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0xFD68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_28;               // 0xFDE0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_27;               // 0xFF68(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_84;                          // 0x100F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_60;                      // 0x10118(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_23;                        // 0x10160(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_59;                      // 0x10210(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_69;                       // 0x10258(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_58;                      // 0x10318(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_57;                      // 0x10360(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_56;                      // 0x103A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_68;                       // 0x103F0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_67;                       // 0x104B0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_66;                       // 0x10570(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x10630(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x106A8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_26;               // 0x10748(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_22;                            // 0x108D0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_25;               // 0x10998(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_55;                      // 0x10B20(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_54;                      // 0x10B68(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_21;                            // 0x10BB0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_22;                        // 0x10C78(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_24;               // 0x10D28(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x10EB0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x10ED0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_14;                               // 0x10EF0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0x10FE0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x110D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x11100(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_65;                       // 0x11130(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x111F0(0x0090) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_21;                        // 0x11280(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_53;                      // 0x11330(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x11378(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x11418(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0x11438(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_52;                      // 0x11540(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_51;                      // 0x11588(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BoneDrivenController                      AnimGraphNode_BoneDrivenController;                      // 0x115D0(0x0118) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x116E8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0x11708(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x11810(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x11840(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_4;                               // 0x118F0(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x11AD0(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x11CB0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x11CD0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x11DC0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x11EB0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x11ED0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x11FD8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x120E0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x121E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x12210(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x12238(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x12260(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x12288(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x122B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x122D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x12300(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x12328(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x12350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x12378(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x123A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x123C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x123F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x12418(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x12440(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_83;                          // 0x12470(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_82;                          // 0x12498(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_20;                                   // 0x124C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_64;                       // 0x12508(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x125C8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_81;                          // 0x125F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_80;                          // 0x12620(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_79;                          // 0x12648(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_78;                          // 0x12670(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x12698(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x12738(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x127B0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_63;                       // 0x12828(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_62;                       // 0x128E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_20;                        // 0x129A8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x12A58(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_23;               // 0x12A88(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_77;                          // 0x12C10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x12C38(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x12CD8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x12D50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_22;               // 0x12D80(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x12F08(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x12F80(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_21;               // 0x12FB0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_76;                          // 0x13138(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_50;                      // 0x13160(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x131A8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x13248(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_19;                                   // 0x13278(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_49;                      // 0x132C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_20;                            // 0x13308(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_48;                      // 0x133D0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_75;                          // 0x13418(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_74;                          // 0x13440(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_18;                                   // 0x13468(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_17;                                   // 0x134B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_16;                                   // 0x134F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_73;                          // 0x13540(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_47;                      // 0x13568(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_46;                      // 0x135B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_15;                                   // 0x135F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_61;                       // 0x13640(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_19;                          // 0x13700(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_10;                    // 0x137C8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_60;                       // 0x13800(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_19;                            // 0x138C0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_18;                            // 0x13988(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_72;                          // 0x13A50(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x13A78(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_45;                      // 0x13AA8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_59;                       // 0x13AF0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_14;                                   // 0x13BB0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_71;                          // 0x13BF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_58;                       // 0x13C20(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_13;                                   // 0x13CE0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_70;                          // 0x13D28(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x13D50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x13D80(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x13E30(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_57;                       // 0x13EE8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_56;                       // 0x13FA8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_55;                       // 0x14068(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_18;                          // 0x14128(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_17;                          // 0x141F0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_16;                          // 0x142B8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_54;                       // 0x14380(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_11;                           // 0x14440(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_44;                      // 0x14458(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_53;                       // 0x144A0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_10;                           // 0x14560(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_52;                       // 0x14578(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_9;                            // 0x14638(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_43;                      // 0x14650(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_42;                      // 0x14698(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x146E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_51;                       // 0x14700(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_50;                       // 0x147C0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_41;                      // 0x14880(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_49;                       // 0x148C8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_48;                       // 0x14988(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_40;                      // 0x14A48(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_39;                      // 0x14A90(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_47;                       // 0x14AD8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_46;                       // 0x14B98(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x14C58(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x14D48(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_12;                                   // 0x14E38(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x14E80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x14EC8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x14F10(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x14FB0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x150A0(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x15190(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x15298(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x15388(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x15478(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x15568(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x15658(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x15748(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x15790(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x157D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x15820(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_45;                       // 0x15868(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_8;                            // 0x15928(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x15940(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x15988(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_19;                        // 0x15A40(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_7;                            // 0x15AF0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x15B08(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x15B50(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_15;                          // 0x15BC8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_14;                          // 0x15C90(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_69;                          // 0x15D58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x15D80(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_13;                          // 0x15DF8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_12;                          // 0x15EC0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_68;                          // 0x15F88(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_11;                          // 0x15FB0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_67;                          // 0x16078(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x160A0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x16158(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x16180(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x161A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_18;                        // 0x161D0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x16280(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_17;                        // 0x162F8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x163A8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x16420(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x16498(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x16510(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_16;                        // 0x16588(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x16638(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_6;                            // 0x16668(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x16680(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_15;                        // 0x166B0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_14;                        // 0x16760(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x16810(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x16888(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x16900(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x16978(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_13;                        // 0x169F0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x16AA0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x16B18(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x16B48(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUVF[0x8];                                   // 0x16BF8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x16C00(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x16DE0(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_20;               // 0x16FC0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_66;                          // 0x17148(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_17;                            // 0x17170(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x17238(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_19;               // 0x172D8(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_65;                          // 0x17460(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_18;               // 0x17488(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_64;                          // 0x17610(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_63;                          // 0x17638(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_5;                            // 0x17660(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_44;                       // 0x17678(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_38;                      // 0x17738(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_10;                          // 0x17780(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0x17848(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0x178F8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_62;                          // 0x179A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_17;               // 0x179D0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x17B58(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_61;                          // 0x17BF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_16;               // 0x17C20(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x17DA8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_16;                            // 0x17E48(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_60;                          // 0x17F10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_59;                          // 0x17F38(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0x17F60(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0x18010(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x180C0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x180E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x18100(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_15;               // 0x18208(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_58;                          // 0x18390(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0x183B8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_14;               // 0x18468(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_57;                          // 0x185F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_15;                            // 0x18618(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_13;               // 0x186E0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_56;                          // 0x18868(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_12;               // 0x18890(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_55;                          // 0x18A18(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0x18A40(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_54;                          // 0x18AF0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_11;               // 0x18B18(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_53;                          // 0x18CA0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0x18CC8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_52;                          // 0x18D78(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x18DA0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x18E40(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_10;               // 0x18EE0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_51;                          // 0x19068(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_14;                            // 0x19090(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_9;                // 0x19158(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_50;                          // 0x192E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_13;                            // 0x19308(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_49;                          // 0x193D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x193F8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_8;                // 0x19498(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_48;                          // 0x19620(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_12;                            // 0x19648(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_7;                // 0x19710(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_47;                          // 0x19898(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x198C0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x19A48(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x19AE8(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_46;                          // 0x19C70(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x19C98(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_45;                          // 0x19E20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_43;                       // 0x19E48(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_11;                            // 0x19F08(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x19FD0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_44;                          // 0x1A158(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_43;                          // 0x1A180(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_42;                       // 0x1A1A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_10;                            // 0x1A268(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42;                          // 0x1A330(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x1A358(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x1A4E0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x1A668(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1A6B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_41;                          // 0x1A6F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_41;                       // 0x1A720(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_4;                          // 0x1A7E0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_40;                          // 0x1A880(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39;                          // 0x1A8A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_3;                          // 0x1A8D0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone_2;                          // 0x1A970(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x1AA10(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38;                          // 0x1AAB0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_9;                           // 0x1AAD8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0x1ABA0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x1AC50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1AC80(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x1AD30(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x1AE38(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x1AF40(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x1B048(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x1B150(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_37;                      // 0x1B258(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_36;                      // 0x1B2A0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x1B2E8(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_37;                          // 0x1B3A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9;                             // 0x1B3C8(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_36;                          // 0x1B490(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x1B4B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8;                           // 0x1B4E0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_35;                      // 0x1B5A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_34;                      // 0x1B5F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1B638(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x1B6F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x1B718(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x1B740(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_PoseDriver                                AnimGraphNode_PoseDriver_4;                              // 0x1B768(0x0128) NativeAccessSpecifierPublic
		struct FAnimNode_PoseDriver                                AnimGraphNode_PoseDriver_3;                              // 0x1B890(0x0128) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_40;                       // 0x1B9B8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_39;                       // 0x1BA78(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_33;                      // 0x1BB38(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_32;                      // 0x1BB80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x1BBC8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x1BC40(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_38;                       // 0x1BD48(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x1BE08(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_4;                            // 0x1BE20(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x1BE38(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x1BF40(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_31;                      // 0x1C008(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x1C050(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x1C118(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x1C1E0(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x1C2A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x1C2D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x1C2F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_PoseDriver                                AnimGraphNode_PoseDriver_2;                              // 0x1C320(0x0128) NativeAccessSpecifierPublic
		struct FAnimNode_PoseDriver                                AnimGraphNode_PoseDriver;                                // 0x1C448(0x0128) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1C570(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x1C628(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x1C650(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x1C678(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x1C6A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x1C6C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x1C6F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x1C718(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x1C740(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x1C768(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x1C790(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x1C7B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x1C7E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x1C808(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x1C830(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x1C858(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x1C880(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x1C8A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x1C8D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x1C8F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x1C920(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_30;                      // 0x1C948(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x1C990(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_37;                       // 0x1C9B8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_36;                       // 0x1CA78(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_35;                       // 0x1CB38(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x1CBF8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1CD00(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x1CDA0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x1CE18(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x1CF20(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x1CF40(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1CF60(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x1D068(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x1D0E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x1D110(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x1D138(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x1D1B0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_29;                      // 0x1D1D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x1D220(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_34;                       // 0x1D2E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_33;                       // 0x1D3A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_32;                       // 0x1D468(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1D528(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x1D630(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x1D650(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1D670(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x1D778(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x1D7F0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_3;                            // 0x1D820(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_31;                       // 0x1D838(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_28;                      // 0x1D8F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_9;                     // 0x1D940(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_27;                      // 0x1D978(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x1D9C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x1D9E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_26;                      // 0x1DA10(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0x1DA58(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_30;                       // 0x1DB20(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_29;                       // 0x1DBE0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_28;                       // 0x1DCA0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x1DD60(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1DDD8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x1DE20(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x1DE50(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x1DE80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x1DEA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_25;                      // 0x1DED0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_27;                       // 0x1DF18(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_26;                       // 0x1DFD8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_25;                       // 0x1E098(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x1E158(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x1E1D0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x1E248(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1E2F8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x1E398(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x1E448(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x1E478(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x1E4A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x1E4C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x1E4F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x1E518(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x1E540(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x1E568(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1E590(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1E5B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1E5E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1E608(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1E630(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1E658(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1E680(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1E6A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1E6D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x1E6F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x1E720(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1E748(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1E770(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1E798(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1E7C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1E7E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x1E810(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0x1E840(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_8;                     // 0x1E888(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0x1E8C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x1E908(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x1E9D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0x1E9F8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0x1EA40(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_24;                       // 0x1EA88(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0x1EB48(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0x1EC08(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1ECC8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x1ED40(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x1ED70(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x1ED88(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0x1EDB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0x1EE00(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_7;                     // 0x1EE48(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x1EE80(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_6;                     // 0x1EF48(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_2;                            // 0x1EF80(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0x1EF98(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x1F058(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x1F080(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0x1F148(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0x1F190(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x1F1D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1F200(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1F278(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0x1F2F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x1F338(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x1F3F8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x1F4B8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1F578(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x1F618(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x1F648(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x1F690(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_5;                     // 0x1F6D8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x1F710(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x1F7D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x1F820(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x1F8E8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x1F900(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x1F9C0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_4;                     // 0x1FA08(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x1FA40(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x1FA68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1FA90(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1FB08(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x1FB80(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x1FBC8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x1FC88(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x1FD48(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1FE08(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x1FEA8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x1FED8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x1FF00(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x1FFC8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1FFF0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x20020(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x20048(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x20070(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x200E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x20130(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x201F0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x202B0(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x20370(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x203A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x20418(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x20448(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x20470(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x204A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x204C8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x204F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x20520(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x20550(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x20600(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_3;                     // 0x20630(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x20668(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x206B0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x206F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x20720(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x207E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x20830(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x20858(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x20918(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x209D8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x20A98(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x20B10(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x20BC0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x20C60(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x20CD8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x20D88(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x20DB8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x20DD8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x20DF8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x20F00(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x20F28(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x20F70(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x20FB8(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x20FF0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x21018(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x210E0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x21128(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x211E8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x212A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x21368(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x213E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x21410(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x21438(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x21480(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x214A0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x214C0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x215C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x215F0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x21638(0x0038) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x21670(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x21738(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x21780(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x21840(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x21900(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x219C0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x21A38(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x21A68(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x21B18(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x21C20(0x00F0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x21D10(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x21D38(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x21DF8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x21E98(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x21EC0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x21F38(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x21FF0(0x0030) NativeAccessSpecifierPublic
		float                                                      PlayerAimYaw;                                            // 0x22020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerAimPitch;                                          // 0x22024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightFraction;                                           // 0x22028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMoving;                                               // 0x2202C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UMW[0x3];                                   // 0x2202D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IKModifyLeftElbow;                                       // 0x22030(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x2203C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJumping;                                              // 0x22040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            EquipableState;                                          // 0x22041(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemSlot                                                  EquipmentSlot;                                           // 0x22042(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGrenadeState                                              GrenadeState;                                            // 0x22043(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESoldierStance                                             Stance;                                                  // 0x22044(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESoldierStance                                             DesiredStance;                                           // 0x22045(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementMode                                              MovementMode;                                            // 0x22046(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G07I[0x1];                                   // 0x22047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanAmount;                                              // 0x22048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGrenadeThrowMode                                          GrenadeThrowMode;                                        // 0x2204C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStanding;                                             // 0x2204D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCrouch;                                               // 0x2204E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsProne;                                                // 0x2204F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRelaxed;                                              // 0x22050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEmpty;                                                // 0x22051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK2Q[0x2];                                   // 0x22052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IKFeetLeftAlpha;                                         // 0x22054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IKFeetRightAlpha;                                        // 0x22058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            IKFeetRotationLeft;                                      // 0x2205C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsProneTransitioning;                                   // 0x22068(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNearLand;                                             // 0x22069(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FYS[0x2];                                   // 0x2206A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothDirection;                                         // 0x2206C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDirection;                                           // 0x22070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcccelerationDirection;                                  // 0x22074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastTickDirection;                                       // 0x22078(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotYaw;                                                // 0x2207C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotYawReference;                                       // 0x22080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPivotComplete;                                          // 0x22084(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCallPivot;                                              // 0x22085(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCZH[0x2];                                   // 0x22086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PivotStartTime;                                          // 0x22088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGrenadeThrowOverhand;                                   // 0x2208C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIron;                                                 // 0x2208D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8TR[0x2];                                   // 0x2208E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            IKFeetRotationRight;                                     // 0x22090(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             IKHipOffset;                                             // 0x2209C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLand;                                                 // 0x220A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Z3P[0x7];                                   // 0x220A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicleBase*                                        VehicleComponent;                                        // 0x220B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MountedLHandVector;                                      // 0x220B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MountedRHandVector;                                      // 0x220C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MountedLHandRotator;                                     // 0x220D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MountedRHandRotator;                                     // 0x220DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            GenericVehicleRotation;                                  // 0x220E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      NormMountedPitch;                                        // 0x220F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LastTickMountedRotation;                                 // 0x220F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      NormMountedYaw;                                          // 0x22104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastTickSoldierLocation;                                 // 0x22108(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleOccupantPitch;                                    // 0x22114(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleOccupantYaw;                                      // 0x22118(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehicleGear;                                             // 0x2211C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleSteering;                                         // 0x22120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehicleTargetGear;                                       // 0x22124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimDirection                                             LeanDirection;                                           // 0x22128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterPosture                                          CurrentPosture;                                          // 0x22129(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEIH[0x2];                                   // 0x2212A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReconstructedYaw;                                        // 0x2212C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x22130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JU3[0x3];                                   // 0x22131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSouthYaw;                                          // 0x22134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpNorthYaw;                                          // 0x22138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterMovement                                         CharacterMovement;                                       // 0x2213C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P96[0x3];                                   // 0x2213D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimOffsetNorthYaw;                                       // 0x22140(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetSouthYaw;                                       // 0x22144(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InputVectorNormalized;                                   // 0x22148(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XNQ7[0x4];                                   // 0x22154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSeatAnimationStruct                                VehicleSeatAnimations;                                   // 0x22158(0x0120) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MovementRateFraction;                                    // 0x22278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVehiclePassengerBoneHide;                               // 0x2227C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6A8[0x3];                                   // 0x2227D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        GearShiftReference;                                      // 0x22280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpEastYaw;                                           // 0x22288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpWestYaw;                                           // 0x2228C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetEastYaw;                                        // 0x22290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetWestYaw;                                        // 0x22294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IKSurfaceAdjustmentAlpha;                                // 0x22298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugAI;                                                // 0x2229C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInWalkMode;                                             // 0x2229D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimDirection                                             PivotDirection;                                          // 0x2229E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPivotCycleFinished;                                     // 0x2229F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowWeaponFire;                                        // 0x222A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCAN[0x3];                                   // 0x222A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireCounter;                                             // 0x222A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVehicleGunnerBoneHide;                                  // 0x222A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastTickVehicleGunnerBoneHide;                          // 0x222A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLastTickVehiclePassengerBoneHide;                       // 0x222AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFactionAnimationStyle                                     FactionAnimStyle;                                        // 0x222AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetVehicle;                                           // 0x222AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFB6[0x3];                                   // 0x222AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       SeatPassengerAnimation;                                  // 0x222B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeatPassengerStartTime;                                  // 0x222B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVehicleStance                                             VehicleStance;                                           // 0x222BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVehicleDucking;                                         // 0x222BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChargeHit;                                              // 0x222BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q5Y[0x1];                                   // 0x222BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChargingAlpha;                                           // 0x222C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XA6E[0x4];                                   // 0x222C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterAnimFirearm                               EquipableAnimFirearmStruct;                              // 0x222C8(0x0598) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimStruct;                                     // 0x22860(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimRifleStruct;                                // 0x23058(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimKnife                                 EquipableAnimMeleeStruct;                                // 0x23850(0x02B8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimExplosive                             EquipableAnimExplosiveStruct;                            // 0x23B08(0x03B0) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnimMisc                                  EquipableAnimMiscStruct;                                 // 0x23EB8(0x0268) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bDoorKickSuccess;                                        // 0x24120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBeginDoorKick;                                          // 0x24121(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K39I[0x6];                                   // 0x24122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   AnimInputTester;                                         // 0x24128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponOffsetAlpha;                                       // 0x24130(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotCurrentAngleTime;                                   // 0x24134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEndDoorKick;                                            // 0x24138(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChargeSuccess;                                          // 0x24139(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZ1D[0x2];                                   // 0x2413A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerAimYawLastTick;                                    // 0x2413C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMeleeAttacking;                                       // 0x24140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBayoCharge;                                             // 0x24141(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBayo;                                                // 0x24142(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotChangingDirection;                                   // 0x24143(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulateAimRotationChange;                             // 0x24144(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimRotationChangeTimer;                                  // 0x24148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotAnimStartTime;                                      // 0x2414C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotAnimPlayRate;                                       // 0x24150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LeaningOutLeft;                                          // 0x24154(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LeaningOutRight;                                         // 0x24155(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFKH[0x2];                                   // 0x24156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProneWeightAlpha;                                        // 0x24158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReloading;                                            // 0x2415C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFastCrouch;                                          // 0x2415D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCrouchTransitioning;                                  // 0x2415E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P65A[0x1];                                   // 0x2415F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchStandAnimTime;                                     // 0x24160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandCrouchAnimTime;                                     // 0x24164(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGoingCrouch;                                          // 0x24168(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCPG[0x3];                                   // 0x24169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandProneAnimTime;                                      // 0x2416C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneStandAnimTime;                                      // 0x24170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchProneAnimTime;                                     // 0x24174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneCrouchAnimTime;                                     // 0x24178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGoingProne;                                           // 0x2417C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLeaningOut;                                           // 0x2417D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6T9[0x2];                                   // 0x2417E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeaningAlpha;                                            // 0x24180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaningOutLeftAnimTime;                                  // 0x24184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimDirection                                             LeanDirectionLastTick;                                   // 0x24188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHN8[0x3];                                   // 0x24189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeaningOutRightAnimTime;                                 // 0x2418C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKilledInVehicle;                                        // 0x24190(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8XE[0x3];                                   // 0x24191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VehicleDuckPosition;                                     // 0x24194(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterPosture                                          VehiclePosture;                                          // 0x24198(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0HP[0x3];                                   // 0x24199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BarrelObstructionAlpha;                                  // 0x2419C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleDuckAlpha;                                        // 0x241A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDuckingDown;                                          // 0x241A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInSpawnZone;                                            // 0x241A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPreroundBedHelicopter;                                // 0x241A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1WT[0x1];                                   // 0x241A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VehicleSightFraction;                                    // 0x241A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHelicopter;                                           // 0x241AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NB75[0x3];                                   // 0x241AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehicleSeatComponent*                               VehicleSeat;                                             // 0x241B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVaultAction                                               CurrentVault;                                            // 0x241B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVaulting;                                             // 0x241B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCTE[0x2];                                   // 0x241BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VaultPelvisTransform;                                    // 0x241BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VaultRecovered;                                          // 0x241C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DT0[0x3];                                   // 0x241C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EquipStockAdjust;                                        // 0x241CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponCompAlpha;                                         // 0x241D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReloadEnd;                                              // 0x241DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsClimbHigh;                                            // 0x241DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00ZP[0x2];                                   // 0x241DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LoadedAmmo;                                              // 0x241E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasVisibleMagazine;                                      // 0x241E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChamberedRound;                                         // 0x241E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponReloadStage                                         NextReloadStage;                                         // 0x241E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86IZ[0x1];                                   // 0x241E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HideWeaponAlpha;                                         // 0x241E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFastReload;                                           // 0x241EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XS4[0x3];                                   // 0x241ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivePoseAlpha;                                         // 0x241F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFiring;                                               // 0x241F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1DL[0x3];                                   // 0x241F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UnderbarrelVector;                                       // 0x241F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            UnderbarrelRotator;                                      // 0x24204(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      UnderbarrelAlpha;                                        // 0x24210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquippingItem;                                          // 0x24214(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLUH[0x3];                                   // 0x24215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EquipmentHeadAlpha;                                      // 0x24218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PivotStartAngle;                                         // 0x2421C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UAnimSequence*, float>                          IdleBodyPoseMap;                                         // 0x24220(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		EBipodState                                                DeployedState;                                           // 0x24270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9XT[0x3];                                   // 0x24271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HipLocation;                                             // 0x24274(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BipodDeployHeight;                                       // 0x24280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            YawLimitDeployedHelper;                                  // 0x24284(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IdleSpecialAlpha;                                        // 0x24290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreathingStartTime;                                      // 0x24294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        IdleSpecialMontage;                                      // 0x24298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimPistolStruct;                               // 0x242A0(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimGrenadeStruct;                              // 0x24A98(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class UAnimSequence*, float>                          MoveBodyPoseMap;                                         // 0x25290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimItemStruct;                                 // 0x252E0(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      BinocularZoom;                                           // 0x25AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandSpine1;                                          // 0x25ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MagazineSpine1;                                          // 0x25AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPGB[0x4];                                   // 0x25AE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ItemMontageReference;                                    // 0x25AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterAnim                                      CharacterAnimLauncherStruct;                             // 0x25AF0(0x07F8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		EEquipableState                                            GasMaskState;                                            // 0x262E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DJ8[0x3];                                   // 0x262E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirearmSight;                                            // 0x262EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClimbVisibility;                                        // 0x262F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VH5J[0x3];                                   // 0x262F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SoldierVelocityLastTick;                                 // 0x262F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SoldierVelocityLocalLastTick;                            // 0x26300(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MovementWeightShiftLastTick;                             // 0x2630C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsRestrictedAO;                                         // 0x26318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3TR[0x3];                                   // 0x26319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MagazineSpine2;                                          // 0x2631C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandItem;                                            // 0x26320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandMagazine;                                        // 0x26324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandItem;                                           // 0x26328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RightHandMagazine;                                       // 0x2632C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharedReload;                                            // 0x26330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmptyAnimAlpha;                                          // 0x26334(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDown;                                                // 0x26338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckingAmmo;                                           // 0x26339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMRK[0x2];                                   // 0x2633A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ItemSpine1;                                              // 0x2633C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, float>                                 RocketFireDelayTimes;                                    // 0x26340(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bMeleeBlendOut;                                          // 0x26390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIIN[0x3];                                   // 0x26391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeployedYaw;                                             // 0x26394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeployedYawLastTick;                                     // 0x26398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW68[0x4];                                   // 0x2639C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DeployAnimCurve;                                         // 0x263A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplosiveHold;                                          // 0x263A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSetAnimationData;                                    // 0x263A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AD6D[0x2];                                   // 0x263AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HitReactionSlot;                                         // 0x263AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquipChangeAnim;                                        // 0x263B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZJ0[0x7];                                   // 0x263B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CommandMontageReference;                                 // 0x263B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EquipStockAdjustSlowWalk;                                // 0x263C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCharacterMorphMacro                                FacialMorphStandard;                                     // 0x263CC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterMorphMacro                                FacialMorphExtreme;                                      // 0x263D4(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCQD[0x4];                                   // 0x263DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           FacialMeshComponent;                                     // 0x263E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFoundHead;                                              // 0x263E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E3U[0x3];                                   // 0x263E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FacialIntensity;                                         // 0x263EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotFrequency;                                           // 0x263F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenShots;                                        // 0x263F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilDynamicAdjustment;                                 // 0x263F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FacialCurveTime;                                         // 0x263FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FacialModulationCurve;                                   // 0x26400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultFallDistance;                                       // 0x26408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultFallCancelTimer;                                    // 0x2640C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       FacialReferencePose;                                     // 0x26410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlanting;                                             // 0x26418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasEquips;                                              // 0x26419(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PGS[0x6];                                   // 0x2641A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        KickMontageReference;                                    // 0x26420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCacheRigExplosive;                                    // 0x26428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5APY[0x3];                                   // 0x26429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeaningInLeftAnimTime;                                   // 0x2642C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaningInRightAnimTime;                                  // 0x26430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleDetonator;                                          // 0x26434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleExplosive;                                          // 0x26438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RootCameraOffset;                                        // 0x2643C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootOffsetMovingAlpha;                                   // 0x26448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintWeightAlpha;                                       // 0x2644C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasJumpOffset;                                          // 0x26450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJNZ[0x3];                                   // 0x26451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CommandMontageAlpha;                                     // 0x26454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        KnifeMontageReference;                                   // 0x26458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EquipStockAdjustCalculated;                              // 0x26460(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IKFeetVectorLeft;                                        // 0x2646C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IKFeetVectorRight;                                       // 0x26478(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DriverWeaponOut;                                         // 0x26484(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25YF[0x3];                                   // 0x26485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EquipRate;                                               // 0x26488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnequipRate;                                             // 0x2648C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnderbarrelOffsetAlpha;                                  // 0x26490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnequipRateProne;                                        // 0x26494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EquipRateProne;                                          // 0x26498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasEquipsProne;                                         // 0x2649C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T88D[0x3];                                   // 0x2649D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VaultPelvisOffset;                                       // 0x264A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VaultHandOffset;                                         // 0x264A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandSlowWalkN;                                         // 0x264A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandSlowWalkALT;                                       // 0x264A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandSlowWalkIR;                                        // 0x264AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandWalkN;                                             // 0x264AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandWalkALT;                                           // 0x264AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandWalkIR;                                            // 0x264AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandRunN;                                              // 0x264AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandRunALT;                                            // 0x264AF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandRunIR;                                             // 0x264B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStandSprintN;                                           // 0x264B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchWalkN;                                            // 0x264B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchWalkALT;                                          // 0x264B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchWalkIR;                                           // 0x264B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchRunN;                                             // 0x264B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchRunALT;                                           // 0x264B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchRunIR;                                            // 0x264B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProneCrawlN;                                            // 0x264B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProneCrawlALT;                                          // 0x264B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProneCrawlIR;                                           // 0x264BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESoldierStance                                             LastDesiredStance;                                       // 0x264BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LandedAlpha;                                             // 0x264BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChangeStanceDesire;                                     // 0x264C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM4B[0x7];                                   // 0x264C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       ReloadCommonPoseStand;                                   // 0x264C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ReloadCommonPoseCrouch;                                  // 0x264D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       ReloadCommonPoseProne;                                   // 0x264D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            VehicleHeadRotator;                                      // 0x264E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       JumpRecovered;                                           // 0x264EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSKMM;                                                // 0x264ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRocketLauncher;                                       // 0x264EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHandOffWeaponBedSequence;                               // 0x264EF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForearmTwistPositionLeft;                                // 0x264F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForearmTwistPositionRight;                               // 0x264F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrenadeHoldMovingAlpha;                                  // 0x264F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldPlayReady;                                        // 0x264FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadyEnd;                                               // 0x264FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBSM[0x2];                                   // 0x264FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IdleSpecialCounter;                                      // 0x26500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeleePivotSnap;                                         // 0x26504(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J51U[0x3];                                   // 0x26505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RestrictedAOAimAdjustment;                               // 0x26508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeAOAimAdjustment;                                    // 0x2650C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDying;                                                // 0x26510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoGroin;                                                // 0x26511(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K08V[0x6];                                   // 0x26512(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       GearAnimInstance;                                        // 0x26518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace1D*                                       SprintSequence;                                          // 0x26520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasHardcoreSprint;                                      // 0x26528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHDU[0x3];                                   // 0x26529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Restricted_AO_Easing_Timer;                              // 0x2652C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeAOEasingTimer;                                      // 0x26530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKAOScenario                                              EquipableAnimType;                                       // 0x26534(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNOC[0x3];                                   // 0x26535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandMaxWalkSpeed;                                       // 0x26538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchMaxWalkSpeed;                                      // 0x2653C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneMaxSpeed;                                           // 0x26540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideMoveFraction;                                        // 0x26544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverseMoveFraction;                                     // 0x26548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandMaxRunSpeed;                                        // 0x2654C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchMaxRunSpeed;                                       // 0x26550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandMaxSprintSpeed;                                     // 0x26554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandIronSpeedFraction;                                  // 0x26558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeanTraceInterval;                                       // 0x2655C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeanTraceDistance;                                       // 0x26560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorInteraction;                                       // 0x26564(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HO8[0x3];                                   // 0x26565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ActorInteractionMontageReference;                        // 0x26568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayedTapInteraction;                                   // 0x26570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayedHoldInteraction;                                  // 0x26571(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9KK[0x2];                                   // 0x26572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RestrictedAOTarget;                                      // 0x26574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIKSpecialScenario                                         IKVehicleInsertion;                                      // 0x26578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6FL[0x7];                                   // 0x26579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAimOffsetBlendSpace*                                SeatPassengerAO;                                         // 0x26580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            NightVisionState;                                        // 0x26588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasNVG;                                                 // 0x26589(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45BB[0x2];                                   // 0x2658A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NightVisionOffset;                                       // 0x2658C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReloadStandPoseValid;                                    // 0x26598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReloadCrouchPoseValid;                                   // 0x26599(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReloadPronePoseValid;                                    // 0x2659A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunSimplifiedGraph;                                     // 0x2659B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasUnderbarrelGL;                                       // 0x2659C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapStance;                                             // 0x2659D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZK7[0x2];                                   // 0x2659E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastRenderTime;                                          // 0x265A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLauncherToss;                                           // 0x265A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopShuffle;                                             // 0x265A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Strafe;                                                  // 0x265A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECardinalSimplified                                        CardinalDirectionSimplified;                             // 0x265A7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         SprintBlendSpace;                                        // 0x265A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTiltedSights;                                        // 0x265B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W92P[0x3];                                   // 0x265B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TiltedSightsAlpha;                                       // 0x265B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            MolotovRagFlameReference;                                // 0x265B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlashbangAlpha;                                          // 0x265C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHandHead;                                            // 0x265C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFlashed;                                              // 0x265C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6GK[0x3];                                   // 0x265C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReactionMontageAlpha;                                    // 0x265CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ReactionMontageReference;                                // 0x265D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemEquipable*                                      CachedWeapon;                                            // 0x265D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       UnderbarrelSequence;                                     // 0x265E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AItemInteractableGear*                               InteractableGear;                                        // 0x265E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            GearItemEquipableState;                                  // 0x265F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasGearEquiped;                                          // 0x265F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BipodLegsDeployed;                                       // 0x265F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VH1[0x5];                                   // 0x265F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleIdleSpecialSequence                         VehicleSeatAnimation;                                    // 0x265F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable;                                      // 0x26610(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmCategory                                           Temp_byte_Variable;                                      // 0x26611(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UK0L[0x2];                                   // 0x26612(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable;                                     // 0x26614(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_2;                                   // 0x26618(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmCategory                                           Temp_byte_Variable_2;                                    // 0x2661C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZY1V[0x3];                                   // 0x2661D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable;                                    // 0x26620(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_2;                                    // 0x2662C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_3;                                    // 0x2662D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_4;                                    // 0x2662E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_5;                                    // 0x2662F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_6;                                    // 0x26630(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2EZ[0x3];                                   // 0x26631(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable_2;                                  // 0x26634(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            Temp_byte_Variable_3;                                    // 0x26640(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Select_Default;                                   // 0x26641(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T5R[0x2];                                   // 0x26642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x26644(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_2;                  // 0x26654(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_3;                  // 0x26664(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_3;                                  // 0x26674(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_7;                                    // 0x26680(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I91U[0x3];                                   // 0x26681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable_4;                                  // 0x26684(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_5;                                  // 0x26690(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_6;                                  // 0x2669C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_8;                                    // 0x266A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_9;                                    // 0x266A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WE1R[0x2];                                   // 0x266AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable_7;                                  // 0x266AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Gear_GasMask_C*                                  K2Node_Event_Gasmask;                                    // 0x266B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Visibility;                                 // 0x266C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4C6C[0x3];                                   // 0x266C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable_8;                                  // 0x266C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   K2Node_Event_Montage;                                    // 0x266D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_Carrier_2;                                  // 0x266D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_Event_Soldier;                                    // 0x266E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UABP_Character_C*                                    K2Node_Event_AnimInstance;                               // 0x266E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Gunner;                                     // 0x266F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Passenger;                                  // 0x266F1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x266F2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bProfile;                                   // 0x266F3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFemale;                                    // 0x266F4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EP5J[0x3];                                   // 0x266F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              K2Node_Event_Character;                                  // 0x266F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Gear_BASE_Carrier_C*                             K2Node_Event_Carrier;                                    // 0x26700(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination_2;                              // 0x26708(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NMA[0x3];                                   // 0x26709(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction_2;                                  // 0x2670C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x26714(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x26715(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_2;                     // 0x26716(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_2;                           // 0x26717(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_4;                  // 0x26718(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_5;                  // 0x26728(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha;                      // 0x26738(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_2;                    // 0x2673C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_3;                    // 0x26740(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_4;                    // 0x26744(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_5;                    // 0x26748(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_6;                    // 0x2674C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_7;                    // 0x26750(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_8;                    // 0x26754(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_6;                  // 0x26758(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_9;                    // 0x26768(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_10;                   // 0x2676C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_11;                   // 0x26770(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_7;                  // 0x26774(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_8;                  // 0x26784(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_9;                  // 0x26794(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_10;                 // 0x267A4(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_3;                     // 0x267B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_3;                           // 0x267B5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGK6[0x2];                                   // 0x267B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_11;                 // 0x267B8(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_4;                     // 0x267C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_4;                           // 0x267C9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZWQ[0x2];                                   // 0x267CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_12;                 // 0x267CC(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_5;                     // 0x267DC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_5;                           // 0x267DD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_6;                     // 0x267DE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_6;                           // 0x267DF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_10;                                   // 0x267E0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_11;                                   // 0x267E1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_7;                     // 0x267E2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_12;                                   // 0x267E3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_7;                           // 0x267E4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_13;                                   // 0x267E5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_8;                     // 0x267E6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_8;                           // 0x267E7(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_9;                     // 0x267E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_9;                           // 0x267E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_10;                    // 0x267EA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_10;                          // 0x267EB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTKZ[0x4];                                   // 0x267EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Temp_object_Variable;                                    // 0x267F0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X;                                  // 0x26800(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y;                                  // 0x26804(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z;                                  // 0x26808(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_2;                                // 0x2680C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_2;                                // 0x26810(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_2;                                // 0x26814(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcIKHip_Vertical;                             // 0x26818(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_3;                                   // 0x26824(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_4;                                   // 0x26828(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_5;                                   // 0x2682C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Array_Index_Variable;                           // 0x26830(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmCategory                                           Temp_byte_Variable_4;                                    // 0x26834(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PXD[0x3];                                   // 0x26835(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_6;                                   // 0x26838(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_14;                                   // 0x2683C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_True_if_break_was_hit_Variable;                // 0x2683D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1M9[0x2];                                   // 0x2683E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Temp_struct_Variable_9;                                  // 0x26840(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_15;                                   // 0x2684C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPS1[0x3];                                   // 0x2684D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x26850(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_16;                                   // 0x26854(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98P4[0x3];                                   // 0x26855(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_7;                                   // 0x26858(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_8;                                   // 0x2685C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_9;                                   // 0x26860(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmCategory                                           Temp_byte_Variable_5;                                    // 0x26864(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PD6[0x3];                                   // 0x26865(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_10;                                  // 0x26868(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_17;                                   // 0x2686C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KJI[0x3];                                   // 0x2686D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_12;                   // 0x26870(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_13;                   // 0x26874(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_14;                   // 0x26878(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_10;                                 // 0x2687C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_18;                                   // 0x26888(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_19;                                   // 0x26889(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KHH[0x2];                                   // 0x2688A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_15;                   // 0x2688C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_16;                   // 0x26890(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_17;                   // 0x26894(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_18;                   // 0x26898(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1YZ[0x4];                                   // 0x2689C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Temp_object_Variable_2;                                  // 0x268A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x268A8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_19;                   // 0x268AC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_20;                   // 0x268B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_21;                   // 0x268B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_22;                   // 0x268B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KF0F[0x4];                                   // 0x268BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_Item;                                       // 0x268C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Temp_object_Variable_3;                                  // 0x268C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location;                        // 0x268D0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation;                        // 0x268DC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale;                           // 0x268E8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_3;                                // 0x268F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_3;                                // 0x268F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_3;                                // 0x268FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Temp_object_Variable_4;                                  // 0x26900(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x26908(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1EE4[0x3];                                   // 0x26909(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_BreakTransform_Location_2;                      // 0x2690C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_2;                      // 0x26918(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_2;                         // 0x26924(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_4;                                // 0x26930(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_4;                                // 0x26934(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_4;                                // 0x26938(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P526[0x4];                                   // 0x2693C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Temp_object_Variable_5;                                  // 0x26940(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimInstance*                                       K2Node_Event_GearAnimInstance;                           // 0x26948(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination;                                // 0x26950(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71BH[0x3];                                   // 0x26951(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction;                                    // 0x26954(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_2;                          // 0x2695C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRTV[0x3];                                   // 0x2695D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Temp_object_Variable_6;                                  // 0x26960(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_3;                          // 0x26968(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            Temp_byte_Variable_6;                                    // 0x26969(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCY9[0x6];                                   // 0x2696A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       K2Node_Select_Default_2;                                 // 0x26970(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_5;                                // 0x26978(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_5;                                // 0x2697C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_5;                                // 0x26980(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcIKFeetTrace_VectorZ;                        // 0x26984(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           CallFunc_CalcIKFeetTrace_Normal;                         // 0x26988(0x000C) Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_6;                                // 0x26994(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_6;                                // 0x26998(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_6;                                // 0x2699C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcIKFeetTrace_VectorZ_2;                      // 0x269A0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           CallFunc_CalcIKFeetTrace_Normal_2;                       // 0x269A4(0x000C) Transient, DuplicateTransient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoldierMovementComponent*                           K2Node_DynamicCast_AsSoldier_Movement_Component;         // 0x269B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x269B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEXJ[0x7];                                   // 0x269B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMeleeConfig                                        K2Node_Event_SelectedAttack;                             // 0x269C0(0x0040) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   K2Node_MakeArray_Array;                                  // 0x26A00(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          CallFunc_LineTraceSingleForObjects_OutHit;               // 0x26A10(0x0088) Transient, DuplicateTransient, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       CallFunc_BreakHitResult_bBlockingHit;                    // 0x26A98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CallFunc_BreakHitResult_bInitialOverlap;                 // 0x26A99(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4Q6[0x2];                                   // 0x26A9A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakHitResult_Time;                            // 0x26A9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakHitResult_Distance;                        // 0x26AA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_Location;                        // 0x26AA4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_ImpactPoint;                     // 0x26AB0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_Normal;                          // 0x26ABC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_ImpactNormal;                    // 0x26AC8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y37[0x4];                                   // 0x26AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   CallFunc_BreakHitResult_PhysMat;                         // 0x26AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              CallFunc_BreakHitResult_HitActor;                        // 0x26AE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 CallFunc_BreakHitResult_HitComponent;                    // 0x26AE8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CallFunc_BreakHitResult_HitBoneName;                     // 0x26AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallFunc_BreakHitResult_HitItem;                         // 0x26AF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallFunc_BreakHitResult_FaceIndex;                       // 0x26AFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_TraceStart;                      // 0x26B00(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakHitResult_TraceEnd;                        // 0x26B0C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_11;                    // 0x26B18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM3X[0x3];                                   // 0x26B19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_23;                   // 0x26B1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_24;                   // 0x26B20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_25;                   // 0x26B24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_11;                          // 0x26B28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCD7[0x3];                                   // 0x26B29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRotator_Roll;                              // 0x26B2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch;                             // 0x26B30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw;                               // 0x26B34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_2;                            // 0x26B38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_2;                           // 0x26B3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_2;                             // 0x26B40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_4;                          // 0x26B44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NK47[0x3];                                   // 0x26B45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_26;                   // 0x26B48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_27;                   // 0x26B4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_11;                                  // 0x26B50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Select_Default_3;                                 // 0x26B54(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILNS[0x3];                                   // 0x26B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface[0x10];     // 0x26B58(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x26B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Select_Default_4;                                 // 0x26B69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDI3[0x2];                                   // 0x26B6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_12;                                  // 0x26B6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_OldState_2;                                 // 0x26B70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_NewState_3;                                 // 0x26B71(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_20;                                   // 0x26B72(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR5L[0x1];                                   // 0x26B73(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_5;                                 // 0x26B74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_Mesh;                                       // 0x26B78(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponVisualUpgradeComponent*                       K2Node_Event_Upgrade_2;                                  // 0x26B80(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponUpgradeComponent*                             K2Node_Event_Upgrade;                                    // 0x26B88(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_OldState;                                   // 0x26B90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBipodState                                                K2Node_Event_NewState_2;                                 // 0x26B91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIZC[0x6];                                   // 0x26B92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_UG_SECLargeForegrip_Rail_C*                      K2Node_DynamicCast_AsBP_UG_SECLarge_Foregrip_Rail;       // 0x26B98(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x26BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18GS[0x7];                                   // 0x26BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_UG_SECForegripBipod_C*                           K2Node_DynamicCast_AsBP_UG_SECForegrip_Bipod;            // 0x26BA8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_4;                           // 0x26BB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD98[0x7];                                   // 0x26BB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_UG_Foregrip_Base_C*                              K2Node_DynamicCast_AsBP_UG_Foregrip_Base;                // 0x26BB8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_5;                           // 0x26BC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IDS[0x7];                                   // 0x26BC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponBipodComponent*                               K2Node_DynamicCast_AsWeapon_Bipod_Component;             // 0x26BC8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_6;                           // 0x26BD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload_2;                               // 0x26BD1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QE9L[0x2];                                   // 0x26BD2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_RateMultiplier_2;                           // 0x26BD4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Event_FireOrigin;                                 // 0x26BD8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Event_FireDirection;                              // 0x26BE4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           K2Node_Event_OldFiremode;                                // 0x26BF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFirearmFiremode                                           K2Node_Event_NewFiremode;                                // 0x26BF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bDryReload;                                 // 0x26BF2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bSingleReload;                              // 0x26BF3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_RateMultiplier;                             // 0x26BF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_13;                                  // 0x26BF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_Map_Find_Value;                                 // 0x26BFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_14;                                  // 0x26C00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E61F[0x4];                                   // 0x26C04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface_2[0x10];   // 0x26C08(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_7;                           // 0x26C18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWEM[0x7];                                   // 0x26C19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVehicleSeatComponent*                               K2Node_CustomEvent_VehicleSeat_2;                        // 0x26C20(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_21;                                   // 0x26C28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C529[0x7];                                   // 0x26C29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface_3[0x10];   // 0x26C30(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_8;                           // 0x26C40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APEJ[0x3];                                   // 0x26C41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_6;                                 // 0x26C44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVehicleSeatComponent*                               K2Node_CustomEvent_VehicleSeat;                          // 0x26C48(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharacterResponse                                         K2Node_CustomEvent_Response;                             // 0x26C50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C714[0x7];                                   // 0x26C51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                         K2Node_CustomEvent_DamageType;                           // 0x26C58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNetHitReaction                                     K2Node_CustomEvent_HitReaction;                          // 0x26C60(0x0040) Transient, DuplicateTransient, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_bKickWillSucceed;                     // 0x26CA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RK27[0x3];                                   // 0x26CA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_28;                   // 0x26CA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_15;                                  // 0x26CA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_5;                          // 0x26CAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State_2;                                    // 0x26CAD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State;                                      // 0x26CAE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable_12;                    // 0x26CAF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_CustomEvent_Interactor;                           // 0x26CB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              K2Node_CustomEvent_InteractingActor;                     // 0x26CB8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUseItem                                                   K2Node_CustomEvent_Item;                                 // 0x26CC0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_6;                          // 0x26CC1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKC4[0x6];                                   // 0x26CC2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemInteractableGear*                               K2Node_Event_GearItem;                                   // 0x26CC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_NewState;                                   // 0x26CD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bInstant_2;                                 // 0x26CD1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA1P[0x6];                                   // 0x26CD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_SwitchingTo;                                // 0x26CD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_7;                          // 0x26CE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM8X[0x7];                                   // 0x26CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_NVG_C*                                      K2Node_DynamicCast_AsBP_Gear_NVG;                        // 0x26CE8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_9;                           // 0x26CF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bInstant;                                   // 0x26CF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VMRA[0x6];                                   // 0x26CF2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemEquipable*                                      K2Node_Event_SwitchingFrom;                              // 0x26CF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bWantsFirstEquip;                           // 0x26D00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHVB[0x7];                                   // 0x26D01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_GasMask_C*                                  K2Node_DynamicCast_AsBP_Gear_Gas_Mask;                   // 0x26D08(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_10;                          // 0x26D10(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTBC[0x7];                                   // 0x26D11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_GasMask_C*                                  K2Node_DynamicCast_AsBP_Gear_Gas_Mask_2;                 // 0x26D18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_11;                          // 0x26D20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bBash;                                      // 0x26D21(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95SL[0x2];                                   // 0x26D22(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_16;                                  // 0x26D24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable_12;                          // 0x26D28(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_22;                                   // 0x26D29(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82N9[0x2];                                   // 0x26D2A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_7;                                 // 0x26D2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_8;                          // 0x26D30(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVGE[0x3];                                   // 0x26D31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_17;                                  // 0x26D34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_7;                                // 0x26D38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_7;                                // 0x26D3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_7;                                // 0x26D40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_8;                                // 0x26D44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_8;                                // 0x26D48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_8;                                // 0x26D4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_18;                                  // 0x26D50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_8;                                 // 0x26D54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_9;                                 // 0x26D58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_10;                                // 0x26D5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_11;                                // 0x26D60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_12;                                // 0x26D64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_13;                                // 0x26D68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_14;                                // 0x26D6C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_15;                                // 0x26D78(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_23;                                   // 0x26D84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHT7[0x3];                                   // 0x26D85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_16;                                // 0x26D88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_19;                                  // 0x26D8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_20;                                  // 0x26D90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_29;                   // 0x26D94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_24;                                   // 0x26D98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGN4[0x3];                                   // 0x26D99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_21;                                  // 0x26D9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Select_Default_17;                                // 0x26DA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MHO[0x3];                                   // 0x26DA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_22;                                  // 0x26DA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_25;                                   // 0x26DA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJ0P[0x3];                                   // 0x26DA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRotator_Roll_3;                            // 0x26DAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_3;                           // 0x26DB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_3;                             // 0x26DB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              K2Node_Select_Default_18;                                // 0x26DB8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_23;                                  // 0x26DC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_24;                                  // 0x26DC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_26;                                   // 0x26DC8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVW4[0x3];                                   // 0x26DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_25;                                  // 0x26DCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item;                                 // 0x26DD0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_MathExpression_ReturnValue;                       // 0x26DD8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_27;                                   // 0x26DDC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M008[0x3];                                   // 0x26DDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCosmeticItem*                                       CallFunc_Array_Get_Item_2;                               // 0x26DE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           CallFunc_Array_Get_Item_3;                               // 0x26DE8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnabled;                                   // 0x26DF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISAR[0x7];                                   // 0x26DF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemPlantedExplosive*                               K2Node_DynamicCast_AsItem_Planted_Explosive;             // 0x26DF8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_12;                          // 0x26E00(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_28;                                   // 0x26E01(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLKF[0x2];                                   // 0x26E02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_30;                   // 0x26E04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_31;                   // 0x26E08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WGW[0x4];                                   // 0x26E0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsCharacter_Anim_Interface_4[0x10];   // 0x26E10(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_13;                          // 0x26E20(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_9;                          // 0x26E21(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPIZ[0x2];                                   // 0x26E22(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate_13;                 // 0x26E24(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                Temp_name_Variable;                                      // 0x26E34(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_19;                                // 0x26E3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Temp_name_Variable_2;                                    // 0x26E40(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_29;                                   // 0x26E48(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLQP[0x3];                                   // 0x26E49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Temp_name_Variable_3;                                    // 0x26E4C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Temp_name_Variable_4;                                    // 0x26E54(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_30;                                   // 0x26E5C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8F0[0x3];                                   // 0x26E5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Explosive_GLBase_C*                              K2Node_DynamicCast_AsBP_Explosive_GLBase;                // 0x26E60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_14;                          // 0x26E68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_SwitchEnum_CmpSuccess_10;                         // 0x26E69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZFN[0x2];                                   // 0x26E6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_26;                                  // 0x26E6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_X_9;                                // 0x26E70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Y_9;                                // 0x26E74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector_Z_9;                                // 0x26E78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHW7[0x4];                                   // 0x26E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponBipodComponent*                               K2Node_DynamicCast_AsWeapon_Bipod_Component_2;           // 0x26E80(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_15;                          // 0x26E88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_31;                                   // 0x26E89(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_691P[0x2];                                   // 0x26E8A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_27;                                  // 0x26E8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_32;                                   // 0x26E90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6NI[0x3];                                   // 0x26E91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_28;                                  // 0x26E94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_MathExpression_ReturnValue_2;                     // 0x26E98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcGenericAlpha_OutAlpha_32;                   // 0x26E9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_33;                                   // 0x26EA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWAT[0x3];                                   // 0x26EA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Temp_float_Variable_29;                                  // 0x26EA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_30;                                  // 0x26EA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2AB[0x4];                                   // 0x26EAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemBinocular*                                      K2Node_DynamicCast_AsItem_Binocular;                     // 0x26EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_16;                          // 0x26EB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_34;                                   // 0x26EB9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4QB[0x2];                                   // 0x26EBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_CalcVectorInterp_Output;                        // 0x26EBC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_31;                                  // 0x26EC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcVectorInterp_Output_2;                      // 0x26ECC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_32;                                  // 0x26ED8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcVectorInterp_Output_3;                      // 0x26EDC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcVectorInterp_Output_4;                      // 0x26EE8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_4;                            // 0x26EF4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_4;                           // 0x26EF8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_4;                             // 0x26EFC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_5;                            // 0x26F00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_5;                           // 0x26F04(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_5;                             // 0x26F08(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_6;                            // 0x26F0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_6;                           // 0x26F10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_6;                             // 0x26F14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_35;                                   // 0x26F18(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_195M[0x3];                                   // 0x26F19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_20;                                // 0x26F1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_21;                                // 0x26F20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_22;                                // 0x26F24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_23;                                // 0x26F28(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_24;                                // 0x26F2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcRotatorAxisInterp_Output;                   // 0x26F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_33;                                  // 0x26F34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_34;                                  // 0x26F38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                K2Node_Select_Default_25;                                // 0x26F3C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location_3;                      // 0x26F44(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_3;                      // 0x26F50(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_3;                         // 0x26F5C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                K2Node_Select_Default_26;                                // 0x26F68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Location_4;                      // 0x26F70(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CallFunc_BreakTransform_Rotation_4;                      // 0x26F7C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_BreakTransform_Scale_4;                         // 0x26F88(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_36;                                   // 0x26F94(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8MR[0x3];                                   // 0x26F95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_27;                                // 0x26F98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_35;                                  // 0x26F9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        CallFunc_PlayGearShift_MontageReference;                 // 0x26FA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temp_float_Variable_36;                                  // 0x26FA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_7;                            // 0x26FAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_7;                           // 0x26FB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_7;                             // 0x26FB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_8;                            // 0x26FB8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_8;                           // 0x26FBC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_8;                             // 0x26FC0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_9;                            // 0x26FC4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_9;                           // 0x26FC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_9;                             // 0x26FCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Variable_37;                                   // 0x26FD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AOO[0x3];                                   // 0x26FD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Select_Default_28;                                // 0x26FD4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_10;                           // 0x26FD8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_10;                          // 0x26FDC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_10;                            // 0x26FE0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J73L[0x4];                                   // 0x26FE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleIdleSpecialSequence                         CallFunc_Array_Get_Item_4;                               // 0x26FE8(0x0018) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		ECharacterMovement                                         Temp_byte_Variable_7;                                    // 0x27000(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BIJ[0x3];                                   // 0x27001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRotator_Roll_11;                           // 0x27004(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_11;                          // 0x27008(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_11;                            // 0x2700C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_29;                                // 0x27010(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_30;                                // 0x2701C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_CalcVectorInterp_Output_5;                      // 0x27028(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_31;                                // 0x27034(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_32;                                // 0x27038(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_33;                                // 0x2703C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_34;                                // 0x27040(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Select_Default_35;                                // 0x27044(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_MathExpression_ReturnValue_3;                     // 0x27048(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_11;                                 // 0x2704C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_MathExpression_ReturnValue_4;                     // 0x27058(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_12;                                 // 0x2705C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Temp_struct_Variable_13;                                 // 0x27068(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             K2Node_Select_Default_36;                                // 0x27074(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_Start;                                // 0x27080(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7HK[0xF];                                   // 0x27081(0x000F) MISSED OFFSET (PADDING)

	public:
		void VaultRecoveryTimer(float bpp__RecoveryTime__pf);
		void ValidAnimBool(class UAnimSequence* bpp__Sequence__pf, bool* bpp__Valid__pf);
		void UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf);
		void UpdateNightVisionState(EEquipableState bpp__State__pf);
		void UpdateMovementType();
		void UpdateMolotovFlameState(bool bpp__bEnable__pf);
		void UpdateInsurgentNVGState();
		void UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void UpdateGearBoneVisibility(bool bpp__Visibility__pf);
		void UpdateGasMaskState(EEquipableState bpp__State__pf);
		void UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf);
		void UpdateFeetIK();
		void UpdateEquipable();
		void UpdateDeployed(EBipodState bpp__State__pf__const);
		void UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf);
		void UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void UpdateCardinalDirection();
		void UpdateCalculatedYaw();
		void SetVehicleUserBoneVisability(bool bpp__Gunner__pf, bool bpp__Passenger__pf, class USkeletalMeshComponent* bpp__Mesh__pf);
		void SetEquipable(class AItemEquipable* bpp__Item__pf);
		void SetAnimationData();
		void SelectReloadType(const struct FCharacterAnimReload& bpp__Reload__pf__const, bool bpp__Empty__pf, bool bpp__Single__pf, class UAnimMontage** bpp__xReload__pfT, class UAnimSequence** bpp__CommonxPose__pfT, float* bpp__Common__pf, float* bpp__SequenceLength__pf);
		void ResetStance();
		void ResetEquipmentPhysics();
		void PrintHelper(const class FString& bpp__Name__pf__const, const class FString& bpp__InputVariable__pf__const, float bpp__Duration__pf, const struct FLinearColor& bpp__TextColor__pf);
		void PlayUseActorInteraction(EUseItem bpp__Selection__pf, float bpp__TapTime__pf, float bpp__UseTIme__pf, bool bpp__bCanTapHold__pf);
		void PlaySwing();
		void PlayReload(bool bpp__ReloadEmpty__pf, bool bpp__SingleLoaded__pf, bool bpp__Ready__pf);
		void PlayRechamber();
		void PlayReactionResponse(ECharacterResponse bpp__Response__pf);
		void PlayReaction(bool bpp__Start__pf);
		void PlayMelee(bool bpp__Bash__pf);
		void PlayKick();
		void PlayItemUsage(EEquipableState bpp__EquipState__pf, bool bpp__NVG__pf);
		void PlayIdleSpecial();
		void PlayHitReaction(class UDamageType* bpp__Damage__pf__const, const struct FNetHitReaction& bpp__Hit__pf);
		void PlayGearShift(class UAnimMontage* bpp__MontageCheck__pf, class UAnimMontage** bpp__MontageReference__pf);
		void PlayFiremode();
		void PlayFire();
		void PlayDryFire();
		void PlayChargeHit();
		void PlayAmmoCheck();
		void PlantStart();
		void PlantFinished();
		void PlantAbondoned();
		void OnVoiceCommand(ECharacterResponse bpp__Response__pf);
		void OnUseActorInteracted(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf);
		void OnTakeDamage(class UDamageType* bpp__DamageType__pf__const, const struct FNetHitReaction& bpp__HitReaction__pf);
		void OnMergedMesh();
		void OnKilledInVehicle();
		void OnGearChange();
		void OnExitedVehicle(class UVehicleSeatComponent* bpp__VehicleSeat__pf);
		void OnEnteredVehicle(class UVehicleSeatComponent* bpp__VehicleSeat__pf);
		void OnDoorKick(bool bpp__bKickWillSucceed__pf);
		void OnChargeStart();
		void OnChargeHit();
		void OnChargeEnd();
		void NewFunction_1();
		void MolotovRagState(bool bpp__bEnabled__pf);
		void LerpRotatorAxis(float bpp__A__pf, float bpp__B__pf, float bpp__Alpha__pf, bool bpp__ShortestPathx__pfzy, float* bpp__Output__pf);
		void GetUnderbarrelAnim(class UObject* bpp__UnderbarrelUpgrade__pf__const, bool bpp__WeaponMount__pf, bool* bpp__ValidAnim__pf);
		void FindRandomSequence(TArray<class UAnimSequence*>* bpp__Array__pf, class UAnimSequence** bpp__Sequence__pf);
		void ExecuteUbergraph_ABP_Character_65(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Character_56(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Character_51(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Character_3(int32_t bpp__EntryPoint__pf);
		void ExecuteUbergraph_ABP_Character_1(int32_t bpp__EntryPoint__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_C0099E2C49EEE0880722DB8EAB1B69B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_750A93024654AF6122F1A8A1DEE4D9AD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TwoWayBlend_47CDE3234BF73C08728B6EBFB6FFFDA0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_FC97D14F41134A873DD216A74D9A19B1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_FC090E2643A9C823C6F570869627BC47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F8E64C9A48BCA95498D804B9D810E5B1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F81DA6A14F39BBBABCB279A80BA69890();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F74CACF54FF36792B41545993B87CE90();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F6D8DC724DF7EAD3ECB5CABDE9BDFB8C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F58DA2A94B2A81CB16CF8E8B4B83144F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F5123F1F457EE048FC5B0F9A61C18113();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_F213DC6247B85AFA881BB9B9FEEB45D7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_EFF1FC634944DFEDC4A69693793BAD77();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_E9BF907F47E56C4BC20CAFA8DEC6FFD7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_E87CF67D4CD4CA8DF3AFB18DD13D0443();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_E6E1AA27438363F6587FE3B6783003AC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_E0F3531F4DC115746DA33B98980ED8E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_E0B29AC94EA38557DA0F19A1C0D5BD80();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_DFCA339644470AB9937CB6B0B83A2001();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_DA5B2CCA461213D3FD2B8E930D251652();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_D7C7F39A4CD8C6B49E5AA1A64980ECFC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_D4090FC449F6C264564E258430A4F9B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_C5801C6E432C23DC76C104B21E37FB62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_BDABD5594E8E81B201D0B6B243ABC759();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_BB8BFBA947474273B343F2BEA3D8276E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_BB34DB0D4887B6BAEAD13D91011A44B7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B8EA79A94D761BBB8844AA8FD46558C0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_AD51ABE645521533B5C890B2D3ADA787();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_AC00B7F94C1B59BDE73CA689F043ABA8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_AB34F97D493F9810DB5FF6B2A9CCF350();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A9D7BB90413EFB991F442E8523CA6A9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A6C5AFF842A2F7886B7764809D18A0C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A54968FB4271BF990DB174B2B9DE6B08();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A3AF1FD94114DC5A1160A2BB3B8E0EFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A1DFF99D487C131CA5E0F3896140B00B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A05C24894948C42A66875F8921119F95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_A03E50CE45ABCC2061301598D0B72BAF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_9CE798DD4891F73B96A6558F59227590();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_99FC9D9E4C8D78E6ADFF3EA1910345D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_98C0AB264939B9C35883DBB6B132E470();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_95E37FF2495DAE62B107A986DFB913BE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_920C0FC04D5B2AEDEBFF6A9E2BE18B72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8E9C629940EB1EB2FCB1458913950B9B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8E4C569C41E319CF2777389D6092C470();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8DA4C6D34EF8C0CE979D40B6207267CD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8D885E1A498611611B4DAFB2A534A11A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8C9131784622D751C82738833491548C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8C2D07184BC31F6F038C34BCD6F6890F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8AA5A6D34D600F0EE6457BAAADC4E53E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8A6467F549CFE6D0C075F78C8214FD45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_8A2053624B840CA7BD43CFA84DE27977();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_89D7B9EF401C6D7823BB9CA1D19F0178();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_873630DD4EB3037671D1E0B630269A95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_849CCA09428D15298E711593F39B397D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_811DDAD24759706B91211FBF587F128D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_7B7D314A485AE55BC524CE839EE19A14();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_79F0A9F3474F00893676ABAC44732861();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_7764B06345779C5C474237A85B77EC53();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_772C88664911D7078723CCBD3BE4B9BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_729CFF74403CD41C6E5F529131865510();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6E4EBF27421A8802FD26F28742A73AD4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6BE13E0349B6F18C9556EDBE0BE9A32F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_6AA4150A4B6D854BDE524BA3CD90EEA8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_650304A046683B82291D27AF007514E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_64F7042C4FFF8B54049D259EFE96F50C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_64AFA7534D2F68A1BF7D9B9A1CCF19FE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_5CF9C4B546A89CA8DB380BA22819984E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_5960C76B48BCB9243B35C2A28914C74A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_558F7C7147CBB24E988E98B56A877F8A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_53E3C1E24B7B8E6BE0A320BA7654B83B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_5319796D44048FE2D9CDC79CB2C83BEE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4C902ED348FD71FE9FB3DCB99D99D90F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4AAE872C49966C7A64F11DA65ABD9182();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4A10924046936E65E38E8DB52167B22A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4678C3504EF223B21BE58DAF964F5906();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_45ACC06F4F1DD5988B74C383F829605D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_451ADEDE4475A2C03F61C9B9FAB80C16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_43C297A44223C187BDD071B3E58BE6DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_41C315A24A3F0DCDA971EBB335F9BB22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_41A77F6447D7918591A084AA827B8500();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4182A426456D8FA21A1DA0BAD6402E0E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4131E1984229A5B04EE1D4B5ECA1631E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_4101F754453ECCD311D175B1AC06F560();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_3C773E8E4BBFC84F1A2016AE004BA27F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_3B9CFC2D4B72BC7BA8E9EE966357E41C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_3B927E384E4081FCBC855DB0D1F8EEEC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_3A152FAE4CC44B33B2CFF88C07A7D427();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_39879A6B47D91C5F447D498520A6C542();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_37A7DD454F0A25B1145BA2A62BFCE545();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_3248FA714449789461C82CAEEA08142E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_309E986F4F089DD09A2B0DAB76DF7922();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_30125C0C42D05FAC4695CEBFC266BFC6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2CC311344B0D3A07A658CC9383C15D39();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2C62C6B14240A2DE27FE6F81E08A90F5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2958C9F84CED83E5FEFCF8AAA11CBAFD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_25AB11AF48593753A9942EA3E96B6AC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2482BF474756E16E3D238EBAC3F088F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2367000D48682895D84ED49836CC537B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2111C2E143D759ED6BD0E59505DEC68E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_20490A024BF7205A0872DFB63CE79117();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_1BE0C8A34602603F751FB9BB614AD3FC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_190BE636420454AD0AC6F5AC91C84D1C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_17BF2B08407E29C8187FBD9EEEA15FFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_178E2C0D42D29787A81F32A4C4C6A899();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0F0DB33C48CA64191B29508FDEB59EE0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0DB624F34FE7E9FDDF01E69B1744357E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0D0903964DEA2A705537B1B12DD157C5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0A156C52445AA73D0683BBAD7F7D848D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_09D1172C4E766B174BE7A0ABD18A775D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_065C416943AF524C901AD6822EC6A04E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_01103B90417AC4A0EEB955984F24DE37();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_000140764FB47581FB5120A051B46335();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F6FCE05D457E3AB557D6539C96A37A05();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F60F7355483DC56A4435E3BB78FC8614();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F35AF34F421785CE22EE80BABEBA5EF7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F34E54BA4025D7FB789309AF3556DE8E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F2BE8F8E4B899364A5597F8829D61F22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_F027C4D44DB7CDA971B9CBB189FA6D7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_DDF451754787374F708DC68374F107C8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_DDBDB27D4916F1C2CACB46A8D8BAD9E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_DCA8494F4F4E2C3944E238B5D5F17A67();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_D60036FF42D1689E994F238037608CC1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_C6A0938645AA1CE5A106A3B188CBF36B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_BF4297B64EF8F4E935F1F78BC04B34CE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_BDE9076B4F88ADF5CA5B5587A113FA82();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_B7A0A1F846411075131EB992DBACE402();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_B57D9428495FA4B293DB7490170C0194();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_AF8F85174FC5388333FA89B33968ABB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_AD0F32E14591D49E7B5186ACA02A1A66();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_AB8AB9F74696A60708CF1AAA77ED1512();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_A6110CB74595D48325EA5A9128BCC4C9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_99EA0FAB439A12CBE01DC0853D59A504();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_98A2F0314FCDF6EC61AC1990906E65E5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_97915BA2459AAB173543E288813B89B2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_97024A1149125B0FAE488BBADEE9A6DA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_9493481F449720AF72AD64809B376EBC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_8C0BDCE043A4AF2A4FE2558906261898();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_8BA0A0EE423478987A7954884A506B8C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_89DCDE93446C167DA67CB7B4A829464C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_88002F7349D11CC6D5275992CF121CFA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_8144FD7B4D7F416966362B95B98FCC54();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_7BCAD6A4415D965D034E0689FC99DE79();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_6035DDFA48645E3178189FBEA5F81950();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_5D661530478CBF79CD7C66ADD253CDB8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_5BC068D34155AFA4F6DC5F939E85CF0C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_51C13C974863CC6496F2DDB877807534();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_50619D6841975D12126E4EB427B686B9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_42466973469CC35F2A7A68B5481C8C0C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_3F4AE22241A0C165FAF8D3BE99496DE6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_344756F24B7C59A44D74B1A0408EEDAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_331ED84F4C1B8DC7882D408AB1398FF2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_26F427E54C738A6087E3B7B528238405();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_214EFFAB404208085BF389BEF6A36F50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_1C949CDB4CB23D16C108D48F4403C386();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_16435180475DEFA2DE2F1BACF15F6335();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_152793A1442C8E9907AF98BB20EC6BAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_09934BE94D9001B9254D22887FB7F2C9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequencePlayer_02BFD6D848177B087DF10899DEB5D424();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_FED05D23429FCEA5876E3E9917BDA0DF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_FC12678C4C40E7893A22E884D32D7D80();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_F7115CE5431514D460C33FBE6106E478();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_F685A7024406468E6B52C5B70313F931();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_F5734B3044CD81EB2668BCB9F5779BB9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_E299313F44D848CC0B5FF88A31D02C06();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_DEC9CEAD4DEAA4E28063FABF44DC1740();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_DB497FAF4CAA29186B88D89EBDEA7C2C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_D9C8591E4F4CF834720A8A92FDEE5CAF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_D06C59EE4AFA800C032C81B3D5671DCD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_CB4C9E60423464969888B0B8E1EEF8C5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_C7FE56A9409EE85B3D9A0CAE5CB9EFB1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_C0D5CBC44838025D4C38B9A6F6A2DA47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_BEA9F55347E01F29ECFAAE99BC053F57();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_B39EF0314A110AE922188FB10327C4F4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_B02664F344EEB13878C84985A3630353();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_AD1F6D554385AB60DDFC16909487D50A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_ACC906B3416D35E2E78802B4219F5559();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_A65CD66546BAEAC8FA5D6A8AD32E929F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_A430232E4858621568FB07B0B3C32D43();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_A3FF19714DF35E8B94F781A7E5DF82B2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_A25BE70547CED3A03F7F0190473D9F98();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_9D5F95FD41EB333DC8CBDFBADD9D04EC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_972F30074A9EF7D70D2A8A9C6E0CFE62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_954B6D3E4882851C357AC987135DDCEF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_92D6AC9840B4787A5C86AA803C34973D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_8D999B9E46673BB2837AAE89232AEBA2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_8CDE8D6A401DA374BEB366993E17F8D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_8BDBBFA549CB0B570EFD94984A812A2C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_8A046F99495A84EE74075499528AF462();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_88BFCAF04D69283D91D06BBB44A4522F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_84394EF24DD7C1B9EE193AA2A2B54F1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_8008420A46856BF11A06F080B71BFF46();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_7BC57D8B4871C2121345898D283E2211();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_741592984AD7EE50F7B9E09DDD2A3043();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_73FB142D4C01671BA3A084BE6613BFD9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_72CD17454D6C539A751A5FAF5A92C8AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_700367E148F17A06B1CAA6B4DE166708();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_6C97BB234067E26D6873299BB6C5CDD5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_63879C2F47AD77CA5115C1BC91E88BF1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_635C75EC46BDF9181590BD8611574902();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_5E6B63DC46C0F4FCB1C78DA8EE08BDCD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_588578A24DFD04DB1E5AD4BBC5B8FB99();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_568ED74E4A0A9E9B269E0E95F61B4EC7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_5434477645C36C8B9AB33E9CE7802819();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_4B0B83174681E885F810FCAB47A13E31();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_49DF48154CD95881DC6ABD98A5CB5957();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_497CF28448DCC563BC6A2A9F6A7F0471();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_48F44AB342EECB50DAB7F882AC836AD0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_41A6EF89425482BA78F5809FF76169D2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_41257F7845A321A8E6DD7D82A9DA9C50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_3EDC4B2A49B25EE9ADF94F8FC4806946();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_3D7A702E4D2AD321ECC4788B7044A00B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_3D06E8B144CA1D296FD0E9AF9402ACEB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_3955D6D94A6F85583E32B28110A0C324();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_33555DBF41363C98A79F99B03CBBD9B2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_2638B0CC409C01D8D90604936BFAB9F1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_2459310F439274C1CAD1CA954F2000C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_240CC5124B55EE0FB5D9EDA6C1A9C3F1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_1E83F99B445257BE0173C39B433E117C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_1915457C481ABF860C0C1AA43628F04F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_15CCD9A44FED1DAD92F71A9725B1B3FE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_0E5B730B4FA41368E2DD7A938B6BAB20();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_0CA51A344C8061CF9E6E0598B1A255E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_094F90AC4C1C2773A36C1C8FF552D579();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_06068DE44CE51F830AE6D681812F84EF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_04FF2CF54D0039B599FD9FA69E97942B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_04BB490740CA16BAAE082AB886F8B213();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_SequenceEvaluator_043ADFCA42A36FD27ED78686075F2A31();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_FFCF52614190143106D63EAF0F4AB80F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_E690A8EC439CE4131FD43EBDF48DE5E7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_E16E287F4C0150D4C8C4D69BF526F0C2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_D81ED1D548770B7CE467448CF22EE5D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_D420C45B48809ED7DC89BEA0503876A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_C9D4BCFF4FD580A8B3AF86BE60EF5214();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_BCB253924AF00F60B556A8A861B98469();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_BB54E95A4E7FB6C738D59A83D18A37AC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_B948929740DB10BA116ED8B1E022AA85();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_B814D2034D7EE3F7CC0F81BEED374AA7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_B1DF45394FD81073FFD19DA439BE43A8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_9C6239024E51E7D289A972B8BF8EB419();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_95BA6FE7445AA04681E916BBDFAF24A1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_7B986E454B7880BA319830AEDE755FF2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_77FA59C9493D00816AE29C840DC8DB06();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_77C365CF4DAD7C6807C1B0AA5E02810E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_69CAA92444836B037D0951BD554EBCA2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_5A581B54418773057F92888F25AA3C13();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_58345D7D4967E6F92E90EA8CBC327842();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_52CFE1BF43092CE762918EACFC40FA45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_51E046AB4AD9CF3E4073049FF2CFBC63();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_50C0EB664F72DAC0DE1925B74E3E7BE8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_469CDC034060C7FA6210C9AE70F39DB5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_3E7591314A6C1664D63AB5AE2EEA7D9E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_3D0193A148E0BE256FA16593C19ED5C2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_388197344527113E07AFC5802BF8B257();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_320EFB624E46733F38CEC7B08D3E26E5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_2E9585094CF46B4DAC420683D6B4445D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_21E61B344774E552DA890183C5EFF59F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_RotationOffsetBlendSpace_1864034745ACDEE6B929569698F0ACC3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_LayeredBoneBlend_581FAEBB43FD9F1A755C1FB75E554EFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_CE84539D48AAAC202A8601A96DF03C87();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_C1E2AA3B407E262B638564B8E66A5769();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_BE7B77924B72AA938F9D7490766F9F2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_38DFCB094A6085AE062004BA40259EE8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_1E1EC2A441F59BD806143790A5E6C1FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_0E3854444D7BDC2919C6ECB665F04EC0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendSpacePlayer_0C55AB254DAFF869C3F5A7B05B02E455();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_8323C1854583581058AB59B23F55D816();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_795F3A754B1AF3C18DCDD7A5F73B6C6D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_35C0A4294585D1004BF35EBB921BD887();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_BlendListByBool_04509FC64C78A580F1891CBF33030367();
		void CustomPrint(bool bpp__Enablex__pfzy, const class FString& bpp__Input__pf__const, const struct FLinearColor& bpp__Colour__pf);
		void CombineRotatorAxis(float bpp__A__pf, float bpp__B__pf, float* bpp__ReturnxValue__pfT);
		void CheckTickUpdate(float bpp__DelayTime__pf, float bpp__NextTickUpdate__pf, bool* bpp__Return__pf, float* bpp__ReturnNextTickUpdate__pf);
		void CalcVectorInterp(const struct FVector& bpp__Current__pf, const struct FVector& bpp__Target__pf, float bpp__Speed__pf, bool bpp__Constant__pf, struct FVector* bpp__Output__pf);
		void CalcUnderbarrelOffset(class UWeaponUpgradeComponent* bpp__Upgrade__pf, bool bpp__NoCheck__pf, bool bpp__NoCalc__pf);
		void CalcRotatorAxisInterp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void CalcIKHip(float bpp__IKFeetLeft__pf, float bpp__IKFeetRight__pf, bool bpp__Debugx__pfzy, bool bpp__Activex__pfzy, struct FVector* bpp__Vertical__pf);
		void CalcIKFeetTraceOld(const class FName& bpp__Socket__pf, float bpp__Distance__pf, const struct FVector& bpp__OriginalVector__pf, const struct FRotator& bpp__OriginalRotation__pf, bool bpp__Debugx__pfzy, bool bpp__Activex__pfzy, struct FVector* bpp__Vertical__pf, struct FRotator* bpp__Angle__pf);
		void CalcIKFeetTrace(bool bpp__LeftFootx__pfzy, bool bpp__Debugx__pfzy, bool bpp__Activex__pfzy, const struct FRotator& bpp__OriginalRotation__pf, float bpp__OriginalVectorZ__pf, float bpp__Limit__pf, float* bpp__VectorZ__pf, struct FVector_NetQuantizeNormal* bpp__Normal__pf);
		struct FTransform CalcHandRelativeOffset(const class FName& bpp__Socket__pf, class UAnimSequence* bpp__Sequence__pf, const class FName& bpp__ParentBone__pf, bool bpp__UseAlternative__pf, class UAnimSequence* bpp__AlternateSequence__pf);
		float CalcForearmAlpha(class USceneComponent* bpp__Mesh__pf, const class FName& bpp__BoneName__pf, bool bpp__LeftHand__pf);
		void CalcEquipRates(class AItemEquipable* bpp__EquipableReference__pf);
		void CalcAnimTime(bool bpp__TwoWayx__pfzy, float bpp__AnimStartTime__pf, float bpp__AnimTimeInput__pf, bool bpp__Condition__pf, float bpp__Speed__pf, float bpp__ReturnSpeed__pf, float bpp__AnimLength__pf, bool bpp__OverrideCondition__pf, float bpp__Override__pf, float* bpp__AnimTimeOutput__pf, float* bpp__AnimTimeReturnOutput__pf, bool* bpp__Finished__pf);
		void CalcAlphaInterpConstant(float bpp__Alpha__pf, bool bpp__Switch__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void CalcAlphaInterp(float bpp__Alpha__pf, bool bpp__Switch__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void CaclulateNormalAngle(const struct FVector& bpp__Normal__pf, struct FRotator* bpp__Rotator__pf);
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintOnUpgradeMeshLoaded(class UINSSkeletalMeshComponent* bpp__Mesh__pf, class UWeaponVisualUpgradeComponent* bpp__Upgrade__pf);
		void BlueprintOnUpgradeInstalled(class UWeaponUpgradeComponent* bpp__Upgrade__pf);
		void BlueprintOnReloadInterrupt();
		void BlueprintOnReload(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const);
		void BlueprintOnPlayerClassAttributesUpdated();
		void BlueprintOnMeshLoaded();
		void BlueprintOnMeleeWeaponAttack(const struct FMeleeConfig& bpp__SelectedAttack__pf__const);
		void BlueprintOnItemUnequip(bool bpp__bInstant__pf, class AItemEquipable* bpp__SwitchingTo__pf);
		void BlueprintOnItemEquip(bool bpp__bInstant__pf__const, class AItemEquipable* bpp__SwitchingFrom__pf, bool bpp__bWantsFirstEquip__pf__const);
		void BlueprintOnGenericMeleeAttack(bool bpp__bBash__pf);
		void BlueprintOnGearInteracted(class AItemInteractableGear* bpp__GearItem__pf, EEquipableState bpp__NewState__pf);
		void BlueprintOnFirearmStopFire();
		void BlueprintOnFirearmStartFire();
		void BlueprintOnFirearmFired(const struct FVector& bpp__FireOrigin__pf__const, const struct FVector& bpp__FireDirection__pf__const);
		void BlueprintOnFirearmDryFire();
		void BlueprintOnFastReload(bool bpp__bDryReload__pf__const, float bpp__RateMultiplier__pf__const);
		void BlueprintOnCycleFiremode(EFirearmFiremode bpp__OldFiremode__pf__const, EFirearmFiremode bpp__NewFiremode__pf__const);
		void BlueprintOnCharacterReset();
		void BlueprintOnBoltCycle();
		void BlueprintOnBipodLegsStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const);
		void BlueprintOnBipodDeployedStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const);
		void BlueprintOnAmmoCheck();
		void BlueprintInitializeAnimation();
		void BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf);
		void AnimNotify_VaultEnd();
		void AnimNotify_RocketVisible();
		void AnimNotify_ReloadBlend();
		void AnimNotify_PlaySpecial();
		void AnimNotify_MeleeBlend();
		void AnimNotify_ItemBlendOut();
		void AnimNotify_ExplosiveVisibility();
		void AnimNotify_EquipableVisible();
		void AnimNotify_EnterExplosiveHold();
		void AnimNotify_End_Equipping();
		void AnimNotify_End_Equip_Animation();
		void AnimNotify_DoorKickBlend();
		void AnimNotify_DetachGasMask();
		void AnimNotify_ChargeBlend();
		void AnimNotify_CacheDelayedWeapon();
		void AnimNotify_BlendEquipChange();
		void AnimNotify_BlendActorInteraction();
		void AnimNotify_AttachGasmask();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		void AccumulateAimChanges();
		void OnUsableInteractionDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf);
		void OnPlantStartDelegate__DelegateSignature();
		void OnPlantFinishedDelegate__DelegateSignature();
		void OnPlantAbandonedDelegate__DelegateSignature();
		void OnMergedMeshSetDelegate__DelegateSignature();
		void OnKilledInVehicleSeatDelegate__DelegateSignature();
		void OnGearChangeDelegate__DelegateSignature();
		void OnCharacterTakeDamageDelegate__DelegateSignature(class UDamageType* bpp__DamageType__pf, const struct FNetHitReaction& bpp__HitReaction__pf);
		void DelegateDoorKick__DelegateSignature(bool bpp__bKickWillSucceed__pf);
		void ChargeHitDelegate__DelegateSignature();
		void ChargeEndDelegate__DelegateSignature();
		void ChargeBeginDelegate__DelegateSignature();
		void CharacterResponseDelegate__DelegateSignature(ECharacterResponse bpp__Response__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
