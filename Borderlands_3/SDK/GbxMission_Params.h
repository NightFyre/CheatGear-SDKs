#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function GbxMission.Mission.UpdateObjective
	 */
	struct UMission_UpdateObjective_Params
	{
	public:
		class UMissionObjective*                                   Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Context;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Amount;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.UnpauseObjectiveChain
	 */
	struct UMission_UnpauseObjectiveChain_Params
	{
	public:
		class UMissionObjective*                                   Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
	 */
	struct UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params
	{
	public:
		class UMissionObjective*                                   ObjectiveToThwart;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjectiveSet*                                ObjectiveSet;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bJumpToSet;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.StopMissionTimer
	 */
	struct UMission_StopMissionTimer_Params
	{	};

	/**
	 * Function GbxMission.Mission.StartMissionTimer
	 */
	struct UMission_StartMissionTimer_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionTimerExpired
	 */
	struct UMission_MissionTimerExpired_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionRemoteEvent
	 */
	struct UMission_MissionRemoteEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.MissionNotStarted
	 */
	struct UMission_MissionNotStarted_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionKickoff
	 */
	struct UMission_MissionKickoff_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionGameModeEvent
	 */
	struct UMission_MissionGameModeEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.MissionFailed
	 */
	struct UMission_MissionFailed_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionCompleteLoad
	 */
	struct UMission_MissionCompleteLoad_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionComplete
	 */
	struct UMission_MissionComplete_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionActiveLoad
	 */
	struct UMission_MissionActiveLoad_Params
	{	};

	/**
	 * Function GbxMission.Mission.MissionActive
	 */
	struct UMission_MissionActive_Params
	{	};

	/**
	 * Function GbxMission.Mission.JumpToObjectiveSet
	 */
	struct UMission_JumpToObjectiveSet_Params
	{
	public:
		class UMissionObjectiveSet*                                ObjectiveSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBranchingMission;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.GetPausableChainedObjectivesList
	 */
	struct UMission_GetPausableChainedObjectivesList_Params
	{
	public:
		TArray<class UMissionObjective*>                           ObjectivesList;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.GetObjectivesList
	 */
	struct UMission_GetObjectivesList_Params
	{
	public:
		TArray<class UMissionObjective*>                           ObjectivesList;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.GetObjectiveSetsList
	 */
	struct UMission_GetObjectiveSetsList_Params
	{
	public:
		TArray<class UMissionObjectiveSet*>                        ObjectiveSetsList;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.GetMissionRemainingSeconds
	 */
	struct UMission_GetMissionRemainingSeconds_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.FailMission
	 */
	struct UMission_FailMission_Params
	{	};

	/**
	 * Function GbxMission.Mission.EndKickoff
	 */
	struct UMission_EndKickoff_Params
	{	};

	/**
	 * Function GbxMission.Mission.CompleteMission
	 */
	struct UMission_CompleteMission_Params
	{	};

	/**
	 * Function GbxMission.Mission.ClearObjective
	 */
	struct UMission_ClearObjective_Params
	{
	public:
		class UMissionObjective*                                   Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.AdvanceObjectiveSet
	 */
	struct UMission_AdvanceObjectiveSet_Params
	{
	public:
		class UMissionObjectiveSet*                                ObjectiveSet;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.AddTimeToMission
	 */
	struct UMission_AddTimeToMission_Params
	{
	public:
		int32_t                                                    SecondsToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.Mission.ActivateMission
	 */
	struct UMission_ActivateMission_Params
	{
	public:
		class UMissionObjectiveSet*                                InitialObjectiveSet;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetAsTrackedMission;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
	 */
	struct UMissionDirectorComponent_IsAnyMissionAvailable_Params
	{
	public:
		EMissionAvailableResult                                    OutResult;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
	 */
	struct UMissionDirectorComponent_IsAnyMissionActive_Params
	{
	public:
		EMissionActiveResult                                       OutResult;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDirectorComponent.GetAllMissions
	 */
	struct UMissionDirectorComponent_GetAllMissions_Params
	{
	public:
		TArray<class UClass*>                                      AllMissions;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDirectorComponent.ClearMissions
	 */
	struct UMissionDirectorComponent_ClearMissions_Params
	{	};

	/**
	 * Function GbxMission.MissionDirectorComponent.AddMission
	 */
	struct UMissionDirectorComponent_AddMission_Params
	{
	public:
		class UClass*                                              InMission;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDirectorComponent.ActivateAvailableMission
	 */
	struct UMissionDirectorComponent_ActivateAvailableMission_Params
	{	};

	/**
	 * Function GbxMission.MissionIconComponent.SetIconState
	 */
	struct UMissionIconComponent_SetIconState_Params
	{
	public:
		EMissionIconState                                          InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.SetIconEnabledCondition
	 */
	struct UMissionIconComponent_SetIconEnabledCondition_Params
	{
	public:
		class UGbxCondition*                                       EnabledCondition;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.SetDisabledState
	 */
	struct UMissionIconComponent_SetDisabledState_Params
	{
	public:
		bool                                                       bDisabled;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.OnRep_Enabled
	 */
	struct UMissionIconComponent_OnRep_Enabled_Params
	{
	public:
		bool                                                       bPreviouslyEnabled;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.IsIconEnabled
	 */
	struct UMissionIconComponent_IsIconEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.GetRequiredInterface
	 */
	struct UMissionIconComponent_GetRequiredInterface_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
	 */
	struct UMissionIconComponent_EnabledConditionRequiresNativeClass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionTracker.OnStatIncrement
	 */
	struct AMissionTracker_OnStatIncrement_Params
	{
	public:
		class AActor*                                              StatContext;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameStatData*                                       StatId;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionTracker.OnRep_LevelLoadEventsIssued
	 */
	struct AMissionTracker_OnRep_LevelLoadEventsIssued_Params
	{	};

	/**
	 * Function GbxMission.MissionTracker.OnRep_ActiveIcons
	 */
	struct AMissionTracker_OnRep_ActiveIcons_Params
	{	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ServerTrackPreviousActiveMissionInList
	 */
	struct UPlayerMissionComponent_ServerTrackPreviousActiveMissionInList_Params
	{	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ServerTrackNextActiveMissionInList
	 */
	struct UPlayerMissionComponent_ServerTrackNextActiveMissionInList_Params
	{	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
	 */
	struct UPlayerMissionComponent_ServerSetTrackedMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
	 */
	struct UPlayerMissionComponent_ClientUpdateMissionStatus_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionStatus                                             Status;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
	 */
	struct UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjectiveSet*                                ActiveObjectiveSet;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMissionObjective*>                           DormantObjectives;                                       // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
	 */
	struct UPlayerMissionComponent_ClientTrackedMissionChanged_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
	 */
	struct UPlayerMissionComponent_ClientObjectiveUpdated_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjective*                                   UpdatedObjective;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   ObjectiveBit;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Amount;                                                  // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
	 */
	struct UPlayerMissionComponent_ClientObjectiveSetCompleted_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjectiveSet*                                CompletedObjectiveSet;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
	 */
	struct UPlayerMissionComponent_ClientObjectiveCleared_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjective*                                   ClearedObjective;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
	 */
	struct UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjective*                                   Objective;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
	 */
	struct UPlayerMissionComponent_ClientMissionTimerStopped_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
	 */
	struct UPlayerMissionComponent_ClientMissionTimerStarted_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
	 */
	struct UPlayerMissionComponent_ClientMissionTimerChanged_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SecondsToAdd;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
	 */
	struct UPlayerMissionComponent_ClientMissionRegistered_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
	 */
	struct UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjective*                                   Objective;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIssueActiveEvent;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
	 */
	struct UPlayerMissionComponent_ClientDormantObjectiveAdded_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionObjective*                                   Objective;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.SelectMissionGraph
	 */
	struct UMissionDebugMenu_SelectMissionGraph_Params
	{
	public:
		class FName                                                MissionGraphId;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.NotifyMissionActivationCheatStart
	 */
	struct UMissionDebugMenu_NotifyMissionActivationCheatStart_Params
	{	};

	/**
	 * Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
	 */
	struct UMissionDebugMenu_GetObjectiveSetItemsForMission_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGbxCascadingListItemData>                   OutItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.GetMissionWithId
	 */
	struct UMissionDebugMenu_GetMissionWithId_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMission*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.GetMissionStatus
	 */
	struct UMissionDebugMenu_GetMissionStatus_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionStatus                                             ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
	 */
	struct UMissionDebugMenu_GetItemsForMissionStatus_Params
	{
	public:
		EMissionDebugStatus                                        Status;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q3KN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGbxCascadingListItemData>                   OutItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
	 */
	struct UMissionDebugMenu_GetItemsForMissionGraph_Params
	{
	public:
		TArray<struct FGbxCascadingListItemData>                   OutItems;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.CompleteMission
	 */
	struct UMissionDebugMenu_CompleteMission_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
	 */
	struct UMissionDebugMenu_AdvanceToObjectiveSet_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectiveSetId;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionDebugMenu.AdvanceMission
	 */
	struct UMissionDebugMenu_AdvanceMission_Params
	{
	public:
		class FName                                                MissionId;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
	 */
	struct UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveReference                          ObjectiveRef;                                            // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
	 */
	struct UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
	 */
	struct UMissionFunctionLibrary_TrackNextActiveMissionInList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.TrackActiveMission
	 */
	struct UMissionFunctionLibrary_TrackActiveMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
	 */
	struct UMissionFunctionLibrary_SendMissionEventWithContext_Params
	{
	public:
		struct FMissionEventReference                              EventRef;                                                // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OptionalContext;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.SendMissionEvent
	 */
	struct UMissionFunctionLibrary_SendMissionEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionEventReference                              EventRef;                                                // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             OptionalContext;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
	 */
	struct UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params
	{
	public:
		unsigned char                                              UnknownData_V15L[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
	 */
	struct UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bIsBranchingMission;                                     // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
	 */
	struct UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params
	{
	public:
		unsigned char                                              UnknownData_7JTV[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
	 */
	struct UMissionFunctionLibrary_GetPlotMissionIndex_Params
	{
	public:
		class UMission*                                            MissionObj;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
	 */
	struct UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params
	{
	public:
		unsigned char                                              UnknownData_0O2D[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        NamesList;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
	 */
	struct UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        NamesList;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
	 */
	struct UMissionFunctionLibrary_GetObjectiveSetListForMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMissionObjectiveSet*>                        ObjectiveSetList;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
	 */
	struct UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params
	{
	public:
		unsigned char                                              UnknownData_ZBT2[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        NamesList;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
	 */
	struct UMissionFunctionLibrary_GetObjectiveNameListForMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        NamesList;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionStatus
	 */
	struct UMissionFunctionLibrary_GetMissionStatus_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionStatus                                             ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
	 */
	struct UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveReference                          ObjectiveRef;                                            // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		class UObject*                                             OptionalContext;                                         // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMissionObjectiveStatus                                    ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
	 */
	struct UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		EMissionObjectiveSetStatus                                 ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
	 */
	struct UMissionFunctionLibrary_GetMissionObjectiveCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveReference                          ObjectiveRef;                                            // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    CurrentObjectiveCount;                                   // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalObjectiveCount;                                     // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionLevel
	 */
	struct UMissionFunctionLibrary_GetMissionLevel_Params
	{
	public:
		class UMission*                                            MissionObj;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
	 */
	struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params
	{
	public:
		struct FMissionObjectiveReferenceWeak                      ObjectiveReference;                                      // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
	 */
	struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params
	{
	public:
		struct FMissionObjectiveReference                          ObjectiveReference;                                      // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetMission
	 */
	struct UMissionFunctionLibrary_GetMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMission*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
	 */
	struct UMissionFunctionLibrary_GetEventNameListForMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        NamesList;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
	 */
	struct UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
	 */
	struct UMissionFunctionLibrary_GetActivePlotMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.GetActiveMissions
	 */
	struct UMissionFunctionLibrary_GetActiveMissions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UMission*>                                    ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
	 */
	struct UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params
	{
	public:
		struct FMissionObjectiveSetReference                       MissionObjectiveSetRef;                                  // 0x0000(0x0048)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ObjectiveSet;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
	 */
	struct UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params
	{
	public:
		struct FMissionObjectiveReferenceWeak                      MissionObjectiveRef;                                     // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Objective;                                               // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
	 */
	struct UMissionFunctionLibrary_FillMissionObjectiveRef_Params
	{
	public:
		struct FMissionObjectiveReference                          MissionObjectiveRef;                                     // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Objective;                                               // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
	 */
	struct UMissionFunctionLibrary_FillMissionEventRef_Params
	{
	public:
		struct FMissionEventReference                              MissionEventRef;                                         // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EventName;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
	 */
	struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params
	{
	public:
		struct FMissionObjectiveSetReference                       A;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       B;                                                       // 0x0048(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
	 */
	struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params
	{
	public:
		struct FMissionObjectiveReference                          A;                                                       // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FMissionObjectiveReference                          B;                                                       // 0x0030(0x0030)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
	 */
	struct UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bIsBranchingMission;                                     // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.CreateMission
	 */
	struct UMissionFunctionLibrary_CreateMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMission*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.CompleteMission
	 */
	struct UMissionFunctionLibrary_CompleteMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
	 */
	struct UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveReference                          BreadcrumbObjectiveRef;                                  // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
	 */
	struct UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
	 */
	struct UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMissionObjectiveSetReference                       ObjectiveSetRef;                                         // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionFunctionLibrary.ActivateMission
	 */
	struct UMissionFunctionLibrary_ActivateMission_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MissionClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionLocationData.GetRequiredInterface
	 */
	struct UMissionLocationData_GetRequiredInterface_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
	 */
	struct UMissionLocationData_EnabledConditionRequiresNativeClass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
	 */
	struct UMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params
	{
	public:
		TArray<struct FMissionObjectiveReference>                  OutMissionObjectives;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
	 */
	struct UMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params
	{
	public:
		TArray<struct FMissionObjectiveSetReference>               OutMissionObjectiveSets;                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionObserverComponent.ObserverMission
	 */
	struct UMissionObserverComponent_ObserverMission_Params
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionObserverComponent.GetUpdateEventObject
	 */
	struct UMissionObserverComponent_GetUpdateEventObject_Params
	{
	public:
		TArray<class UObject*>                                     OutMissionInitialized;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     OutMissionUpdate;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     OutMissionObjectiveUpdate;                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     OutMissionObjectiveSetUpdate;                            // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
	 */
	struct UMissionObserverPlayerInterface_ClientReceiveMissionData_Params
	{
	public:
		struct FReplicatedMissionData                              MissionData;                                             // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
	 */
	struct UMissionReferenceInterface_GetMissionClassReferences_Params
	{
	public:
		TArray<class UClass*>                                      OutMissions;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
	 */
	struct UMissionReferenceInterface_CheckForMissionReferenceErrors_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
