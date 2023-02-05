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
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Get_UtilityTypeText_Text_1
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Get_UtilityTypeText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Get_ArmorTypeText_Text_1
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Get_ArmorTypeText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Get_WeaponType_Text_1
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Get_WeaponType_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Get_HandType_Text_1
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Get_HandType_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Get_SlotType_Text_1
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Get_SlotType_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.Tick
	 */
	struct Uv2_WB_ItemTooltip_Info_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function v2_WB_ItemTooltip_Info.v2_WB_ItemTooltip_Info_C.ExecuteUbergraph_v2_WB_ItemTooltip_Info
	 */
	struct Uv2_WB_ItemTooltip_Info_C_ExecuteUbergraph_v2_WB_ItemTooltip_Info_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EREN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
