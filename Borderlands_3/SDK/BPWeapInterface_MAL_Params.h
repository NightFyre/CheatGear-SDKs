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
	 * Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetSecondaryElementalData
	 */
	struct UBPWeapInterface_MAL_C_SetSecondaryElementalData_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeapInterface_MAL.BPWeapInterface_MAL_C.SetPrimaryElementalData
	 */
	struct UBPWeapInterface_MAL_C_SetPrimaryElementalData_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
