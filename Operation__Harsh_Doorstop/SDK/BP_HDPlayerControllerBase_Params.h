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
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetJoystickDirection
	 */
	struct ABP_HDPlayerControllerBase_C_GetJoystickDirection_Params
	{
	public:
		EJoystickTypes                                             Stick;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYOO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           StickInput;                                              // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SetSquadLockedState
	 */
	struct ABP_HDPlayerControllerBase_C_SetSquadLockedState_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.KickSquadMember
	 */
	struct ABP_HDPlayerControllerBase_C_KickSquadMember_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      MemberToRemove;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRemoveSuccess;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LeaveCurrentSquad
	 */
	struct ABP_HDPlayerControllerBase_C_LeaveCurrentSquad_Params
	{
	public:
		bool                                                       bLeaveSuccess;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.IsSquadLeader
	 */
	struct ABP_HDPlayerControllerBase_C_IsSquadLeader_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSquadLeader;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CanJoinSquad
	 */
	struct ABP_HDPlayerControllerBase_C_CanJoinSquad_Params
	{
	public:
		class AHDSquadState*                                       SquadToJoin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinableSquad;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.JoinSquad
	 */
	struct ABP_HDPlayerControllerBase_C_JoinSquad_Params
	{
	public:
		class AHDSquadState*                                       SquadToJoin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinSuccess;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InternalCreateUnnamedSquad
	 */
	struct ABP_HDPlayerControllerBase_C_InternalCreateUnnamedSquad_Params
	{
	public:
		class AHDPlatoonState*                                     ForPlatoon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bJoinSquadAfterCreation;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStartLocked;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1US[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AHDSquadState*                                       NewSquad;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDTeamState
	 */
	struct ABP_HDPlayerControllerBase_C_GetHDTeamState_Params
	{
	public:
		class AHDTeamState*                                        TeamState;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetHDPlayerState
	 */
	struct ABP_HDPlayerControllerBase_C_GetHDPlayerState_Params
	{
	public:
		class AHDPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.SpawnVehicleAtPlayer
	 */
	struct ABP_HDPlayerControllerBase_C_SpawnVehicleAtPlayer_Params
	{
	public:
		class UClass*                                              VehicleClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.HideHUD
	 */
	struct ABP_HDPlayerControllerBase_C_HideHUD_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ShowHUD
	 */
	struct ABP_HDPlayerControllerBase_C_ShowHUD_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetTeamKits
	 */
	struct ABP_HDPlayerControllerBase_C_GetTeamKits_Params
	{
	public:
		unsigned char                                              UnknownData_NN7L[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.GetMinimapWidget
	 */
	struct ABP_HDPlayerControllerBase_C_GetMinimapWidget_Params
	{
	public:
		class UDFMinimap*                                          MinimapWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeathScreenToggle
	 */
	struct ABP_HDPlayerControllerBase_C_DeathScreenToggle_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeathScreen
	 */
	struct ABP_HDPlayerControllerBase_C_UnloadDeathScreen_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeathScreen
	 */
	struct ABP_HDPlayerControllerBase_C_LoadDeathScreen_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.DeployMenuToggle
	 */
	struct ABP_HDPlayerControllerBase_C_DeployMenuToggle_Params
	{
	public:
		bool                                                       bShowMenu;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.UnloadDeployMenu
	 */
	struct ABP_HDPlayerControllerBase_C_UnloadDeployMenu_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadDeployMenu
	 */
	struct ABP_HDPlayerControllerBase_C_LoadDeployMenu_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.LoadAndActivateDeployMenu
	 */
	struct ABP_HDPlayerControllerBase_C_LoadAndActivateDeployMenu_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F8_K2Node_InputKeyEvent_5
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_F8_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_5
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_Fire_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Fire_K2Node_InputActionEvent_4
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_Fire_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_DeployMenu_K2Node_InputActionEvent_3
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_DeployMenu_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F1_K2Node_InputKeyEvent_4
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_F1_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F2_K2Node_InputKeyEvent_3
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_F2_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F3_K2Node_InputKeyEvent_2
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_F3_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_Use_K2Node_InputActionEvent_2
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_Use_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_F4_K2Node_InputKeyEvent_1
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_F4_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnLoaded_97A2A56D4425648AEE60ECA073085E53
	 */
	struct ABP_HDPlayerControllerBase_C_OnLoaded_97A2A56D4425648AEE60ECA073085E53_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1
	 */
	struct ABP_HDPlayerControllerBase_C_InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerCreateAndJoinUserSquadUnnamed
	 */
	struct ABP_HDPlayerControllerBase_C_ServerCreateAndJoinUserSquadUnnamed_Params
	{
	public:
		class AHDPlatoonState*                                     ForPlatoon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerLeaveCurrentSquad
	 */
	struct ABP_HDPlayerControllerBase_C_ServerLeaveCurrentSquad_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerJoinSquad
	 */
	struct ABP_HDPlayerControllerBase_C_ServerJoinSquad_Params
	{
	public:
		class AHDSquadState*                                       SquadToJoin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerSetSquadLockedState
	 */
	struct ABP_HDPlayerControllerBase_C_ServerSetSquadLockedState_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ServerKickSquadMember
	 */
	struct ABP_HDPlayerControllerBase_C_ServerKickSquadMember_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      MemberToRemove;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveBeginPlay
	 */
	struct ABP_HDPlayerControllerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnDeployMenuPreloadFinished
	 */
	struct ABP_HDPlayerControllerBase_C_OnDeployMenuPreloadFinished_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveOnRepPlayerState
	 */
	struct ABP_HDPlayerControllerBase_C_ReceiveOnRepPlayerState_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnPlayerSpawnTimerElapsed
	 */
	struct ABP_HDPlayerControllerBase_C_OnPlayerSpawnTimerElapsed_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePlayerTeamNumUpdated
	 */
	struct ABP_HDPlayerControllerBase_C_ReceivePlayerTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.TryGetInVehicle
	 */
	struct ABP_HDPlayerControllerBase_C_TryGetInVehicle_Params
	{
	public:
		class AArcBaseVehicle*                                     Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.RequestExitVehicle
	 */
	struct ABP_HDPlayerControllerBase_C_RequestExitVehicle_Params
	{
	public:
		class AArcBaseVehicle*                                     Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Server_RequestSeatChange
	 */
	struct ABP_HDPlayerControllerBase_C_Server_RequestSeatChange_Params
	{
	public:
		int32_t                                                    Seat;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceivePossessPawn
	 */
	struct ABP_HDPlayerControllerBase_C_ReceivePossessPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.CharacterDeath
	 */
	struct ABP_HDPlayerControllerBase_C_CharacterDeath_Params
	{
	public:
		class APawn*                                               VictimPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         VictimController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YON3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.Auth_SpawnVehicle
	 */
	struct ABP_HDPlayerControllerBase_C_Auth_SpawnVehicle_Params
	{	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ReceiveGameHasEnded
	 */
	struct ABP_HDPlayerControllerBase_C_ReceiveGameHasEnded_Params
	{
	public:
		class AActor*                                              EndGameFocus;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsWinner;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.ExecuteUbergraph_BP_HDPlayerControllerBase
	 */
	struct ABP_HDPlayerControllerBase_C_ExecuteUbergraph_BP_HDPlayerControllerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0H2H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C.OnRepPlayerState__DelegateSignature
	 */
	struct ABP_HDPlayerControllerBase_C_OnRepPlayerState__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
