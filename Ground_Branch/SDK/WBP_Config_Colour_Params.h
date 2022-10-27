#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.GetKey
	 */
	struct UWBP_Config_Colour_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.IsDirty
	 */
	struct UWBP_Config_Colour_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.SetInitialValue
	 */
	struct UWBP_Config_Colour_C_SetInitialValue_Params
	{
	public:
		struct FLinearColor                                        NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.SetValue
	 */
	struct UWBP_Config_Colour_C_SetValue_Params
	{
	public:
		struct FLinearColor                                        NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.SetKeyValue
	 */
	struct UWBP_Config_Colour_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.Construct
	 */
	struct UWBP_Config_Colour_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.SetConfigValue
	 */
	struct UWBP_Config_Colour_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.RevertToInitialValue
	 */
	struct UWBP_Config_Colour_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.PreConstruct
	 */
	struct UWBP_Config_Colour_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.Refresh
	 */
	struct UWBP_Config_Colour_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.SetDefaultValue
	 */
	struct UWBP_Config_Colour_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature
	 */
	struct UWBP_Config_Colour_C_BndEvt__WBP_Config_Colour_WBP_ColourPicker_K2Node_ComponentBoundEvent_1_OnColourPicked__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Colour;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Colour.WBP_Config_Colour_C.ExecuteUbergraph_WBP_Config_Colour
	 */
	struct UWBP_Config_Colour_C_ExecuteUbergraph_WBP_Config_Colour_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
