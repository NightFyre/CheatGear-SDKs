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
	 * Function WBP_SQOption.WBP_SQOption_C.GetParentSquadData
	 */
	struct UWBP_SQOption_C_GetParentSquadData_Params
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SQOption.WBP_SQOption_C.SetupOption
	 */
	struct UWBP_SQOption_C_SetupOption_Params
	{
	public:
		class USquadListEntry*                                     InSquadData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
