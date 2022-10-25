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
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.GetKey
	 */
	struct UWBP_Config_SpinBox_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.IsDirty
	 */
	struct UWBP_Config_SpinBox_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6XXF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.GetValue
	 */
	struct UWBP_Config_SpinBox_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.SetInitialValue
	 */
	struct UWBP_Config_SpinBox_C_SetInitialValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.SetValue
	 */
	struct UWBP_Config_SpinBox_C_SetValue_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.SetKeyValue
	 */
	struct UWBP_Config_SpinBox_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.Construct
	 */
	struct UWBP_Config_SpinBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.SetConfigValue
	 */
	struct UWBP_Config_SpinBox_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.RevertToInitialValue
	 */
	struct UWBP_Config_SpinBox_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.PreConstruct
	 */
	struct UWBP_Config_SpinBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.Refresh
	 */
	struct UWBP_Config_SpinBox_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.BndEvt__SpinBox_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UWBP_Config_SpinBox_C_BndEvt__SpinBox_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.SetDefaultValue
	 */
	struct UWBP_Config_SpinBox_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_SpinBox.WBP_Config_SpinBox_C.ExecuteUbergraph_WBP_Config_SpinBox
	 */
	struct UWBP_Config_SpinBox_C_ExecuteUbergraph_WBP_Config_SpinBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
