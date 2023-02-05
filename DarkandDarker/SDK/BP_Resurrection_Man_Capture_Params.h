#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnEquipItemMesh
	 */
	struct ABP_Resurrection_Man_Capture_C_OnEquipItemMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              PartComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       ItemMesh;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.BP_Resurrection_Capture_AutoGenFunc
	 */
	struct ABP_Resurrection_Man_Capture_C_BP_Resurrection_Capture_AutoGenFunc_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnItemEquip
	 */
	struct ABP_Resurrection_Man_Capture_C_OnItemEquip_Params
	{	};

	/**
	 * Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.ExecuteUbergraph_BP_Resurrection_Man_Capture
	 */
	struct ABP_Resurrection_Man_Capture_C_ExecuteUbergraph_BP_Resurrection_Man_Capture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
