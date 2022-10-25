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
	 * DynamicClass ABP_Weapon_Revolver.ABP_Weapon_Revolver_C
	 * Size -> 0x1458 (FullSize[0x16C0] - InheritedSize[0x0268])
	 */
	class UABP_Weapon_Revolver_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PC7E[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0270(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x02A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0318(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x0338(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x0440(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x0548(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x0650(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x0758(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0860(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x0880(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x0988(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x0A90(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x0B98(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x0CA0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x0DA8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0EB0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0FB8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x10C0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x11C8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x12D0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x13D8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x14E0(0x0108) NativeAccessSpecifierPublic
		TArray<ERevolverChamberState>                              ChamberStatusArray;                                      // 0x15E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              EmptyAlphaArray;                                         // 0x15F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              FiredAlphaArray;                                         // 0x1608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              UnfiredAlphaArray;                                       // 0x1618(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsRemaining;                                         // 0x1628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHOD[0x4];                                   // 0x162C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x1630(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x1638(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KJ8[0x7];                                   // 0x1639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_Weapon_C*                                       K2Node_DynamicCast_AsABP_Weapon;                         // 0x1640(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x1648(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YMM[0x3];                                   // 0x1649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Array_Index_Variable;                           // 0x164C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x1650(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VA3[0x4];                                   // 0x1654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ERevolverChamberState>                              K2Node_Event_Chambers;                                   // 0x1658(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1668(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnable;                                    // 0x166C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI8S[0x3];                                   // 0x166D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_Event_RemainingAmmo;                              // 0x1670(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x1674(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2LR[0x3];                                   // 0x1675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_State;                                      // 0x1678(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERevolverChamberState                                      CallFunc_Array_Get_Item;                                 // 0x167C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZIK[0x3];                                   // 0x167D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier_2;                       // 0x1680(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x1688(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0A5I[0x7];                                   // 0x1689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemRevolver*                                       K2Node_DynamicCast_AsItem_Revolver;                      // 0x1690(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_4;                           // 0x1698(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8YU[0x7];                                   // 0x1699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              K2Node_DynamicCast_AsWeapon_Anim_Interface[0x10];        // 0x16A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       K2Node_DynamicCast_bSuccess_5;                           // 0x16B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6U89[0xF];                                   // 0x16B1(0x000F) MISSED OFFSET (PADDING)

	public:
		void UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const);
		void ToggleOpticState(bool bpp__Enable__pf);
		void StopToggleOpticMontage();
		void InterfaceUpdateSimulationBlend(float bpp__State__pf);
		void ForceToggleOpticState(bool bpp__bEnable__pf);
		void ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf);
		void ForceChamber(TArray<float>* bpp__Array__pf, float bpp__Value__pf__const, int32_t bpp__RemainingxAmmo__pfT);
		void ExecuteUbergraph_ABP_Weapon_Revolver_1(int32_t bpp__EntryPoint__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA();
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintInitializeAnimation();
		void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
