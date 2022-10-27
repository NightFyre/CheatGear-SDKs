#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnEntryReleased
	 */
	struct UWBP_SelectionListEntry_GameMode_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnItemExpansionChanged
	 */
	struct UWBP_SelectionListEntry_GameMode_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.OnListItemObjectSet
	 */
	struct UWBP_SelectionListEntry_GameMode_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BP_OnItemSelectionChanged
	 */
	struct UWBP_SelectionListEntry_GameMode_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature
	 */
	struct UWBP_SelectionListEntry_GameMode_C_BndEvt__SelectionItem_K2Node_ComponentBoundEvent_0_OnSelectionStateChanged__DelegateSignature_Params
	{
	public:
		class UWBP_CreateGameSelectionListEntry_C*                 Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SelectionListEntry_GameMode.WBP_SelectionListEntry_GameMode_C.ExecuteUbergraph_WBP_SelectionListEntry_GameMode
	 */
	struct UWBP_SelectionListEntry_GameMode_C_ExecuteUbergraph_WBP_SelectionListEntry_GameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VO64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
