#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_ItemRichTextBlockDecorator.BP_ItemRichTextBlockDecorator_C.GetItemTextBlockStyle
	 */
	struct UBP_ItemRichTextBlockDecorator_C_GetItemTextBlockStyle_Params
	{
	public:
		struct FGameplayTag                                        InRarityType;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z14Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTextBlockStyle                                     ReturnValue;                                             // 0x0010(0x0340)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
