#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function InsideShipPart_Health_Widget.InsideShipPart_Health_Widget_C.SetupInitialLook
	 */
	struct UInsideShipPart_Health_Widget_C_SetupInitialLook_Params
	{
	public:
		class FText                                                Text_PartName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InsideShipPart_Health_Widget.InsideShipPart_Health_Widget_C.UpdatePartHealth
	 */
	struct UInsideShipPart_Health_Widget_C_UpdatePartHealth_Params
	{
	public:
		float                                                      Current;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
