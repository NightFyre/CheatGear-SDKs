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
	 * Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredVerticalAlignment
	 */
	struct UBPI_OptionMenu_C_GetDesiredVerticalAlignment_Params
	{
	public:
		EVerticalAlignment                                         Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_OptionMenu.BPI_OptionMenu_C.GetDesiredHorizontalAlignment
	 */
	struct UBPI_OptionMenu_C_GetDesiredHorizontalAlignment_Params
	{
	public:
		EHorizontalAlignment                                       Alignment;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_OptionMenu.BPI_OptionMenu_C.GetSubMenuOptions
	 */
	struct UBPI_OptionMenu_C_GetSubMenuOptions_Params
	{
	public:
		TArray<struct FFSubMenuOption>                             SubOptions;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_OptionMenu.BPI_OptionMenu_C.SetActiveSubMenuByIndex
	 */
	struct UBPI_OptionMenu_C_SetActiveSubMenuByIndex_Params
	{
	public:
		int32_t                                                    SubMenuIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_OptionMenu.BPI_OptionMenu_C.HasSubMenus
	 */
	struct UBPI_OptionMenu_C_HasSubMenus_Params
	{
	public:
		bool                                                       bSubMenuOptions;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
