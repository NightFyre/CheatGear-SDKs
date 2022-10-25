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
	 * DynamicClass ABP_Character_Body.ABP_Character_Body_C
	 * Size -> 0x04F8 (FullSize[0x0760] - InheritedSize[0x0268])
	 */
	class UABP_Character_Body_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0268(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0298(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x02B0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x03B8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x03D8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0420(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_RotateRootBone                            AnimGraphNode_RotateRootBone;                            // 0x0528(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x05C8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x05E8(0x0108) NativeAccessSpecifierPublic
		bool                                                       bSoldierValid;                                           // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QUA[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x06F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Kick;                                                    // 0x0700(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectionYaw;                                            // 0x0704(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        KickMontage;                                             // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         SoldierReference;                                        // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KickTimerStart;                                          // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewVar_1;                                                // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0724(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x0725(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PGH[0x2];                                   // 0x0726(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x0728(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_CustomEvent_bKickWillSucceed;                     // 0x072C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEC1[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x0730(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0738(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYJQ[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UABP_Character_C*                                    K2Node_DynamicCast_AsABP_Character;                      // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x0748(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q349[0x3];                                   // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x074C(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1194[0x4];                                   // 0x075C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnDoorKick(bool bpp__bKickWillSucceed__pf);
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		void DelegateDoorKick__DelegateSignature(bool bpp__bKickWillSucceed__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
