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
	 * Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.UpdateOutsidePlayableAreaText
	 */
	struct UBP_Widget_RestrictedAreaWarning_C_UpdateOutsidePlayableAreaText_Params
	{	};

	/**
	 * Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.SetIsRestricted
	 */
	struct UBP_Widget_RestrictedAreaWarning_C_SetIsRestricted_Params
	{
	public:
		bool                                                       bNewRestricted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNewOutsidePlayableArea;                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.Tick
	 */
	struct UBP_Widget_RestrictedAreaWarning_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_RestrictedAreaWarning.BP_Widget_RestrictedAreaWarning_C.ExecuteUbergraph_BP_Widget_RestrictedAreaWarning
	 */
	struct UBP_Widget_RestrictedAreaWarning_C_ExecuteUbergraph_BP_Widget_RestrictedAreaWarning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
