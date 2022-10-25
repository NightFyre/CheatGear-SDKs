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
	 * Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.GetVisibility_1
	 */
	struct UBP_MenuBreadcrumbs_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.PreConstruct
	 */
	struct UBP_MenuBreadcrumbs_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.Construct
	 */
	struct UBP_MenuBreadcrumbs_C_Construct_Params
	{	};

	/**
	 * Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.UpdatePlatform
	 */
	struct UBP_MenuBreadcrumbs_C_UpdatePlatform_Params
	{
	public:
		bool                                                       bConsole;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MenuBreadcrumbs.BP_MenuBreadcrumbs_C.ExecuteUbergraph_BP_MenuBreadcrumbs
	 */
	struct UBP_MenuBreadcrumbs_C_ExecuteUbergraph_BP_MenuBreadcrumbs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
