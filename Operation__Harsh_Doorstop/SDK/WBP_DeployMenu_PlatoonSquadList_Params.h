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
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.IsPlatoonValid
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_IsPlatoonValid_Params
	{
	public:
		bool                                                       bValidPLTN;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CYJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.WasListCollapsedByUser
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_WasListCollapsedByUser_Params
	{
	public:
		bool                                                       bCollapsedByUser;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.HasAnySquads
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_HasAnySquads_Params
	{
	public:
		bool                                                       bValidSquadsPresent;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SetPlatoonNameText
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_SetPlatoonNameText_Params
	{
	public:
		class FText                                                NewPlatoonName;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateCreateBtnAvailability
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_UpdateCreateBtnAvailability_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateSquadCountText
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_UpdateSquadCountText_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseListIfEmpty
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_CollapseListIfEmpty_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseList
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_CollapseList_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExpandList
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_ExpandList_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.RemoveSquadItemWidgetFromList
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_RemoveSquadItemWidgetFromList_Params
	{
	public:
		class USquadListEntry*                                     RemovedSquadData;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RemoveIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.AddNewSquadItemWidget
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_AddNewSquadItemWidget_Params
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_DeployMenu_SquadList_C*                         SquadItemWidget;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.GenerateSquad
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_GenerateSquad_Params
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.DeconstructSquad
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_DeconstructSquad_Params
	{
	public:
		class USquadListEntry*                                     RemovedSquadData;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RemovedSquadIdx;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.PreConstruct
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListExpanded
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_SquadsListExpanded_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListCollapsed
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_SquadsListCollapsed_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.OnPlatoonSet
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_OnPlatoonSet_Params
	{	};

	/**
	 * Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList
	 */
	struct UWBP_DeployMenu_PlatoonSquadList_C_ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
