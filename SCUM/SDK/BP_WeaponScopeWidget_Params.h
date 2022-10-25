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
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
	 */
	struct UBP_WeaponScopeWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
	 */
	struct UBP_WeaponScopeWidget_C_OnShowElements_Params
	{	};

	/**
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
	 */
	struct UBP_WeaponScopeWidget_C_OnHideElements_Params
	{	};

	/**
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
	 */
	struct UBP_WeaponScopeWidget_C_OnConstructFinished_Params
	{	};

	/**
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UBP_WeaponScopeWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
	 */
	struct UBP_WeaponScopeWidget_C_ExecuteUbergraph_BP_WeaponScopeWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
