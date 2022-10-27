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
	 * AnimBlueprintGeneratedClass BPAnim_MenuStandin.BPAnim_MenuStandin_C
	 * Size -> 0x4041 (FullSize[0x4B29] - InheritedSize[0x0AE8])
	 */
	class UBPAnim_MenuStandin_C : public UOakCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NBWW[0x8];                                   // 0x0AE8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F3B89C7748BD15975D075EAA9EEF4C7E;     // 0x0AF8(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_775AA384466D38C9DF7231A71734E091; // 0x0B40(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_740978454E7597A1A82CE6806E66CB5F; // 0x0B88(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_014872FB4A2461BA5EC520A2B0D4CEAE; // 0x0BD8(0x0050)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_352DC2C747D9E85FC95FC792BD480F9E; // 0x0C28(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_D8E624394B1424D4661CFA99E3CE55A9; // 0x0C70(0x00E0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356; // 0x0D50(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E; // 0x0DD0(0x0080)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125; // 0x0E50(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7AA1EB3E4DC36D568ED4C4A8AE644D69; // 0x0ED0(0x00E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_B4B635F0410E25477CC8A2A01BC66607; // 0x0FB0(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7B7CD20546A6BF4341140EAA5DF869CB; // 0x1090(0x00F0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_1875AA7A4544C1CBABE35CB7E7E31A9D;     // 0x1180(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_EBFFD1A847173137943728B1D74FF7B7; // 0x1230(0x00E0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B; // 0x1310(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4F6451E14C95608602D5C4AA8C73E17C;     // 0x1390(0x00B0)
		struct FGbxAnimNode_HandIK                                 GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089; // 0x1440(0x0370)
		struct FGbxAnimNode_HandIK                                 GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2; // 0x17B0(0x0370)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A; // 0x1B20(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2356C87E4AF4B06FDE6AA599869F3ECA; // 0x1BF0(0x0050)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079; // 0x1C40(0x0118)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E41868AC462839F1CA0BDA94B6D0FB2B; // 0x1D58(0x0050)
		unsigned char                                              UnknownData_DEUA[0x8];                                   // 0x1DA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_B7FE3BBD4C9230D3EBFEA39B92BE0465; // 0x1DB0(0x0290)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_50C7BA7B4E0F99C08309A7AFFF6A9F0A; // 0x2040(0x0290)
		struct FGbxAnimNode_ForwardDynamics                        GbxAnimGraphNode_ForwardDynamics_42AA08A6421399D13CBDEBB32FB5E9D9; // 0x22D0(0x0730)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9; // 0x2A00(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_FF2A9FEC4754357246D058BDCB87E983; // 0x2A80(0x00E0)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909; // 0x2B60(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AFB0C9F74D5646AA103ACF8A36CE9ACC; // 0x2C80(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_05A21D2F4893ED54CCFB158B797D71A1; // 0x2CD0(0x0120)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_F115B5E348349476136C97975CAFE325; // 0x2DF0(0x0118)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_578E59A34588C06C2308D388154D9F92; // 0x2F08(0x00F0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_72BC6CDD43BB9C6D2CA611AF014E5AA3; // 0x2FF8(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_01452E404D87BC3EF0ACD5A5DF490F39; // 0x30D8(0x0050)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_B81026CE4527365D9273F5A1661AD83E; // 0x3128(0x00F0)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B; // 0x3218(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9893F10B4FB45FE9D78716B4069AAF44; // 0x3298(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_C96AAC5547605ADFD96D738AE922DD91; // 0x3378(0x0050)
		struct FAnimNode_ApplyMeshSpaceAdditive                    AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439; // 0x33C8(0x0078)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_93476CB7413C7473C2CC75B0EE9D1451; // 0x3440(0x0050)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive_6092B60D4AE09FBFB28862B97100B863; // 0x3490(0x0068)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8CBCA01449596D84237081A362A96D90; // 0x34F8(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_E4B2EEEF4A73BC2C41EACB9360BAA1F3; // 0x35D8(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5E52119E44C10B08E95DE4893F09560F; // 0x3628(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8EC27E154C1813C56F13D8967DF1AF14; // 0x3678(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A; // 0x36C8(0x0120)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8BE51E174132353D79980B9674916804; // 0x37E8(0x00F0)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA; // 0x38D8(0x00D0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_306B324F466DFB9EBDF4F3878B685939; // 0x39A8(0x0050)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11; // 0x39F8(0x0118)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5204F4304746FBEDAA4E0EB6CBD60713; // 0x3B10(0x0050)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8F78F83C4B458FD4989EC580211EA2B8; // 0x3B60(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_AFA3D3A14750E527D9F8DDA15186422E; // 0x3C40(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_D286EDC148CF99E15E36D48D8CA83282; // 0x3C90(0x0120)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2DE700434E91692FD83DA9A902F9B7CA; // 0x3DB0(0x0050)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530; // 0x3E00(0x0120)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_0EBB0158498D8153AF241BBEA8AF9DB4; // 0x3F20(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8BF235764DFD2A387B059FA22ABFEA31; // 0x4040(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_F640260F4FDCEB5F615C2CB2BF562E51; // 0x4120(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_0C4ECD1845198A413CF72DA3D764B6B3; // 0x4170(0x0050)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_DCE1C5F646DFD613E8B1A68F59DBDA9A; // 0x41C0(0x0050)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_A3EFB64D44F4A1D495934C87B40461EF; // 0x4210(0x00F8)
		EAEnum_WeaponType                                          WeaponType;                                              // 0x4308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K8HO[0x7];                                   // 0x4309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LiveWeaponPoses;                                         // 0x4310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AOakWeapon*                                          BaseWeapon;                                              // 0x4320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Grip_Type;                                               // 0x4328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ForeGrip_Type;                                           // 0x432C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Pistol_Stock;                                            // 0x4330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0X7S[0x4];                                   // 0x4334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UManufacturerData*                                   Manufacturer;                                            // 0x4338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Current_Weapon_Type;                                     // 0x4340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Current_Weapon_Manufacturer;                             // 0x4344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VLA_AR;                                                  // 0x4348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0SKH[0x7];                                   // 0x4349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AlternateGrip;                                           // 0x4350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LeftGrip;                                                // 0x4358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WeaponMode;                                              // 0x4360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SecondaryModePart;                                       // 0x4361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GT0H[0x6];                                   // 0x4362(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                RightGrip;                                               // 0x4368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AddWeapPose_RHBase;                                      // 0x4370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPistol;                                               // 0x4378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AltMode;                                                 // 0x4379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T3BL[0x6];                                   // 0x437A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WeaponDownPose;                                          // 0x4380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AdditiveWeaponPose;                                      // 0x4388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       JAK_AR_Crank;                                            // 0x4390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FR8R[0x7];                                   // 0x4391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAStruct_WeaponAnimContainer_Menu                   AStruct_WeaponAnimContainer;                             // 0x4398(0x0780) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FName>                                        AnimSetList;                                             // 0x4B18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       DisableAdditives;                                        // 0x4B28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_TwoWayBlend_B59930F541EF0AD6D35F66B3233F9909();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_0AABCAD440A77ECED146F199E0F5FCA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_67BEF82843AA1BE61B3CB9A94CC66079();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_62A99C6241197699C26A0198E202D21A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_C9A10B46424547583338A0B8E4E905A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_GbxAnimGraphNode_HandIK_6E4241914F8B8E4691CD5F8C35ACA089();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_89464B4E408E99296D91E8AAAE034A4B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_F4F48A9E4975A05B3BADCE973DB04530();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_6A145EE04957A2E2110C2EB31293F125();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_3C93BFE24BBC9581EF88DA8F7D4C331E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_250BC0354731B19BB1E9989173892356();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyAdditive_5EA0028A43708000F6ABB6A3FDA4FE11();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_BlendListByInt_57E403E84E494EF1FF9D79A36CBCB9FA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_LayeredBoneBlend_2BB164254C8FC59A50AA46BE2064782A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_ApplyMeshSpaceAdditive_FE755C224DDEC89010D9A39CC4CDA439();
		void OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_MenuStandin_AnimGraphNode_SequenceEvaluator_7CB9629741C18B8C511D728175E7609B();
		void Update_ActiveAnimSet();
		void ExecuteUbergraph_BPAnim_MenuStandin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
