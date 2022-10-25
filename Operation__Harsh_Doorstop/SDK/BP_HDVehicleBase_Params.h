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
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_3
	 */
	struct ABP_HDVehicleBase_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Jump_K2Node_InputActionEvent_2
	 */
	struct ABP_HDVehicleBase_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpActEvt_Use_K2Node_InputActionEvent_1
	 */
	struct ABP_HDVehicleBase_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct ABP_HDVehicleBase_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 */
	struct ABP_HDVehicleBase_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.Used
	 */
	struct ABP_HDVehicleBase_C_Used_Params
	{
	public:
		class AActor*                                              Invoker;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.NotifyPlayerSeatChangeEvent
	 */
	struct ABP_HDVehicleBase_C_NotifyPlayerSeatChangeEvent_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UArcVehicleSeatConfig*                               ToSeat;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UArcVehicleSeatConfig*                               FromSeat;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EArcVehicleSeatChangeType                                  SeatChangeEvent;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.ReceiveTick
	 */
	struct ABP_HDVehicleBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDVehicleBase.BP_HDVehicleBase_C.ExecuteUbergraph_BP_HDVehicleBase
	 */
	struct ABP_HDVehicleBase_C_ExecuteUbergraph_BP_HDVehicleBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7DLT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
