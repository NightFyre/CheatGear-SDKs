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
	 * Function StandIn_PhaseCast.StandIn_PhaseCast_C.SetGhostMaterials
	 */
	struct AStandIn_PhaseCast_C_SetGhostMaterials_Params
	{	};

	/**
	 * Function StandIn_PhaseCast.StandIn_PhaseCast_C.UserConstructionScript
	 */
	struct AStandIn_PhaseCast_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StandIn_PhaseCast.StandIn_PhaseCast_C.ReceiveBeginPlay
	 */
	struct AStandIn_PhaseCast_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StandIn_PhaseCast.StandIn_PhaseCast_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast
	 */
	struct AStandIn_PhaseCast_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast_Params
	{
	public:
		class UGbxCustomizationData*                               Customization;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandIn_PhaseCast.StandIn_PhaseCast_C.ExecuteUbergraph_StandIn_PhaseCast
	 */
	struct AStandIn_PhaseCast_C_ExecuteUbergraph_StandIn_PhaseCast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HKVR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
