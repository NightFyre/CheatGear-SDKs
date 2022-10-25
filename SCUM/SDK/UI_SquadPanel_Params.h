#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking
	 */
	struct UUI_SquadPanel_C_UpdateRanking_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit
	 */
	struct UUI_SquadPanel_C_UpdateSquadLimit_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation
	 */
	struct UUI_SquadPanel_C_AskForConfirmation_Params
	{
	public:
		class FText                                                DialogText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FScriptDelegate                                      OnConfirmEvent;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnCancelEvent;                                           // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList
	 */
	struct UUI_SquadPanel_C_UpdateMemberList_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility
	 */
	struct UUI_SquadPanel_C_UpdateElementVisibility_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData
	 */
	struct UUI_SquadPanel_C_UpdateCurrentSquadData_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.Update
	 */
	struct UUI_SquadPanel_C_Update_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadPanel_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo
	 */
	struct UUI_SquadPanel_C_UpdateSquadMemberInfo_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadPanel_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadPanel_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm
	 */
	struct UUI_SquadPanel_C_OnLeaveConfirm_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled
	 */
	struct UUI_SquadPanel_C_OnLeaveCanceled_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData
	 */
	struct UUI_SquadPanel_C_UpdateSquadRankingData_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData
	 */
	struct UUI_SquadPanel_C_UpdateSquadTopData_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.Construct
	 */
	struct UUI_SquadPanel_C_Construct_Params
	{	};

	/**
	 * Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel
	 */
	struct UUI_SquadPanel_C_ExecuteUbergraph_UI_SquadPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ZKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
