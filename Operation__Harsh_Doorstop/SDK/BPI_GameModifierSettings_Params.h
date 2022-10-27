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
	 * Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.GetTravelURLOptions
	 */
	struct UBPI_GameModifierSettings_C_GetTravelURLOptions_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.IsEnabled
	 */
	struct UBPI_GameModifierSettings_C_IsEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.SetupModifier
	 */
	struct UBPI_GameModifierSettings_C_SetupModifier_Params
	{
	public:
		class UWBP_OptionMenu_CreateGame_C*                        ParentMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
