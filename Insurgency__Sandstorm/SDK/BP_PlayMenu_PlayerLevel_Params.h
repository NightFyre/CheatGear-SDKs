#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.OnUpdateXP
	 */
	struct UBP_PlayMenu_PlayerLevel_C_OnUpdateXP_Params
	{
	public:
		int64_t                                                    InXP;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetBlankXP
	 */
	struct UBP_PlayMenu_PlayerLevel_C_SetBlankXP_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.UpdateXP
	 */
	struct UBP_PlayMenu_PlayerLevel_C_UpdateXP_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.SetNewXP
	 */
	struct UBP_PlayMenu_PlayerLevel_C_SetNewXP_Params
	{
	public:
		int64_t                                                    XP;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.Construct
	 */
	struct UBP_PlayMenu_PlayerLevel_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C.ExecuteUbergraph_BP_PlayMenu_PlayerLevel
	 */
	struct UBP_PlayMenu_PlayerLevel_C_ExecuteUbergraph_BP_PlayMenu_PlayerLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2ENL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
