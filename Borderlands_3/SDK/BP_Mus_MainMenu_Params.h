#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BP_Mus_MainMenu.BP_Mus_MainMenu_C.UserConstructionScript
	 */
	struct ABP_Mus_MainMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Mus_MainMenu.BP_Mus_MainMenu_C.ReceiveBeginPlay
	 */
	struct ABP_Mus_MainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Mus_MainMenu.BP_Mus_MainMenu_C.ReceiveEndPlay
	 */
	struct ABP_Mus_MainMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mus_MainMenu.BP_Mus_MainMenu_C.ExecuteUbergraph_BP_Mus_MainMenu
	 */
	struct ABP_Mus_MainMenu_C_ExecuteUbergraph_BP_Mus_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
