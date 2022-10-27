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
	 * Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.GetSettingText
	 */
	struct UWBP_ModifierSettingBox_C_GetSettingText_Params
	{
	public:
		class FText                                                SettingText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.SetSettingText
	 */
	struct UWBP_ModifierSettingBox_C_SetSettingText_Params
	{
	public:
		class FText                                                InSettingText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.PreConstruct
	 */
	struct UWBP_ModifierSettingBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.ExecuteUbergraph_WBP_ModifierSettingBox
	 */
	struct UWBP_ModifierSettingBox_C_ExecuteUbergraph_WBP_ModifierSettingBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
