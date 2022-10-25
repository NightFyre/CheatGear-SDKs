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
	 * Function WBP_CVar_String.WBP_CVar_String_C.GetKey
	 */
	struct UWBP_CVar_String_C_GetKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.IsDirty
	 */
	struct UWBP_CVar_String_C_IsDirty_Params
	{
	public:
		bool                                                       IsDirty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.GetToolTipWidget_1
	 */
	struct UWBP_CVar_String_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.SetInitialValue
	 */
	struct UWBP_CVar_String_C_SetInitialValue_Params
	{
	public:
		class FString                                              NewValue;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.SetValue
	 */
	struct UWBP_CVar_String_C_SetValue_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.SetDefaultValue
	 */
	struct UWBP_CVar_String_C_SetDefaultValue_Params
	{	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.Construct
	 */
	struct UWBP_CVar_String_C_Construct_Params
	{	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.SetConfigValue
	 */
	struct UWBP_CVar_String_C_SetConfigValue_Params
	{	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.RevertToInitialValue
	 */
	struct UWBP_CVar_String_C_RevertToInitialValue_Params
	{	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.SetKeyValue
	 */
	struct UWBP_CVar_String_C_SetKeyValue_Params
	{
	public:
		class FString                                              KeyValueAsString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.Refresh
	 */
	struct UWBP_CVar_String_C_Refresh_Params
	{	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.PreConstruct
	 */
	struct UWBP_CVar_String_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CVar_String.WBP_CVar_String_C.ExecuteUbergraph_WBP_CVar_String
	 */
	struct UWBP_CVar_String_C_ExecuteUbergraph_WBP_CVar_String_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LRL7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
