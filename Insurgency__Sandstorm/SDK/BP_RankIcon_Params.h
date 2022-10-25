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
	 * Function BP_RankIcon.BP_RankIcon_C.Get_RankIcon_Visibility_1
	 */
	struct UBP_RankIcon_C_Get_RankIcon_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.Get_RankStarOuter_Brush
	 */
	struct UBP_RankIcon_C_Get_RankStarOuter_Brush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier6
	 */
	struct UBP_RankIcon_C_UpdateIconTier6_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier5
	 */
	struct UBP_RankIcon_C_UpdateIconTier5_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier4
	 */
	struct UBP_RankIcon_C_UpdateIconTier4_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier3
	 */
	struct UBP_RankIcon_C_UpdateIconTier3_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier2
	 */
	struct UBP_RankIcon_C_UpdateIconTier2_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier1
	 */
	struct UBP_RankIcon_C_UpdateIconTier1_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIconTier0
	 */
	struct UBP_RankIcon_C_UpdateIconTier0_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.SetFromExperience
	 */
	struct UBP_RankIcon_C_SetFromExperience_Params
	{
	public:
		int32_t                                                    PlayerExperience;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.Get_RankStarInner_Brush_1
	 */
	struct UBP_RankIcon_C_Get_RankStarInner_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.Get_RankStarOuter_ColorAndOpacity_1
	 */
	struct UBP_RankIcon_C_Get_RankStarOuter_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.Get_RankStarInner_ColorAndOpacity_1
	 */
	struct UBP_RankIcon_C_Get_RankStarInner_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.UpdateIcon
	 */
	struct UBP_RankIcon_C_UpdateIcon_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.PreConstruct
	 */
	struct UBP_RankIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.Construct
	 */
	struct UBP_RankIcon_C_Construct_Params
	{	};

	/**
	 * Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon
	 */
	struct UBP_RankIcon_C_ExecuteUbergraph_BP_RankIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
