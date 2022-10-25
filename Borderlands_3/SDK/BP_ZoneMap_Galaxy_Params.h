#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_Galaxy_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__FinishedFunc
	 */
	struct ABP_ZoneMap_Galaxy_C_Animate_Galaxy_Map_Components__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Animate Galaxy Map Components__UpdateFunc
	 */
	struct ABP_ZoneMap_Galaxy_C_Animate_Galaxy_Map_Components__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition In
	 */
	struct ABP_ZoneMap_Galaxy_C_Transition_In_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition In
	 */
	struct ABP_ZoneMap_Galaxy_C_Interrupt_Transition_In_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Transition Out
	 */
	struct ABP_ZoneMap_Galaxy_C_Transition_Out_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.Interrupt Transition Out
	 */
	struct ABP_ZoneMap_Galaxy_C_Interrupt_Transition_Out_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveDestroyed
	 */
	struct ABP_ZoneMap_Galaxy_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick
	 */
	struct ABP_ZoneMap_Galaxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy
	 */
	struct ABP_ZoneMap_Galaxy_C_ExecuteUbergraph_BP_ZoneMap_Galaxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
