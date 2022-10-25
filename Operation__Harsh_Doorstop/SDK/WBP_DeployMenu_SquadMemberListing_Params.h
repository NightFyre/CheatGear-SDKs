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
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.GetClassIconForLoadout
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_GetClassIconForLoadout_Params
	{
	public:
		class UHDKit*                                              Loadout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         ClassIconToUse;                                          // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdatePlayerClassIcon
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_UpdatePlayerClassIcon_Params
	{
	public:
		class UHDKit*                                              Loadout;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetupOptions
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_SetupOptions_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.TestOptionPrereqs
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_TestOptionPrereqs_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.UpdateColorOffset
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_UpdateColorOffset_Params
	{
	public:
		bool                                                       bEvenNumberListing;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.SetPlayerNameText
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_SetPlayerNameText_Params
	{
	public:
		class FText                                                NewPlayerName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_BndEvt__KickMemberBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberSet
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_OnMemberSet_Params
	{	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.OnMemberPlayerNameUpdated
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_OnMemberPlayerNameUpdated_Params
	{
	public:
		class FString                                              NewPlayerName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.PreConstruct
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.Tick
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadMemberListing.WBP_DeployMenu_SquadMemberListing_C.ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing
	 */
	struct UWBP_DeployMenu_SquadMemberListing_C_ExecuteUbergraph_WBP_DeployMenu_SquadMemberListing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
