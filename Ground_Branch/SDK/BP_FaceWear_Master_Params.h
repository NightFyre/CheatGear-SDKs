#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_FaceWear_Master.BP_FaceWear_Master_C.GetHiddenComponents
	 */
	struct ABP_FaceWear_Master_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_FaceWear_Master.BP_FaceWear_Master_C.OnAddedToCharacter
	 */
	struct ABP_FaceWear_Master_C_OnAddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FaceWear_Master.BP_FaceWear_Master_C.OnRemovedFromCharacter
	 */
	struct ABP_FaceWear_Master_C_OnRemovedFromCharacter_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OldSocketName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FaceWear_Master.BP_FaceWear_Master_C.InventoryModifiersUpdated
	 */
	struct ABP_FaceWear_Master_C_InventoryModifiersUpdated_Params
	{	};

	/**
	 * Function BP_FaceWear_Master.BP_FaceWear_Master_C.ExecuteUbergraph_BP_FaceWear_Master
	 */
	struct ABP_FaceWear_Master_C_ExecuteUbergraph_BP_FaceWear_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
