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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GbxVehicle.EInAirBehavior
	 */
	enum class EInAirBehavior : uint8_t
	{
		Continue = 0,
		Pause    = 1,
		Stop     = 2,
		MAX      = 3
	};

	/**
	 * Enum GbxVehicle.EVehicleCameraRelativeDrivingMode
	 */
	enum class EVehicleCameraRelativeDrivingMode : uint8_t
	{
		Standard     = 0,
		ForwardOnly  = 1,
		ReverseOnly  = 2,
		Mixed        = 3,
		ForceReverse = 4,
		ClassicBL2   = 5,
		MAX          = 6
	};

	/**
	 * Enum GbxVehicle.EVehicleDriveType
	 */
	enum class EVehicleDriveType : uint8_t
	{
		Wheel4        = 0,
		WheelN        = 1,
		WheelNNoDrive = 2,
		Tank          = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GbxVehicle.BoostPhysicsParams
	 * Size -> 0x0150
	 */
	struct FBoostPhysicsParams
	{
	public:
		float                                                      RefVelForPowerCurveKmH;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RefAccelForPowerCurve;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  BoostPower;                                              // 0x0008(0x0078) Edit, NativeAccessSpecifierPublic
		float                                                      PowerOverTimeCurveBaseRatio;                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RefTimeForPowerOverTimeCurve;                            // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  BoostPowerOverTime;                                      // 0x0088(0x0078) Edit, NativeAccessSpecifierPublic
		struct FRelativeDirectionData                              BoostDirection;                                          // 0x0100(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxVehicle.ReplicatedHoverComponentState
	 * Size -> 0x0018
	 */
	struct FReplicatedHoverComponentState
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrafeInput;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardInput;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x000C(0x000C) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxVehicle.AntiRollBarData
	 * Size -> 0x000C
	 */
	struct FAntiRollBarData
	{
	public:
		int32_t                                                    WheelIndex1;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WheelIndex2;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxVehicle.ComplexWheelMovement
	 * Size -> 0x0078
	 */
	struct FComplexWheelMovement
	{
	public:
		unsigned char                                              UnknownData_NI51[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      WheelReference;                                          // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      WheelSteeringPivotReference;                             // 0x0020(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ControlArmReference;                                     // 0x0038(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PhysicalWheelReference;                                  // 0x0050(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SuspensionDropMaxSpeed;                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NV8E[0xC];                                   // 0x006C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxVehicle.AnimNode_ComplexWheelHandler
	 * Size -> 0x0018 (FullSize[0x0158] - InheritedSize[0x0140])
	 */
	struct FAnimNode_ComplexWheelHandler : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FComplexWheelMovement>                       WheelMovementSystems;                                    // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SHU[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxVehicle.BoostRegenerateEvent
	 * Size -> 0x0018
	 */
	struct FBoostRegenerateEvent
	{
	public:
		float                                                      BoostTarget;                                             // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHTC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      VehicleBoostValueReachedEvent;                           // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GbxVehicle.PushbackCharactersTickFunction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FPushbackCharactersTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_WNT3[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GbxVehicle.VehiclePartList
	 * Size -> 0x0010
	 */
	struct FVehiclePartList
	{
	public:
		TArray<class UVehiclePartData*>                            Parts;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
