#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetOutsideSignText
	 */
	struct AStationAirlockDockingAreaAbility_C_SetOutsideSignText_Params
	{	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnInside_UIWidget
	 */
	struct AStationAirlockDockingAreaAbility_C_SetStateOnInside_UIWidget_Params
	{
	public:
		E_HangarDoorStates                                         StateToUse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CM7D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnUIWidget
	 */
	struct AStationAirlockDockingAreaAbility_C_SetStateOnUIWidget_Params
	{
	public:
		E_HangarDoorStates                                         StateToUse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ILKT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.UserConstructionScript
	 */
	struct AStationAirlockDockingAreaAbility_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.DoorOpenEvent
	 */
	struct AStationAirlockDockingAreaAbility_C_DoorOpenEvent_Params
	{
	public:
		bool                                                       BopenDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.EnableCollisionOnDoor
	 */
	struct AStationAirlockDockingAreaAbility_C_EnableCollisionOnDoor_Params
	{
	public:
		bool                                                       EnableCollision;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ReceiveBeginPlay
	 */
	struct AStationAirlockDockingAreaAbility_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.AirLockOpenCloseState
	 */
	struct AStationAirlockDockingAreaAbility_C_AirLockOpenCloseState_Params
	{
	public:
		EUseState                                                  OldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUseState                                                  NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ExecuteUbergraph_StationAirlockDockingAreaAbility
	 */
	struct AStationAirlockDockingAreaAbility_C_ExecuteUbergraph_StationAirlockDockingAreaAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
