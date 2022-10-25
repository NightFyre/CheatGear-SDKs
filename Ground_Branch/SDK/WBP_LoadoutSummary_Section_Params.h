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
	 * Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.Update
	 */
	struct UWBP_LoadoutSummary_Section_C_Update_Params
	{	};

	/**
	 * Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.AddItem
	 */
	struct UWBP_LoadoutSummary_Section_C_AddItem_Params
	{
	public:
		class AGBItem*                                             ItemToAdd;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.PreConstruct
	 */
	struct UWBP_LoadoutSummary_Section_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_LoadoutSummary_Section.WBP_LoadoutSummary_Section_C.ExecuteUbergraph_WBP_LoadoutSummary_Section
	 */
	struct UWBP_LoadoutSummary_Section_C_ExecuteUbergraph_WBP_LoadoutSummary_Section_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MUYM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
