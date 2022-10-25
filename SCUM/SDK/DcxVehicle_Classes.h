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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DcxVehicle.DcxVehicle
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ADcxVehicle : public APawn
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDcxVehicleWheelsComponent*                          VehicleWheels;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UDcxVehicleWheelsComponent* GetVehicleWheels();
		class USkeletalMeshComponent* GetMesh();
		void DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward);
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicle4W
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class ADcxVehicle4W : public ADcxVehicle
	{
	public:
		class UDcxVehicleDriveComponent4W* GetVehicleDrive4W();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleAnimInstance
	 * Size -> 0x0794 (FullSize[0x0A4C] - InheritedSize[0x02B8])
	 */
	class UDcxVehicleAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_BCNE[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_AYH0[0x780];                                 // 0x02C0(0x0780) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDcxVehicleWheelsComponent*                          VehicleWheels;                                           // 0x0A40(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SE3P[0x4];                                   // 0x0A48(0x0004) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleWheelsComponent
	 * Size -> 0x0108 (FullSize[0x0240] - InheritedSize[0x0138])
	 */
	class UDcxVehicleWheelsComponent : public UPawnMovementComponent
	{
	public:
		unsigned char                                              UnknownData_Y1HW[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChassisMass;                                             // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InertiaTensorScale;                                      // 0x0144(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FDcxVehicleWheelConfiguration>               WheelConfigurations;                                     // 0x0150(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FDcxVehicleTireLoadFilterData                       TireLoadFilter;                                          // 0x0160(0x0010) Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseAvoidance;                                           // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y5P5[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AvoidanceWeight;                                         // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AvoidanceUID;                                            // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   AvoidanceGroup;                                          // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   GroupsToAvoid;                                           // 0x0180(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FNavAvoidanceMask                                   GroupsToIgnore;                                          // 0x0184(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      ThresholdLongitudinalSpeed;                              // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LowForwardSpeedSubStepCount;                             // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighForwardSpeedSubStepCount;                            // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragArea;                                                // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDcxVehicleDriveInputRate                           ThrottleRate;                                            // 0x019C(0x0008) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDcxVehicleDriveInputRate                           BrakeRate;                                               // 0x01A4(0x0008) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDcxVehicleDriveInputRate                           HandbrakeRate;                                           // 0x01AC(0x0008) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDcxVehicleDriveInputRate                           SteerRate;                                               // 0x01B4(0x0008) Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      AvoidanceRadius;                                         // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceHeight;                                         // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceConsiderationRadius;                            // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceThrottleStep;                                   // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceBrakeStep;                                      // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceSteerStep;                                      // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecreateRequired;                                       // 0x01D4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WOGS[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDcxVehicleWheelsRawInput*                           RawInput;                                                // 0x01D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<float>                                              SmoothAnalogControls;                                    // 0x01E0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		struct FDcxVehicleDriveState                               ReplicatedState;                                         // 0x01F0(0x0018) Net, Transient, Protected, NativeAccessSpecifierProtected
		bool                                                       bWasAvoidanceUpdated;                                    // 0x0208(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9OVE[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AvoidanceVelocity;                                       // 0x020C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             AvoidanceLockVelocity;                                   // 0x0218(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AvoidanceLockTimer;                                      // 0x0224(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U10Q[0x18];                                  // 0x0228(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWheelOffset(int32_t WheelIndex, const struct FVector& Offset);
		void SetWheelData(int32_t WheelIndex, const struct FDcxVehicleWheelData& NewWheelData);
		void SetTire(int32_t WheelId, class UDcxVehicleTire* NewTire);
		void SetSuspensionData(int32_t WheelIndex, const struct FDcxVehicleSuspensionData& NewSuspensionData);
		void SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask);
		void SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask);
		void SetChassisMass(float Mass);
		void SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask);
		void ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear);
		bool IsWheelDisabled(int32_t WheelIndex);
		bool GetWheelState(int32_t WheelIndex, struct FDcxVehicleWheelState* WheelState);
		float GetWheelRotationSpeed(int32_t WheelIndex);
		float GetWheelRotationAngle(int32_t WheelIndex);
		struct FVector GetWheelOffset(int32_t WheelIndex);
		struct FDcxVehicleWheelData GetWheelData(int32_t WheelIndex);
		class UDcxVehicleTire* GetTire(int32_t WheelIndex);
		struct FDcxVehicleSuspensionData GetSuspensionData(int32_t WheelIndex);
		class UDcxVehicleWheelsRawInput* GetRawInput();
		int32_t GetNumWheels();
		float GetForwardSpeed();
		float GetChassisMass();
		class FName GetBoneName(int32_t WheelIndex);
		float GetAnalogControl(unsigned char Control);
		void EnableWheel(int32_t WheelIndex);
		void EnableAvoidance(bool bEnabled);
		void DisableWheel(int32_t WheelIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveComponent
	 * Size -> 0x0178 (FullSize[0x03B8] - InheritedSize[0x0240])
	 */
	class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
	{
	public:
		struct FDcxVehicleEngineData                               EngineData;                                              // 0x0240(0x00A0) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FDcxVehicleGearboxData                              GearboxData;                                             // 0x02E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FDcxVehicleClutchData                               ClutchData;                                              // 0x0310(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoReverse;                                            // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFRW[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrongDirectionThreshold;                                 // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoBrake;                                              // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EALI[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StopThreshold;                                           // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SteerCurve;                                              // 0x0330(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SetTargetGear(int32_t NewGear, bool bImmediate);
		void SetGearboxType(EDcxVehicleGearbox NewGearboxType);
		void SetGearboxData(const struct FDcxVehicleGearboxData& NewGearboxData);
		void SetEngineRotationSpeed(float RPM);
		void SetEngineData(const struct FDcxVehicleEngineData& NewEngineData);
		void SetClutchData(const struct FDcxVehicleClutchData& NewClutchData);
		int32_t GetTargetGear();
		EDcxVehicleGearbox GetGearboxType();
		struct FDcxVehicleGearboxData GetGearboxData();
		float GetEngineRotationSpeed();
		struct FDcxVehicleEngineData GetEngineData();
		int32_t GetCurrentGear();
		struct FDcxVehicleClutchData GetClutchData();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveComponent4W
	 * Size -> 0x0020 (FullSize[0x03D8] - InheritedSize[0x03B8])
	 */
	class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
	{
	public:
		struct FDcxVehicleDifferentialData4W                       DifferentialData;                                        // 0x03B8(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      AckermannGeometryAccuracy;                               // 0x03D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetDifferentialData(const struct FDcxVehicleDifferentialData4W& NewDifferentialData);
		class UDcxVehicleDriveRawInput4W* GetRawInput4W();
		struct FDcxVehicleDifferentialData4W GetDifferentialData();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveComponentNW
	 * Size -> 0x0000 (FullSize[0x03B8] - InheritedSize[0x03B8])
	 */
	class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
	{
	public:
		void SetDrivenWheel(int32_t WheelIndex, bool bIsDriven);
		bool IsDrivenWheel(int32_t WheelIndex);
		class UDcxVehicleDriveRawInputNW* GetRawInputNW();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveComponentTank
	 * Size -> 0x0008 (FullSize[0x03C0] - InheritedSize[0x03B8])
	 */
	class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
	{
	public:
		EDcxVehicleDriveControlModelTank                           DriveModel;                                              // 0x03B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_REH2[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetDriveModel(EDcxVehicleDriveControlModelTank ControlModel);
		class UDcxVehicleDriveRawInputTank* GetRawInputTank();
		EDcxVehicleDriveControlModelTank GetDriveModel();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleWheelsRawInput
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDcxVehicleWheelsRawInput : public UObject
	{
	public:
		int32_t                                                    ThrottleIndex;                                           // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8J6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RawAnalogControls;                                       // 0x0030(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void SetThrottle(float Throttle);
		float GetThrottle();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveRawInput
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
	{
	public:
		int32_t                                                    ClutchIndex;                                             // 0x0040(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGearUp;                                                 // 0x0044(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGearDown;                                               // 0x0045(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DGTJ[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetGearUp(bool bGearUpPressed);
		void SetGearDown(bool bGearDownPressed);
		void SetClutch(float Clutch);
		bool GetGearUp();
		bool GetGearDown();
		float GetClutch();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveRawInput4W
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
	{
	public:
		void SetSteer(float Steer);
		void SetHandbrake(float Handbrake);
		void SetBrake(float Brake);
		float GetSteer();
		float GetHandbrake();
		float GetBrake();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveRawInputNW
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleDriveRawInputTank
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
	{
	public:
		unsigned char                                              UnknownData_TQB8[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetRightThrust(float Thrust);
		void SetRightBrake(float Brake);
		void SetLeftThrust(float Thrust);
		void SetLeftBrake(float Brake);
		float GetRightThrust();
		float GetRightBrake();
		float GetLeftThrust();
		float GetLeftBrake();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleNoDrive
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class ADcxVehicleNoDrive : public ADcxVehicle
	{
	public:
		class UDcxVehicleNoDriveComponent* GetVehicleNoDrive();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleNoDriveComponent
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
	{
	public:
		bool                                                       bUseRawInput;                                            // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR3T[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDriveTorque;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetSteerAngle(int32_t WheelIndex, float SteerAngle);
		void SetDriveTorque(int32_t WheelIndex, float DriveTorque);
		void SetBrakeTorque(int32_t WheelIndex, float BrakeTorque);
		float GetSteerAngle(int32_t WheelIndex);
		class UDcxVehicleNoDriveRawInput* GetRawInputND();
		float GetDriveTorque(int32_t WheelIndex);
		float GetBrakeTorque(int32_t WheelIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleNoDriveRawInput
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
	{
	public:
		void SetSteer(float NewSteer);
		void SetBrake(float NewBrake);
		float GetSteer();
		float GetBrake();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleNW
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class ADcxVehicleNW : public ADcxVehicle
	{
	public:
		class UDcxVehicleDriveComponentNW* GetVehicleDriveNW();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleTank
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class ADcxVehicleTank : public ADcxVehicle
	{
	public:
		class UDcxVehicleDriveComponentTank* GetVehicleDriveTank();
		static UClass* StaticClass();
	};

	/**
	 * Class DcxVehicle.DcxVehicleTire
	 * Size -> 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
	 */
	class UDcxVehicleTire : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_2O70[0x4];                                   // 0x0030(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LateralStiffnessX;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LateralStiffnessY;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongitudinalStiffnessPerUnitGravity;                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CamberStiffnessPerUnitGravity;                           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5US[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  FrictionVsSlipGraph;                                     // 0x0048(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FDcxDrivableSurfaceToTireFrictionPair>       DrivableSurfaceToTireFrictionPairs;                      // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
