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
	 * AnimBlueprintGeneratedClass BPAnim_PetLoader.BPAnim_PetLoader_C
	 * Size -> 0x4AEC (FullSize[0x55D4] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_PetLoader_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FEJ8[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F68BC4CD4D4A356DF020929EF7DC3A51;     // 0x0AF8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_64BED90B4DD522DE78A214953040A3D0; // 0x0B40(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_D50B809A4375B13FF67BFE9FC5D7D7B5; // 0x0B90(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E50E37FA401F72F102F6E599EFA878AB; // 0x0BE0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A2F9C5884A879281C6F19A9FBDD2AFC5; // 0x0C30(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_349960FF4E64D5D092ACC7A267884FBC; // 0x0C80(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_52E171E14BCA48454BC08488328EC1DA; // 0x0D70(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_58F5CD9D4CF2C80BB0F8E2906C2B6588; // 0x0DB8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36DB8F2C450E25F3A13BC7BD03E5228A; // 0x0E08(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_EEBDC88B4A6A845EDF1739AB559D72EB; // 0x0E58(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3D3E1DD64E3357DF2167D1A5ADC1643B; // 0x0EA8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F203D1164D877CF5E9A212BE785AF49C; // 0x0EF8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_67A379A84BA39FB05B45899A2222E464; // 0x0F48(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1E50D3B941D33ADEEDE1B98E521742D9; // 0x0F98(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9DC6883E4C853F0B48091B98297FB6C0; // 0x0FE8(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7963B8094E5AC844FFEFDAAFDCED9FD9; // 0x1038(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_234DAEEA43B805DEE6E29DADB9098CEF; // 0x1088(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_354D50534657C70ADD32CDB82F53B2F5; // 0x10D8(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_228F94CC4DA53065416BE9923F447E9C; // 0x1160(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_3DCE76C14D1C027CFBEA6BB332DA710A; // 0x11A8(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_E91146AF4E74E14557CB649B959F5967; // 0x1230(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6A46068942CA84E9553F04BA9CC6BC2A; // 0x1278(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_393F5D094AA6D1F78BD35FBD9BF070F4; // 0x1368(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_9F3590B941CD2D46EEE39B847C0F66E9; // 0x13B0(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D5DD9A01496D7DBFFE68E289C3DD3636; // 0x1438(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_D612FED443A5DE41C9A230B14ACC7701; // 0x1480(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_40B033674C75644A33AF919106A840D7; // 0x15E0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6F9C367443F468C502ACB581E0940CF4; // 0x1628(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_042005CB46A6EE9F7120138A14871693; // 0x1718(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_F73C464F475F50C7BBD24B94BC325AA5; // 0x1760(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_08982C7B4232377D3020DE971D5524BA; // 0x18E8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_53C638B0442B8790AC37A99CA8687DCC; // 0x1930(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_AED2667B428FAAF6B1C64FBA06CB701A; // 0x1980(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_114A9AB446F3D80144E119B4FE20E34E; // 0x19D0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_98EA935946CA9206B7990D864B345C2F; // 0x1A20(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C7DC1FD04F9EC4EACAA51BA21E032747; // 0x1A70(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44E8DDF243F435C120F75B96046673EA; // 0x1AC0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2F51DF5E43FE9BC66078188E5F3AAD41; // 0x1B10(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_720C622149147F7E91D1E297379BFD10; // 0x1B60(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_1EB7D58347724FD46D451096EF91F8EB; // 0x1BB0(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_372040F24695581C3CFA61ADDB8E0253; // 0x1C38(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_28CCFC83403FC03AD9BFFA9C57E424EE; // 0x1C80(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_561DCFC949447AC5C9F28DA271000924; // 0x1D08(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_872166B548A8930DAB05D980D3D8D9F0; // 0x1D50(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_279C32A3466B5A0135FF9AA3008D26E8; // 0x1EB0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E51D2E8247D7E81A7B177FA6C9F5F502; // 0x1EF8(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_7BBF39AD4FA20A9CFD09E690540E4664; // 0x1FE8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_705965F14C649C6E117C478B8D2F426C; // 0x2030(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_DD878BF5405ED3DC8B74639ADFB6524D; // 0x2120(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_FC5F84D843B8FDE5F76CDBA15500E1CD; // 0x2208(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CFDBC7C246BE69F3FE34DEAAB9A3DEAF; // 0x22F8(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_EF42D74847575B5C384EA1B722EB4994; // 0x23E8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_D687CF9949446ABE356DD9BDB17795BA; // 0x2430(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_D713628E4C2A6919E08643B41F1EC940; // 0x25B8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_AB68AADB4747267C93FF6E9EB61F0DB8; // 0x2600(0x0188)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_099DE73840BE57EDE7DF3CA1D7725D6A; // 0x2788(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A233CB714C1017E700D3A1BF1EBF713A;     // 0x27D0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4D7B36B44A3062BA288550A517AF6CE1; // 0x2880(0x00E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_E14C93AC4852CAE48E579E94CD92E63D;     // 0x2960(0x00B0)
		struct FGbxAnimNode_LookAt                                 GbxAnimGraphNode_LookAt_8B11CABA4085BE3BAF71A5811570FB30; // 0x2A10(0x02D0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_A9A78CB14A39AE27830F1491BEDF2E87; // 0x2CE0(0x00E0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_A564842143CA7CF9B3084E9648975BE7; // 0x2DC0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_FCE6444945D32462870D31BE0C36FBAF;     // 0x2EE0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7CB45BF64DDF2298EA090EA207667AE3; // 0x2F90(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E7D4E9ED4DFC68B48AD0E8BC68D892C0; // 0x3070(0x0050)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_679760E54AEEDF579E1982A0A0FEE31A;   // 0x30C0(0x0290)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_33C23E4043F09553F7A7CCA78109A80E; // 0x3350(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_E67A6D1F480899F8B9592CBBD5541FDE; // 0x3470(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F5B6AB774A1D524A33BC07B1459C5604; // 0x3550(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_315FC8A349B81A3AD4969B99645D1192; // 0x35A0(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_251E2E754F9FFC6F0C0FFFBBF99BB4A2; // 0x35F0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_623D2F934780C10A319AB789C5CCF192;     // 0x3710(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_BBF269FA40037AE62D35D69128916D16; // 0x37C0(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_F7E76790450AB27ECA462289F2FAE777;     // 0x3810(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_715BEE8948E88715BCACE4993696E589; // 0x38C0(0x00E0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5C273FA74064B989BE6053A465BB34C9; // 0x39A0(0x00D0)
		struct FGbxAnimNode_LegIK                                  GbxAnimGraphNode_LegIK_EB7CEA2C469555A0D528399F09DA0256; // 0x3A70(0x08B0)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_0B66329140925C501A4FF4A41AB3996C; // 0x4320(0x05C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3EF209B9404E53911819E0A6899C18A7; // 0x48E0(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F2C2018F47C2283EE648378DC4AC7A8F; // 0x4A00(0x00F0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_0BB299B04EBCEAEB6A4A1C9DB8C31282; // 0x4AF0(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_941F222244E5B9A9B5D37CBC141A9395; // 0x4B38(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8B663B6A4776D7D06D94F68FDA3ECAAE; // 0x4C58(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_0D78AA4C45E4C5BAD987669BC4E450A5; // 0x4D38(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_053C0BA74CC750480E674D8F89FFF217; // 0x4D88(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0EF7C5F847744B196319B99369692DF1; // 0x4DD8(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2E1D2F5F4BD56E0C77B7E183F684CBEF; // 0x4E58(0x0050)
		unsigned char                                              UnknownData_9E1C[0x8];                                   // 0x4EA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9FACDB604B3AB2C204AFB9A4A9B196A5;     // 0x4EB0(0x00B0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4A9B2C5947D2D9A51E8CF7B93B12A885; // 0x4F60(0x0080)
		struct FGbxAnimNode_ApplyBoneModifyProfile                 GbxAnimGraphNode_ApplyBoneModifyProfile_7BE9B9E24F50EB47007B51A9F33CFD3C; // 0x4FE0(0x0180)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5F88B8644A4E4351E544F7AEC3063D0B; // 0x5160(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_D8209B03428FF101FEBB198CA7EC4F10; // 0x51B0(0x0050)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_4D7F412A440B6FB36C4DB9818920B578; // 0x5200(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A3C2F2DE4E06F60FE13D33AA5955E143; // 0x5320(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A1EEB69043883EC2CDFD2990F0595CA9; // 0x5370(0x0050)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_B8873DFC4CF3A42B3040EA9752A03DD8; // 0x53C0(0x0118)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27655E8540A7D6D62C1A688133AB8742; // 0x54D8(0x00F0)
		bool                                                       InPassiveStance;                                         // 0x55C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InCombatStance;                                          // 0x55C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C19R[0x2];                                   // 0x55CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      bCustomRightArmOverride;                                 // 0x55CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBadassType;                                             // 0x55D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_PetLoader_Variations                                  Pet_Variations;                                          // 0x55D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EXPLoader;                                               // 0x55D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Charge;                                                  // 0x55D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_C7DC1FD04F9EC4EACAA51BA21E032747();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_GbxAnimGraphNode_LookAt_8B11CABA4085BE3BAF71A5811570FB30();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_LookAt_679760E54AEEDF579E1982A0A0FEE31A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_RigidBody_0B66329140925C501A4FF4A41AB3996C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_LayeredBoneBlend_941F222244E5B9A9B5D37CBC141A9395();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TwoWayBlend_4D7F412A440B6FB36C4DB9818920B578();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_ApplyAdditive_B8873DFC4CF3A42B3040EA9752A03DD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_BlendSpacePlayer_D612FED443A5DE41C9A230B14ACC7701();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_SequencePlayer_CFDBC7C246BE69F3FE34DEAAB9A3DEAF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_SequencePlayer_FC5F84D843B8FDE5F76CDBA15500E1CD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_SequencePlayer_6A46068942CA84E9553F04BA9CC6BC2A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_GbxAnimGraphNode_BlendListByFloatInRange_DD878BF5405ED3DC8B74639ADFB6524D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_EEBDC88B4A6A845EDF1739AB559D72EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_SequencePlayer_705965F14C649C6E117C478B8D2F426C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_A2F9C5884A879281C6F19A9FBDD2AFC5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_E50E37FA401F72F102F6E599EFA878AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_D50B809A4375B13FF67BFE9FC5D7D7B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_TransitionResult_64BED90B4DD522DE78A214953040A3D0();
		void OnStanceChanged();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetLoader_AnimGraphNode_BlendSpacePlayer_872166B548A8930DAB05D980D3D8D9F0();
		void BlueprintBeginPlay();
		void OnAnimStyleChanged();
		void AnimNotify_LoopState();
		void AnimNotify_EndLoopState();
		void ExecuteUbergraph_BPAnim_PetLoader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
