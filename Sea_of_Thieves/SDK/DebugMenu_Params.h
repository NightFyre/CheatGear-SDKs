#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
	 */
	struct UDebugMenuTestFunctions_IsDebugMenuReady_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
	 */
	struct UDebugMenuTestFunctions_IsDebugMenuOpen_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
	 */
	struct UDebugMenuTestFunctions_IsDebugMenuAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
	 */
	struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
	 */
	struct UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
	 */
	struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
	 */
	struct UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params
	{
	public:
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
