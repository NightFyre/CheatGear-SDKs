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
	 * Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.GetTravelURLOptions
	 */
	struct UWBP_BotsGameModifierSettings_C_GetTravelURLOptions_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.IsEnabled
	 */
	struct UWBP_BotsGameModifierSettings_C_IsEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.BuildBotCountURLOption
	 */
	struct UWBP_BotsGameModifierSettings_C_BuildBotCountURLOption_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9T4K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Pair;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.SetupModifier
	 */
	struct UWBP_BotsGameModifierSettings_C_SetupModifier_Params
	{
	public:
		class UWBP_OptionMenu_CreateGame_C*                        ParentMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BotsGameModifierSettings.WBP_BotsGameModifierSettings_C.ExecuteUbergraph_WBP_BotsGameModifierSettings
	 */
	struct UWBP_BotsGameModifierSettings_C_ExecuteUbergraph_WBP_BotsGameModifierSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F4XW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
