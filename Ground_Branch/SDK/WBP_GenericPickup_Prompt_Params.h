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
	 * Function WBP_GenericPickup_Prompt.WBP_GenericPickup_Prompt_C.Construct
	 */
	struct UWBP_GenericPickup_Prompt_C_Construct_Params
	{	};

	/**
	 * Function WBP_GenericPickup_Prompt.WBP_GenericPickup_Prompt_C.Tick
	 */
	struct UWBP_GenericPickup_Prompt_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GenericPickup_Prompt.WBP_GenericPickup_Prompt_C.ExecuteUbergraph_WBP_GenericPickup_Prompt
	 */
	struct UWBP_GenericPickup_Prompt_C_ExecuteUbergraph_WBP_GenericPickup_Prompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8P6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
