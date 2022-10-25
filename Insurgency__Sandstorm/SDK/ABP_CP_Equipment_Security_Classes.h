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
	 * DynamicClass ABP_CP_Equipment_Security.ABP_CP_Equipment_Security_C
	 * Size -> 0x9948 (FullSize[0x9BB0] - InheritedSize[0x0268])
	 */
	class UABP_CP_Equipment_Security_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GSTE[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0270(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x02A0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0340(0x0140) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0480(0x00B8) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WDD[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_24;                              // 0x0540(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x0AD0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_24;                  // 0x0B80(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_23;                              // 0x0BA0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_23;                  // 0x1130(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_22;                              // 0x1150(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_22;                  // 0x16E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_21;                              // 0x1700(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_21;                  // 0x1C90(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_20;                              // 0x1CB0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_20;                  // 0x2240(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_19;                              // 0x2260(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_19;                  // 0x27F0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_18;                              // 0x2810(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_18;                  // 0x2DA0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_17;                              // 0x2DC0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_17;                  // 0x3350(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_16;                              // 0x3370(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_16;                  // 0x3900(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_24;                  // 0x3920(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_23;                  // 0x3940(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_22;                  // 0x3960(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_21;                  // 0x3980(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_20;                  // 0x39A0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_19;                  // 0x39C0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_18;                  // 0x39E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_17;                  // 0x3A00(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_16;                  // 0x3A20(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_30;                          // 0x3A40(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_29;                          // 0x3A68(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_28;                          // 0x3A90(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_27;                          // 0x3AB8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_26;                          // 0x3AE0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_25;                          // 0x3B08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_24;                          // 0x3B30(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_23;                          // 0x3B58(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_22;                          // 0x3B80(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_21;                          // 0x3BA8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x3BD0(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x3C70(0x0028) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_596G[0x8];                                   // 0x3C98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_15;                              // 0x3CA0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_15;                  // 0x4230(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_15;                  // 0x4250(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x4270(0x0028) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF5B[0x8];                                   // 0x4298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_14;                              // 0x42A0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_14;                  // 0x4830(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_14;                  // 0x4850(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x4870(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x4898(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1A81[0x8];                                   // 0x4948(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_13;                              // 0x4950(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_13;                  // 0x4EE0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_13;                  // 0x4F00(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x4F20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x4F48(0x00A0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XZV[0x8];                                   // 0x4FE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_12;                              // 0x4FF0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_12;                  // 0x5580(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_11;                              // 0x55A0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_11;                  // 0x5B30(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_10;                              // 0x5B50(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_10;                  // 0x60E0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_9;                               // 0x6100(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_9;                   // 0x6690(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_12;                  // 0x66B0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_11;                  // 0x66D0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_10;                  // 0x66F0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9;                   // 0x6710(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x6730(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x6758(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x6780(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x67A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x67D0(0x0028) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NC7[0x8];                                   // 0x67F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_8;                               // 0x6800(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_8;                   // 0x6D90(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_8;                   // 0x6DB0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x6DD0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x6DF8(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QVV[0x8];                                   // 0x6EA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_7;                               // 0x6EB0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_7;                   // 0x7440(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_7;                   // 0x7460(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x7480(0x0028) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWNY[0x8];                                   // 0x74A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_6;                               // 0x74B0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x7A40(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x7AF0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_5;                               // 0x7B10(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x80A0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_4;                               // 0x80C0(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x8650(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_3;                               // 0x8670(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x8C00(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody_2;                               // 0x8C20(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x91B0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x91D0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x91F0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x9210(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x9230(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x9250(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x9270(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x9298(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x92C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x92E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x9310(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x9338(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x9360(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x98F0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x9910(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x9930(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x9958(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x99F8(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x9A98(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x9AC0(0x0028) NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x9AE8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitComplete;                                           // 0x9AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVRR[0x3];                                   // 0x9AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            GroinRotator;                                            // 0x9AF4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         HorizontalOffsetCurve;                                   // 0x9B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             CarrierArmourCombination;                                // 0x9B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasGroin;                                               // 0x9B09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemale;                                               // 0x9B0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValidMesh;                                              // 0x9B0B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProfile;                                                // 0x9B0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DEAD;                                                    // 0x9B0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x9B0E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulateTimerExpired;                                   // 0x9B0F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulateTimer;                                           // 0x9B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT2G[0x4];                                   // 0x9B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         Soldier;                                                 // 0x9B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x9B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State_2;                                    // 0x9B24(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGAQ[0x3];                                   // 0x9B25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UINSSkeletalMeshComponent*                           K2Node_Event_Carrier_2;                                  // 0x9B28(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AINSSoldier*                                         K2Node_Event_Soldier;                                    // 0x9B30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimInstance*                                       K2Node_Event_GearAnimInstance;                           // 0x9B38(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination_2;                              // 0x9B40(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYA1[0x3];                                   // 0x9B41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction_2;                                  // 0x9B44(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x9B4C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bProfile;                                   // 0x9B4D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bFemale;                                    // 0x9B4E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N48[0x1];                                   // 0x9B4F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              K2Node_Event_Character;                                  // 0x9B50(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABP_Gear_BASE_Carrier_C*                             K2Node_Event_Carrier;                                    // 0x9B58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             K2Node_Event_Combination;                                // 0x9B60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRSX[0x3];                                   // 0x9B61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Event_Faction;                                    // 0x9B64(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2Z2[0x4];                                   // 0x9B6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   K2Node_Event_Montage;                                    // 0x9B70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECarrierArmour                                             CallFunc_UpdateGearCopyPoseSettings_CarrierArmour;       // 0x9B78(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipableState                                            K2Node_Event_State;                                      // 0x9B79(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCZP[0x6];                                   // 0x9B7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Gear_GasMask_C*                                  K2Node_Event_Gasmask;                                    // 0x9B80(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UABP_Character_C*                                    K2Node_Event_AnimInstance;                               // 0x9B88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Gunner;                                     // 0x9B90(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Passenger;                                  // 0x9B91(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75LV[0x2];                                   // 0x9B92(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x9B94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Visibility;                                 // 0x9B98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U4H[0x7];                                   // 0x9B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSSoldier*                                         K2Node_DynamicCast_AsINSSoldier;                         // 0x9BA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x9BA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnabled;                                   // 0x9BA9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O55C[0x6];                                   // 0x9BAA(0x0006) MISSED OFFSET (PADDING)

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
		void NewFunction_1();
		void MolotovRagState(bool bpp__bEnabled__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CP_Equipment_Security_AnimGraphNode_BlendListByBool_96F80EB548FF564496A2D6AB142001F8();
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintInitializeAnimation();
		void BlendOutMontage(class UAnimSequenceBase* bpp__Montage__pf);
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
