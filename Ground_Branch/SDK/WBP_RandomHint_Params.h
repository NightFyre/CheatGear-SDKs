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
	 * Function WBP_RandomHint.WBP_RandomHint_C.SaveUsedHint
	 */
	struct UWBP_RandomHint_C_SaveUsedHint_Params
	{	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.LoadUsedHints
	 */
	struct UWBP_RandomHint_C_LoadUsedHints_Params
	{	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.UseHint
	 */
	struct UWBP_RandomHint_C_UseHint_Params
	{
	public:
		class FText                                                Output;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.Setup
	 */
	struct UWBP_RandomHint_C_Setup_Params
	{	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.CycleThroughHints
	 */
	struct UWBP_RandomHint_C_CycleThroughHints_Params
	{
	public:
		int32_t                                                    Start;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    End;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.UpdateText
	 */
	struct UWBP_RandomHint_C_UpdateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_RandomHint.WBP_RandomHint_C.ExecuteUbergraph_WBP_RandomHint
	 */
	struct UWBP_RandomHint_C_ExecuteUbergraph_WBP_RandomHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C7G7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
