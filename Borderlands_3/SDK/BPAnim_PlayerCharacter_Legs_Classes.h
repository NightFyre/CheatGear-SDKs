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
	 * AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_Legs.BPAnim_PlayerCharacter_Legs_C
	 * Size -> 0x1A88 (FullSize[0x2570] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_PlayerCharacter_Legs_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CA3S[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F418B1E948C606CA90B4818A226DAB88;     // 0x0AF8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_C73FA35A403445EC1769799D38D61AFC;     // 0x0B40(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_389A81F7465AD1DEE6B0B0BF9EB2B325; // 0x0BF0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_ED4A6A0344DC0ACF6086938A83599950; // 0x0C40(0x0050)
		struct FGbxAnimNode_LegIK                                  GbxAnimGraphNode_LegIK_A4B45869481CD6F438D394900DED2F89; // 0x0C90(0x08B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_04F38AFE45317ABD5C2617ACAA0F4D74; // 0x1540(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_C3CE27A044A1326085DD28B097F7FC2B; // 0x1588(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18BFF75447D6275AA5A75D8F53004C74; // 0x15D0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F57B06CE48482B2D21D889AD995B5FE1; // 0x1620(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_078617DB41F22A3E388E9A8DD350BF53; // 0x1670(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AF1925424E5E12F56AC728B158E6227C; // 0x16C0(0x0050)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4B3E6FF04BA487ACA7CD2A95BA00D354; // 0x1710(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C4DF967944B8B2527741CE93EEECC631; // 0x1870(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_29B4346D4431D4AFA7B73492983664FB; // 0x18B8(0x0120)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_62F2A7E84A0D3951E51EF28A3514CF72; // 0x19D8(0x0160)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_694BAEFA49663C64715F818F135AABA8; // 0x1B38(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_618720B44F6B6CFB9C7F40921855F901; // 0x1C98(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FB16E2CE4E267E0BF19848A330746EAA; // 0x1CE0(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C224AEA641FE72F60C3666B916CB41D2; // 0x1DD0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_D3BB0484483E0F4A66A9AEA9DA69A090; // 0x1E18(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_4B54D8C54630F7B971D54699D597E41C; // 0x1F08(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_437A3DD14FCBDEC04E4E5E982033D97E; // 0x1F50(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A57CD7404E4746CB0231EE9430550ADE; // 0x20D8(0x0048)
		struct FGbxAnimNode_CopyParentTransforms                   GbxAnimGraphNode_CopyParentTransforms_4241F1FD4192DFCFBEE78A88A5E79F13; // 0x2120(0x0040)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_143649224B3316F32E3F3D92FC877BA9; // 0x2160(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_E75A591D4AA868A0CD5626A32E635433; // 0x21A8(0x0188)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_04C998DD4FB895613C6D31BA783A25A9; // 0x2330(0x0238)
		class FName                                                Leg_AO;                                                  // 0x2568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_BlendSpacePlayer_4B3E6FF04BA487ACA7CD2A95BA00D354();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TransitionResult_F57B06CE48482B2D21D889AD995B5FE1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TwoWayBlend_29B4346D4431D4AFA7B73492983664FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_BlendSpacePlayer_62F2A7E84A0D3951E51EF28A3514CF72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_BlendSpacePlayer_694BAEFA49663C64715F818F135AABA8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TransitionResult_18BFF75447D6275AA5A75D8F53004C74();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TransitionResult_ED4A6A0344DC0ACF6086938A83599950();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TransitionResult_389A81F7465AD1DEE6B0B0BF9EB2B325();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_RotationOffsetBlendSpace_04C998DD4FB895613C6D31BA783A25A9();
		void OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PlayerCharacter_Legs_AnimGraphNode_TransitionResult_AF1925424E5E12F56AC728B158E6227C();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_BPAnim_PlayerCharacter_Legs(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
