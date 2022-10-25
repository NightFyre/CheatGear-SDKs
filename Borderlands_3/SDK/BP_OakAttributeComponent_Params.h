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
	 * Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ClearElementalAffinity
	 */
	struct UBP_OakAttributeComponent_C_ClearElementalAffinity_Params
	{	};

	/**
	 * Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.InitElementAffinity
	 */
	struct UBP_OakAttributeComponent_C_InitElementAffinity_Params
	{	};

	/**
	 * Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.SetElementAffinity
	 */
	struct UBP_OakAttributeComponent_C_SetElementAffinity_Params
	{
	public:
		EOakElementalType                                          Element;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Enum_ElementalAffinity                                     Affinity;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ReceiveBeginPlay
	 */
	struct UBP_OakAttributeComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OakAttributeComponent.BP_OakAttributeComponent_C.ExecuteUbergraph_BP_OakAttributeComponent
	 */
	struct UBP_OakAttributeComponent_C_ExecuteUbergraph_BP_OakAttributeComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
