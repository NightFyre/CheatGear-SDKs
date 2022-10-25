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
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.IsDirty
	 */
	struct UWBP_Config_GraphicsQuality_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.GetKey
	 */
	struct UWBP_Config_GraphicsQuality_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.SetValue
	 */
	struct UWBP_Config_GraphicsQuality_C_SetValue_Params
	{
	public:
		int32_t                                                    New_Value;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.SetKeyValue
	 */
	struct UWBP_Config_GraphicsQuality_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.Construct
	 */
	struct UWBP_Config_GraphicsQuality_C_Construct_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.SetInitialValue
	 */
	struct UWBP_Config_GraphicsQuality_C_SetInitialValue_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.SetConfigValue
	 */
	struct UWBP_Config_GraphicsQuality_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.RevertToInitialValue
	 */
	struct UWBP_Config_GraphicsQuality_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
	 */
	struct UWBP_Config_GraphicsQuality_C_BndEvt__DropDown_Resolutions_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.PreConstruct
	 */
	struct UWBP_Config_GraphicsQuality_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.Refresh
	 */
	struct UWBP_Config_GraphicsQuality_C_Refresh_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.GetValueFromGameSettings
	 */
	struct UWBP_Config_GraphicsQuality_C_GetValueFromGameSettings_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.SetDefaultValue
	 */
	struct UWBP_Config_GraphicsQuality_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_Config_GraphicsQuality.WBP_Config_GraphicsQuality_C.ExecuteUbergraph_WBP_Config_GraphicsQuality
	 */
	struct UWBP_Config_GraphicsQuality_C_ExecuteUbergraph_WBP_Config_GraphicsQuality_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ETCA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
