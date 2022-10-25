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
	 * Function BP_MainMenuPlayerCount.BP_MainMenuPlayerCount_C.UpdateVisuals
	 */
	struct UBP_MainMenuPlayerCount_C_UpdateVisuals_Params
	{	};

	/**
	 * Function BP_MainMenuPlayerCount.BP_MainMenuPlayerCount_C.OnPoolCountsUpdated
	 */
	struct UBP_MainMenuPlayerCount_C_OnPoolCountsUpdated_Params
	{
	public:
		struct FQueryPoolCountResults                              Data;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MainMenuPlayerCount.BP_MainMenuPlayerCount_C.Construct
	 */
	struct UBP_MainMenuPlayerCount_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenuPlayerCount.BP_MainMenuPlayerCount_C.Tick
	 */
	struct UBP_MainMenuPlayerCount_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenuPlayerCount.BP_MainMenuPlayerCount_C.ExecuteUbergraph_BP_MainMenuPlayerCount
	 */
	struct UBP_MainMenuPlayerCount_C_ExecuteUbergraph_BP_MainMenuPlayerCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19S9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
