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
	 * Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.GetIcon
	 */
	struct UUI_PlacedPlaceableIcon_C_GetIcon_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlacedPlaceableIcon.UI_PlacedPlaceableIcon_C.Init
	 */
	struct UUI_PlacedPlaceableIcon_C_Init_Params
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
