#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.GetOutputText
	 */
	struct UBP_TextWithReplaceableText_C_GetOutputText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.UpdateJustification
	 */
	struct UBP_TextWithReplaceableText_C_UpdateJustification_Params
	{
	public:
		ETextJustify                                               Justification;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.PreConstruct
	 */
	struct UBP_TextWithReplaceableText_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.ExecuteUbergraph_BP_TextWithReplaceableText
	 */
	struct UBP_TextWithReplaceableText_C_ExecuteUbergraph_BP_TextWithReplaceableText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26NU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
