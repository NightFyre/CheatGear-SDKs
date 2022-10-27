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
	 * Function WBP_StanceIndicator.WBP_StanceIndicator_C.SetHealth
	 */
	struct UWBP_StanceIndicator_C_SetHealth_Params
	{
	public:
		float                                                      NewHealthValueNorm;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PrevHealthValueNorm;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StanceIndicator.WBP_StanceIndicator_C.StanceStateUpdate
	 */
	struct UWBP_StanceIndicator_C_StanceStateUpdate_Params
	{
	public:
		EHDUICharacterStanceState                                  State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StanceIndicator.WBP_StanceIndicator_C.ExecuteUbergraph_WBP_StanceIndicator
	 */
	struct UWBP_StanceIndicator_C_ExecuteUbergraph_WBP_StanceIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
