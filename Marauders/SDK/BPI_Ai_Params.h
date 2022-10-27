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
	 * Function BPI_Ai.BPI_Ai_C.Ai_CheckSetMyInitialAmmoCount
	 */
	struct UBPI_Ai_C_Ai_CheckSetMyInitialAmmoCount_Params
	{	};

	/**
	 * Function BPI_Ai.BPI_Ai_C.Ai_TurnOnOffDebugText
	 */
	struct UBPI_Ai_C_Ai_TurnOnOffDebugText_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Ai.BPI_Ai_C.Ai_StoreBaseMissRate
	 */
	struct UBPI_Ai_C_Ai_StoreBaseMissRate_Params
	{
	public:
		float                                                      BaseMissRate;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Ai.BPI_Ai_C.Ai_SetMyGoal
	 */
	struct UBPI_Ai_C_Ai_SetMyGoal_Params
	{
	public:
		class FString                                              CurrentPlan;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Ai.BPI_Ai_C.PlayVoice
	 */
	struct UBPI_Ai_C_PlayVoice_Params
	{
	public:
		bool                                                       IsAShout;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7ZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSetDT;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
