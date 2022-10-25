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
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.RemovePlatoonItemWidgetFromList
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_RemovePlatoonItemWidgetFromList_Params
	{
	public:
		class UPlatoonListEntry*                                   RemovedPlatoonData;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RemoveIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.AddNewPlatoonItemWidget
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_AddNewPlatoonItemWidget_Params
	{
	public:
		class UPlatoonListEntry*                                   PlatoonData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.GeneratePlatoon
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_GeneratePlatoon_Params
	{
	public:
		class UPlatoonListEntry*                                   PlatoonData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.DeconstructPlatoon
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_DeconstructPlatoon_Params
	{
	public:
		class UPlatoonListEntry*                                   RemovedPlatoonData;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RemovedPlatoonIdx;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.PreConstruct
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel
	 */
	struct UWBP_DeployMenu_SquadSelectionPanel_C_ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
