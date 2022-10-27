#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Class OWIEnhancedVehicleMovement.VehicleMovementNWheeledVehicle
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class AVehicleMovementNWheeledVehicle : public AWheeledVehicle
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OWIEnhancedVehicleMovement.VehicleMovementTankVehicle
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class AVehicleMovementTankVehicle : public AWheeledVehicle
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OWIEnhancedVehicleMovement.VehicleMovementWheelTracked
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UVehicleMovementWheelTracked : public UVehicleWheel
	{
	public:
		struct FVector                                             SuspensionDirection;                                     // 0x00F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER5E[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentNW
	 * Size -> 0x0178 (FullSize[0x0408] - InheritedSize[0x0290])
	 */
	class UWheeledVehicleMovementComponentNW : public UWheeledVehicleMovementComponent
	{
	public:
		struct FVehicleNWEngineData                                EngineSetup;                                             // 0x0290(0x00A0) Edit, NativeAccessSpecifierPublic
		TArray<struct FVehicleNWWheelDifferentialData>             DifferentialSetup;                                       // 0x0330(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVehicleNWTransmissionData                          TransmissionSetup;                                       // 0x0340(0x0040) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SteeringCurve;                                           // 0x0380(0x0088) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank
	 * Size -> 0x0128 (FullSize[0x03B8] - InheritedSize[0x0290])
	 */
	class UWheeledVehicleMovementComponentTank : public UWheeledVehicleMovementComponent
	{
	public:
		struct FVehicleTankEngineData                              EngineSetup;                                             // 0x0290(0x00A0) Edit, NativeAccessSpecifierPublic
		struct FVehicleTankTransmissionData                        TransmissionSetup;                                       // 0x0330(0x0040) Edit, NativeAccessSpecifierPublic
		float                                                      RawBothTracksThrottleInput;                              // 0x0370(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawLeftTrackThrottleInput;                               // 0x0374(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawRightTrackThrottleInput;                              // 0x0378(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BothTracksThrottleInput;                                 // 0x037C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftTrackThrottleInput;                                  // 0x0380(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightTrackThrottleInput;                                 // 0x0384(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<float>                                              WheelSpeeds;                                             // 0x0388(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<float>                                              WheelAngles;                                             // 0x0398(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftTrackSpeed;                                          // 0x03A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightTrackSpeed;                                         // 0x03AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LSIP[0x8];                                   // 0x03B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetRightTrackThrottleInput(float InThrottle);
		void SetLeftTrackThrottleInput(float InThrottle);
		void SetBothTracksThrottleInput(float InThrottle);
		float GetRightTrackSpeed();
		float GetLeftTrackSpeed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
