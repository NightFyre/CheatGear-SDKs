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
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.SquadPreRemoveFromPlatoon
	 */
	struct UDeployMenu_PlatoonSquadListBase_SquadPreRemoveFromPlatoon_Params
	{
	public:
		class AHDPlatoonState*                                     SourcePlatoon;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDSquadState*                                       SquadToBeRemoved;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.SquadAddedToPlatoon
	 */
	struct UDeployMenu_PlatoonSquadListBase_SquadAddedToPlatoon_Params
	{
	public:
		class AHDPlatoonState*                                     SourcePlatoon;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDSquadState*                                       NewSquad;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.SetupPlatoon
	 */
	struct UDeployMenu_PlatoonSquadListBase_SetupPlatoon_Params
	{
	public:
		class UPlatoonListEntry*                                   InPlatoonData;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.RepopulatePlatoon
	 */
	struct UDeployMenu_PlatoonSquadListBase_RepopulatePlatoon_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.OnPlatoonSet
	 */
	struct UDeployMenu_PlatoonSquadListBase_OnPlatoonSet_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.GetPlatoonStateFromData
	 */
	struct UDeployMenu_PlatoonSquadListBase_GetPlatoonStateFromData_Params
	{
	public:
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.GenerateSquad
	 */
	struct UDeployMenu_PlatoonSquadListBase_GenerateSquad_Params
	{
	public:
		class USquadListEntry*                                     SquadData;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_PlatoonSquadListBase.DeconstructSquad
	 */
	struct UDeployMenu_PlatoonSquadListBase_DeconstructSquad_Params
	{
	public:
		class USquadListEntry*                                     RemovedSquadData;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RemovedSquadIdx;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.SquadNameChanged
	 */
	struct UDeployMenu_SquadListBase_SquadNameChanged_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                NewName;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                PrevName;                                                // 0x0020(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.SquadLockStateUpdated
	 */
	struct UDeployMenu_SquadListBase_SquadLockStateUpdated_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewLocked;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.SquadLeaderChanged
	 */
	struct UDeployMenu_SquadListBase_SquadLeaderChanged_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      PrevLeaderPS;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.SetupSquad
	 */
	struct UDeployMenu_SquadListBase_SetupSquad_Params
	{
	public:
		class USquadListEntry*                                     InSquadData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.RepopulateSquad
	 */
	struct UDeployMenu_SquadListBase_RepopulateSquad_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.OnSquadSet
	 */
	struct UDeployMenu_SquadListBase_OnSquadSet_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.OnSquadNameUpdated
	 */
	struct UDeployMenu_SquadListBase_OnSquadNameUpdated_Params
	{
	public:
		class FText                                                NewSquadName;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                PreviousSquadName;                                       // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.OnSquadLockStateUpdated
	 */
	struct UDeployMenu_SquadListBase_OnSquadLockStateUpdated_Params
	{
	public:
		bool                                                       bNewLockedState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.OnSquadLeaderUpdated
	 */
	struct UDeployMenu_SquadListBase_OnSquadLeaderUpdated_Params
	{
	public:
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      PrevLeaderPS;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.OnListRefresh
	 */
	struct UDeployMenu_SquadListBase_OnListRefresh_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.MemberSquadInfoUpdated
	 */
	struct UDeployMenu_SquadListBase_MemberSquadInfoUpdated_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      MemberPS;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHDSquadAssignmentInfo                              MemberSQInfo;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.MemberPreRemoveFromSquad
	 */
	struct UDeployMenu_SquadListBase_MemberPreRemoveFromSquad_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      MemberPSToBeRemoved;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.MemberAddedToSquad
	 */
	struct UDeployMenu_SquadListBase_MemberAddedToSquad_Params
	{
	public:
		class AHDSquadState*                                       SourceSquad;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      NewMemberPS;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.GetSquadStateFromData
	 */
	struct UDeployMenu_SquadListBase_GetSquadStateFromData_Params
	{
	public:
		class AHDSquadState*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.GetParentPlatoonStateFromData
	 */
	struct UDeployMenu_SquadListBase_GetParentPlatoonStateFromData_Params
	{
	public:
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.GenerateSquadMember
	 */
	struct UDeployMenu_SquadListBase_GenerateSquadMember_Params
	{
	public:
		class USquadMemberInfo*                                    MemberData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadListBase.DeconstructSquadMember
	 */
	struct UDeployMenu_SquadListBase_DeconstructSquadMember_Params
	{
	public:
		class USquadMemberInfo*                                    RemovedMemberData;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.SetupMember
	 */
	struct UDeployMenu_SquadMemberListingBase_SetupMember_Params
	{
	public:
		class USquadMemberInfo*                                    InMemberData;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberSet
	 */
	struct UDeployMenu_SquadMemberListingBase_OnMemberSet_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.OnMemberPlayerNameUpdated
	 */
	struct UDeployMenu_SquadMemberListingBase_OnMemberPlayerNameUpdated_Params
	{
	public:
		class FString                                              NewPlayerName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.MemberPlayerNameChanged
	 */
	struct UDeployMenu_SquadMemberListingBase_MemberPlayerNameChanged_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewPlayerName;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.GetPlayerStateFromData
	 */
	struct UDeployMenu_SquadMemberListingBase_GetPlayerStateFromData_Params
	{
	public:
		class AHDPlayerState*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.GetParentSquadStateFromData
	 */
	struct UDeployMenu_SquadMemberListingBase_GetParentSquadStateFromData_Params
	{
	public:
		class AHDSquadState*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadMemberListingBase.GetParentPlatoonStateFromData
	 */
	struct UDeployMenu_SquadMemberListingBase_GetParentPlatoonStateFromData_Params
	{
	public:
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.SetupSquadSelection
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_SetupSquadSelection_Params
	{
	public:
		class AHDTeamState*                                        InPlatoonTeamState;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.RepopulateSquadSelection
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_RepopulateSquadSelection_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonPreRemoveFromTeam
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_PlatoonPreRemoveFromTeam_Params
	{
	public:
		class AHDTeamState*                                        SourceTeam;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlatoonState*                                     PlatoonToBeRemoved;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.PlatoonAddedToTeam
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_PlatoonAddedToTeam_Params
	{
	public:
		class AHDTeamState*                                        SourceTeam;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlatoonState*                                     NewPlatoon;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.OnSquadSelectionSet
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_OnSquadSelectionSet_Params
	{	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.GeneratePlatoon
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_GeneratePlatoon_Params
	{
	public:
		class UPlatoonListEntry*                                   PlatoonData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.DeployMenu_SquadSelectionWidgetBase.DeconstructPlatoon
	 */
	struct UDeployMenu_SquadSelectionWidgetBase_DeconstructPlatoon_Params
	{
	public:
		class UPlatoonListEntry*                                   RemovedPlatoonData;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RemovedPlatoonIdx;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.ShouldChangeNoEnemyFocalPoint
	 */
	struct UHDAIAimingHandler_ShouldChangeNoEnemyFocalPoint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.SetEnableNoEnemyLookAround
	 */
	struct UHDAIAimingHandler_SetEnableNoEnemyLookAround_Params
	{
	public:
		bool                                                       bInEnableNoEnemyLookAround;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.MakeNoEnemyFocalPoint
	 */
	struct UHDAIAimingHandler_MakeNoEnemyFocalPoint_Params
	{	};

	/**
	 * Function HDMain.HDAIAimingHandler.IsCandidateTarget
	 */
	struct UHDAIAimingHandler_IsCandidateTarget_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.EstablishNewTargetFromPerception
	 */
	struct UHDAIAimingHandler_EstablishNewTargetFromPerception_Params
	{
	public:
		class UClass*                                              SenseToUse;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.CheckForTarget
	 */
	struct UHDAIAimingHandler_CheckForTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIAimingHandler.AimAtCurrentTarget
	 */
	struct UHDAIAimingHandler_AimAtCurrentTarget_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.StartSafeBehavior
	 */
	struct UHDAIBehaviorHandler_StartSafeBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.StartDangerBehavior
	 */
	struct UHDAIBehaviorHandler_StartDangerBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.StartCombatBehavior
	 */
	struct UHDAIBehaviorHandler_StartCombatBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.StartAwareBehavior
	 */
	struct UHDAIBehaviorHandler_StartAwareBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.ReceiveSuppression
	 */
	struct UHDAIBehaviorHandler_ReceiveSuppression_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.ReceiveHitDamage
	 */
	struct UHDAIBehaviorHandler_ReceiveHitDamage_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.HandleSafeBehavior
	 */
	struct UHDAIBehaviorHandler_HandleSafeBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.HandleDangerBehavior
	 */
	struct UHDAIBehaviorHandler_HandleDangerBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.HandleCombatBehavior
	 */
	struct UHDAIBehaviorHandler_HandleCombatBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.HandleBehaviorStates
	 */
	struct UHDAIBehaviorHandler_HandleBehaviorStates_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.HandleAwareBehavior
	 */
	struct UHDAIBehaviorHandler_HandleAwareBehavior_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.GetIsUnderSuppression
	 */
	struct UHDAIBehaviorHandler_GetIsUnderSuppression_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.GetIsBeingHit
	 */
	struct UHDAIBehaviorHandler_GetIsBeingHit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.DetermineThreatLevel
	 */
	struct UHDAIBehaviorHandler_DetermineThreatLevel_Params
	{	};

	/**
	 * Function HDMain.HDAIBehaviorHandler.CalcThreatLevels
	 */
	struct UHDAIBehaviorHandler_CalcThreatLevels_Params
	{	};

	/**
	 * Function HDMain.HDAICaptureHandler.SetCurrentCP
	 */
	struct UHDAICaptureHandler_SetCurrentCP_Params
	{
	public:
		class AHDBaseCapturePoint*                                 InCurrentCP;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.SetCurrentCaptureMode
	 */
	struct UHDAICaptureHandler_SetCurrentCaptureMode_Params
	{
	public:
		EHDAICaptureMode                                           NewCaptureMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.GetStartSpotClosestToCurrentCP
	 */
	struct UHDAICaptureHandler_GetStartSpotClosestToCurrentCP_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.FindControlPointToCapture
	 */
	struct UHDAICaptureHandler_FindControlPointToCapture_Params
	{
	public:
		class AHDBaseCapturePoint*                                 OutFoundCP;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.FindControlPointRandom
	 */
	struct UHDAICaptureHandler_FindControlPointRandom_Params
	{
	public:
		TArray<class AHDBaseCapturePoint*>                         CPs;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDBaseCapturePoint*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.FindControlPointClosestToPawn
	 */
	struct UHDAICaptureHandler_FindControlPointClosestToPawn_Params
	{
	public:
		TArray<class AHDBaseCapturePoint*>                         CPs;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDBaseCapturePoint*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.FindAvailableControlPointsOfType
	 */
	struct UHDAICaptureHandler_FindAvailableControlPointsOfType_Params
	{
	public:
		EHDAICaptureMode                                           InCaptureMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M05V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AHDBaseCapturePoint*>                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICaptureHandler.EstablishNewControlPoint
	 */
	struct UHDAICaptureHandler_EstablishNewControlPoint_Params
	{	};

	/**
	 * Function HDMain.HDAICombatHandler.StopAttack
	 */
	struct UHDAICombatHandler_StopAttack_Params
	{	};

	/**
	 * Function HDMain.HDAICombatHandler.StartAttack
	 */
	struct UHDAICombatHandler_StartAttack_Params
	{	};

	/**
	 * Function HDMain.HDAICombatHandler.SetWeaponMovementFireEnabled
	 */
	struct UHDAICombatHandler_SetWeaponMovementFireEnabled_Params
	{
	public:
		bool                                                       bInWeaponMovementFire;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.SetWeaponAutoReloadEnabled
	 */
	struct UHDAICombatHandler_SetWeaponAutoReloadEnabled_Params
	{
	public:
		bool                                                       bInWeaponAutoReload;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.SetEnemy
	 */
	struct UHDAICombatHandler_SetEnemy_Params
	{
	public:
		class AActor*                                              NewEnemy;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.Reload
	 */
	struct UHDAICombatHandler_Reload_Params
	{
	public:
		class AHDBaseWeapon*                                       InWeapon;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.ReceiveSuppression
	 */
	struct UHDAICombatHandler_ReceiveSuppression_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.ReceiveHitDamage
	 */
	struct UHDAICombatHandler_ReceiveHitDamage_Params
	{
	public:
		class ADFBaseProjectile*                                   OtherProjectile;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBasePickup*                                       Pickup;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.PauseAttack
	 */
	struct UHDAICombatHandler_PauseAttack_Params
	{	};

	/**
	 * Function HDMain.HDAICombatHandler.IsFiring
	 */
	struct UHDAICombatHandler_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.HasValidEnemy
	 */
	struct UHDAICombatHandler_HasValidEnemy_Params
	{
	public:
		bool                                                       bAliveCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.HasAmmoLoaded
	 */
	struct UHDAICombatHandler_HasAmmoLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAICombatHandler.CanAttackEnemy
	 */
	struct UHDAICombatHandler_CanAttackEnemy_Params
	{
	public:
		bool                                                       bCheckFireTime;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreAmmoReloadCheck;                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIController.JoinOrCreateSquad
	 */
	struct AHDAIController_JoinOrCreateSquad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIController.GetFactionSpecifiedSquadMemberKit
	 */
	struct AHDAIController_GetFactionSpecifiedSquadMemberKit_Params
	{
	public:
		class UHDKit*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIController.GetFactionSpecifiedSquadLeaderKit
	 */
	struct AHDAIController_GetFactionSpecifiedSquadLeaderKit_Params
	{
	public:
		class UHDKit*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.SetupRVOAvoidance
	 */
	struct UHDAINavigationHandler_SetupRVOAvoidance_Params
	{	};

	/**
	 * Function HDMain.HDAINavigationHandler.SetupNextTargetNavPoint
	 */
	struct UHDAINavigationHandler_SetupNextTargetNavPoint_Params
	{	};

	/**
	 * Function HDMain.HDAINavigationHandler.SetDesiredLocation
	 */
	struct UHDAINavigationHandler_SetDesiredLocation_Params
	{
	public:
		struct FVector                                             InDesiredLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.MakePathToDesiredLocation
	 */
	struct UHDAINavigationHandler_MakePathToDesiredLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.IsPawnAtDestination
	 */
	struct UHDAINavigationHandler_IsPawnAtDestination_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.IsNavigationPossible
	 */
	struct UHDAINavigationHandler_IsNavigationPossible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.IsNavDataValidForAllControlPoints
	 */
	struct UHDAINavigationHandler_IsNavDataValidForAllControlPoints_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.FixVectorValuesNaN
	 */
	struct UHDAINavigationHandler_FixVectorValuesNaN_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRandomize;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.FindNewControlPointNavLocation
	 */
	struct UHDAINavigationHandler_FindNewControlPointNavLocation_Params
	{
	public:
		class AHDBaseCapturePoint*                                 CP;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.FindNavLocationInsideControlPoint
	 */
	struct UHDAINavigationHandler_FindNavLocationInsideControlPoint_Params
	{
	public:
		class AHDBaseCapturePoint*                                 CP;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutNavLoc;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.CheckPawnStuckStatus
	 */
	struct UHDAINavigationHandler_CheckPawnStuckStatus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.CalcSeparationVector
	 */
	struct UHDAINavigationHandler_CalcSeparationVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.CalcObstacleAvoidanceVector
	 */
	struct UHDAINavigationHandler_CalcObstacleAvoidanceVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAINavigationHandler.CalcCohesionVector
	 */
	struct UHDAINavigationHandler_CalcCohesionVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.VocalizeSuppression
	 */
	struct UHDAIVocalHandler_VocalizeSuppression_Params
	{	};

	/**
	 * Function HDMain.HDAIVocalHandler.VocalizeReload
	 */
	struct UHDAIVocalHandler_VocalizeReload_Params
	{	};

	/**
	 * Function HDMain.HDAIVocalHandler.VocalizeContact
	 */
	struct UHDAIVocalHandler_VocalizeContact_Params
	{
	public:
		bool                                                       bHasContact;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.VocalizeBeenHit
	 */
	struct UHDAIVocalHandler_VocalizeBeenHit_Params
	{	};

	/**
	 * Function HDMain.HDAIVocalHandler.Vocalize
	 */
	struct UHDAIVocalHandler_Vocalize_Params
	{
	public:
		EHDAIVocalizationType                                      InVocalType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.SetTimeLimit
	 */
	struct UHDAIVocalHandler_SetTimeLimit_Params
	{
	public:
		EHDAIVocalizationType                                      InVocalType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.SetPitchMultiplier
	 */
	struct UHDAIVocalHandler_SetPitchMultiplier_Params
	{
	public:
		float                                                      InPitchMultiplier;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.RandomizePitchMultiplier
	 */
	struct UHDAIVocalHandler_RandomizePitchMultiplier_Params
	{	};

	/**
	 * Function HDMain.HDAIVocalHandler.PlayVocalSound
	 */
	struct UHDAIVocalHandler_PlayVocalSound_Params
	{
	public:
		EHDAIVocalizationType                                      InVocalType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDAIVocalHandler.NotifySurroundingCharacters
	 */
	struct UHDAIVocalHandler_NotifySurroundingCharacters_Params
	{
	public:
		EHDAIVocalizationType                                      InVocalType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.Unlock
	 */
	struct AHDBaseCapturePoint_Unlock_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.SetActiveRoute
	 */
	struct AHDBaseCapturePoint_SetActiveRoute_Params
	{
	public:
		int32_t                                                    NewActiveRoute;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.SetActive
	 */
	struct AHDBaseCapturePoint_SetActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ReceiveOnTeamCaptureStatusUpdated
	 */
	struct AHDBaseCapturePoint_ReceiveOnTeamCaptureStatusUpdated_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ReceiveOnOwningTeamUpdated
	 */
	struct AHDBaseCapturePoint_ReceiveOnOwningTeamUpdated_Params
	{
	public:
		EHDTeam                                                    LastOwningTeam;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ReceiveOnLocked
	 */
	struct AHDBaseCapturePoint_ReceiveOnLocked_Params
	{
	public:
		bool                                                       bNewLocked;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ReceiveOnCaptureProgress
	 */
	struct AHDBaseCapturePoint_ReceiveOnCaptureProgress_Params
	{
	public:
		bool                                                       bNewContested;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ReceiveOnActive
	 */
	struct AHDBaseCapturePoint_ReceiveOnActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_OwningTeam
	 */
	struct AHDBaseCapturePoint_OnRep_OwningTeam_Params
	{
	public:
		EHDTeam                                                    LastOwningTeam;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_Locked
	 */
	struct AHDBaseCapturePoint_OnRep_Locked_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_Contested
	 */
	struct AHDBaseCapturePoint_OnRep_Contested_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_CaptureProgress
	 */
	struct AHDBaseCapturePoint_OnRep_CaptureProgress_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_CapturableByTeam
	 */
	struct AHDBaseCapturePoint_OnRep_CapturableByTeam_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnRep_Active
	 */
	struct AHDBaseCapturePoint_OnRep_Active_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnOwningTeamUpdated
	 */
	struct AHDBaseCapturePoint_OnOwningTeamUpdated_Params
	{
	public:
		EHDTeam                                                    LastOwningTeam;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnEndOverlap
	 */
	struct AHDBaseCapturePoint_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.OnBeginOverlap
	 */
	struct AHDBaseCapturePoint_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N75E[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.Lock
	 */
	struct AHDBaseCapturePoint_Lock_Params
	{	};

	/**
	 * Function HDMain.HDBaseCapturePoint.IsCapturableByTeam
	 */
	struct AHDBaseCapturePoint_IsCapturableByTeam_Params
	{
	public:
		EHDTeam                                                    CaptureTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.GetOverlappingCharactersByTeam
	 */
	struct AHDBaseCapturePoint_GetOverlappingCharactersByTeam_Params
	{
	public:
		TArray<class ADFBaseCharacter*>                            OverlappingCharsRed;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ADFBaseCharacter*>                            OverlappingCharsBlue;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.GetObjectiveTypeForTeam
	 */
	struct AHDBaseCapturePoint_GetObjectiveTypeForTeam_Params
	{
	public:
		EHDTeam                                                    ObjTeam;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDControlPointObjectiveType                               ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.GetMinPlayersRequiredForCaptureTeam
	 */
	struct AHDBaseCapturePoint_GetMinPlayersRequiredForCaptureTeam_Params
	{
	public:
		EHDTeam                                                    CaptureTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PSDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.ChoosePlayerStart
	 */
	struct AHDBaseCapturePoint_ChoosePlayerStart_Params
	{
	public:
		class AHDPlayerController*                                 Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.CanRestartPlayer
	 */
	struct AHDBaseCapturePoint_CanRestartPlayer_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseCapturePoint.CanCapture
	 */
	struct AHDBaseCapturePoint_CanCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseGameMode.PlayerCanRestartAtPlayerStart
	 */
	struct AHDBaseGameMode_PlayerCanRestartAtPlayerStart_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              StartSpot;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFLoadout*                                          StartLoadout;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseGameMode.AddOpforBots
	 */
	struct AHDBaseGameMode_AddOpforBots_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseGameMode.AddBluforBots
	 */
	struct AHDBaseGameMode_AddBluforBots_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDBaseWeapon.IsSelectableEquipment
	 */
	struct AHDBaseWeapon_IsSelectableEquipment_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.UnloadVictoryMenu
	 */
	struct AHDPlayerController_UnloadVictoryMenu_Params
	{	};

	/**
	 * Function HDMain.HDPlayerController.StopTalkingOverChannelIfActive
	 */
	struct AHDPlayerController_StopTalkingOverChannelIfActive_Params
	{
	public:
		class FName                                                TalkStopChannelName;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.StopTalkingOverChannelGroupIfActive
	 */
	struct AHDPlayerController_StopTalkingOverChannelGroupIfActive_Params
	{
	public:
		class FName                                                TalkStopGroupName;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.StopTalkingOnActiveChannels
	 */
	struct AHDPlayerController_StopTalkingOnActiveChannels_Params
	{	};

	/**
	 * Function HDMain.HDPlayerController.StartTalkingOverChannelGroup
	 */
	struct AHDPlayerController_StartTalkingOverChannelGroup_Params
	{
	public:
		class FName                                                TalkStartGroupName;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.StartTalkingOverChannel
	 */
	struct AHDPlayerController_StartTalkingOverChannel_Params
	{
	public:
		class FName                                                TalkStartChannelName;                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ServerSwitchTeam
	 */
	struct AHDPlayerController_ServerSwitchTeam_Params
	{	};

	/**
	 * Function HDMain.HDPlayerController.ServerSpawnVehicle
	 */
	struct AHDPlayerController_ServerSpawnVehicle_Params
	{	};

	/**
	 * Function HDMain.HDPlayerController.ServerRestartPlayerAtStartSpot
	 */
	struct AHDPlayerController_ServerRestartPlayerAtStartSpot_Params
	{
	public:
		class AActor*                                              DesiredStartSpot;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFLoadout*                                          DesiredStartLoadout;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ServerPickTeam
	 */
	struct AHDPlayerController_ServerPickTeam_Params
	{
	public:
		EHDTeam                                                    DesiredTeam;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ServerCheatSetAllowIdleSway
	 */
	struct AHDPlayerController_ServerCheatSetAllowIdleSway_Params
	{
	public:
		bool                                                       bIdleSwayDisallowed;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ReceiveVoipTalkerMsgReceived
	 */
	struct AHDPlayerController_ReceiveVoipTalkerMsgReceived_Params
	{
	public:
		class UDFCommChannel*                                      MsgTalkerChannel;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        MsgTalkerPS;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMsgIsTalking;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.OnPlayerSpawnTimerElapsed
	 */
	struct AHDPlayerController_OnPlayerSpawnTimerElapsed_Params
	{	};

	/**
	 * Function HDMain.HDPlayerController.LoadVictoryMenu
	 */
	struct AHDPlayerController_LoadVictoryMenu_Params
	{
	public:
		EHDTeam                                                    WinningTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWinner;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsTalkingOverChannelName
	 */
	struct AHDPlayerController_IsTalkingOverChannelName_Params
	{
	public:
		class FName                                                TalkChannelName;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsTalkingOverChannelGroup
	 */
	struct AHDPlayerController_IsTalkingOverChannelGroup_Params
	{
	public:
		class FName                                                TalkGroupName;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsTalkingOverChannel
	 */
	struct AHDPlayerController_IsTalkingOverChannel_Params
	{
	public:
		class UDFCommChannel*                                      TalkChannel;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsTalking
	 */
	struct AHDPlayerController_IsTalking_Params
	{
	public:
		bool                                                       bIncludeWantsToTalk;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsInVehicle
	 */
	struct AHDPlayerController_IsInVehicle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.IsIdleSwayAllowed
	 */
	struct AHDPlayerController_IsIdleSwayAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.GetTalkChannel
	 */
	struct AHDPlayerController_GetTalkChannel_Params
	{
	public:
		class UDFCommChannel*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.GetPlayerCommsComponent
	 */
	struct AHDPlayerController_GetPlayerCommsComponent_Params
	{
	public:
		class UDFPlayerCommsComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ClientLoadTeamData
	 */
	struct AHDPlayerController_ClientLoadTeamData_Params
	{
	public:
		TArray<class FString>                                      FactionAssetPaths;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.ClientCheatSetAllowIdleSway
	 */
	struct AHDPlayerController_ClientCheatSetAllowIdleSway_Params
	{
	public:
		bool                                                       bIdleSwayDisallowed;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.CanTalkOverChannel
	 */
	struct AHDPlayerController_CanTalkOverChannel_Params
	{
	public:
		class FName                                                TalkChannelName;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerController.Auth_SpawnVehicle
	 */
	struct AHDPlayerController_Auth_SpawnVehicle_Params
	{	};

	/**
	 * Function HDMain.HDCheatManager.ToggleIdleSway
	 */
	struct UHDCheatManager_ToggleIdleSway_Params
	{	};

	/**
	 * Function HDMain.HDCheatManager.ToggleFreeAimADS
	 */
	struct UHDCheatManager_ToggleFreeAimADS_Params
	{	};

	/**
	 * Function HDMain.HDCheatManager.ToggleFreeAim
	 */
	struct UHDCheatManager_ToggleFreeAim_Params
	{	};

	/**
	 * Function HDMain.HDCheatManager.SpawnVehicle
	 */
	struct UHDCheatManager_SpawnVehicle_Params
	{	};

	/**
	 * Function HDMain.HDCheatManager.SetMaxFreeAimYawADS
	 */
	struct UHDCheatManager_SetMaxFreeAimYawADS_Params
	{
	public:
		float                                                      NewYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDCheatManager.SetMaxFreeAimYaw
	 */
	struct UHDCheatManager_SetMaxFreeAimYaw_Params
	{
	public:
		float                                                      NewYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDCheatManager.SetMaxFreeAimPitchADS
	 */
	struct UHDCheatManager_SetMaxFreeAimPitchADS_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDCheatManager.SetMaxFreeAimPitch
	 */
	struct UHDCheatManager_SetMaxFreeAimPitch_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDCheatManager.SetFreeAimReturnToCenterInterpSpeed
	 */
	struct UHDCheatManager_SetFreeAimReturnToCenterInterpSpeed_Params
	{
	public:
		float                                                      NewInterpSpeed;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDCheatManager.SetFreeAimDeadzoneCameraSpeedFactor
	 */
	struct UHDCheatManager_SetFreeAimDeadzoneCameraSpeedFactor_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGame_AdvanceAndSecure.GetCurrentRedCaptureTier
	 */
	struct AHDGame_AdvanceAndSecure_GetCurrentRedCaptureTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGame_AdvanceAndSecure.GetCurrentBlueCaptureTier
	 */
	struct AHDGame_AdvanceAndSecure_GetCurrentBlueCaptureTier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameProjectBuildSettings.IsDemoBuild
	 */
	struct UHDGameProjectBuildSettings_IsDemoBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameRulesetBase.RevokeTicketsFromTeam
	 */
	struct UHDGameRulesetBase_RevokeTicketsFromTeam_Params
	{
	public:
		EHDTeam                                                    TicketTeam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1KB2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TicketsToRemove;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameRulesetBase.GiveTicketsToTeam
	 */
	struct UHDGameRulesetBase_GiveTicketsToTeam_Params
	{
	public:
		EHDTeam                                                    TicketTeam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6WI6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TicketsToAdd;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameRulesetBase.GetHDGameState
	 */
	struct UHDGameRulesetBase_GetHDGameState_Params
	{
	public:
		class AHDGameState*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameRulesetBase.GetHDGameMode
	 */
	struct UHDGameRulesetBase_GetHDGameMode_Params
	{
	public:
		class AHDBaseGameMode*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.RevokeTicketsFromTeam
	 */
	struct AHDGameState_RevokeTicketsFromTeam_Params
	{
	public:
		EHDTeam                                                    TicketTeam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MP27[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TicketsToRemove;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.IsGameUsingTickets
	 */
	struct AHDGameState_IsGameUsingTickets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.IsGameUsingPlayerSpawnKitRestrictions
	 */
	struct AHDGameState_IsGameUsingPlayerSpawnKitRestrictions_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.GiveTicketsToTeam
	 */
	struct AHDGameState_GiveTicketsToTeam_Params
	{
	public:
		EHDTeam                                                    TicketTeam;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MY3R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TicketsToAdd;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.GetNumPlayersOnTeam
	 */
	struct AHDGameState_GetNumPlayersOnTeam_Params
	{
	public:
		EHDTeam                                                    TeamToCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QX1J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGameState.ClearTickets
	 */
	struct AHDGameState_ClearTickets_Params
	{	};

	/**
	 * Function HDMain.HDGOAPComponent.TargetPerceptionUpdated
	 */
	struct UHDGOAPComponent_TargetPerceptionUpdated_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGOAPComponent.ResetPlanningTimer
	 */
	struct UHDGOAPComponent_ResetPlanningTimer_Params
	{	};

	/**
	 * Function HDMain.HDGOAPComponent.IsAIActiveInWorld
	 */
	struct UHDGOAPComponent_IsAIActiveInWorld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGOAPComponent.IsAIActive
	 */
	struct UHDGOAPComponent_IsAIActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDGOAPComponent.GetAIHandler
	 */
	struct UHDGOAPComponent_GetAIHandler_Params
	{
	public:
		class UClass*                                              HandlerClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHDAIHandlerBase*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.RandomCharacterVariationDataFromKit
	 */
	struct UHDKit_RandomCharacterVariationDataFromKit_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.PlayerCanStartWithKit
	 */
	struct UHDKit_PlayerCanStartWithKit_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                OutKitDenialReason;                                      // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.HasKitRequirements
	 */
	struct UHDKit_HasKitRequirements_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetPrimaryItemEntryDisplayIcon
	 */
	struct UHDKit_GetPrimaryItemEntryDisplayIcon_Params
	{
	public:
		class UTexture2D*                                          OutDisplayIcon;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetPrimaryItemEntry
	 */
	struct UHDKit_GetPrimaryItemEntry_Params
	{
	public:
		struct FHDItemEntry                                        OutPrimaryEntry;                                         // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetPlayersUsingKit
	 */
	struct UHDKit_GetPlayersUsingKit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AHDPlayerState*>                              OutPSArray;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetNumPlayersUsingKit
	 */
	struct UHDKit_GetNumPlayersUsingKit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetItemEntryDisplayIcon
	 */
	struct UHDKit_GetItemEntryDisplayIcon_Params
	{
	public:
		struct FHDItemEntry                                        ItemEntry;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UTexture2D*                                          OutDisplayIcon;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetItemEntryDisplayEquipmentSymbol
	 */
	struct UHDKit_GetItemEntryDisplayEquipmentSymbol_Params
	{
	public:
		struct FHDItemEntry                                        ItemEntry;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UTexture2D*                                          OutDisplayEquipmentSymbol;                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDKit.GetItemEntryBySlotNum
	 */
	struct UHDKit_GetItemEntryBySlotNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q88L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHDItemEntry                                        OutEntry;                                                // 0x0008(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDModData.DoesModPluginUseLegacyMapScanning
	 */
	struct UHDModData_DoesModPluginUseLegacyMapScanning_Params
	{
	public:
		class FString                                              PluginName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonCreationRuleBase.SatisfiesRule
	 */
	struct UHDPlatoonCreationRuleBase_SatisfiesRule_Params
	{
	public:
		class UHDTeamDefinition*                                   TeamDef;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonInfo.ShouldCreateForTeam
	 */
	struct UHDPlatoonInfo_ShouldCreateForTeam_Params
	{
	public:
		class UHDTeamDefinition*                                   TeamDef;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.SquadExists
	 */
	struct AHDPlatoonState_SquadExists_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.RemoveSquadAt
	 */
	struct AHDPlatoonState_RemoveSquadAt_Params
	{
	public:
		int32_t                                                    RemoveIdx;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.RemoveSquad
	 */
	struct AHDPlatoonState_RemoveSquad_Params
	{
	public:
		class AHDSquadState*                                       SquadToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.RemoveFromOwner
	 */
	struct AHDPlatoonState_RemoveFromOwner_Params
	{	};

	/**
	 * Function HDMain.HDPlatoonState.ReceiveSquadPreRemove
	 */
	struct AHDPlatoonState_ReceiveSquadPreRemove_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.ReceiveSquadAdded
	 */
	struct AHDPlatoonState_ReceiveSquadAdded_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.IsSquadPendingRemovalFromPlatoon
	 */
	struct AHDPlatoonState_IsSquadPendingRemovalFromPlatoon_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.HasReachedMaxSquadLimit
	 */
	struct AHDPlatoonState_HasReachedMaxSquadLimit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.GetSquadAt
	 */
	struct AHDPlatoonState_GetSquadAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZP1V[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDSquadState*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.GetNumSquads
	 */
	struct AHDPlatoonState_GetNumSquads_Params
	{
	public:
		bool                                                       bValidSquadsOnly;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DPBA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.GetMaxSquadLimit
	 */
	struct AHDPlatoonState_GetMaxSquadLimit_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.FindSquadByName
	 */
	struct AHDPlatoonState_FindSquadByName_Params
	{
	public:
		class FText                                                SquadDisplayName;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AHDSquadState*                                       OutFoundSquad;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlatoonState.DumpSquadState
	 */
	struct AHDPlatoonState_DumpSquadState_Params
	{	};

	/**
	 * Function HDMain.HDPlatoonState.AddSquad
	 */
	struct AHDPlatoonState_AddSquad_Params
	{
	public:
		class FText                                                SquadDisplayName;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      SquadLeader;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartLocked;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2VHS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDSquadState*                                       ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.VariationDataChangedInternal
	 */
	struct AHDPlayerCharacter_VariationDataChangedInternal_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     PreviousHandle;                                          // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetVariationHandle
	 */
	struct AHDPlayerCharacter_SetVariationHandle_Params
	{
	public:
		struct FDFCharacterVariationDataHandle                     InVariationHandle;                                       // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetMaxFreeAimYawADS
	 */
	struct AHDPlayerCharacter_SetMaxFreeAimYawADS_Params
	{
	public:
		float                                                      NewYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetMaxFreeAimYaw
	 */
	struct AHDPlayerCharacter_SetMaxFreeAimYaw_Params
	{
	public:
		float                                                      NewYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitchADS
	 */
	struct AHDPlayerCharacter_SetMaxFreeAimPitchADS_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetMaxFreeAimPitch
	 */
	struct AHDPlayerCharacter_SetMaxFreeAimPitch_Params
	{
	public:
		float                                                      NewPitch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetFreeAimReturnToCenterInterpSpeed
	 */
	struct AHDPlayerCharacter_SetFreeAimReturnToCenterInterpSpeed_Params
	{
	public:
		float                                                      NewInterpSpeed;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetFreeAimDeadzoneCameraSpeedFactor
	 */
	struct AHDPlayerCharacter_SetFreeAimDeadzoneCameraSpeedFactor_Params
	{
	public:
		float                                                      NewSpeedFactor;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetAllowFreeAimADS
	 */
	struct AHDPlayerCharacter_SetAllowFreeAimADS_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetAllowFreeAim
	 */
	struct AHDPlayerCharacter_SetAllowFreeAim_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.SetAimStyle
	 */
	struct AHDPlayerCharacter_SetAimStyle_Params
	{
	public:
		EHDWeaponAimStyle                                          InAimStyle;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.ReceiveVoipTalkerMsgReceived
	 */
	struct AHDPlayerCharacter_ReceiveVoipTalkerMsgReceived_Params
	{
	public:
		class UDFCommChannel*                                      MsgTalkerChannel;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        MsgTalkerPS;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMsgIsTalking;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.ReceiveVariationDataChanged
	 */
	struct AHDPlayerCharacter_ReceiveVariationDataChanged_Params
	{
	public:
		struct FDFCharacterVariationData                           NewVariation;                                            // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDFCharacterVariationData                           PreviousVariation;                                       // 0x0068(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.ReceiveFreeAim
	 */
	struct AHDPlayerCharacter_ReceiveFreeAim_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.ReceiveCurrentLoadout
	 */
	struct AHDPlayerCharacter_ReceiveCurrentLoadout_Params
	{	};

	/**
	 * Function HDMain.HDPlayerCharacter.ReceiveAimStyleChanged
	 */
	struct AHDPlayerCharacter_ReceiveAimStyleChanged_Params
	{
	public:
		EHDWeaponAimStyle                                          NewAimStyle;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDWeaponAimStyle                                          PrevAimStyle;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.PlayVocalSoundAI
	 */
	struct AHDPlayerCharacter_PlayVocalSoundAI_Params
	{
	public:
		class USoundBase*                                          SoundToUse;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDAIVocalizationType                                      VocalType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TTTC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PitchMultiplier;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.OnRep_CurrentLoadout
	 */
	struct AHDPlayerCharacter_OnRep_CurrentLoadout_Params
	{	};

	/**
	 * Function HDMain.HDPlayerCharacter.OnPickupKit
	 */
	struct AHDPlayerCharacter_OnPickupKit_Params
	{
	public:
		class AHDBasePickup_Kit*                                   Kit;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.NotifyPlayerStateChanged
	 */
	struct AHDPlayerCharacter_NotifyPlayerStateChanged_Params
	{
	public:
		class APlayerState*                                        NewPlayerState;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerState*                                        OldPlayerState;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.IsInVehicle
	 */
	struct AHDPlayerCharacter_IsInVehicle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.HeadBob
	 */
	struct AHDPlayerCharacter_HeadBob_Params
	{	};

	/**
	 * Function HDMain.HDPlayerCharacter.GetPlayerComponent
	 */
	struct AHDPlayerCharacter_GetPlayerComponent_Params
	{
	public:
		class UHDPlayerComponent*                                  ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.GetMaxFreeAimYawToUse
	 */
	struct AHDPlayerCharacter_GetMaxFreeAimYawToUse_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.GetMaxFreeAimPitchToUse
	 */
	struct AHDPlayerCharacter_GetMaxFreeAimPitchToUse_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.GetKitClassToUse
	 */
	struct AHDPlayerCharacter_GetKitClassToUse_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.FreeAim
	 */
	struct AHDPlayerCharacter_FreeAim_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.EquipPrimaryItem
	 */
	struct AHDPlayerCharacter_EquipPrimaryItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerCharacter.DropKit
	 */
	struct AHDPlayerCharacter_DropKit_Params
	{	};

	/**
	 * Function HDMain.HDPlayerComponent.SwitchTeam
	 */
	struct UHDPlayerComponent_SwitchTeam_Params
	{	};

	/**
	 * Function HDMain.HDPlayerComponent.RestartPlayerAtStartSpot
	 */
	struct UHDPlayerComponent_RestartPlayerAtStartSpot_Params
	{
	public:
		class AActor*                                              DesiredStartSpot;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDFLoadout*                                          DesiredStartLoadout;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerComponent.PickTeam
	 */
	struct UHDPlayerComponent_PickTeam_Params
	{
	public:
		EHDTeam                                                    DesiredTeam;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerStart.K2_GetCapsuleComponent
	 */
	struct AHDPlayerStart_K2_GetCapsuleComponent_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerState.UnregisterFromSquad
	 */
	struct AHDPlayerState_UnregisterFromSquad_Params
	{	};

	/**
	 * Function HDMain.HDPlayerState.OnRep_SquadInfo
	 */
	struct AHDPlayerState_OnRep_SquadInfo_Params
	{	};

	/**
	 * Function HDMain.HDPlayerState.OnRep_SpawnLoadout
	 */
	struct AHDPlayerState_OnRep_SpawnLoadout_Params
	{
	public:
		class UHDKit*                                              PrevSpawnLoadout;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerState.OnRep_CurrentLoadout
	 */
	struct AHDPlayerState_OnRep_CurrentLoadout_Params
	{
	public:
		class UHDKit*                                              PrevLoadout;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerState.AssignSpawnLoadout
	 */
	struct AHDPlayerState_AssignSpawnLoadout_Params
	{
	public:
		class UHDKit*                                              NewSpawnLoadout;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDPlayerState.AssignCurrentLoadout
	 */
	struct AHDPlayerState_AssignCurrentLoadout_Params
	{
	public:
		class UHDKit*                                              NewCurrentLoadout;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDProj_Grenade.OnRep_PayloadServerActivationTime
	 */
	struct AHDProj_Grenade_OnRep_PayloadServerActivationTime_Params
	{	};

	/**
	 * Function HDMain.HDRuleset_ControlPoint.GetControlPointSettingsForTeam
	 */
	struct UHDRuleset_ControlPoint_GetControlPointSettingsForTeam_Params
	{
	public:
		EHDTeam                                                    ControlPointTeam;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DFGI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FControlPointRulesetSettings                        ReturnValue;                                             // 0x0004(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_ControlPoint.ControlPointTeamUpdated
	 */
	struct UHDRuleset_ControlPoint_ControlPointTeamUpdated_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    PrevTeam;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    NewTeam;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCaptured;                                               // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_ControlPoint.ControlPointCaptureProgressUpdated
	 */
	struct UHDRuleset_ControlPoint_ControlPointCaptureProgressUpdated_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bContested;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UW3F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Progress;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_KillDeath.PlayerTeamKilled
	 */
	struct UHDRuleset_KillDeath_PlayerTeamKilled_Params
	{
	public:
		class AController*                                         Killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Victim;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_KillDeath.GetKillDeathSettingsForTeam
	 */
	struct UHDRuleset_KillDeath_GetKillDeathSettingsForTeam_Params
	{
	public:
		EHDTeam                                                    KillDeathTeam;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKX1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKillDeathRulesetSettings                           ReturnValue;                                             // 0x0004(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_TicketBleed.UpdateTicketBleedState
	 */
	struct UHDRuleset_TicketBleed_UpdateTicketBleedState_Params
	{	};

	/**
	 * Function HDMain.HDRuleset_TicketBleed.GetTicketBleedSettingsForTeam
	 */
	struct UHDRuleset_TicketBleed_GetTicketBleedSettingsForTeam_Params
	{
	public:
		EHDTeam                                                    TicketBleedTeam;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJHD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTicketBleedRulesetSettings                         ReturnValue;                                             // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_TicketBleed.ControlPointTeamUpdated
	 */
	struct UHDRuleset_TicketBleed_ControlPointTeamUpdated_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    PrevTeam;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    NewTeam;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCaptured;                                               // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDRuleset_TicketBleed.ApplyTicketBleed
	 */
	struct UHDRuleset_TicketBleed_ApplyTicketBleed_Params
	{
	public:
		EHDTeam                                                    BleedTeam;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UING[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TicketBleedMultiplier;                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseMercyTicketBleed;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSQCommChannelState.SetupSQChannelState
	 */
	struct UHDSQCommChannelState_SetupSQChannelState_Params
	{
	public:
		class AHDSquadState*                                       ForSquadState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSQCommChannelState.GetChannelNameForSquad
	 */
	struct UHDSQCommChannelState_GetChannelNameForSquad_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.UnregisterSquadMemberAt
	 */
	struct AHDSquadState_UnregisterSquadMemberAt_Params
	{
	public:
		int32_t                                                    RemoveIdx;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.UnregisterSquadMember
	 */
	struct AHDSquadState_UnregisterSquadMember_Params
	{
	public:
		class AHDPlayerState*                                      MemberPSToRemove;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.UnregisterPlayerSquadMember
	 */
	struct AHDSquadState_UnregisterPlayerSquadMember_Params
	{
	public:
		class AHDPlayerController*                                 MemberPCToRemove;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.UnlockSquad
	 */
	struct AHDSquadState_UnlockSquad_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.SquadMemberPSTeamUpdated
	 */
	struct AHDSquadState_SquadMemberPSTeamUpdated_Params
	{
	public:
		class APlayerState*                                        MemberPS;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              LastTeamNum;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewTeamNum;                                              // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.SquadMemberPSSquadUpdated
	 */
	struct AHDSquadState_SquadMemberPSSquadUpdated_Params
	{
	public:
		class AHDPlayerState*                                      MemberPS;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHDSquadAssignmentInfo                              MemberSQInfo;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.SquadMemberPSEndPlay
	 */
	struct AHDSquadState_SquadMemberPSEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.RenameSquad
	 */
	struct AHDSquadState_RenameSquad_Params
	{
	public:
		class FText                                                NewDisplayName;                                          // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.RemoveFromOwner
	 */
	struct AHDSquadState_RemoveFromOwner_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.RegisterSquadMember
	 */
	struct AHDSquadState_RegisterSquadMember_Params
	{
	public:
		class AHDPlayerState*                                      NewMemberPS;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.RegisterPlayerSquadMember
	 */
	struct AHDSquadState_RegisterPlayerSquadMember_Params
	{
	public:
		class AHDPlayerController*                                 NewMemberPC;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadUnlocked
	 */
	struct AHDSquadState_ReceiveSquadUnlocked_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadRenamed
	 */
	struct AHDSquadState_ReceiveSquadRenamed_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                PrevName;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadMemberRegistered
	 */
	struct AHDSquadState_ReceiveSquadMemberRegistered_Params
	{
	public:
		class AHDPlayerState*                                      MemberPS;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadMemberPreUnregister
	 */
	struct AHDSquadState_ReceiveSquadMemberPreUnregister_Params
	{
	public:
		class AHDPlayerState*                                      MemberPS;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadLocked
	 */
	struct AHDSquadState_ReceiveSquadLocked_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.ReceiveSquadLeaderAssigned
	 */
	struct AHDSquadState_ReceiveSquadLeaderAssigned_Params
	{
	public:
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlayerState*                                      PrevLeaderPS;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.ReceiveInit
	 */
	struct AHDSquadState_ReceiveInit_Params
	{
	public:
		struct FHDSquadCreationParams                              CreationParams;                                          // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.OnRep_SquadLeader
	 */
	struct AHDSquadState_OnRep_SquadLeader_Params
	{
	public:
		class AHDPlayerState*                                      PrevSquadLeader;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.OnRep_SquadHiddenState
	 */
	struct AHDSquadState_OnRep_SquadHiddenState_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.OnRep_DisplayName
	 */
	struct AHDSquadState_OnRep_DisplayName_Params
	{
	public:
		class FText                                                PrevDisplayName;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.OnRep_bLocked
	 */
	struct AHDSquadState_OnRep_bLocked_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.LockSquad
	 */
	struct AHDSquadState_LockSquad_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.IsRegisteredSquadMember
	 */
	struct AHDSquadState_IsRegisteredSquadMember_Params
	{
	public:
		class AHDPlayerState*                                      PS;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.IsPlayerRegisteredSquadMember
	 */
	struct AHDSquadState_IsPlayerRegisteredSquadMember_Params
	{
	public:
		class AHDPlayerController*                                 PC;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.IsPlayerPendingRemovalFromSquad
	 */
	struct AHDSquadState_IsPlayerPendingRemovalFromSquad_Params
	{
	public:
		class AHDPlayerController*                                 PC;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.IsPendingRemovalFromSquad
	 */
	struct AHDSquadState_IsPendingRemovalFromSquad_Params
	{
	public:
		class AHDPlayerState*                                      PS;                                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.HasReachedMaxSquadMemberLimit
	 */
	struct AHDSquadState_HasReachedMaxSquadMemberLimit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.GetSquadMemberAt
	 */
	struct AHDSquadState_GetSquadMemberAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XBM3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDPlayerState*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.GetNumSquadMembersBots
	 */
	struct AHDSquadState_GetNumSquadMembersBots_Params
	{
	public:
		bool                                                       bValidMembersOnly;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7Y30[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.GetNumSquadMembers
	 */
	struct AHDSquadState_GetNumSquadMembers_Params
	{
	public:
		bool                                                       bValidMembersOnly;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_91D8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.DumpSquadMemberState
	 */
	struct AHDSquadState_DumpSquadMemberState_Params
	{	};

	/**
	 * Function HDMain.HDSquadState.CanRegisterSquadMember
	 */
	struct AHDSquadState_CanRegisterSquadMember_Params
	{
	public:
		class AHDPlayerState*                                      NewMemberPS;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.CanRegisterPlayerSquadMember
	 */
	struct AHDSquadState_CanRegisterPlayerSquadMember_Params
	{
	public:
		class AHDPlayerController*                                 NewMemberPC;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDSquadState.AssignSquadLeader
	 */
	struct AHDSquadState_AssignSquadLeader_Params
	{
	public:
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamCommChannelState.SetupTeamChannelState
	 */
	struct UHDTeamCommChannelState_SetupTeamChannelState_Params
	{
	public:
		class AHDTeamState*                                        ForTeamState;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamCommChannelState.GetChannelNameForTeam
	 */
	struct UHDTeamCommChannelState_GetChannelNameForTeam_Params
	{
	public:
		class AHDTeamState*                                        Team;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamCommChannelState.GetChannelNameForCommand
	 */
	struct UHDTeamCommChannelState_GetChannelNameForCommand_Params
	{
	public:
		class AHDTeamState*                                        CmdTeam;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.RemovePlatoonAt
	 */
	struct AHDTeamState_RemovePlatoonAt_Params
	{
	public:
		int32_t                                                    RemoveIdx;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.RemovePlatoon
	 */
	struct AHDTeamState_RemovePlatoon_Params
	{
	public:
		class AHDPlatoonState*                                     PlatoonToRemove;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.ReceivePlatoonPreRemove
	 */
	struct AHDTeamState_ReceivePlatoonPreRemove_Params
	{
	public:
		class AHDPlatoonState*                                     Platoon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.ReceivePlatoonAdded
	 */
	struct AHDTeamState_ReceivePlatoonAdded_Params
	{
	public:
		class AHDPlatoonState*                                     Platoon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.PlatoonExists
	 */
	struct AHDTeamState_PlatoonExists_Params
	{
	public:
		class AHDPlatoonState*                                     Platoon;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.IsPlatoonPendingRemovalFromTeam
	 */
	struct AHDTeamState_IsPlatoonPendingRemovalFromTeam_Params
	{
	public:
		class AHDPlatoonState*                                     Platoon;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.HasReachedMaxPlatoonLimit
	 */
	struct AHDTeamState_HasReachedMaxPlatoonLimit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.GetTeam
	 */
	struct AHDTeamState_GetTeam_Params
	{
	public:
		EHDTeam                                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.GetPlatoonAt
	 */
	struct AHDTeamState_GetPlatoonAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnorePendingRemoval;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G2TP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.GetNumPlatoons
	 */
	struct AHDTeamState_GetNumPlatoons_Params
	{
	public:
		bool                                                       bValidPlatoonsOnly;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MZSW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.FindPlatoonByName
	 */
	struct AHDTeamState_FindPlatoonByName_Params
	{
	public:
		class FText                                                PlatoonDisplayName;                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AHDPlatoonState*                                     OutFoundPlatoon;                                         // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.FindPlatoonByDefinition
	 */
	struct AHDTeamState_FindPlatoonByDefinition_Params
	{
	public:
		class UHDPlatoonInfo*                                      PlatoonDef;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlatoonState*                                     OutFoundPlatoon;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTeamState.DumpPlatoonState
	 */
	struct AHDTeamState_DumpPlatoonState_Params
	{	};

	/**
	 * Function HDMain.HDTeamState.AddPlatoon
	 */
	struct AHDTeamState_AddPlatoon_Params
	{
	public:
		class UHDPlatoonInfo*                                      PlatoonInfo;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.SubmitChatMessage
	 */
	struct UHDTextChatInputWidgetBase_SubmitChatMessage_Params
	{
	public:
		class FText                                                ChatMsgText;                                             // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.StopTalkingOnCurrentChannel
	 */
	struct UHDTextChatInputWidgetBase_StopTalkingOnCurrentChannel_Params
	{	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.StopTalking
	 */
	struct UHDTextChatInputWidgetBase_StopTalking_Params
	{
	public:
		class UDFCommChannel*                                      CurrentChannel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.StartTalkingOnChannel
	 */
	struct UHDTextChatInputWidgetBase_StartTalkingOnChannel_Params
	{
	public:
		class UDFCommChannel*                                      TalkChannel;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.StartTalking
	 */
	struct UHDTextChatInputWidgetBase_StartTalking_Params
	{
	public:
		class UDFCommChannel*                                      NewTalkChannel;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatInputWidgetBase.OnChatMessageSubmitted
	 */
	struct UHDTextChatInputWidgetBase_OnChatMessageSubmitted_Params
	{
	public:
		class UHDTextChatMsgInfo*                                  SubmittedChatMsg;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.StopTalking
	 */
	struct UHDTextChatWidgetBase_StopTalking_Params
	{	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.StartTalking
	 */
	struct UHDTextChatWidgetBase_StartTalking_Params
	{
	public:
		class UDFCommChannel*                                      TalkChannel;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.SetMaxChatMsgsToCache
	 */
	struct UHDTextChatWidgetBase_SetMaxChatMsgsToCache_Params
	{
	public:
		int32_t                                                    NumChatMsgsToCache;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.SayTeamActionPressed
	 */
	struct UHDTextChatWidgetBase_SayTeamActionPressed_Params
	{	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.SaySquadActionPressed
	 */
	struct UHDTextChatWidgetBase_SaySquadActionPressed_Params
	{	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.SayAllActionPressed
	 */
	struct UHDTextChatWidgetBase_SayAllActionPressed_Params
	{	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.GetNumCachedChatMsgs
	 */
	struct UHDTextChatWidgetBase_GetNumCachedChatMsgs_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.GetCachedChatMsgAt
	 */
	struct UHDTextChatWidgetBase_GetCachedChatMsgAt_Params
	{
	public:
		int32_t                                                    MsgIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T7DO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHDTextChatMsgInfo*                                  OutFoundMsg;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDTextChatWidgetBase.DisplayChatMessage
	 */
	struct UHDTextChatWidgetBase_DisplayChatMessage_Params
	{
	public:
		class UHDTextChatMsgInfo*                                  NewChatMsg;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDURLStatics.GetNumTicketsOptionName
	 */
	struct UHDURLStatics_GetNumTicketsOptionName_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4SPP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDURLStatics.GetNumBotsOptionName
	 */
	struct UHDURLStatics_GetNumBotsOptionName_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GD7U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDURLStatics.GetFactionOptionName
	 */
	struct UHDURLStatics_GetFactionOptionName_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KUN6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.OwnerUnpossessPawn
	 */
	struct UHDUIUserWidget_OwnerUnpossessPawn_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.OwnerPossessPawn
	 */
	struct UHDUIUserWidget_OwnerPossessPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.OwnerEquippedItemChanged
	 */
	struct UHDUIUserWidget_OwnerEquippedItemChanged_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.OwnerDeath
	 */
	struct UHDUIUserWidget_OwnerDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3N4M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwningPlayerHUD
	 */
	struct UHDUIUserWidget_GetOwningPlayerHUD_Params
	{
	public:
		class AHUD*                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwningHDPlayerHUD
	 */
	struct UHDUIUserWidget_GetOwningHDPlayerHUD_Params
	{
	public:
		class AHDHUD*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacterMovement
	 */
	struct UHDUIUserWidget_GetOwningHDPlayerCharacterMovement_Params
	{
	public:
		class UDFCharacterMovementComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwningHDPlayerCharacter
	 */
	struct UHDUIUserWidget_GetOwningHDPlayerCharacter_Params
	{
	public:
		class AHDPlayerCharacter*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwningHDPlayer
	 */
	struct UHDUIUserWidget_GetOwningHDPlayer_Params
	{
	public:
		class AHDPlayerController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.GetOwnerEquippedWeapon
	 */
	struct UHDUIUserWidget_GetOwnerEquippedWeapon_Params
	{
	public:
		class AHDBaseWeapon*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPOwnerWeaponChanged
	 */
	struct UHDUIUserWidget_BPOwnerWeaponChanged_Params
	{
	public:
		class AHDBaseWeapon*                                       NewWeap;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AHDBaseWeapon*                                       PrevWeap;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPOwnerUnpossessPawn
	 */
	struct UHDUIUserWidget_BPOwnerUnpossessPawn_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPOwnerPossessPawn
	 */
	struct UHDUIUserWidget_BPOwnerPossessPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPOwnerDeath
	 */
	struct UHDUIUserWidget_BPOwnerDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XJM5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPInitializeForOwnerWeapon
	 */
	struct UHDUIUserWidget_BPInitializeForOwnerWeapon_Params
	{
	public:
		class AHDBaseWeapon*                                       OwnerWeap;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPInitializeForOwnerPlayerCharacter
	 */
	struct UHDUIUserWidget_BPInitializeForOwnerPlayerCharacter_Params
	{
	public:
		class AHDPlayerCharacter*                                  OwnerPlyChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerWeapon
	 */
	struct UHDUIUserWidget_BPDeinitializeFromOwnerWeapon_Params
	{
	public:
		class AHDBaseWeapon*                                       OwnerWeap;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUserWidget.BPDeinitializeFromOwnerPlayerCharacter
	 */
	struct UHDUIUserWidget_BPDeinitializeFromOwnerPlayerCharacter_Params
	{
	public:
		class AHDPlayerCharacter*                                  OwnerPlyChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.OwnerTouchingControlPoint
	 */
	struct UHDUIUWCaptureStatus_OwnerTouchingControlPoint_Params
	{
	public:
		class AHDBaseCapturePoint*                                 OverlappingCP;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.OwnerNoControlPoint
	 */
	struct UHDUIUWCaptureStatus_OwnerNoControlPoint_Params
	{	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.OwnerEndOverlap
	 */
	struct UHDUIUWCaptureStatus_OwnerEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedOwnerChar;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.OwnerBeginOverlap
	 */
	struct UHDUIUWCaptureStatus_OwnerBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlappedOwnerChar;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.CPOwnershipUpdate
	 */
	struct UHDUIUWCaptureStatus_CPOwnershipUpdate_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    PrevOwningTeam;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    NewOwningTeam;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCaptured;                                               // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.CPCaptureProgressUpdate
	 */
	struct UHDUIUWCaptureStatus_CPCaptureProgressUpdate_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInCaptureContested;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GB2O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCaptureProgress;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.CPBeginEndOverlap
	 */
	struct UHDUIUWCaptureStatus_CPBeginEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedControlPointActor;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.ControlPointSetOwnershipState
	 */
	struct UHDUIUWCaptureStatus_ControlPointSetOwnershipState_Params
	{
	public:
		bool                                                       bCaptured;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    NewOwningTeam;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDTeam                                                    OldOwningTeam;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.ControlPointSetGarrisonedPlayerCount
	 */
	struct UHDUIUWCaptureStatus_ControlPointSetGarrisonedPlayerCount_Params
	{
	public:
		int32_t                                                    NumFriendlies;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumEnemies;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinNumRequiredForCapture;                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWCaptureStatus.ControlPointSetCaptureProgress
	 */
	struct UHDUIUWCaptureStatus_ControlPointSetCaptureProgress_Params
	{
	public:
		bool                                                       bContested;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ER48[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewValueNorm;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValueNorm;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerUpdateStamina
	 */
	struct UHDUIUWPlayerStatus_OwnerUpdateStamina_Params
	{
	public:
		float                                                      SprintValueNorm;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      JumpValueNorm;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerStartSprint
	 */
	struct UHDUIUWPlayerStatus_OwnerStartSprint_Params
	{	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerStartAim
	 */
	struct UHDUIUWPlayerStatus_OwnerStartAim_Params
	{	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSprintTransitionUpdate
	 */
	struct UHDUIUWPlayerStatus_OwnerSprintTransitionUpdate_Params
	{
	public:
		bool                                                       bIsSprinting;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSetStanceState
	 */
	struct UHDUIUWPlayerStatus_OwnerSetStanceState_Params
	{
	public:
		EHDUICharacterStanceState                                  NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDUICharacterStanceState                                  OldState;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSetStance
	 */
	struct UHDUIUWPlayerStatus_OwnerSetStance_Params
	{
	public:
		ECharacterStance                                           NewStance;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharacterStance                                           OldStance;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSetSprintStamina
	 */
	struct UHDUIUWPlayerStatus_OwnerSetSprintStamina_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSetJumpStamina
	 */
	struct UHDUIUWPlayerStatus_OwnerSetJumpStamina_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerSetHealth
	 */
	struct UHDUIUWPlayerStatus_OwnerSetHealth_Params
	{
	public:
		float                                                      NewValueNorm;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValueNorm;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerHealthUpdate
	 */
	struct UHDUIUWPlayerStatus_OwnerHealthUpdate_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewHealthTotal;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PrevHealthTotal;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerEndSprint
	 */
	struct UHDUIUWPlayerStatus_OwnerEndSprint_Params
	{	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerEndAim
	 */
	struct UHDUIUWPlayerStatus_OwnerEndAim_Params
	{	};

	/**
	 * Function HDMain.HDUIUWPlayerStatus.OwnerAimTransitionUpdate
	 */
	struct UHDUIUWPlayerStatus_OwnerAimTransitionUpdate_Params
	{
	public:
		bool                                                       bIsAiming;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWWeaponStatus.OwnerWeaponFireModeChanged
	 */
	struct UHDUIUWWeaponStatus_OwnerWeaponFireModeChanged_Params
	{
	public:
		class ADFBaseGun*                                          Gun;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFireMode                                                  NewFireMode;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFireMode                                                  PrevFireMode;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWWeaponStatus.OwnerSetAimStyle
	 */
	struct UHDUIUWWeaponStatus_OwnerSetAimStyle_Params
	{
	public:
		EHDWeaponAimStyle                                          NewAimStyle;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDWeaponAimStyle                                          PrevAimStyle;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWWeaponStatus.OwnerAimStyleChanged
	 */
	struct UHDUIUWWeaponStatus_OwnerAimStyleChanged_Params
	{
	public:
		class AHDPlayerCharacter*                                  Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDWeaponAimStyle                                          NewAimStyle;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHDWeaponAimStyle                                          PrevAimStyle;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponSetFireMode
	 */
	struct UHDUIUWWeaponStatus_BPOwnerWeaponSetFireMode_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFireMode                                                  PreviousFireMode;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDUIUWWeaponStatus.BPOwnerWeaponAmmoUpdated
	 */
	struct UHDUIUWWeaponStatus_BPOwnerWeaponAmmoUpdated_Params
	{
	public:
		struct FHDUIWeaponAmmoState                                AmmoState;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bFromReload;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTotalFreeAmmoUpdated;                                   // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNumFreeAmmoClipsUpdated;                                // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorListingWidgetBase.SetupVoiceListing
	 */
	struct UHDVoipIndicatorListingWidgetBase_SetupVoiceListing_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 InVoiceMsgInfo;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorListingWidgetBase.OnVoiceMsgInfoSet
	 */
	struct UHDVoipIndicatorListingWidgetBase_OnVoiceMsgInfoSet_Params
	{
	public:
		bool                                                       bIsDesignTime;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStopTalking
	 */
	struct UHDVoipIndicatorWidgetBase_OnPlayerStopTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorWidgetBase.OnPlayerStartTalking
	 */
	struct UHDVoipIndicatorWidgetBase_OnPlayerStartTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 TalkerMsgInfo;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStopTalking
	 */
	struct UHDVoipIndicatorWidgetBase_OnOwningPlayerStopTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 LocalTalkerMsgInfo;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.HDVoipIndicatorWidgetBase.OnOwningPlayerStartTalking
	 */
	struct UHDVoipIndicatorWidgetBase_OnOwningPlayerStartTalking_Params
	{
	public:
		class UHDVoiceChatMsgInfo*                                 LocalTalkerMsgInfo;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.SquadListEntry.GetParentPlatoonState
	 */
	struct USquadListEntry_GetParentPlatoonState_Params
	{
	public:
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.SquadMemberInfo.GetParentSquadState
	 */
	struct USquadMemberInfo_GetParentSquadState_Params
	{
	public:
		class AHDSquadState*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.SquadMemberInfo.GetParentPlatoonState
	 */
	struct USquadMemberInfo_GetParentPlatoonState_Params
	{
	public:
		class AHDPlatoonState*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HDMain.VictoryMenu.OnVictoryInit
	 */
	struct UVictoryMenu_OnVictoryInit_Params
	{	};

	/**
	 * Function HDMain.VictoryMenu.Init
	 */
	struct UVictoryMenu_Init_Params
	{
	public:
		EHDTeam                                                    InWinningTeam;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWinner;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
