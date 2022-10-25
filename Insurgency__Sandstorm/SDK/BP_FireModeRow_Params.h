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
	 * Function BP_FireModeRow.BP_FireModeRow_C.UpdateTwoRoundBurst
	 */
	struct UBP_FireModeRow_C_UpdateTwoRoundBurst_Params
	{
	public:
		bool                                                       bNewTwoRoundBurst;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FireModeRow.BP_FireModeRow_C.SetFiremodeSelected
	 */
	struct UBP_FireModeRow_C_SetFiremodeSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FireModeRow.BP_FireModeRow_C.GetSelectedFiremodeBgVisibility
	 */
	struct UBP_FireModeRow_C_GetSelectedFiremodeBgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireModeRow.BP_FireModeRow_C.PreConstruct
	 */
	struct UBP_FireModeRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FireModeRow.BP_FireModeRow_C.ExecuteUbergraph_BP_FireModeRow
	 */
	struct UBP_FireModeRow_C_ExecuteUbergraph_BP_FireModeRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
