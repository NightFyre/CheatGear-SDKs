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
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.GetValidSeatConfig
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_GetValidSeatConfig_Params
	{
	public:
		class UArcVehicleSeatConfig*                               SeatConfig;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ReceiveBeginPlay
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnDeath
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_OnDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DBV4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnSeatChangeEvent
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_OnSeatChangeEvent_Params
	{
	public:
		EArcVehicleSeatChangeType                                  SeatChangeType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ResetPlayerCameraConstraints
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_ResetPlayerCameraConstraints_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.SetupPlayerCameraConstraints
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_SetupPlayerCameraConstraints_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent
	 */
	struct UBP_HDVehiclePlayerSeatComponent_C_ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
