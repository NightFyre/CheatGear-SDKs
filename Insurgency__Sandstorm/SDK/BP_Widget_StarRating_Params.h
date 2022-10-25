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
	 * Function BP_Widget_StarRating.BP_Widget_StarRating_C.UpdateRatingAppearance
	 */
	struct UBP_Widget_StarRating_C_UpdateRatingAppearance_Params
	{	};

	/**
	 * Function BP_Widget_StarRating.BP_Widget_StarRating_C.UpdateRating
	 */
	struct UBP_Widget_StarRating_C_UpdateRating_Params
	{
	public:
		float                                                      NewRating;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewHasRatings;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_StarRating.BP_Widget_StarRating_C.PreConstruct
	 */
	struct UBP_Widget_StarRating_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_StarRating.BP_Widget_StarRating_C.ExecuteUbergraph_BP_Widget_StarRating
	 */
	struct UBP_Widget_StarRating_C_ExecuteUbergraph_BP_Widget_StarRating_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
