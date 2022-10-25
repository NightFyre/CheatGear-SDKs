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
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetEnabled
	 */
	struct UWBP_EquipmentSelect_EqBox_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.IsHighlighted
	 */
	struct UWBP_EquipmentSelect_EqBox_C_IsHighlighted_Params
	{
	public:
		bool                                                       bHighlight;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetHighlight
	 */
	struct UWBP_EquipmentSelect_EqBox_C_SetHighlight_Params
	{
	public:
		bool                                                       bHighlighted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_977Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.PreConstruct
	 */
	struct UWBP_EquipmentSelect_EqBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.Tick
	 */
	struct UWBP_EquipmentSelect_EqBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.ExecuteUbergraph_WBP_EquipmentSelect_EqBox
	 */
	struct UWBP_EquipmentSelect_EqBox_C_ExecuteUbergraph_WBP_EquipmentSelect_EqBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
