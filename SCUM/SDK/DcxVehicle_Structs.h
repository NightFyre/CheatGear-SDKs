#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Enum DcxVehicle.EDcxVehicleClutchAccuracyMode
	 */
	enum class EDcxVehicleClutchAccuracyMode : uint8_t
	{
		Estimate     = 0,
		BestPossible = 1,
		MAX          = 2
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleDifferential4W
	 */
	enum class EDcxVehicleDifferential4W : uint8_t
	{
		LS_4WD       = 0,
		LS_FrontWD   = 1,
		LS_RearWD    = 2,
		Open_4WD     = 3,
		Open_FrontWD = 4,
		Open_RearWD  = 5,
		MAX          = 6
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleWheelOrder4W
	 */
	enum class EDcxVehicleWheelOrder4W : uint8_t
	{
		FrontLeft  = 0,
		FrontRight = 1,
		RearLeft   = 2,
		RearRight  = 3,
		MAX        = 4
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleDriveControl4W
	 */
	enum class EDcxVehicleDriveControl4W : uint8_t
	{
		Throttle    = 0,
		Brake       = 1,
		Handbrake   = 2,
		Steer       = 3,
		Clutch      = 4,
		NumControls = 5,
		MAX         = 6
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleDriveControlNW
	 */
	enum class EDcxVehicleDriveControlNW : uint8_t
	{
		Throttle    = 0,
		Brake       = 1,
		Handbrake   = 2,
		Steer       = 3,
		Clutch      = 4,
		NumControls = 5,
		MAX         = 6
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleDriveControlModelTank
	 */
	enum class EDcxVehicleDriveControlModelTank : uint8_t
	{
		Standard = 0,
		Special  = 1,
		MAX      = 2
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleDriveControlTank
	 */
	enum class EDcxVehicleDriveControlTank : uint8_t
	{
		Throttle    = 0,
		BrakeLeft   = 1,
		BrakeRight  = 2,
		ThrustLeft  = 3,
		ThrustRight = 4,
		Clutch      = 5,
		NumControls = 6,
		MAX         = 7
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleGearbox
	 */
	enum class EDcxVehicleGearbox : uint8_t
	{
		Automatic     = 0,
		SemiAutomatic = 1,
		Manual        = 2,
		MAX           = 3
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleNoDriveControl
	 */
	enum class EDcxVehicleNoDriveControl : uint8_t
	{
		Throttle    = 0,
		Brake       = 1,
		Steer       = 2,
		NumControls = 3,
		MAX         = 4
	};

	/**
	 * Enum DcxVehicle.EDcxVehicleWheelSweep
	 */
	enum class EDcxVehicleWheelSweep : uint8_t
	{
		Both    = 0,
		Simple  = 1,
		Complex = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DcxVehicle.DcxVehicleWheelData
	 * Size -> 0x0020
	 */
	struct FDcxVehicleWheelData
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRate;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBrakeTorque;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHandBrakeTorque;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSteer;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToeAngle;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleSuspensionData
	 * Size -> 0x0020
	 */
	struct FDcxVehicleSuspensionData
	{
	public:
		float                                                      NaturalFrequency;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDamperRatio;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCompression;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDroop;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceOffset;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CamberAtRest;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CamberAtMaxCompression;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CamberAtMaxDroop;                                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleWheelConfiguration
	 * Size -> 0x0078
	 */
	struct FDcxVehicleWheelConfiguration
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EETP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CollisionMesh;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePresetShape;                                         // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P7U[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDcxVehicleWheelData                                WheelData;                                               // 0x0024(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDcxVehicleSuspensionData                           SuspensionData;                                          // 0x0044(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDI9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDcxVehicleTire*                                     Tire;                                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDriven;                                               // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDcxVehicleWheelSweep                                      SweepType;                                               // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJQ4[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleTireLoadFilterData
	 * Size -> 0x0010
	 */
	struct FDcxVehicleTireLoadFilterData
	{
	public:
		float                                                      MinNormalizedLoad;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFilteredNormalizedLoad;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNormalizedLoad;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFilteredNormalizedLoad;                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleDriveInputRate
	 * Size -> 0x0008
	 */
	struct FDcxVehicleDriveInputRate
	{
	public:
		float                                                      RiseRate;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallRate;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxAnalogControlArray
	 * Size -> 0x0010
	 */
	struct FDcxAnalogControlArray
	{
	public:
		TArray<float>                                              Items;                                                   // 0x0000(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DcxVehicle.DcxGear
	 * Size -> 0x0004
	 */
	struct FDcxGear
	{
	public:
		int32_t                                                    GearNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleDriveState
	 * Size -> 0x0018
	 */
	struct FDcxVehicleDriveState
	{
	public:
		struct FDcxAnalogControlArray                              AnalogControls;                                          // 0x0000(0x0010) Transient, NativeAccessSpecifierPublic
		struct FDcxGear                                            CurrentGear;                                             // 0x0010(0x0004) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDcxGear                                            TargetGear;                                              // 0x0014(0x0004) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleEngineData
	 * Size -> 0x00A0
	 */
	struct FDcxVehicleEngineData
	{
	public:
		struct FRuntimeFloatCurve                                  TorqueCurve;                                             // 0x0000(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      MOI;                                                     // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleRPM;                                                 // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRPM;                                                  // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateFullThrottle;                                 // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateZeroThrottleClutchEngaged;                    // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateZeroThrottleClutchDisengaged;                 // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleGearData
	 * Size -> 0x000C
	 */
	struct FDcxVehicleGearData
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownRatio;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpRatio;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleGearboxData
	 * Size -> 0x0030
	 */
	struct FDcxVehicleGearboxData
	{
	public:
		EDcxVehicleGearbox                                         Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T42[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FinalRatio;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwitchTime;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PQU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDcxVehicleGearData>                         ForwardGears;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      ReverseGearRatio;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Latency;                                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NeutralGearUpRatio;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UGA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleClutchData
	 * Size -> 0x0010
	 */
	struct FDcxVehicleClutchData
	{
	public:
		float                                                      BitePoint;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDcxVehicleClutchAccuracyMode                              AccuracyMode;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSJO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EstimateIterations;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleDifferentialData4W
	 * Size -> 0x001C
	 */
	struct FDcxVehicleDifferentialData4W
	{
	public:
		EDcxVehicleDifferential4W                                  DifferentialType;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0W9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrontRearSplit;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontLeftRightSplit;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RearLeftRightSplit;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CenterBias;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontBias;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RearBias;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
	 * Size -> 0x0010
	 */
	struct FDcxDrivableSurfaceToTireFrictionPair
	{
	public:
		class UPhysicalMaterial*                                   SurfaceMaterial;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrictionScale;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_731C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxAnimNodeWheelSimulator
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	struct FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_0RJ7[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxMath
	 * Size -> 0x0001
	 */
	struct FDcxMath
	{
	public:
		unsigned char                                              UnknownData_EANR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x0780] - InheritedSize[0x0770])
	 */
	struct FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_3PLQ[0x10];                                  // 0x0770(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DcxVehicle.DcxVehicleWheelState
	 * Size -> 0x00B0
	 */
	struct FDcxVehicleWheelState
	{
	public:
		struct FVector                                             SuspensionLineStart;                                     // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SuspensionLineDirection;                                 // 0x000C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionLineLength;                                    // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInAir;                                                // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZY6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TireContactActor;                                        // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   TireSurfaceMaterial;                                     // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TireContactPoint;                                        // 0x0030(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TireContactNormal;                                       // 0x003C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TireFriction;                                            // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionJounce;                                        // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionSpringForce;                                   // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TireLongitudinalDirection;                               // 0x0054(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TireLateralDirection;                                    // 0x0060(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongitudinalSlip;                                        // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralSlip;                                             // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteerAngle;                                              // 0x0074(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JT2K[0x38];                                  // 0x0078(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
