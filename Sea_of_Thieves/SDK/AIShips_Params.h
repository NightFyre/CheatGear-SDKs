#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
	 */
	struct UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGuid                                               CrewId;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
	 */
	struct UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAIShipServiceDataAsset*                             ServiceParams;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIShipEncounterBattleDesc                          ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AIShips.AthenaAIShipController.ApplyControllerParams
	 */
	struct AAthenaAIShipController_ApplyControllerParams_Params
	{
	public:
		class UAthenaAIControllerParamsDataAsset*                  ParamsAsset;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               InPawn;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
	 */
	struct UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params
	{
	public:
		struct FAIShipSailData                                     SailData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
