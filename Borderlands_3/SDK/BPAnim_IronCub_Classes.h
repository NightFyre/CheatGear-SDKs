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
	 * AnimBlueprintGeneratedClass BPAnim_IronCub.BPAnim_IronCub_C
	 * Size -> 0x379A (FullSize[0x449A] - InheritedSize[0x0D00])
	 */
	class UBPAnim_IronCub_C : public UIronBearAnimInstance_ThirdPerson
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D00(0x0008) Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7BC4EE2C4196BCF401E527963701F1D4; // 0x0D08(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6920E5B644A96DE73D39D181B8E38376; // 0x0D50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_69E2E7244F4C709E2C52DEB7DE26EC35; // 0x0D98(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C8432EFB456B8B1549D09E8006ECC38E; // 0x0E88(0x00F0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD; // 0x0F78(0x0118)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698; // 0x1090(0x0118)
		unsigned char                                              UnknownData_7G5S[0x8];                                   // 0x11A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxAnimNode_LegIK                                  GbxAnimGraphNode_LegIK_837FA3D8481BAD81C67A9CA7F0C280A6; // 0x11B0(0x08B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AF2E7ECF4AA5180EBCED56ABFED487CC; // 0x1A60(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_CC01DCC549552587D5C6A3AFCCAE9094; // 0x1AB0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_39D7BB7943D9122D3B8A14A10E1ED918; // 0x1B00(0x0050)
		struct FGbxAnimNode_Spin                                   GbxAnimGraphNode_Spin_0A20A1DE46B6FB336C37EBBAB9816A4D;  // 0x1B50(0x0178)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_877C217842479244A919DAB0F6520D46; // 0x1CC8(0x0120)
		unsigned char                                              UnknownData_IRQR[0x8];                                   // 0x1DE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5E6A57B3457ED81B491D419D92D82B51;     // 0x1DF0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_771314CF420FD5F2B73F41B439C0B9E6; // 0x1EA0(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_C86FE32D4DCD9C8F2B26FF9FC75C61B9; // 0x1F80(0x0120)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B; // 0x20A0(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25B5E85B424DA2FB0E470A96738B89F9; // 0x21C0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8EC5A7484FB9E3F82676799F26470B17; // 0x2210(0x0050)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26; // 0x2260(0x0238)
		unsigned char                                              UnknownData_NEHU[0x8];                                   // 0x2498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D4940CDA41285F16FE08EC9016C84980;     // 0x24A0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_34AFF36142B9FCE79A0F6AB9EA048D9C; // 0x2550(0x00E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E157331E4E3160201CF1B286EA18EE7B;     // 0x2630(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_1B177972467400E28E759B8A8102613D; // 0x26E0(0x0120)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11; // 0x2800(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A314E74B41499D12460053AD6D010935; // 0x2920(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_0F89CF884252DDBFBD993D83C5118397; // 0x2970(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5BB6566043B892E875BBA18ACE6C85F9; // 0x29C0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7D5EC078496CC553ABE41988BD4CB047; // 0x2A10(0x0050)
		struct FAnimNode_AimOffsetLookAt                           AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1; // 0x2A60(0x0260)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121; // 0x2CC0(0x0120)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6B442868410C78941187A7B38F3E52EE; // 0x2DE0(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A5E6A6D74387F6D6500160ACCC83EC7B;     // 0x2E60(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_1C7EE06845A98FDF654624926431CBAA; // 0x2F10(0x00E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1B85C87D49BBB280AC5966976CCC8453;     // 0x2FF0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_06E37EE146ED8E3D1D9654A2CD480343; // 0x30A0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38AB0BF042907C62D011918114ED3E89; // 0x30F0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_94F905FE4E539EF79A5E8DB652F68F85; // 0x3140(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB; // 0x3190(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FB94C9234D38FF2F7D475F838376A1E5; // 0x31E0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BB4772AC4229C06860F25DB2E5D9D5EF; // 0x3230(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB; // 0x3280(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08; // 0x32D0(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F83E50F0484216A521392C89609FF856; // 0x3320(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0AD8D2BE487041A1AB13EBAD034EC705; // 0x3440(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0F5FF8B049AEB1ACCB2680BE9B81758C; // 0x3530(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C4BE6042487581E840864C81864D7195; // 0x3620(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_1CF1DCDC45C09FE093765B81BDEEAE59; // 0x3710(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1; // 0x3758(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AEC202F443753CC8BE025A84846D2D9B; // 0x38B8(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_F19BCB2949FD0CA5A46C169C122FA4B4; // 0x3900(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D70AA5B9473EA8BEE101CABE615AE890; // 0x3988(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4; // 0x39D0(0x00D0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_754BEEA74E73566947537CA791E53098; // 0x3AA0(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FFC69C884A720D396716B6AEDA363F23; // 0x3B90(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_4713B67E4EDE05E80339DC9E01958DB1; // 0x3C80(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47; // 0x3CC8(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D27870FD40F947F92FA7FD843B29B5EE; // 0x3E28(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5; // 0x3E70(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_75ED71D64C90CAE45874F4BB6465729E; // 0x3FD0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7BE2C38046CA7C5411ABF9990F78FDD4; // 0x4018(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_CEC05C614060F86E485CC2BBBABBE513; // 0x41A0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_AC54F5F04AA7309C64410F807CE40B56; // 0x41E8(0x0188)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_F4DE1133483EA7C897797FAA7E38719B; // 0x4370(0x00E0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_9888C2244ADE3936B3C991BF72FB6B63;     // 0x4450(0x0048)
		bool                                                       HasTarget;                                               // 0x4498(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LittleArms;                                              // 0x4499(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PassThroughHardpointData(EIronBearHardPointOrientation HardpointSide, Enum_IronBearHardpointList Hardpoint);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_BA156C0A4246809F6FFEB3833AC66E47();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5BB25FBB43EF9D6BA3518688014C45D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9DB828944A7B9D2601970EB4BBAF9A08();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_FABA91404B45E518D95C559F1C5BD0EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TransitionResult_9E641E194FB50B336FD408A761397FDB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_F6D803884A85F671BC17BEADBB7ED121();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_AimOffsetLookAt_5E428D5F4A09E4201D415FB70D1AE5C1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_LayeredBoneBlend_AE35CB464D5D9C1F2867DA9484385F11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_RotationOffsetBlendSpace_49DA2C904ABC6102325430ADAD716E26();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_TwoWayBlend_22A04F004393B3CF1D6870AAD6D2126B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendListByBool_AD59B6794B6D5F48F7EE1788D01E35E4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_BACC831441E8C73E68628A8324DAA698();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_ApplyAdditive_1044CEC749B05B6D8808A3BD2AA690BD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_IronCub_AnimGraphNode_BlendSpacePlayer_5B8CA68945C538964ED1C38099D24CC1();
		void ExecuteUbergraph_BPAnim_IronCub(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
