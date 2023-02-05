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
	 * Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Text Color
	 */
	struct Uv2_WB_ItemTooltip_StatElem_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Spell Name
	 */
	struct Uv2_WB_ItemTooltip_StatElem_C_GetSpellName_Params
	{
	public:
		class FText                                                Out;                                                     // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Skill Name
	 */
	struct Uv2_WB_ItemTooltip_StatElem_C_GetSkillName_Params
	{
	public:
		class FText                                                Out;                                                     // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Perk Name
	 */
	struct Uv2_WB_ItemTooltip_StatElem_C_GetPerkName_Params
	{
	public:
		class FText                                                Out;                                                     // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_StatElem.v2_WB_ItemTooltip_StatElem_C.Get Stat Text
	 */
	struct Uv2_WB_ItemTooltip_StatElem_C_GetStatText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
