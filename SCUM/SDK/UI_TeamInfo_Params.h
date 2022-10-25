#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames
	 */
	struct UUI_TeamInfo_C_ClearTeammateNames_Params
	{	};

	/**
	 * Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1
	 */
	struct UUI_TeamInfo_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName
	 */
	struct UUI_TeamInfo_C_RemoveTeammateName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName
	 */
	struct UUI_TeamInfo_C_AddTeammateName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TeamInfo.UI_TeamInfo_C.Construct
	 */
	struct UUI_TeamInfo_C_Construct_Params
	{	};

	/**
	 * Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo
	 */
	struct UUI_TeamInfo_C_ExecuteUbergraph_UI_TeamInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3YJU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
