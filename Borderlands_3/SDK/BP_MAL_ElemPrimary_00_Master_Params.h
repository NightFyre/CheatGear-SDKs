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
	 * Function BP_MAL_ElemPrimary_00_Master.BP_MAL_ElemPrimary_00_Master_C.K2_CloneAppearance
	 */
	struct UBP_MAL_ElemPrimary_00_Master_C_K2_CloneAppearance_Params
	{
	public:
		class AActor*                                              CloneActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InventoryActor;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MAL_ElemPrimary_00_Master.BP_MAL_ElemPrimary_00_Master_C.K2_OnApplyAspect
	 */
	struct UBP_MAL_ElemPrimary_00_Master_C_K2_OnApplyAspect_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MAL_ElemPrimary_00_Master.BP_MAL_ElemPrimary_00_Master_C.K2_GetFriendlyDescription
	 */
	struct UBP_MAL_ElemPrimary_00_Master_C_K2_GetFriendlyDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
