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
	 * Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Portrait Image
	 */
	struct UWB_CommunityBlockEntry_C_GetPortraitImage_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Class Icon
	 */
	struct UWB_CommunityBlockEntry_C_GetClassIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Nick Name Text
	 */
	struct UWB_CommunityBlockEntry_C_GetNickNameText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_CommunityBlockEntry.WB_CommunityBlockEntry_C.Get Selected Visibility
	 */
	struct UWB_CommunityBlockEntry_C_GetSelectedVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
