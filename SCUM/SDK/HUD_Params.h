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
	 * Function HUD.HUD_C.UpdateElementsVisibility
	 */
	struct UHUD_C_UpdateElementsVisibility_Params
	{	};

	/**
	 * Function HUD.HUD_C.GetVisibility_VicinityBackgroundImage
	 */
	struct UHUD_C_GetVisibility_VicinityBackgroundImage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetCompassWidget
	 */
	struct UHUD_C_GetCompassWidget_Params
	{
	public:
		class UCompassWidget*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetBreathingBarLungsWidget
	 */
	struct UHUD_C_GetBreathingBarLungsWidget_Params
	{
	public:
		class UBreathingBarLungsWidget*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetPrisonerLifeIndicatorsSprite
	 */
	struct UHUD_C_GetPrisonerLifeIndicatorsSprite_Params
	{
	public:
		class UPrisonerLifeIndicatorsSprite*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetVisibility_1
	 */
	struct UHUD_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetCraftingPanel
	 */
	struct UHUD_C_GetCraftingPanel_Params
	{
	public:
		class UCraftingPanelWidget*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetMainCanvasVisibility
	 */
	struct UHUD_C_GetMainCanvasVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.GetTempDropZoneTimeText
	 */
	struct UHUD_C_GetTempDropZoneTimeText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD.HUD_C.GetWatermarkText
	 */
	struct UHUD_C_GetWatermarkText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD.HUD_C.GetDebugInfoText
	 */
	struct UHUD_C_GetDebugInfoText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD.HUD_C.GetBCURightPanel
	 */
	struct UHUD_C_GetBCURightPanel_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetBCULeftPanel
	 */
	struct UHUD_C_GetBCULeftPanel_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.GetInventoryPanel
	 */
	struct UHUD_C_GetInventoryPanel_Params
	{
	public:
		class UInventoryPanelThirdIteration*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.CompleteInitialization
	 */
	struct UHUD_C_CompleteInitialization_Params
	{	};

	/**
	 * Function HUD.HUD_C.StartInitialization
	 */
	struct UHUD_C_StartInitialization_Params
	{	};

	/**
	 * Function HUD.HUD_C.CompleteMonitorsInitialization
	 */
	struct UHUD_C_CompleteMonitorsInitialization_Params
	{	};

	/**
	 * Function HUD.HUD_C.ShouldCompleteInitialization
	 */
	struct UHUD_C_ShouldCompleteInitialization_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.IsEverythingReadyForInitialization
	 */
	struct UHUD_C_IsEverythingReadyForInitialization_Params
	{
	public:
		bool                                                       isEverythingReady;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
	 */
	struct UHUD_C_IsOwningPrisonerWithComponentsValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.GetOwningPrisoner
	 */
	struct UHUD_C_GetOwningPrisoner_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ORV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrisoner*                                           Prisoner;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.IsOwningPlayerPawnValid
	 */
	struct UHUD_C_IsOwningPlayerPawnValid_Params
	{
	public:
		bool                                                       isPlayerPawnValid;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ZQR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD.HUD_C.IsOwningPlayerControllerValid
	 */
	struct UHUD_C_IsOwningPlayerControllerValid_Params
	{
	public:
		bool                                                       isPlayerControllerValid;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8MLH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD.HUD_C.CheckIfReadyForInitialization
	 */
	struct UHUD_C_CheckIfReadyForInitialization_Params
	{	};

	/**
	 * Function HUD.HUD_C.AttachHUDMonitors
	 */
	struct UHUD_C_AttachHUDMonitors_Params
	{	};

	/**
	 * Function HUD.HUD_C.StartMonitorsInitialization
	 */
	struct UHUD_C_StartMonitorsInitialization_Params
	{	};

	/**
	 * Function HUD.HUD_C.PrisonerValidation
	 */
	struct UHUD_C_PrisonerValidation_Params
	{	};

	/**
	 * Function HUD.HUD_C.ShouldSerializeWidgetLayout
	 */
	struct UHUD_C_ShouldSerializeWidgetLayout_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.GetTopLevelPanelWidget
	 */
	struct UHUD_C_GetTopLevelPanelWidget_Params
	{
	public:
		class UPanelWidget*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ShowWarning
	 */
	struct UHUD_C_ShowWarning_Params
	{
	public:
		EWarningType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       playSounds;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8KMD[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD.HUD_C.RefreshMonitorSizes
	 */
	struct UHUD_C_RefreshMonitorSizes_Params
	{	};

	/**
	 * Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
	 */
	struct UHUD_C_SetPrisonerToMonitorOnChildren_Params
	{	};

	/**
	 * Function HUD.HUD_C.ToggleAllMonitorsVisibility
	 */
	struct UHUD_C_ToggleAllMonitorsVisibility_Params
	{	};

	/**
	 * Function HUD.HUD_C.HideLifeIndicators
	 */
	struct UHUD_C_HideLifeIndicators_Params
	{	};

	/**
	 * Function HUD.HUD_C.ShowLifeIndicators
	 */
	struct UHUD_C_ShowLifeIndicators_Params
	{	};

	/**
	 * Function HUD.HUD_C.HideMonitors
	 */
	struct UHUD_C_HideMonitors_Params
	{	};

	/**
	 * Function HUD.HUD_C.ShowMonitors
	 */
	struct UHUD_C_ShowMonitors_Params
	{	};

	/**
	 * Function HUD.HUD_C.SetupHUDMonitors
	 */
	struct UHUD_C_SetupHUDMonitors_Params
	{	};

	/**
	 * Function HUD.HUD_C.SetPrisonerToMonitor
	 */
	struct UHUD_C_SetPrisonerToMonitor_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.SetDefaultPrisonerToMonitor
	 */
	struct UHUD_C_SetDefaultPrisonerToMonitor_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VVW3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUD.HUD_C.GetDefaultPrisoner
	 */
	struct UHUD_C_GetDefaultPrisoner_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.OnKeyUp
	 */
	struct UHUD_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
	 */
	struct UHUD_C_UpdateCircularProgressBarsPercentages_Params
	{	};

	/**
	 * Function HUD.HUD_C.AddChatLine
	 */
	struct UHUD_C_AddChatLine_Params
	{
	public:
		class FString                                              string;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EChatType                                                  ChatType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ToggleMonitorsVisibility
	 */
	struct UHUD_C_ToggleMonitorsVisibility_Params
	{	};

	/**
	 * Function HUD.HUD_C.AddObjective
	 */
	struct UHUD_C_AddObjective_Params
	{
	public:
		class ABP_MissionObjective_C*                              Objective;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowNotification;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.OnPerformanceMonitorMaximized
	 */
	struct UHUD_C_OnPerformanceMonitorMaximized_Params
	{	};

	/**
	 * Function HUD.HUD_C.OnRDAMonitorMaximized
	 */
	struct UHUD_C_OnRDAMonitorMaximized_Params
	{	};

	/**
	 * Function HUD.HUD_C.OnBCUBodyMonitorMaximized
	 */
	struct UHUD_C_OnBCUBodyMonitorMaximized_Params
	{	};

	/**
	 * Function HUD.HUD_C.AddMessageToScreen
	 */
	struct UHUD_C_AddMessageToScreen_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       beep;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_91FQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x001C(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.AddTeammateName
	 */
	struct UHUD_C_AddTeammateName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.RemoveTeammateName
	 */
	struct UHUD_C_RemoveTeammateName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.AddWarning
	 */
	struct UHUD_C_AddWarning_Params
	{
	public:
		EWarningType                                               warningType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       playSounds;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.OnPrisonerSet
	 */
	struct UHUD_C_OnPrisonerSet_Params
	{	};

	/**
	 * Function HUD.HUD_C.Construct
	 */
	struct UHUD_C_Construct_Params
	{	};

	/**
	 * Function HUD.HUD_C.Shake
	 */
	struct UHUD_C_Shake_Params
	{	};

	/**
	 * Function HUD.HUD_C.Tick
	 */
	struct UHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ClearTeammateNames
	 */
	struct UHUD_C_ClearTeammateNames_Params
	{	};

	/**
	 * Function HUD.HUD_C.ObjectiveChanged
	 */
	struct UHUD_C_ObjectiveChanged_Params
	{
	public:
		class ABP_MissionObjective_C*                              sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.UpdateAttributesHistory
	 */
	struct UHUD_C_UpdateAttributesHistory_Params
	{	};

	/**
	 * Function HUD.HUD_C.SetMainCanvasVisibility
	 */
	struct UHUD_C_SetMainCanvasVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.SwitchTabMode
	 */
	struct UHUD_C_SwitchTabMode_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ShowNotification
	 */
	struct UHUD_C_ShowNotification_Params
	{
	public:
		class UBasicNotificationDescription*                       Description;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ClearNotifications
	 */
	struct UHUD_C_ClearNotifications_Params
	{	};

	/**
	 * Function HUD.HUD_C.SetTabEnabled
	 */
	struct UHUD_C_SetTabEnabled_Params
	{
	public:
		ETabMode                                                   Tab;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.ShowKillFeedNotification
	 */
	struct UHUD_C_ShowKillFeedNotification_Params
	{
	public:
		class FText                                                prefix;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                characterName;                                           // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                suffix;                                                  // 0x0030(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ping;                                                    // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.OnPrisonerChanged
	 */
	struct UHUD_C_OnPrisonerChanged_Params
	{	};

	/**
	 * Function HUD.HUD_C.ShowLevelUpNotification
	 */
	struct UHUD_C_ShowLevelUpNotification_Params
	{
	public:
		class USkill*                                              Skill;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESkillLevel                                                skillLevel;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.ShowTrapsDetectedNotification
	 */
	struct UHUD_C_ShowTrapsDetectedNotification_Params
	{	};

	/**
	 * Function HUD.HUD_C.StartUpdateableNotification
	 */
	struct UHUD_C_StartUpdateableNotification_Params
	{
	public:
		class UUpdateableNotificationDescription*                  Description;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.UpdateUpdateableNotification
	 */
	struct UHUD_C_UpdateUpdateableNotification_Params
	{
	public:
		class FString                                              notificationName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.AddMessage
	 */
	struct UHUD_C_AddMessage_Params
	{
	public:
		EMessageType                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OC9I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Duration;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.SetTabModeTabIsAlerted
	 */
	struct UHUD_C_SetTabModeTabIsAlerted_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD.HUD_C.AddMessageWithColor
	 */
	struct UHUD_C_AddMessageWithColor_Params
	{
	public:
		EHUDMessageType                                            Type;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J3BH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Duration;                                                // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD.HUD_C.UpdateHUDElementVisibility
	 */
	struct UHUD_C_UpdateHUDElementVisibility_Params
	{	};

	/**
	 * Function HUD.HUD_C.ExecuteUbergraph_HUD
	 */
	struct UHUD_C_ExecuteUbergraph_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
