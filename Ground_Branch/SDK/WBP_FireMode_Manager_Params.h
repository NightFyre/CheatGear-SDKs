#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ShowFireModes
	 */
	struct UWBP_FireMode_Manager_C_ShowFireModes_Params
	{
	public:
		class AGBFirearm*                                          Firearm;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnAnimationFinished_Event_1
	 */
	struct UWBP_FireMode_Manager_C_OnAnimationFinished_Event_1_Params
	{	};

	/**
	 * Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.Construct
	 */
	struct UWBP_FireMode_Manager_C_Construct_Params
	{	};

	/**
	 * Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.OnPlayerControllerStateChanged_Event_1
	 */
	struct UWBP_FireMode_Manager_C_OnPlayerControllerStateChanged_Event_1_Params
	{
	public:
		class FName                                                OldState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FireMode_Manager.WBP_FireMode_Manager_C.ExecuteUbergraph_WBP_FireMode_Manager
	 */
	struct UWBP_FireMode_Manager_C_ExecuteUbergraph_WBP_FireMode_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXOC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
