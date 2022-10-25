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
	 * Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
	 */
	struct UUI_WarningSign_C_InitFromWarningType_Params
	{
	public:
		EWarningType                                               warningType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WarningSign.UI_WarningSign_C.Construct
	 */
	struct UUI_WarningSign_C_Construct_Params
	{	};

	/**
	 * Function UI_WarningSign.UI_WarningSign_C.Tick
	 */
	struct UUI_WarningSign_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
	 */
	struct UUI_WarningSign_C_ExecuteUbergraph_UI_WarningSign_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
