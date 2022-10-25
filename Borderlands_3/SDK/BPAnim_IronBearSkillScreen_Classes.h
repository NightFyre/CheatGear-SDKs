#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * AnimBlueprintGeneratedClass BPAnim_IronBearSkillScreen.BPAnim_IronBearSkillScreen_C
	 * Size -> 0x1FE0 (FullSize[0x2540] - InheritedSize[0x0560])
	 */
	class UBPAnim_IronBearSkillScreen_C : public USkillScreenIronBearAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0560(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_D99B301E46C91F77DB129E92CD315339;     // 0x0568(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D16904394F9FFFB9398C539997B33569;     // 0x05B0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3; // 0x0660(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CBA663C24A967712F2AA83BDB070B7DB; // 0x0730(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5A384C1F4E0F8531684BEBB2F3DFD724; // 0x0820(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_CD02A4534B7F27695C75EDB68B05318B; // 0x0910(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_71F92DC14632E9138EFB3F981E0FFFC6; // 0x0958(0x0188)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8DC2E6764D225C3CEC9528AF4107D799; // 0x0AE0(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8F0B71A8449421746680A78150043CA7; // 0x0BC0(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8A1EE6D649514EA38A08B9A901B3483D; // 0x0CB0(0x00F0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_DAFE5FD1473AE4723E4987A619512CF6; // 0x0DA0(0x0118)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5DC2D2A442A54F782E85A4808F9E745E; // 0x0EB8(0x0118)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_42AA7C3B44A5CC4AEB82F3A4FA36DD30; // 0x0FD0(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_B96BA36B4B67127AB5345892E2F12C79; // 0x1020(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_8908C29540228900EE216BA80984AB9A; // 0x1140(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_751DFB1E4534704223BAABAF380848C0; // 0x11C0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7F52F4774F7A1878EEFCF0B03377B381;     // 0x12E0(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_996760F547C1C1295178F8B5C5410221;     // 0x1390(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_44443AFB4340DDB771B97DB3A8F93A35; // 0x1440(0x00E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_34AF18364FE24C36F946CFB4C4A19F25; // 0x1520(0x00E0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510; // 0x1600(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A8C9892744012E225C08CD86675E9C3A; // 0x1720(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_B04029504280573A8A827BA3FF4DA387; // 0x1770(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5CCFC67747B997AA52EA4687403068E4; // 0x17C0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E96AF66F4682F32AB261C5B5897FC088; // 0x1810(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F1646AB54A15A1B1F1D4BBBF6F020872; // 0x1860(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7613753C48A54A282FC59E93B76A432F; // 0x18B0(0x0050)
		struct FGbxAnimNode_ForwardDynamics                        GbxAnimGraphNode_ForwardDynamics_E01202C14775A7174B6D93AA5EDE132C; // 0x1900(0x0730)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_683A678F4B6A3E0C96D53DA7277CB305; // 0x2030(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2653BE344E067DF285EAE291889B0EF0; // 0x2078(0x0048)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_0BA108914919B43519177F997DF4F89F;   // 0x20C0(0x0240)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_9090107A4880288B421D7FA7E9DC915F;   // 0x2300(0x0240)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_TwoWayBlend_A14E310843BA75C3029B8F92A9984510();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronBearSkillScreen_AnimGraphNode_BlendListByBool_9CB5B98D40FBCB963015E48236C674A3();
		void ExecuteUbergraph_BPAnim_IronBearSkillScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
