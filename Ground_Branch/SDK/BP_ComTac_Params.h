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
	 * Function BP_ComTac.BP_ComTac_C.GetHiddenComponents
	 */
	struct ABP_ComTac_C_GetHiddenComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.DecodeKit
	 */
	struct ABP_ComTac_C_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8X0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.OnGoggleMeshLoaded_Event
	 */
	struct ABP_ComTac_C_OnGoggleMeshLoaded_Event_Params
	{
	public:
		class UObject*                                             LoadedAsset;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.OnAddedToItem
	 */
	struct ABP_ComTac_C_OnAddedToItem_Params
	{
	public:
		class AGBItem*                                             NewParentItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.SetMesh
	 */
	struct ABP_ComTac_C_SetMesh_Params
	{	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.EncodeKit
	 */
	struct ABP_ComTac_C_EncodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ComTac.BP_ComTac_C.ExecuteUbergraph_BP_ComTac
	 */
	struct ABP_ComTac_C_ExecuteUbergraph_BP_ComTac_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKTV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
