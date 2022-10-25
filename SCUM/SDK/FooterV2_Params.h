#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function FooterV2.FooterV2_C.SetText
	 */
	struct UFooterV2_C_SetText_Params
	{
	public:
		class FText                                                textToSet;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        textColorToSet;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FooterV2.FooterV2_C.Construct
	 */
	struct UFooterV2_C_Construct_Params
	{	};

	/**
	 * Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2
	 */
	struct UFooterV2_C_ExecuteUbergraph_FooterV2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
