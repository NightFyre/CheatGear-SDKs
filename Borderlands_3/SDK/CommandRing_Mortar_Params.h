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
	 * Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript
	 */
	struct ACommandRing_Mortar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar
	 */
	struct ACommandRing_Mortar_C_BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar
	 */
	struct ACommandRing_Mortar_C_ExecuteUbergraph_CommandRing_Mortar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_37MH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
