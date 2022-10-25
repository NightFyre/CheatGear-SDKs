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
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.IsDirty
	 */
	struct UWBP_Config_Resolution_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.GetKey
	 */
	struct UWBP_Config_Resolution_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetValue
	 */
	struct UWBP_Config_Resolution_C_SetValue_Params
	{
	public:
		int32_t                                                    New_Value;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetKeyValue
	 */
	struct UWBP_Config_Resolution_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.Refresh
	 */
	struct UWBP_Config_Resolution_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetDefaultValue
	 */
	struct UWBP_Config_Resolution_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.Construct
	 */
	struct UWBP_Config_Resolution_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetInitialValue
	 */
	struct UWBP_Config_Resolution_C_SetInitialValue_Params
	{
	public:
		struct FIntPoint                                           NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.SetConfigValue
	 */
	struct UWBP_Config_Resolution_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.RevertToInitialValue
	 */
	struct UWBP_Config_Resolution_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
	 */
	struct UWBP_Config_Resolution_C_BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_Resolution.WBP_Config_Resolution_C.ExecuteUbergraph_WBP_Config_Resolution
	 */
	struct UWBP_Config_Resolution_C_ExecuteUbergraph_WBP_Config_Resolution_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
