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
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize
	 */
	struct ABP_ZoneMap_Planet_C_Initialize_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.UserConstructionScript
	 */
	struct ABP_ZoneMap_Planet_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__FinishedFunc
	 */
	struct ABP_ZoneMap_Planet_C_Animate_Orbital_Components__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__UpdateFunc
	 */
	struct ABP_ZoneMap_Planet_C_Animate_Orbital_Components__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveTick
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition In
	 */
	struct ABP_ZoneMap_Planet_C_Transition_In_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition In
	 */
	struct ABP_ZoneMap_Planet_C_Interrupt_Transition_In_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition Out
	 */
	struct ABP_ZoneMap_Planet_C_Transition_Out_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition Out
	 */
	struct ABP_ZoneMap_Planet_C_Interrupt_Transition_Out_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveDestroyed
	 */
	struct ABP_ZoneMap_Planet_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize Planet
	 */
	struct ABP_ZoneMap_Planet_C_Initialize_Planet_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Update
	 */
	struct ABP_ZoneMap_Planet_C_Update_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Stop Animation
	 */
	struct ABP_ZoneMap_Planet_C_Stop_Animation_Params
	{	};

	/**
	 * Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ExecuteUbergraph_BP_ZoneMap_Planet
	 */
	struct ABP_ZoneMap_Planet_C_ExecuteUbergraph_BP_ZoneMap_Planet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_41KP[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
