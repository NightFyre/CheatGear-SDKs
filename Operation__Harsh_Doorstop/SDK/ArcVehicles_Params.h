#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.ServerPrintDebug_Request
	 */
	struct UArcVehiclePlayerSeatComponent_ServerPrintDebug_Request_Params
	{	};

	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnSeatChangeEvent
	 */
	struct UArcVehiclePlayerSeatComponent_OnSeatChangeEvent_Params
	{
	public:
		EArcVehicleSeatChangeType                                  SeatChangeType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_StoredPlayerState
	 */
	struct UArcVehiclePlayerSeatComponent_OnRep_StoredPlayerState_Params
	{
	public:
		class APlayerState*                                        InPreviousPlayerState;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_ServerDebugStrings
	 */
	struct UArcVehiclePlayerSeatComponent_OnRep_ServerDebugStrings_Params
	{	};

	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_SeatConfig
	 */
	struct UArcVehiclePlayerSeatComponent_OnRep_SeatConfig_Params
	{
	public:
		struct FArcVehicleSeatReference                            InPreviousSeatConfig;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePlayerSeatComponent.BP_OnRep_StoredPlayerState
	 */
	struct UArcVehiclePlayerSeatComponent_BP_OnRep_StoredPlayerState_Params
	{
	public:
		class APlayerState*                                        InPreviousPlayerState;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePawn.NotifyPlayerSeatChangeEvent
	 */
	struct AArcVehiclePawn_NotifyPlayerSeatChangeEvent_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UArcVehicleSeatConfig*                               ToSeat;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UArcVehicleSeatConfig*                               FromSeat;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EArcVehicleSeatChangeType                                  SeatChangeEvent;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePawn.GetSeatConfig
	 */
	struct AArcVehiclePawn_GetSeatConfig_Params
	{
	public:
		class UArcVehicleSeatConfig*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehiclePawn.GetOwningVehicle
	 */
	struct AArcVehiclePawn_GetOwningVehicle_Params
	{
	public:
		class AArcBaseVehicle*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.SetupSeat
	 */
	struct AArcBaseVehicle_SetupSeat_Params
	{
	public:
		class UArcVehicleSeatConfig*                               SeatConfig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.ServerPrintDebug_Request
	 */
	struct AArcBaseVehicle_ServerPrintDebug_Request_Params
	{	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.RequestLeaveVehicle
	 */
	struct AArcBaseVehicle_RequestLeaveVehicle_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.RequestEnterSeat
	 */
	struct AArcBaseVehicle_RequestEnterSeat_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RequestedSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreRestrictions;                                     // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.RequestEnterAnySeat
	 */
	struct AArcBaseVehicle_RequestEnterAnySeat_Params
	{
	public:
		class APlayerState*                                        InPlayerState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.OnRep_ServerDebugStrings
	 */
	struct AArcBaseVehicle_OnRep_ServerDebugStrings_Params
	{	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.IsValidSeatIndex
	 */
	struct AArcBaseVehicle_IsValidSeatIndex_Params
	{
	public:
		int32_t                                                    InSeatIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.GetSortedExitPoints
	 */
	struct AArcBaseVehicle_GetSortedExitPoints_Params
	{
	public:
		struct FTransform                                          InputLocation;                                           // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  OutTransformArray;                                       // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.GetNearestExitTransform
	 */
	struct AArcBaseVehicle_GetNearestExitTransform_Params
	{
	public:
		struct FTransform                                          InputLocation;                                           // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.GetDriverSeat
	 */
	struct AArcBaseVehicle_GetDriverSeat_Params
	{
	public:
		class UArcVehicleSeatConfig*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcBaseVehicle.GetAllSeats
	 */
	struct AArcBaseVehicle_GetAllSeats_Params
	{
	public:
		TArray<class UArcVehicleSeatConfig*>                       Seats;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleBPFunctionLibrary.IsSeatRefValid
	 */
	struct UArcVehicleBPFunctionLibrary_IsSeatRefValid_Params
	{
	public:
		struct FArcVehicleSeatReference                            SeatRef;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleSeatConfigFromRef
	 */
	struct UArcVehicleBPFunctionLibrary_GetVehicleSeatConfigFromRef_Params
	{
	public:
		struct FArcVehicleSeatReference                            SeatRef;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UArcVehicleSeatConfig*                               ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleFromSeatConfig
	 */
	struct UArcVehicleBPFunctionLibrary_GetVehicleFromSeatConfig_Params
	{
	public:
		struct FArcVehicleSeatReference                            SeatRef;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class AArcBaseVehicle*                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.UnAttachPlayerFromSeat
	 */
	struct UArcVehicleSeatConfig_UnAttachPlayerFromSeat_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.SetupSeatAttachment
	 */
	struct UArcVehicleSeatConfig_SetupSeatAttachment_Params
	{	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.IsOpenSeat
	 */
	struct UArcVehicleSeatConfig_IsOpenSeat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.IsDriverSeat
	 */
	struct UArcVehicleSeatConfig_IsDriverSeat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.GetVehicleOwner
	 */
	struct UArcVehicleSeatConfig_GetVehicleOwner_Params
	{
	public:
		class AArcBaseVehicle*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.BP_UnAttachPlayerFromSeat
	 */
	struct UArcVehicleSeatConfig_BP_UnAttachPlayerFromSeat_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.BP_AttachPlayerToSeat
	 */
	struct UArcVehicleSeatConfig_BP_AttachPlayerToSeat_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig.AttachPlayerToSeat
	 */
	struct UArcVehicleSeatConfig_AttachPlayerToSeat_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleSeatConfig_SeatPawn.OnRep_SeatPawn
	 */
	struct UArcVehicleSeatConfig_SeatPawn_OnRep_SeatPawn_Params
	{
	public:
		class AArcVehiclePawn*                                     OldSeatPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArcVehicles.ArcVehicleTurretMovementComp.Server_ServerMove
	 */
	struct UArcVehicleTurretMovementComp_Server_ServerMove_Params
	{
	public:
		struct FRotator                                            FullRotation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
