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
	 * Function BP_Widget_StarImage.BP_Widget_StarImage_C.UpdateStarAppearance
	 */
	struct UBP_Widget_StarImage_C_UpdateStarAppearance_Params
	{	};

	/**
	 * Function BP_Widget_StarImage.BP_Widget_StarImage_C.SetStarFraction
	 */
	struct UBP_Widget_StarImage_C_SetStarFraction_Params
	{
	public:
		float                                                      NewStarFraction;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_StarImage.BP_Widget_StarImage_C.PreConstruct
	 */
	struct UBP_Widget_StarImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_StarImage.BP_Widget_StarImage_C.ExecuteUbergraph_BP_Widget_StarImage
	 */
	struct UBP_Widget_StarImage_C_ExecuteUbergraph_BP_Widget_StarImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
