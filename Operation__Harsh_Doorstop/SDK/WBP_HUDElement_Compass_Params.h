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
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.SetWidgetCanvasSlotSize
	 */
	struct UWBP_HUDElement_Compass_C_SetWidgetCanvasSlotSize_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           NewLayoutSize;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.UpdateDirection
	 */
	struct UWBP_HUDElement_Compass_C_UpdateDirection_Params
	{	};

	/**
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.Tick
	 */
	struct UWBP_HUDElement_Compass_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.PreConstruct
	 */
	struct UWBP_HUDElement_Compass_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.OnInitialized
	 */
	struct UWBP_HUDElement_Compass_C_OnInitialized_Params
	{	};

	/**
	 * Function WBP_HUDElement_Compass.WBP_HUDElement_Compass_C.ExecuteUbergraph_WBP_HUDElement_Compass
	 */
	struct UWBP_HUDElement_Compass_C_ExecuteUbergraph_WBP_HUDElement_Compass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
