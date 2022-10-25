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
	 * AnimBlueprintGeneratedClass ABP_Character.ABP_Character_C
	 * Size -> 0x18F70 (FullSize[0x19228] - InheritedSize[0x02B8])
	 */
	class UABP_Character_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RAY3[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_80;                               // 0x02C8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_79;                               // 0x03B8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_78;                               // 0x04A8(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_36;                  // 0x0598(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_36;                  // 0x05B8(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_24;                       // 0x05D8(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_29;                      // 0x0698(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_102;                         // 0x06E8(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_35;                  // 0x0710(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_23;                       // 0x0730(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_101;                         // 0x07F0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_77;                               // 0x0818(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_35;                  // 0x0908(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_76;                               // 0x0928(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_34;                  // 0x0A18(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_75;                               // 0x0A38(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_34;                  // 0x0B28(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_74;                               // 0x0B48(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_33;                  // 0x0C38(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_73;                               // 0x0C58(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_72;                               // 0x0D48(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_22;                       // 0x0E38(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_100;                         // 0x0EF8(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_71;                               // 0x0F20(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_33;                  // 0x1010(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_70;                               // 0x1030(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_32;                  // 0x1120(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_69;                               // 0x1140(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_32;                  // 0x1230(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_68;                               // 0x1250(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_31;                  // 0x1340(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_67;                               // 0x1360(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_66;                               // 0x1450(0x00F0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_21;                       // 0x1540(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_99;                          // 0x1600(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_65;                               // 0x1628(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_31;                  // 0x1718(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_64;                               // 0x1738(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_5;                                    // 0x1828(0x0030)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_30;                             // 0x1858(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_29;                             // 0x1960(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_28;                             // 0x1A68(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_30;                  // 0x1B70(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_27;                             // 0x1B90(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_26;                             // 0x1C98(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_25;                             // 0x1DA0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_24;                             // 0x1EA8(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_30;                  // 0x1FB0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_23;                             // 0x1FD0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_22;                             // 0x20D8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_21;                             // 0x21E0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x22E8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x23F0(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_63;                               // 0x24F8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_62;                               // 0x25E8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_61;                               // 0x26D8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_60;                               // 0x27C8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_59;                               // 0x28B8(0x00F0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_6;                         // 0x29A8(0x0118)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_58;                               // 0x2AC0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_57;                               // 0x2BB0(0x00F0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_28;                      // 0x2CA0(0x0050)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_56;                               // 0x2CF0(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x2DE0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x2EE8(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_55;                               // 0x2FF0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_54;                               // 0x30E0(0x00F0)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x31D0(0x0018)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x31E8(0x0018)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_53;                               // 0x3200(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_49;                         // 0x32F0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_48;                         // 0x3448(0x0158)
		struct FAnimNode_Root                                      AnimGraphNode_Root_4;                                    // 0x35A0(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_47;                         // 0x35D0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_46;                         // 0x3728(0x0158)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_29;                  // 0x3880(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_28;                  // 0x38A0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x38C0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x39C8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x3AD0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x3BD8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x3CE0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x3DE8(0x0108)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_5;                         // 0x3EF0(0x0118)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_4;                         // 0x4008(0x0118)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_3;                         // 0x4120(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_45;                         // 0x4238(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_29;                  // 0x4390(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x43B0(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_20;                       // 0x43F8(0x00C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_28;                  // 0x44B8(0x0020)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_10;                            // 0x44D8(0x0058)
		struct FAnimNode_StrideWarping                             AnimGraphNode_StrideWarping_3;                           // 0x4530(0x01C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_44;                         // 0x46F8(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x4850(0x0048)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_7;                  // 0x4898(0x00D0)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_9;                             // 0x4968(0x0058)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_8;                             // 0x49C0(0x0058)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_7;                             // 0x4A18(0x0058)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_6;                             // 0x4A70(0x0058)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_5;                             // 0x4AC8(0x0058)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_52;                               // 0x4B20(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_98;                          // 0x4C10(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_27;                      // 0x4C38(0x0050)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_27;                  // 0x4C88(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_43;                         // 0x4CA8(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_27;                  // 0x4E00(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_51;                               // 0x4E20(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_50;                               // 0x4F10(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_26;                  // 0x5000(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_26;                  // 0x5020(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_19;                       // 0x5040(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_97;                          // 0x5100(0x0028)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_2;                     // 0x5128(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_96;                          // 0x5160(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0x5188(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_95;                          // 0x5228(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_94;                          // 0x5250(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_18;                       // 0x5278(0x00C0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_26;                      // 0x5338(0x0050)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_49;                               // 0x5388(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_48;                               // 0x5478(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_42;                         // 0x5568(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_93;                          // 0x56C0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_47;                               // 0x56E8(0x00F0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_25;                      // 0x57D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_24;                      // 0x5828(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_23;                      // 0x5878(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_22;                      // 0x58C8(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_28;                            // 0x5918(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_27;                            // 0x59E0(0x00C8)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_6;                  // 0x5AA8(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_92;                          // 0x5B78(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_41;                         // 0x5BA0(0x0158)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_6;                          // 0x5CF8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_91;                          // 0x5D98(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_90;                          // 0x5DC0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_26;                            // 0x5DE8(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_25;                            // 0x5EB0(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_24;                            // 0x5F78(0x00C8)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_5;                  // 0x6040(0x00D0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_21;                      // 0x6110(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_20;                      // 0x6160(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_19;                      // 0x61B0(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_18;                      // 0x6200(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_40;                         // 0x6250(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_89;                          // 0x63A8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_88;                          // 0x63D0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_46;                               // 0x63F8(0x00F0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_23;                            // 0x64E8(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_17;                      // 0x65B0(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_17;                       // 0x6600(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_87;                          // 0x66C0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_39;                         // 0x66E8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_86;                          // 0x6840(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_85;                          // 0x6868(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_45;                               // 0x6890(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_44;                               // 0x6980(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_25;                  // 0x6A70(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_25;                  // 0x6A90(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_43;                               // 0x6AB0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_42;                               // 0x6BA0(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_24;                  // 0x6C90(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_24;                  // 0x6CB0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x6CD0(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_41;                               // 0x6DD8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_40;                               // 0x6EC8(0x00F0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x6FB8(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_22;                            // 0x70C0(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_16;                      // 0x7188(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_15;                      // 0x71D8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_14;                      // 0x7228(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_13;                      // 0x7278(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_12;                      // 0x72C8(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_11;                      // 0x7318(0x0050)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x7368(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_23;                  // 0x7470(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_23;                  // 0x7490(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_21;                            // 0x74B0(0x00C8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_16;                       // 0x7578(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_22;                  // 0x7638(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_22;                  // 0x7658(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_84;                          // 0x7678(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_83;                          // 0x76A0(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_39;                               // 0x76C8(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_38;                         // 0x77B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_82;                          // 0x7910(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_81;                          // 0x7938(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_20;                            // 0x7960(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_37;                         // 0x7A28(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_80;                          // 0x7B80(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_15;                       // 0x7BA8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_79;                          // 0x7C68(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_38;                               // 0x7C90(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_21;                  // 0x7D80(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_37;                               // 0x7DA0(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_78;                          // 0x7E90(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_21;                  // 0x7EB8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_77;                          // 0x7ED8(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_36;                               // 0x7F00(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_35;                               // 0x7FF0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_34;                               // 0x80E0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_33;                               // 0x81D0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_32;                               // 0x82C0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_31;                               // 0x83B0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_30;                               // 0x84A0(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_76;                          // 0x8590(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_14;                       // 0x85B8(0x00C0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_19;                            // 0x8678(0x00C8)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_4;                             // 0x8740(0x0058)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_13;                       // 0x8798(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_75;                          // 0x8858(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x8880(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_74;                          // 0x8940(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_130;                        // 0x8968(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_129;                        // 0x89E8(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_18;                            // 0x8A68(0x00C8)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_4;                  // 0x8B30(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_73;                          // 0x8C00(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x8C28(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_72;                          // 0x8CE8(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x8D10(0x00C0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_29;                               // 0x8DD0(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_20;                  // 0x8EC0(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_28;                               // 0x8EE0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_27;                               // 0x8FD0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_26;                               // 0x90C0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_25;                               // 0x91B0(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_20;                  // 0x92A0(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x92C0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_71;                          // 0x9380(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_24;                               // 0x93A8(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_19;                  // 0x9498(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_23;                               // 0x94B8(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_19;                  // 0x95A8(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_22;                               // 0x95C8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_21;                               // 0x96B8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_20;                               // 0x97A8(0x00F0)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x9898(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_70;                          // 0x98D0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_36;                         // 0x98F8(0x0158)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_19;                               // 0x9A50(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_18;                  // 0x9B40(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_18;                  // 0x9B60(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_18;                               // 0x9B80(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_17;                  // 0x9C70(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_17;                               // 0x9C90(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_17;                  // 0x9D80(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x9DA0(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_69;                          // 0x9DE8(0x0028)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_16;                               // 0x9E10(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_16;                  // 0x9F00(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_15;                               // 0x9F20(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_16;                  // 0xA010(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_14;                               // 0xA030(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_15;                  // 0xA120(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_15;                  // 0xA140(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0xA160(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_68;                          // 0xA250(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0xA278(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0xA338(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_67;                          // 0xA3F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_66;                          // 0xA420(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_65;                          // 0xA448(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_35;                         // 0xA470(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0xA5C8(0x00C0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_3;                                    // 0xA688(0x0030)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_14;                  // 0xA6B8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_14;                  // 0xA6D8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_34;                         // 0xA6F8(0x0158)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0xA850(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_33;                         // 0xA968(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0xAAC0(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_22;                        // 0xAB60(0x00B0)
		struct FAnimNode_StrideWarping                             AnimGraphNode_StrideWarping_2;                           // 0xAC10(0x01C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_128;                        // 0xADD8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_127;                        // 0xAE58(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_126;                        // 0xAED8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_125;                        // 0xAF58(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_124;                        // 0xAFD8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_123;                        // 0xB058(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_122;                        // 0xB0D8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_121;                        // 0xB158(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_120;                        // 0xB1D8(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_64;                          // 0xB258(0x0028)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_21;                        // 0xB280(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_119;                        // 0xB330(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_118;                        // 0xB3B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_117;                        // 0xB430(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_116;                        // 0xB4B0(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_20;                        // 0xB530(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_63;                          // 0xB5E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_115;                        // 0xB608(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_114;                        // 0xB688(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_113;                        // 0xB708(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_112;                        // 0xB788(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_111;                        // 0xB808(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_110;                        // 0xB888(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_109;                        // 0xB908(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_108;                        // 0xB988(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_107;                        // 0xBA08(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_32;                         // 0xBA88(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_31;                         // 0xBBE0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_30;                         // 0xBD38(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0xBE90(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0xBF30(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_62;                          // 0xBFD0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_61;                          // 0xBFF8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_60;                          // 0xC020(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_59;                          // 0xC048(0x0028)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_19;                        // 0xC070(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_106;                        // 0xC120(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_105;                        // 0xC1A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_104;                        // 0xC220(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_103;                        // 0xC2A0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_29;                         // 0xC320(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_18;                        // 0xC478(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_58;                          // 0xC528(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_102;                        // 0xC550(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_101;                        // 0xC5D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_100;                        // 0xC650(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_99;                         // 0xC6D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_98;                         // 0xC750(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_97;                         // 0xC7D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_96;                         // 0xC850(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_95;                         // 0xC8D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_94;                         // 0xC950(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_28;                         // 0xC9D0(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_17;                        // 0xCB28(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_27;                         // 0xCBD8(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_93;                         // 0xCD30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_92;                         // 0xCDB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_91;                         // 0xCE30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_90;                         // 0xCEB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_89;                         // 0xCF30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_88;                         // 0xCFB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_87;                         // 0xD030(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_86;                         // 0xD0B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_85;                         // 0xD130(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_26;                         // 0xD1B0(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_17;                            // 0xD308(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0xD3D0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0xD470(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_57;                          // 0xD510(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_56;                          // 0xD538(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_55;                          // 0xD560(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_16;                            // 0xD588(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_15;                            // 0xD650(0x00C8)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_14;                            // 0xD718(0x00C8)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_16;                        // 0xD7E0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_84;                         // 0xD890(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_83;                         // 0xD910(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_82;                         // 0xD990(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_81;                         // 0xDA10(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_25;                         // 0xDA90(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_15;                        // 0xDBE8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_80;                         // 0xDC98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_79;                         // 0xDD18(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_78;                         // 0xDD98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_77;                         // 0xDE18(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_76;                         // 0xDE98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_75;                         // 0xDF18(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_74;                         // 0xDF98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_73;                         // 0xE018(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_72;                         // 0xE098(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_24;                         // 0xE118(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_14;                        // 0xE270(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_71;                         // 0xE320(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_70;                         // 0xE3A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_69;                         // 0xE420(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_68;                         // 0xE4A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_67;                         // 0xE520(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_66;                         // 0xE5A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_65;                         // 0xE620(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_64;                         // 0xE6A0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_63;                         // 0xE720(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_62;                         // 0xE7A0(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_23;                         // 0xE820(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_61;                         // 0xE978(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_13;                        // 0xE9F8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_60;                         // 0xEAA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_59;                         // 0xEB28(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_58;                         // 0xEBA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_57;                         // 0xEC28(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_22;                         // 0xECA8(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0xEE00(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_56;                         // 0xEEB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_55;                         // 0xEF30(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_54;                         // 0xEFB0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53;                         // 0xF030(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_52;                         // 0xF0B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_51;                         // 0xF130(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_50;                         // 0xF1B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_49;                         // 0xF230(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_48;                         // 0xF2B0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_47;                         // 0xF330(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_21;                         // 0xF3B0(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0xF508(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_46;                         // 0xF5B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0xF638(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0xF6B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0xF738(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0xF7B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0xF838(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0xF8B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0xF938(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0xF9B8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0xFA38(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_20;                         // 0xFAB8(0x0158)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_13;                            // 0xFC10(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0xFCD8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0xFD78(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0xFE18(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0xFEB8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_54;                          // 0xFF58(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_53;                          // 0xFF80(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_52;                          // 0xFFA8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_51;                          // 0xFFD0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_50;                          // 0xFFF8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_49;                          // 0x10020(0x0028)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0x10048(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0x100F8(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x101A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x101D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x101F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x10220(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x10248(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x10270(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_48;                          // 0x10298(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_47;                          // 0x102C0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_46;                          // 0x102E8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_45;                          // 0x10310(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x10338(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_12;                            // 0x103D8(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x104A0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x10540(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_44;                          // 0x10570(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_43;                          // 0x10598(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42;                          // 0x105C0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_41;                          // 0x105E8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x10610(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_11;                            // 0x106B0(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x10778(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x10818(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_40;                          // 0x10848(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x10870(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x108A0(0x00B0)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_5;                          // 0x10950(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x109F0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x10A70(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x10AF0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x10B70(0x0080)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x10BF0(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_19;                         // 0x10C20(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39;                          // 0x10D78(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_38;                          // 0x10DA0(0x0028)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_4;                         // 0x10DC8(0x00B0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_3;                         // 0x10E78(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_18;                         // 0x10F28(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_37;                          // 0x11080(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_36;                          // 0x110A8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x110D0(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_10;                            // 0x11170(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_10;                      // 0x11238(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x11288(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x11308(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x11388(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x11408(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_17;                         // 0x11488(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_16;                         // 0x115E0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_35;                          // 0x11738(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_34;                          // 0x11760(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_3;                  // 0x11788(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x11858(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x118D8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x11958(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x119D8(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_15;                         // 0x11A58(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_9;                       // 0x11BB0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x11C00(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x11C80(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x11D00(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x11D80(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_14;                         // 0x11E00(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x11F58(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x11FF8(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_33;                          // 0x12098(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_32;                          // 0x120C0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_13;                         // 0x120E8(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8;                       // 0x12240(0x0050)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_3;                             // 0x12290(0x0058)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_31;                          // 0x122E8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_12;                         // 0x12310(0x0158)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7;                       // 0x12468(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x124B8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x124E0(0x0048)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK;                                     // 0x12528(0x00F8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_13;                  // 0x12620(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_13;                  // 0x12640(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x12660(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_12;                  // 0x127B8(0x0020)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer_2;                         // 0x127D8(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x12888(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x128B0(0x0158)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x12A08(0x00B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x12AB8(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x12BA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x12C28(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x12CA8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x12D28(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_4;                          // 0x12DA8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x12E48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x12EC8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x12F48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x12FC8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x13048(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x130C8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x13148(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x131C8(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x13248(0x0028)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_3;                          // 0x13270(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x13310(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x13390(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x13410(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x13490(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0x13510(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x135C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x13640(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x136C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x13740(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x137C0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_9;                             // 0x137E8(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x138B0(0x00A0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_8;                             // 0x13950(0x00C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6;                       // 0x13A18(0x0050)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_12;                  // 0x13A68(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_11;                  // 0x13A88(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x13AA8(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_11;                  // 0x13B98(0x0020)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0x13BB8(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0x13C68(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0x13D18(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x13DC8(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x13E78(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x13F28(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x13FD8(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x14088(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x14190(0x00A0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_4;                              // 0x14230(0x0368)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x14598(0x00F0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization_2;                         // 0x14688(0x0070)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x146F8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x14720(0x0158)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_2;                  // 0x14878(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x14948(0x0028)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_12;                       // 0x14970(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_2;                          // 0x149F0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x14A90(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x14AB8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x14AE0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x14C38(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_7;                             // 0x14C60(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x14D28(0x00A0)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_11;                       // 0x14DC8(0x0080)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_10;                       // 0x14E48(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_6;                             // 0x14EC8(0x00C8)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_9;                        // 0x14F90(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x15010(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x15118(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x15138(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x15158(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x15260(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x15280(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_5;                             // 0x152A0(0x00C8)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_8;                        // 0x15368(0x0080)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_3;                              // 0x153E8(0x0368)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x15750(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x15778(0x0158)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x158D0(0x00F0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x159C0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x159E8(0x00A0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x15A88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x15AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x15AD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x15B00(0x0028)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_7;                        // 0x15B28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x15BA8(0x0030)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_6;                        // 0x15BD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x15C58(0x0030)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_5;                        // 0x15C88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x15D08(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x15D38(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x15DE8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x15F40(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x15F68(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x16028(0x0028)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_2;                              // 0x16050(0x0368)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x163B8(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x16510(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x165D0(0x0028)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x165F8(0x0368)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_5;                       // 0x16960(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x169B0(0x0050)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x16A00(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x16AD0(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4;                             // 0x16AF8(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x16BC0(0x00A0)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_4;                        // 0x16C60(0x0080)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_3;                        // 0x16CE0(0x0080)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_3;                             // 0x16D60(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x16E28(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x16F30(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x16F50(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x16F70(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x17078(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x17098(0x0020)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x170B8(0x00C8)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching_2;                        // 0x17180(0x0080)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x17200(0x0118)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x17318(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x173B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x17510(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x17538(0x00C8)
		struct FAnimNode_DistanceMatching                          AnimGraphNode_DistanceMatching;                          // 0x17600(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x17680(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x177D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x17800(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x17828(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x17850(0x0050)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x178A0(0x0030)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x178D0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x17A28(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x17A50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x17A78(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x17AA0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x17AC8(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x17AF0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x17C48(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x17C70(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x17D10(0x0028)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x17D38(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x17D88(0x00C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x17E48(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x17E68(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x17F58(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x17F78(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x18068(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x18088(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x180A8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x18198(0x00F0)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve_2;                             // 0x18288(0x0058)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x182E0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x18380(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x183A8(0x00C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x18468(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x18488(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x18578(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x18598(0x00F0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x18688(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x186A8(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x186C8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x187B8(0x00F0)
		struct FAnimNode_ModifyCurve                               AnimGraphNode_ModifyCurve;                               // 0x188A8(0x0058)
		struct FAnimNode_StrideWarping                             AnimGraphNode_StrideWarping;                             // 0x18900(0x01C8)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x18AC8(0x0050)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x18B18(0x0070)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x18B88(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x18C90(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x18D98(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x18DB8(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x18DD8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x18E00(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x18E28(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x18EE8(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x18F10(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x18F30(0x0020)
		class FName                                                __CustomProperty_DynamicRightHandIKParent_6BAD20394BAE5E3D2DB945A3C8D34C92; // 0x18F50(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                __CustomProperty_DynamicLeftHandIKParent_A47DF93A4DF8E65D49D3579C91EC13ED; // 0x18F58(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                __CustomProperty_DynamicRightHandIKRoot_CC0F403141D6C47267EB898269C33E75; // 0x18F60(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                __CustomProperty_DynamicLeftHandIKRoot_CC0F403141D6C47267EB898269C33E75; // 0x18F68(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_HeadOffset_CC0F403141D6C47267EB898269C33E75; // 0x18F70(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      __CustomProperty_EngagedAlpha_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18F7C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_CollisionTraceEndOffset_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18F80(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_AnimRotOffset_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18F8C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             __CustomProperty_CameraOffset_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18F98(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_SightLineRelativeRotation_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18FA4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             __CustomProperty_SightLineRelativeLocation_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18FB0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_FirearmPivotOffset_B8DD03284C4303699B2B9D8EB93EBBDE; // 0x18FBC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsRagDoll;                                              // 0x18FC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IAHZ[0x3];                                   // 0x18FC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemAnimationType;                                       // 0x18FCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementSpeed;                                           // 0x18FD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x18FD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAngle;                                           // 0x18FD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x18FDC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableFootIK;                                           // 0x18FE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V99G[0x3];                                   // 0x18FE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkSpeed;                                            // 0x18FEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastVelocity;                                            // 0x18FF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForwardLocomotion;                                      // 0x18FFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOVW[0x3];                                   // 0x18FFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxRunSpeed;                                             // 0x19000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSprintSpeed;                                          // 0x19004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StrideDirection;                                         // 0x19008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StrideScale;                                             // 0x19014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanAlpha;                                               // 0x19018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimatedWalkSpeed;                                       // 0x1901C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimatedRunSpeed;                                        // 0x19020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimatedSprintSpeed;                                     // 0x19024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchAlpha;                                             // 0x19028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimPitch;                                                // 0x1902C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimYaw;                                                  // 0x19030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAnimPlayRate;                                    // 0x19034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Aim_HipLocAdd;                                           // 0x19038(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Aim_HipRotAdd;                                           // 0x19044(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Aim_SpineRotAdd;                                         // 0x19050(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Aim_ClavRotAdd;                                          // 0x1905C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Aim_HeadNeckRotAdd;                                      // 0x19068(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXBJ[0x4];                                   // 0x19074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        PreviewMontage;                                          // 0x19078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EngagedAlpha;                                            // 0x19080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OffTargetAlpha;                                          // 0x19084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            FirearmPivotOffset;                                      // 0x19088(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WAA2[0x4];                                   // 0x19094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       DebugAnimOverlayPose;                                    // 0x19098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugOverlay;                                           // 0x190A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUnarmed;                                                // 0x190A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRunning;                                                // 0x190A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSprinting;                                              // 0x190A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EAnimCardinialDir                                          CardinalDir;                                             // 0x190A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3NMV[0x3];                                   // 0x190A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirectionBlendTime;                                      // 0x190A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementAlpha;                                           // 0x190AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementBlendSpeed;                                      // 0x190B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SprintNegateLeftHandIKAlpha;                             // 0x190B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevEngagedAlpha;                                        // 0x190B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevOffTargetAlpha;                                      // 0x190BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmedSprintSpeed;                                        // 0x190C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnarmedSprintSpeed;                                      // 0x190C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmedCrouchingSprintSpeed;                               // 0x190C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnarmedCrouchingSprintSpeed;                             // 0x190CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmedRunningSpeed;                                       // 0x190D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnarmedRunningSpeed;                                     // 0x190D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmedCrouchingRunningSpeed;                              // 0x190D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnarmedCrouchingRunningSpeed;                            // 0x190DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightHandOverlayAlpha;                                   // 0x190E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O2E7[0x4];                                   // 0x190E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   RightHandOverlay;                                        // 0x190E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftHandOverlayAlpha;                                    // 0x190F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_91HI[0x4];                                   // 0x190F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   LeftHandOverlay;                                         // 0x190F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftHandRelativeOffset;                                  // 0x19100(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EyeRightOffset;                                          // 0x1910C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EyeLeftOffset;                                           // 0x19118(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SightLineRelativeLocation;                               // 0x19124(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SightLineRelativeRotation;                               // 0x19130(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LowReadyHighExplicitTime;                                // 0x1913C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AnimRotOffset;                                           // 0x19140(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLocallyViewed;                                        // 0x1914C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3IJH[0x3];                                   // 0x1914D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LocallyViewedAlpha;                                      // 0x19150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADSMovementWeight;                                       // 0x19154(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastActorYaw;                                            // 0x19158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActorYaw;                                                // 0x1915C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnInPlaceOffsetThreshold;                              // 0x19160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchingTurnInPlaceOffsetThreshold;                     // 0x19164(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TurnInPlaceRotation;                                     // 0x19168(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            HeadOffset;                                              // 0x19174(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bZeroTurnInPlaceAngle;                                   // 0x19180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPDA[0x3];                                   // 0x19181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CollisionTraceEndOffset;                                 // 0x19184(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NegateLeftHandIKAlpha;                                   // 0x19190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlayingAnyMontage;                                      // 0x19194(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPlayingAnyMontagePure;                                  // 0x19195(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsReloading;                                            // 0x19196(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseLowPosition;                                         // 0x19197(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LowHighAlpha;                                            // 0x19198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TorsoPitchThreshold;                                     // 0x1919C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditiveIdleStrength;                                    // 0x191A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditiveIdleAlpha;                                       // 0x191A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsOnLadder;                                             // 0x191A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_69AR[0x3];                                   // 0x191A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DynamicLeftHandIKRoot;                                   // 0x191AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UseDynamicLeftHandIKRoot;                                // 0x191B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DynamicRightHandIKRoot;                                  // 0x191B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UseDynamicRightHandIKRoot;                               // 0x191C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftFootLeanOffset;                                      // 0x191C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightFootLeanOffset;                                     // 0x191D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastCharacterLadderZ;                                    // 0x191DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLadderExitTop;                                          // 0x191E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLadderExitBottom;                                       // 0x191E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RTSA[0x2];                                   // 0x191E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LadderDistance;                                          // 0x191E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LadderMiddleDistance;                                    // 0x191E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LadderTopExitOffset;                                     // 0x191EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Aim_HeadNeckRotAdd_Ladder;                               // 0x191F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HACKForBinosAndTabletAlpha;                              // 0x191FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HACKResetItemAnimationTypeDelay;                         // 0x19200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilBlendAlpha;                                        // 0x19204(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ActiveFloatCurves;                                       // 0x19208(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MinStrideScale;                                          // 0x19218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxStrideScale;                                          // 0x1921C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HACKFirearmArmsAlpha;                                    // 0x19220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftElbowOffTargetAlpha;                                 // 0x19224(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverlayLayer(const struct FPoseLink& OL_BasePoseInput, struct FPoseLink* OverlayLayer);
		void AimingLayer(const struct FPoseLink& NoAimPose, struct FPoseLink* AimingLayer);
		void BlendingLayer(const struct FPoseLink& BasePose, const struct FPoseLink& Movement, const struct FPoseLink& Overlay, struct FPoseLink* BlendingLayer);
		void MovementLayer(const struct FPoseLink& InPose, struct FPoseLink* MovementLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetDynamicRightHandIKRoot(const class FName& NewDynamicRightHandIKRoot);
		void SetDynamicLeftHandIKRoot(const class FName& NewDynamicLeftHandIKRoot);
		void UpdatePositionAlphas();
		void UpdateMovementVars();
		void UpdateTurnInPlace();
		void UpdateCardinalDirection();
		void DrawDebug();
		void UpdateAimingVars();
		void UpdateStrideScale();
		void UpdatePreviewCharVars();
		void UpdateCharVars(class AGBCharacter* InCharacter);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_0B17B1BF418077B7F5372F93B57D51A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_2E545F9E49830136CA32F1845E07C0BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_B9FA35C8444B6FB6A5726BB33933084A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_TransitionResult_598A72774BFF9A92607A1B9EBD4AE817();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_C469456B4C2D89B4DDB10485A7C1DD72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_FC5D21984C2307D60D63C6982DBCB3A0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_5F0B4B004E25567F3A27AA895C0165D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_398741FE45C7EA25495F878F6930BDCB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_90F85F90424D88C47F748D867F625E26();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_330C525F43121A08DAA6709AC9F645E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F5B86C0A40DD825D79852AB280857EC0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_DA06CDA84DE17D2BE8FB25B4BC16DDBD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_507B3DC141B3DD917BB8BDA21E847766();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void UpdatePreviewMontage();
		void UpdatePreviewOverlay();
		void AnimNotify_RightFootDown();
		void AnimNotify_LeftFootDown();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5E6FE1FA4C423D0C17C7249551533DDB();
		void BlueprintInitializeAnimation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_F10627DB4BE0DA414C8B3E88072C0E3C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_5110DBE24A5AABF8101B9187E74A0E8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_DistanceMatching_9FB0D26C4B195BA1A75A07836DEBB1ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_CD623C0A45909ECCD553E19EF0A7DEF0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_D45752B148C7691A07CC2AA9CB277568();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_C3541ED643CFADD6FFF6F784E5FD06CB();
		void AnimNotify_LeftHandGrab();
		void AnimNotify_RightHandGrab();
		void HACKForBinosAndTablet();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Character_AnimGraphNode_ModifyBone_AFEC06D64FD0644C4E761E86D4B4F932();
		void ExecuteUbergraph_ABP_Character(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
