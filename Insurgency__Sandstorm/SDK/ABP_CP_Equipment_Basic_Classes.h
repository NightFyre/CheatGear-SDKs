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
	 * DynamicClass ABP_CP_Equipment_Basic.ABP_CP_Equipment_Basic_C
	 * Size -> 0x0978 (FullSize[0x0BE0] - InheritedSize[0x0268])
	 */
	class UABP_CP_Equipment_Basic_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GXNW[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0270(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x02A0(0x0140) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x03E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0400(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0420(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x0528(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x0630(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x0738(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0840(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0948(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0A50(0x0108) NativeAccessSpecifierPublic
		bool                                                       bPoncho;                                                 // 0x0B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnabled;                                   // 0x0B59(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State_2;                                    // 0x0B5A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCQY[0x5];                                   // 0x0B5B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_GasMask_C*                                  K2Node_Event_Gasmask;                                    // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State;                                      // 0x0B68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU3S[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   K2Node_Event_Montage;                                    // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINSSkeletalMeshComponent*                           K2Node_Event_Carrier_2;                                  // 0x0B78(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_Event_Soldier;                                    // 0x0B80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x0B88(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bProfile;                                   // 0x0B89(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFemale;                                    // 0x0B8A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCYA[0x5];                                   // 0x0B8B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              K2Node_Event_Character;                                  // 0x0B90(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Gear_BASE_Carrier_C*                             K2Node_Event_Carrier;                                    // 0x0B98(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination_2;                              // 0x0BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1PK[0x3];                                   // 0x0BA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction_2;                                  // 0x0BA4(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ROH[0x4];                                   // 0x0BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       K2Node_Event_GearAnimInstance;                           // 0x0BB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination;                                // 0x0BB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9ZZ[0x3];                                   // 0x0BB9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction;                                    // 0x0BBC(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Visibility;                                 // 0x0BC4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WOR[0x3];                                   // 0x0BC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_Character_C*                                    K2Node_Event_AnimInstance;                               // 0x0BC8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Gunner;                                     // 0x0BD0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Passenger;                                  // 0x0BD1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7S0[0xE];                                   // 0x0BD2(0x000E) MISSED OFFSET (PADDING)

	public:
		void UpdatEquipmentOnBack(class UINSSkeletalMeshComponent* bpp__Carrier__pf, class AINSSoldier* bpp__Soldier__pf);
		void UpdateNightVisionState(EEquipableState bpp__State__pf);
		void UpdateInsurgentNVGState();
		void UpdateGearCopyPoseAnim(bool bpp__Enable__pf, bool bpp__bProfile__pf, bool bpp__bFemale__pf, class USkeletalMeshComponent* bpp__Character__pf, class ABP_Gear_BASE_Carrier_C* bpp__Carrier__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void UpdateGearBoneVisibility(bool bpp__Visibility__pf);
		void UpdateGasMaskState(EEquipableState bpp__State__pf);
		void UpdateGasmaskReference(class ABP_Gear_GasMask_C* bpp__Gasmask__pf);
		void UpdateCharacterBoneHide(class UABP_Character_C* bpp__AnimInstance__pf, bool bpp__Gunner__pf, bool bpp__Passenger__pf);
		void UpdateCharacterAnimInstance(class UAnimInstance* bpp__GearAnimInstance__pf, ECarrierArmour bpp__Combination__pf, const class FName& bpp__Faction__pf);
		void ResetEquipmentPhysics();
		void PrintHelper(const class FString& bpp__Title__pf__const, const class FString& bpp__Input__pf__const, float bpp__Duration__pf, const struct FLinearColor& bpp__TextColor__pf);
		void NewFunction_1();
		void MolotovRagState(bool bpp__bEnabled__pf);
		void DeltaRotatorAxis(float bpp__Axisx1__pfT, float bpp__Axisx2__pfT, float* bpp__Return__pf);
		void CombineRotatorAxis(float bpp__Axisx1__pfT, float bpp__Axisx2__pfT, float* bpp__Return__pf);
		void CalcRelativeTransform(const struct FTransform& bpp__Child__pf__const, const struct FTransform& bpp__Parent__pf__const, struct FTransform* bpp__Return__pf);
		void BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf);
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
