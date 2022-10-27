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
	 * Function WBP_GameInfo.WBP_GameInfo_C.Get_Button_MuteTalking_ToolTipWidget_1
	 */
	struct UWBP_GameInfo_C_Get_Button_MuteTalking_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.GetAdminVis
	 */
	struct UWBP_GameInfo_C_GetAdminVis_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.Tick
	 */
	struct UWBP_GameInfo_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.Back
	 */
	struct UWBP_GameInfo_C_Back_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.Construct
	 */
	struct UWBP_GameInfo_C_Construct_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.OnVOIPEvent_Event_1
	 */
	struct UWBP_GameInfo_C_OnVOIPEvent_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTalking;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWasRadio;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameInfo_C_BndEvt__Button_MuteAll_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameInfo_C_BndEvt__Button_MuteTalking_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameInfo_C_BndEvt__Button_UnmuteAll_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_GameInfo_C_BndEvt__Button_NEWBack_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.AddPlayerList
	 */
	struct UWBP_GameInfo_C_AddPlayerList_Params
	{
	public:
		int32_t                                                    TeamId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.DeterminePlayerLists
	 */
	struct UWBP_GameInfo_C_DeterminePlayerLists_Params
	{
	public:
		int32_t                                                    NewTeamCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_GameInfo.WBP_GameInfo_C.ExecuteUbergraph_WBP_GameInfo
	 */
	struct UWBP_GameInfo_C_ExecuteUbergraph_WBP_GameInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
