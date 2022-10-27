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
	 * Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UpdateParameters
	 */
	struct ABP_TimeOfDay_Base_C_UpdateParameters_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UserConstructionScript
	 */
	struct ABP_TimeOfDay_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveTick
	 */
	struct ABP_TimeOfDay_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveBeginPlay
	 */
	struct ABP_TimeOfDay_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ExecuteUbergraph_BP_TimeOfDay_Base
	 */
	struct ABP_TimeOfDay_Base_C_ExecuteUbergraph_BP_TimeOfDay_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
