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
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.UpdateAppearance
	 */
	struct UWBP_JoinServerListing_C_UpdateAppearance_Params
	{	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.SetSelected
	 */
	struct UWBP_JoinServerListing_C_SetSelected_Params
	{
	public:
		bool                                                       bNewSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BP_OnItemExpansionChanged
	 */
	struct UWBP_JoinServerListing_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.PreConstruct
	 */
	struct UWBP_JoinServerListing_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BndEvt__ListingBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_JoinServerListing_C_BndEvt__ListingBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BndEvt__ListingBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_JoinServerListing_C_BndEvt__ListingBtn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BndEvt__ListingBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_JoinServerListing_C_BndEvt__ListingBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BP_OnItemSelectionChanged
	 */
	struct UWBP_JoinServerListing_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.OnListItemObjectSet
	 */
	struct UWBP_JoinServerListing_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.BP_OnEntryReleased
	 */
	struct UWBP_JoinServerListing_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.ExecuteUbergraph_WBP_JoinServerListing
	 */
	struct UWBP_JoinServerListing_C_ExecuteUbergraph_WBP_JoinServerListing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_JoinServerListing.WBP_JoinServerListing_C.ListingSelected__DelegateSignature
	 */
	struct UWBP_JoinServerListing_C_ListingSelected__DelegateSignature_Params
	{
	public:
		class UWBP_JoinServerListing_C*                            SelectedListing;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
