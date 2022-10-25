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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ArcVehicles.EArcVehicleSeatChangeType
	 */
	enum class EArcVehicleSeatChangeType : uint8_t
	{
		Invalid      = 0,
		EnterVehicle = 1,
		ExitVehicle  = 2,
		SwitchSeats  = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ArcVehicles.ArcVehicleSeatReference
	 * Size -> 0x0010
	 */
	struct FArcVehicleSeatReference
	{
	public:
		class AArcBaseVehicle*                                     Vehicle;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SeatID;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIZW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ArcVehicles.ArcVehicleSeatChangeEvent
	 * Size -> 0x0018
	 */
	struct FArcVehicleSeatChangeEvent
	{
	public:
		unsigned char                                              UnknownData_YJ8S[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerState*                                        Player;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ArcVehicles.ArcOwnerAttachmentReference
	 * Size -> 0x0010
	 */
	struct FArcOwnerAttachmentReference
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ArcVehicles.ArcVehicleTurretMovementPostPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FArcVehicleTurretMovementPostPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_EXUG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
