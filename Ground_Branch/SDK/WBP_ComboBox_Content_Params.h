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
	 * Function WBP_ComboBox_Content.WBP_ComboBox_Content_C.Construct
	 */
	struct UWBP_ComboBox_Content_C_Construct_Params
	{	};

	/**
	 * Function WBP_ComboBox_Content.WBP_ComboBox_Content_C.OnEntrySelected_Event_2
	 */
	struct UWBP_ComboBox_Content_C_OnEntrySelected_Event_2_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ComboBox_Content.WBP_ComboBox_Content_C.ExecuteUbergraph_WBP_ComboBox_Content
	 */
	struct UWBP_ComboBox_Content_C_ExecuteUbergraph_WBP_ComboBox_Content_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4LW3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ComboBox_Content.WBP_ComboBox_Content_C.OnIndexChanged__DelegateSignature
	 */
	struct UWBP_ComboBox_Content_C_OnIndexChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
