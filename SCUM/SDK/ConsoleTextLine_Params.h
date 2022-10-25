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
	 * Function ConsoleTextLine.ConsoleTextLine_C.SetText
	 */
	struct UConsoleTextLine_C_SetText_Params
	{
	public:
		class FText                                                textToSet;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        textColorToSet;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleTextLine.ConsoleTextLine_C.Construct
	 */
	struct UConsoleTextLine_C_Construct_Params
	{	};

	/**
	 * Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
	 */
	struct UConsoleTextLine_C_ExecuteUbergraph_ConsoleTextLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
