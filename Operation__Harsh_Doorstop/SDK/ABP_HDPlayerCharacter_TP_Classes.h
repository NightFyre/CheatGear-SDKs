#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * AnimBlueprintGeneratedClass ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C
	 * Size -> 0xAD48 (FullSize[0xB028] - InheritedSize[0x02E0])
	 */
	class UABP_HDPlayerCharacter_TP_C : public UHDPlayerCharacterAnimInst_TPP
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x02E8(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x03D8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x03F8(0x0020)
		unsigned char                                              UnknownData_2E9K[0x8];                                   // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x0420(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x0600(0x01E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x07E0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x0800(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0908(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0928(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x0948(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x0A38(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x0B28(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x0C18(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x0CD0(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0CF8(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x0D18(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0x0E08(0x0078)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x0E80(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x0F88(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x1078(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x1180(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x1288(0x0108)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_11;                          // 0x1390(0x00C8)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x1458(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1548(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1608(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1628(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x1648(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x1670(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x1778(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1880(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1988(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root_10;                                   // 0x1A90(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_5;                            // 0x1AC0(0x0018)
		struct FAnimNode_Root                                      AnimGraphNode_Root_9;                                    // 0x1AD8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_8;                         // 0x1B08(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_8;                                    // 0x1B80(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_7;                         // 0x1BB0(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_7;                                    // 0x1C28(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_6;                         // 0x1C58(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_6;                                    // 0x1CD0(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_5;                         // 0x1D00(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_5;                                    // 0x1D78(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_4;                         // 0x1DA8(0x0078)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_3;                         // 0x1E20(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x1E98(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x1F50(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x2008(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x2030(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x2058(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x2080(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x2138(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_10;                          // 0x2160(0x00C8)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x2228(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x22A0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x2358(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x2380(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x23A8(0x00B8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2460(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x24A8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0x2568(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_9;                           // 0x25E0(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x26A8(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0x2760(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_28;                        // 0x27D8(0x00A0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_7;                // 0x2878(0x0188)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0x2A00(0x0078)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x2A78(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_27;                        // 0x2AA0(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x2B40(0x00B8)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x2BF8(0x0078)
		struct FAnimNode_Root                                      AnimGraphNode_Root_4;                                    // 0x2C70(0x0030)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0x2CA0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_80;                       // 0x2CD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_79;                       // 0x2CF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_78;                       // 0x2D20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77;                       // 0x2D48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_76;                       // 0x2D70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_75;                       // 0x2D98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_74;                       // 0x2DC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_73;                       // 0x2DE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_72;                       // 0x2E10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_71;                       // 0x2E38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_70;                       // 0x2E60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_69;                       // 0x2E88(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0x2EB0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_43;                            // 0x2F28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x2F58(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_42;                            // 0x2FD0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0x3000(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_41;                            // 0x3078(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0x30A8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_40;                            // 0x3120(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0x3150(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_39;                            // 0x31C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0x31F8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_38;                            // 0x3270(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0x32A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0x3318(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26;                        // 0x3390(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_37;                            // 0x3430(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_11;                           // 0x3460(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_36;                            // 0x3510(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_68;                       // 0x3540(0x0028)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_4;                            // 0x3568(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_35;                            // 0x3580(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_10;                           // 0x35B0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x3660(0x00B8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67;                       // 0x3718(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_66;                       // 0x3740(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_65;                       // 0x3768(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64;                       // 0x3790(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0x37B8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_34;                            // 0x3830(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x3860(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25;                        // 0x3888(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x3928(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_33;                            // 0x39A0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x39D0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_32;                            // 0x3A48(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x3A78(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_31;                            // 0x3AA0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_9;                            // 0x3AD0(0x00B0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x3B80(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x3C48(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x3C70(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x3CA0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_63;                       // 0x3CE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_62;                       // 0x3D10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_61;                       // 0x3D38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_60;                       // 0x3D60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_59;                       // 0x3D88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58;                       // 0x3DB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57;                       // 0x3DD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56;                       // 0x3E00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_55;                       // 0x3E28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_54;                       // 0x3E50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53;                       // 0x3E78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_52;                       // 0x3EA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_51;                       // 0x3EC8(0x0028)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_3;                            // 0x3EF0(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x3F08(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x3F38(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x3FE8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_50;                       // 0x4018(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x4040(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x4068(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_49;                       // 0x4098(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_48;                       // 0x40C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x40E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x4110(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x4138(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x4160(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x4188(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0x4200(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x42A0(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_22;                        // 0x4318(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x43C8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x4440(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x4470(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0x44E8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x4588(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_21;                        // 0x4600(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x46B0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x4728(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x4758(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0x47D0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x4870(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_20;                        // 0x48E8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x4998(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x4A10(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x4A40(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x4A58(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x4A88(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x4B38(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x4B68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x4B90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x4BB8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x4BE0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x4C58(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x4C88(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x4D68(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x4D98(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x4E48(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x4E78(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x4EA0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x4ED0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x4F80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x4FA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x4FD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x4FF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x5020(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x5048(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x5070(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x5098(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x50C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x50E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x5110(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x5138(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x5160(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x5188(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x51B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x51D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x5200(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x5228(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x5250(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x5280(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x52A8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x52D8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x5308(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x5330(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x5360(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x5390(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x53B8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x53E8(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x5400(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x5430(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x54E0(0x00B8)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x5598(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x55C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x55E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x5610(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x5638(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x5660(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x5688(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x56B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x56D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x5700(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0x5728(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0x5770(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0x57B8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_19;                        // 0x5858(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x5908(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x5980(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x59F8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_18;                        // 0x5A98(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_8;                           // 0x5B48(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0x5C10(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x5C58(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x5CD0(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0x5D00(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0x5D48(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x5D90(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_17;                        // 0x5E30(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x5EE0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x5F58(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x5FD0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_16;                        // 0x6070(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_7;                           // 0x6120(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0x61E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x6230(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x62A8(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0x62D8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0x6320(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x6368(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_15;                        // 0x6408(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x64B8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x6530(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x65A8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_14;                        // 0x6648(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x66F8(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0x67C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x6808(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x6880(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x68B0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x68F8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x6940(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_13;                        // 0x69E0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x6A90(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x6B08(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x6B80(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0x6C20(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x6CD0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x6D98(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x6DE0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x6E58(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x6E88(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x6EB0(0x00E0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x6F90(0x00E0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x7070(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x71F8(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x7380(0x0188)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x7508(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x75A8(0x0078)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0x7620(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x76D0(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x7770(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x7850(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x78F0(0x00E0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0x79D0(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x7A80(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x7B60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x7B90(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x7C40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x7C68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x7C90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x7CB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x7CE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x7D08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x7D30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x7D58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x7D80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x7DA8(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x7DD0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x7E18(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x7E60(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0x7F00(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x7FB0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x8028(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x80A0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0x8140(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x81F0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x82B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x8300(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x8378(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x83A8(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x83F0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x8438(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0x84D8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x8588(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x8600(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x8678(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0x8718(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x87C8(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x8890(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x88D8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x8950(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x8980(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x89C8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x8A10(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0x8AB0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x8B60(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x8BD8(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x8C50(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x8CF0(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x8DA0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x8E68(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x8EB0(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x8F28(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x8F58(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x8FA0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x8FE8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x9088(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x9138(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x91B0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x9228(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x92C8(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x9378(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x9440(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x9488(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x9500(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x9530(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x9558(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x96E0(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x9868(0x0188)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x99F0(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x9AD0(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x9B70(0x00E0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x9C50(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x9D00(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x9DE0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x9E10(0x00B0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x9EC0(0x00E0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x9FA0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x9FD0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0xA080(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0xA138(0x00B8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0xA1F0(0x00B8)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0xA2A8(0x0030)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_7;                         // 0xA2D8(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0xA388(0x00B8)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_6;                         // 0xA440(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_5;                         // 0xA4F0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0xA5A0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0xA658(0x0028)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_4;                         // 0xA680(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_3;                         // 0xA730(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0xA7E0(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0xA890(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0xA940(0x0028)
		bool                                                       __CustomProperty_bPreventAOHandDriftFromWeapon_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA968(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9QZ[0x3];                                   // 0xA969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_HandFKWeight_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA96C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bUseHandIKRetargeting_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA970(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bUseRightHandIK_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA971(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bUseLeftHandIK_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA972(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V6KK[0xD];                                   // 0xA973(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          __CustomProperty_RightHandIKTransform_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA980(0x0030) IsPlainOldData, NoDestructor
		struct FTransform                                          __CustomProperty_LeftHandIKTransform_E656822F4F77DD47557E8BA0FC4D0E5E; // 0xA9B0(0x0030) IsPlainOldData, NoDestructor
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0xA9E0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0xAA80(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0xAB20(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0xABD8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0xAC00(0x0028)
		class ABP_HDPlayerCharacterBase_C*                         OwningChar;                                              // 0xAC28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDPlayerControllerBase_C*                        OwningPC;                                                // 0xAC30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  CurrentWeapon;                                           // 0xAC38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNotLeaningOrIsMoving;                                   // 0xAC40(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningNoSpeed;                                         // 0xAC41(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningLeft;                                            // 0xAC42(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLeaningRight;                                           // 0xAC43(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELeanDirection                                             LeanDirection;                                           // 0xAC44(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEquipped;                                               // 0xAC45(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidMovementState;                                     // 0xAC46(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLandBasedMovement;                                      // 0xAC47(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFluidBasedMovement;                                     // 0xAC48(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAirBasedMovement;                                       // 0xAC49(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bAirOnlyBasedMovement;                                   // 0xAC4A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharacterMoveState                                        MovementState;                                           // 0xAC4B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  EquippedItemType;                                        // 0xAC4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPrefiring;                                              // 0xAC4D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReadyToThrow;                                           // 0xAC4E(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseLeftHandIK;                                          // 0xAC4F(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          LeftHandIKTransform;                                     // 0xAC50(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseRightHandIK;                                         // 0xAC80(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_06DV[0xF];                                   // 0xAC81(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHandIKTransform;                                    // 0xAC90(0x0030) Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   RifleLeanInAnim;                                         // 0xACC0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   RifleLeanOutAnim;                                        // 0xACC8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeapLeftHandIKSocketName;                                // 0xACD0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                WeapRightHandIKSocketName;                               // 0xACD8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeftHandBoneName;                                        // 0xACE0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RightHandBoneName;                                       // 0xACE8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeftFootBoneName;                                        // 0xACF0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RightFootBoneName;                                       // 0xACF8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          WeapDefaultLeftHandIKTransform_Rifle;                    // 0xAD00(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultLeftHandIKTransform_Pistol;                   // 0xAD30(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultRightHandIKTransform_Rifle;                   // 0xAD60(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		struct FTransform                                          WeapDefaultRightHandIKTransform_Pistol;                  // 0xAD90(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor
		class UAnimSequenceBase*                                   BasePoseUpperAnim;                                       // 0xADC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   BasePoseTPPUpperAnim;                                    // 0xADC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleAdditiveUpperAnim;                                   // 0xADD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MoveUpperAnim;                                           // 0xADD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimInUpperAnim;                                          // 0xADE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimBasePoseUpperAnim;                                    // 0xADE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   AimOutUpperAnim;                                         // 0xADF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintInUpperAnim;                                       // 0xADF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintUpperAnim;                                         // 0xAE00(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   SprintOutUpperAnim;                                      // 0xAE08(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ProneInUpperAnim;                                        // 0xAE10(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   CrawlUpperAnim;                                          // 0xAE18(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   ProneOutUpperAnim;                                       // 0xAE20(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleLowerBodyAnim;                                       // 0xAE28(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SourceMesh;                                              // 0xAE30(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleUpperBodyAnimPlayRateToUse;                          // 0xAE38(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseMirroredLowerBodyLocomotion;                         // 0xAE3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5SIB[0x3];                                   // 0xAE3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerBodyBSPlayRateToUse;                                // 0xAE40(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HandFKWeightToUse;                                       // 0xAE44(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugAnimMontagePlayback;                               // 0xAE48(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VJ5B[0x7];                                   // 0xAE49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CharAnimMontageToPlay;                                   // 0xAE50(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              WeapAnimInstanceToUse;                                   // 0xAE58(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        WeapAnimMontageToPlay;                                   // 0xAE60(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RifleHandFKWeight;                                       // 0xAE68(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PistolHandFKWeight;                                      // 0xAE6C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            FootIKTraceChannel;                                      // 0xAE70(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I7FK[0x3];                                   // 0xAE71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PawnScale;                                               // 0xAE74(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FootIKTraceDist;                                         // 0xAE78(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftFootIKOffset;                                        // 0xAE7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightFootIKOffset;                                       // 0xAE88(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3ND9[0x4];                                   // 0xAE94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   ThrowReadyBasePoseUpperAnim;                             // 0xAE98(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAmount;                                              // 0xAEA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAlpha;                                               // 0xAEA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRifleLean;                                              // 0xAEA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8I69[0x3];                                   // 0xAEA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeanLeftInAnimTime;                                      // 0xAEAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanLeftOutAnimTime;                                     // 0xAEB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanRightInAnimTime;                                     // 0xAEB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanRightOutAnimTime;                                    // 0xAEB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAnimOffset;                                          // 0xAEBC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInCrouchStance;                                         // 0xAEC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInProneStance;                                          // 0xAEC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandToCrouch;                                          // 0xAEC2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bStandToProne;                                           // 0xAEC3(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCrouchToProne;                                          // 0xAEC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bValidProneUpperAnims;                                   // 0xAEC5(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0R2R[0x2];                                   // 0xAEC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementAlpha;                                           // 0xAEC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAmount;                                          // 0xAECC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ItemPositionOffset;                                      // 0xAED0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ElbowIKWeight;                                           // 0xAEDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCharacterAnimCollection                            WeapArmsTPPAnims;                                        // 0xAEE0(0x0128) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor
		struct FVector                                             AimingOffset;                                            // 0xB008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimAlpha;                                                // 0xB014(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0xB018(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InversePitchAimRot;                                      // 0xB01C(0x000C) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		void WeaponUpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* WeaponUpperBody);
		void WeaponAdditive(struct FPoseLink* WeaponAdditive);
		void Move(const struct FPoseLink& Move, struct FPoseLink* Move2);
		void WeaponJumpLoop(const struct FPoseLink& LowerJumpLoop, struct FPoseLink* WeaponJumpLoop);
		void VehicleFullBody(const struct FPoseLink& FullBody, struct FPoseLink* VehicleFullBody);
		void VehicleLowerBody(const struct FPoseLink& LowerBody, struct FPoseLink* VehicleLowerBody);
		void LayeredLoco(const struct FPoseLink& InBaseLayer, const struct FPoseLink& InOverlayLayer, const struct FPoseLink& InFullBodyAdditive, struct FPoseLink* LayeredLoco);
		void OverlayLocoLayer(struct FPoseLink* OverlayLocoLayer);
		void BaseLocoLayer(struct FPoseLink* BaseLocoLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UpdateIKTraceDataForFoot(bool bForRightFoot);
		void PerformFootIKTrace(bool bFromRightFoot, bool* bOutHit, struct FVector* OutHitOffsetFromFoot);
		void UpdateFootIKTraceData();
		void SetupFootIK(class ACharacter* CharOwner);
		void ShouldUseHandIK(bool* bOutUseHandIK);
		void PlayCharacterTPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration);
		void AssignLegacyWeaponTPPLocomotionAnims(TMap<class FName, class UAnimSequenceBase*> WeaponAnimSetTPP);
		void AssignWeaponTPPLocomotionAnims(struct FCharacterAnimCollection* AnimCollection, bool bReadyToThrow);
		void GetDefaultRightHandIKTransformByItemType(EItemType ItemType, struct FTransform* RightTransform);
		void GetDefaultLeftHandIKTransformByItemType(EItemType ItemType, struct FTransform* LeftTransform);
		void OnNotifyEnd_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnNotifyBegin_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnInterrupted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnBlendOut_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnCompleted_03E0282943B466F95A9987B1825BCF44(const class FName& NotifyName);
		void OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void OnCompleted_ED2EB33C4A118243E7441F82017EFA1B(const class FName& NotifyName);
		void AnimNotify_LeftCrouchState();
		void AnimNotify_FullyCrouchedState();
		void AnimNotify_FullyStandingState();
		void AnimNotify_LeftStandState();
		void AnimNotify_FullyProneState();
		void AnimNotify_LeftProneState();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void EquippedItemChanged(class ADFBaseCharacter* Character, class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem);
		void BlueprintUpdatePawnOwnerRefs(class APawn* NewPawn);
		void BlueprintUpdateControllerOwnerRefs(class AController* NewC);
		void BlueprintUpdateEquippedWeaponRefs(class ADFBaseItem* NewWeap);
		void ExecuteUbergraph_ABP_HDPlayerCharacter_TP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
