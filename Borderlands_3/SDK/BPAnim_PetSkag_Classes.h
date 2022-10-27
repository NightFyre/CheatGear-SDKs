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
	 * AnimBlueprintGeneratedClass BPAnim_PetSkag.BPAnim_PetSkag_C
	 * Size -> 0x3B96 (FullSize[0x467E] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_PetSkag_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_HP67[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5CA1443E4E586AD5ABEEAB84310F1B4B;     // 0x0AF8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_81D106DE4C0823726FED8985125E9DBC; // 0x0B40(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_E2EAC33F4437ED9099A757A5273D26AC; // 0x0B90(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6C98A8834892D852B20440954A24E02A; // 0x0BE0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_DE6715CF495A3FD312BCC28C4825DF24; // 0x0C30(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_099571CB483E439E495B13B35F598C1D; // 0x0C80(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_A111FA934A3791400635969DA2790AAC; // 0x0CD0(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_74A44760416AA4EDBFB41F8DF503A468; // 0x0D20(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_555049814FEB7FF2C5189C88A9BEE829; // 0x0E10(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_668BD7E448C9E6F07CA1CFBDAAD1B0A1; // 0x0E58(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_85E242404D4C60718336109FCE66FA48; // 0x0F48(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5FBB70B34757C2D2EC775E9EAE05D52E; // 0x0F90(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F04F249844058B50DB7325823BE62DD1; // 0x1118(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1BD373154618035B4B1B589545879828; // 0x1160(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBE9AB0B471FED065062CAA03F813196; // 0x11B0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_84BFF6D8461D8713207D448A1457F8C1; // 0x1200(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_859736104DFCCD9859FDA0A6F1AAE70F; // 0x1250(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BBD8D5474DB2DB913ED3429DFD7855FB; // 0x12A0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FEFB1AFB4938A72730E002B228875265; // 0x12F0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1C2681B2422512E6A74BA4833902B8B1; // 0x1340(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_842355D74DA290CA9B8B1897457780B1; // 0x1390(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_593588B44B6CDBB7A340D1A39F81E3A4; // 0x13E0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_338A0A3842C551248E8859AFF45C4894; // 0x1430(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5CE24FE34E3B3F9B2B10B593CD612D68; // 0x1480(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B89E9C50428EA7EF499DED90D4700211; // 0x14D0(0x0050)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_035183DE46524745D7F1DB9C37B0021B; // 0x1520(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_5FA5ADED45925D37874E8E8CDF7F3243; // 0x15A8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_1E6C8CDE4BFA79144C1AA6BEF7C06B3F; // 0x15F0(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_A44C8EE945204C5CAD1435BCC3209F69; // 0x1750(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_D6AE98184C1CA363EF87BA80A897EAAB; // 0x1798(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_AB88B4204C3F2B64F2E2AAB25379A80F; // 0x1820(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_1CAC63E14D9B18C67FE8F99A9E0DC33E; // 0x1868(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F0F51DFB4F2BB2FA46311EAF7E96A6C6; // 0x18F0(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_19483D684918345813A3DDAA06255C45; // 0x1938(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_2B1376794BD182192449CFAF8587FB77; // 0x19C0(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_E5CBF3844119F2693FFD36ADBB4076D1; // 0x1A08(0x0160)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_95D60BB043EF3C6332E448B40B23A092; // 0x1B68(0x0160)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_7EE14E5B4F5D2DC97DDC27B5828BDF2B; // 0x1CC8(0x00E8)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_87D9F951491100807A5DF7A2CCC4045E; // 0x1DB0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9940101A40EE391DCD5BBCBB59091494; // 0x1DF8(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_13F4F3BC4D5DE6B722BB3996C9C4D5E1; // 0x1EE8(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6D0450204AACAF1171809EA1A8385A09; // 0x1F30(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_33E48EBD4BB73DDC423D9E8008D65A83; // 0x20B8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_92B7EE294361CB78C5977DA827DA1390; // 0x2100(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_08CC79D54AF6043E96BD7A84607E1213; // 0x2150(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_08EB486942C120847C0A2EB7021168AA; // 0x21A0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_09A519214B21CFB3813A82AEB8A34863; // 0x21F0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6C83C2D546B01725AA28979ACE24604E; // 0x2240(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10FA0CE94E2457D3FD933EBC9B4E2C2B; // 0x2290(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_77E8AD4244915FF057CBDEB2CA41DBC8; // 0x22E0(0x0050)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_183944D84177FBA29D28DEBBBEF3D032; // 0x2330(0x0050)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8E8DBA4C46C189178CF2198A41174F1B; // 0x2380(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F01FBB84436C56CC5B8BD79D3C305803; // 0x24E0(0x0048)
		struct FGbxAnimNode_AnimTable                              GbxAnimGraphNode_AnimTable_C2AA15BF4E9F2F72E9BBF8B69331C7E0; // 0x2528(0x0088)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_E42E45DB40D925C840A24A8F6A0B9779; // 0x25B0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E982BFBE4FCE0CDCB2DF008E43C1C350; // 0x25F8(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_F726455249A62A32CD8497AF974EDB4F; // 0x26E8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9BFAC86B4CAD77F545764989DCAA9677; // 0x2730(0x0160)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_C261517845E2517B33FD6A9DEB50EFBB; // 0x2890(0x00F0)
		struct FGbxAnimNode_BlendListByFloatInRange                GbxAnimGraphNode_BlendListByFloatInRange_7FE68EF14502C39BBCD6FB9FAF557F8B; // 0x2980(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_225725C944C73F41835EBAA517EBADB4; // 0x2A68(0x0160)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_FF01551A442309B589B5C2A69100278F; // 0x2BC8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_AD21EA52456C39FC428BCDAE12377F84; // 0x2C10(0x00F0)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_8017884940E73C5563C7EFB4A0E7C1D9; // 0x2D00(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_511A98D04ADF2411C042FCBE38DCA091; // 0x2D48(0x0188)
		struct FAnimNode_Root                                      AnimGraphNode_StateResult_C341B9854B30C808CD8717995B256653; // 0x2ED0(0x0048)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_21D989AB41E392DE7604B5866CE773DD; // 0x2F18(0x0188)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_68BF98564C191BE9604A1CB8D1BB08B8; // 0x30A0(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7EC250A248EC9A54986C539818F33F4A; // 0x3180(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_A43106CE4B6E1AFD81AA8DA7FF3318E7; // 0x31D0(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_D82CBF514A1B41F0223DEE9AFE4023E1;     // 0x3220(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F30200BC491CCB3B028DD1BA4BE55A50; // 0x32D0(0x0120)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_57C132C245C555FA85FE52B6C4122921;     // 0x33F0(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_E6E1E2A24FC3127CFC62C89DF143295E; // 0x34A0(0x00E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_F6AD1AE04FAC394DC55A9390859990A1; // 0x3580(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_462574B14B04FE8CEFE182A9BF37C576; // 0x35C8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_FCEA670F490C567D6660E4AB32D62208; // 0x3610(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_EB395DFC4E76D16D88E7288954FDCD1F; // 0x36F0(0x0050)
		struct FGbxAnimNode_LegIK                                  GbxAnimGraphNode_LegIK_6B74D2874075184731E4478DF21C2172; // 0x3740(0x08B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_A037A3CD494F00FACB7B8B9781E95D7F;     // 0x3FF0(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D7B47251414F1C0F323E1FBBC8B5DB6F; // 0x40A0(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F10D1D2246F3A0EC19CF468AC2FE36A5; // 0x41C0(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_369E52A64914C49C91F648B24845F549; // 0x4210(0x0050)
		struct FGbxAnimNode_ApplyBoneModifyProfile                 GbxAnimGraphNode_ApplyBoneModifyProfile_6A7B352D47C9EA1DE59732B33E6F75D7; // 0x4260(0x0180)
		struct FAnimNode_AimOffsetLookAt                           AnimGraphNode_AimOffsetLookAt_1C58A93345475F065CE88D9BA204B59B; // 0x43E0(0x0260)
		class AOakCharacter*                                       Character;                                               // 0x4640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPawnMovementComponent*                              Movement_Component;                                      // 0x4648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Head;                                                    // 0x4650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Right_Arm;                                               // 0x4654(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Arms;                                                    // 0x4658(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Left_Arm;                                                // 0x465C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spine;                                                   // 0x4660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RootScale;                                               // 0x4664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseSPD_C_Run;                                           // 0x4668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnRate;                                                // 0x466C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomStart_Idle;                                        // 0x4670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkagVariations                                            EnemyVariants;                                           // 0x4674(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FXM8[0x3];                                   // 0x4675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Test;                                                    // 0x4678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Has_Fall_Anims;                                          // 0x467C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInSuicideStance;                                        // 0x467D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InitComponents();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_08EB486942C120847C0A2EB7021168AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_09A519214B21CFB3813A82AEB8A34863();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_10FA0CE94E2457D3FD933EBC9B4E2C2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_GbxAnimGraphNode_BlendListByFloatInRange_7EE14E5B4F5D2DC97DDC27B5828BDF2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_77E8AD4244915FF057CBDEB2CA41DBC8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_95D60BB043EF3C6332E448B40B23A092();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_8E8DBA4C46C189178CF2198A41174F1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_E5CBF3844119F2693FFD36ADBB4076D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_SequencePlayer_E982BFBE4FCE0CDCB2DF008E43C1C350();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_9BFAC86B4CAD77F545764989DCAA9677();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_SequencePlayer_C261517845E2517B33FD6A9DEB50EFBB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_GbxAnimGraphNode_BlendListByFloatInRange_7FE68EF14502C39BBCD6FB9FAF557F8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_225725C944C73F41835EBAA517EBADB4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_BlendSpacePlayer_1E6C8CDE4BFA79144C1AA6BEF7C06B3F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_SequencePlayer_AD21EA52456C39FC428BCDAE12377F84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_FEFB1AFB4938A72730E002B228875265();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_AimOffsetLookAt_1C58A93345475F065CE88D9BA204B59B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_A111FA934A3791400635969DA2790AAC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_DE6715CF495A3FD312BCC28C4825DF24();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PetSkag_AnimGraphNode_TransitionResult_E2EAC33F4437ED9099A757A5273D26AC();
		void OnStanceChanged();
		void ExecuteUbergraph_BPAnim_PetSkag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
