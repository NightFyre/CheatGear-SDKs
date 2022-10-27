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
	 * DynamicClass ABP_Vehicle_Final.ABP_Vehicle_Final_C
	 * Size -> 0x0928 (FullSize[0x12A0] - InheritedSize[0x0978])
	 */
	class UABP_Vehicle_Final_C : public UVehicleAnimInstance
	{
	public:
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0978(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0998(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0A60(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0AA8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0BB0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0CB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0D00(0x00A0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0DA0(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0DB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0E00(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose_2;                            // 0x0EC8(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0EE0(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0F00(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0F20(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_WheelHandler                              AnimGraphNode_WheelHandler;                              // 0x0F40(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1020(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1098(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x10C8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_IdentityPose;                              // 0x1188(0x0018) NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x11A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleSpeed;                                            // 0x11A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VehicleRPM;                                              // 0x11A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RPMRotator;                                              // 0x11AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            SpeedRotator;                                            // 0x11B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      VehicleTurnProgress;                                     // 0x11C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehicleTargetGear;                                       // 0x11C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehicleGear;                                             // 0x11CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastTickVehicleGear;                                     // 0x11D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelCurrentAngle;                                       // 0x11D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoAnimations;                                           // 0x11D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L17R[0x7];                                   // 0x11D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleAnimationStruct                             VehicleaAnimations;                                      // 0x11E0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class AVehicleBase*                                        K2Node_DynamicCast_AsVehicle_Base;                       // 0x1208(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x1210(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKHG[0x3];                                   // 0x1211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakRotator_Roll;                              // 0x1214(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch;                             // 0x1218(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw;                               // 0x121C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Roll_2;                            // 0x1220(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Pitch_2;                           // 0x1224(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakRotator_Yaw_2;                             // 0x1228(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcFloatInterp_Output;                         // 0x122C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcFloatInterp_Output_2;                       // 0x1230(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FCW[0x4];                                   // 0x1234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleAnimationStruct                             CallFunc_GetVehicleAnims_VehicleAnimations;              // 0x1238(0x0028) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x1260(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9DZ[0x4];                                   // 0x1264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicleBase*                                        K2Node_DynamicCast_AsVehicle_Base_2;                     // 0x1268(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x1270(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_521V[0x3];                                   // 0x1271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetSteeringAngles_MinAngle;                     // 0x1274(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_GetSteeringAngles_MaxAngle;                     // 0x1278(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_GetSteeringAngles_CurrentAngle;                 // 0x127C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_CalcFloatInterp_Output_3;                       // 0x1280(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIFY[0x4];                                   // 0x1284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicleBase*                                        K2Node_DynamicCast_AsVehicle_Base_3;                     // 0x1288(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x1290(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MGD[0xF];                                   // 0x1291(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnPlayGearShift();
		void OnPlayFireEnd();
		void OnPlayFire();
		void OnGearChange();
		void OnFireEnd();
		void OnFire();
		void GetVehicleAnims(struct FVehicleAnimationStruct* bpp__VehicleAnimations__pf);
		void CalcFloatInterp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf);
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintInitializeAnimation();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
