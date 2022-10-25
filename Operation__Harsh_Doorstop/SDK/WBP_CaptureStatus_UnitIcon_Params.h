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
	 * Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetIsMultipleUnit
	 */
	struct UWBP_CaptureStatus_UnitIcon_C_SetIsMultipleUnit_Params
	{
	public:
		bool                                                       bNewUnitMultiple;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.SetUnitType
	 */
	struct UWBP_CaptureStatus_UnitIcon_C_SetUnitType_Params
	{
	public:
		ECaptureUnitType                                           NewUnitType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.PreConstruct
	 */
	struct UWBP_CaptureStatus_UnitIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus_UnitIcon.WBP_CaptureStatus_UnitIcon_C.ExecuteUbergraph_WBP_CaptureStatus_UnitIcon
	 */
	struct UWBP_CaptureStatus_UnitIcon_C_ExecuteUbergraph_WBP_CaptureStatus_UnitIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
