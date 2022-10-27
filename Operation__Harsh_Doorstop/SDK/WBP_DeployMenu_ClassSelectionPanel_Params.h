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
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionState
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_SetClassSelectionState_Params
	{
	public:
		class UHDKit*                                              ClassToUpdate;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMatchDisplayNames;                                      // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bClassUpdated;                                           // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalUpdateSelectionState
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_InternalUpdateSelectionState_Params
	{
	public:
		class UDeployMenu_ClassSelectionListing*                   NewSelection;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SelectFirstUnrestrictedClass
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_SelectFirstUnrestrictedClass_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalDeselectAllClasses
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_InternalDeselectAllClasses_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.IsValidClassListingIndex
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_IsValidClassListingIndex_Params
	{
	public:
		int32_t                                                    ChildIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValidIndex;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionStateByIndex
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_SetClassSelectionStateByIndex_Params
	{
	public:
		int32_t                                                    ChildIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ToggleRestrictionsTimer
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_ToggleRestrictionsTimer_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFireOnceImmediately;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1HG4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalCreateClassListingWidget
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_InternalCreateClassListingWidget_Params
	{
	public:
		class UHDKit*                                              Kit;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_DeployMenu_ClassSelectionListing_C*             NewKitListingWidget;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalPopulateListWithClasses
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_InternalPopulateListWithClasses_Params
	{
	public:
		unsigned char                                              UnknownData_BVM9[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.RepopulateListByFaction
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_RepopulateListByFaction_Params
	{
	public:
		EHDTeam                                                    OwningPlayerTeam;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XX1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Construct
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.PreConstruct
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.LateInit_RepPlayerState
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_LateInit_RepPlayerState_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.CheckRestrictions
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_CheckRestrictions_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Destruct
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_Destruct_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassSelected
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_OnClassSelected_Params
	{
	public:
		class UWBP_DeployMenu_ClassSelectionListing_C*             SelectedClassWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassDeselected
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_OnClassDeselected_Params
	{
	public:
		class UWBP_DeployMenu_ClassSelectionListing_C*             DeselectedClassWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel
	 */
	struct UWBP_DeployMenu_ClassSelectionPanel_C_ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
