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
	 * Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
	 */
	struct UUI_HealthWidget2_C_Construct_Params
	{	};

	/**
	 * Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
	 */
	struct UUI_HealthWidget2_C_SetHealthPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
	 */
	struct UUI_HealthWidget2_C_SetMaxHealthPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
	 */
	struct UUI_HealthWidget2_C_ExecuteUbergraph_UI_HealthWidget2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
