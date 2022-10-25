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
	 * Function WBP_Config_String.WBP_Config_String_C.GetKey
	 */
	struct UWBP_Config_String_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.IsDirty
	 */
	struct UWBP_Config_String_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetSpecialWarningTooltip
	 */
	struct UWBP_Config_String_C_SetSpecialWarningTooltip_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetInitialValue
	 */
	struct UWBP_Config_String_C_SetInitialValue_Params
	{
	public:
		class FString                                              NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetValue
	 */
	struct UWBP_Config_String_C_SetValue_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetKeyValue
	 */
	struct UWBP_Config_String_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.Construct
	 */
	struct UWBP_Config_String_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetConfigValue
	 */
	struct UWBP_Config_String_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.RevertToInitialValue
	 */
	struct UWBP_Config_String_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.PreConstruct
	 */
	struct UWBP_Config_String_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.BndEvt__ComboBox_Values_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
	 */
	struct UWBP_Config_String_C_BndEvt__ComboBox_Values_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.Refresh
	 */
	struct UWBP_Config_String_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.SetDefaultValue
	 */
	struct UWBP_Config_String_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_String.WBP_Config_String_C.ExecuteUbergraph_WBP_Config_String
	 */
	struct UWBP_Config_String_C_ExecuteUbergraph_WBP_Config_String_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
