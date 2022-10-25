#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.DidUserClickLink
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_DidUserClickLink_Params
	{
	public:
		bool                                                       ClickedLink;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_04LQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.GetTimeShown
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_GetTimeShown_Params
	{
	public:
		float                                                      TimeShown;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnMadeVisible
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_OnMadeVisible_Params
	{	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.SwitchToReportNotification
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_SwitchToReportNotification_Params
	{
	public:
		struct FGetAccountStatusResult                             AccountStatus;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BuildDataFromPopupData
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_BuildDataFromPopupData_Params
	{
	public:
		struct FMotdData                                           Data;                                                    // 0x0000(0x0168)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_BndEvt__BP_PatchNotification_K2Node_ComponentBoundEvent_0_OnContinue__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_BndEvt__BP_ReportNotification_K2Node_ComponentBoundEvent_3_OnContinue__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnUserContinue
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_OnUserContinue_Params
	{	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.ExecuteUbergraph_BP_MainMenu_AnnouncementPanel
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_ExecuteUbergraph_BP_MainMenu_AnnouncementPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_AnnouncementPanel.BP_MainMenu_AnnouncementPanel_C.OnContinue__DelegateSignature
	 */
	struct UBP_MainMenu_AnnouncementPanel_C_OnContinue__DelegateSignature_Params
	{
	public:
		bool                                                       bFromNewsAnnouncement;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TKMA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeOnScreen;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bClickedLink;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
