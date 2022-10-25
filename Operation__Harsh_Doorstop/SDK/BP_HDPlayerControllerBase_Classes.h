#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDPlayerControllerBase.BP_HDPlayerControllerBase_C
	 * Size -> 0x0070 (FullSize[0x0708] - InheritedSize[0x0698])
	 */
	class ABP_HDPlayerControllerBase_C : public AHDPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_DeployMenu_C*                                   DeployMenu;                                              // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInitialSpawn;                                           // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWantsToOpenDeployMenu;                                  // 0x06A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDeployMenuShown;                                        // 0x06AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OYUI[0x5];                                   // 0x06AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRepPlayerState;                                        // 0x06B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bOpenDeployMenuOnBeginPlay;                              // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SLEO[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         DeathScreen;                                             // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDeathScreenShown;                                       // 0x06D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E4CT[0x7];                                   // 0x06D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         WatermarkWidget;                                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WatermarkWidgetClass[0x28];                              // 0x06E0(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput);
		void SetSquadLockedState(class AHDSquadState* Squad, bool bLocked);
		void KickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove, bool* bRemoveSuccess);
		void LeaveCurrentSquad(bool* bLeaveSuccess);
		void IsSquadLeader(class AHDSquadState* Squad, bool* bSquadLeader);
		void CanJoinSquad(class AHDSquadState* SquadToJoin, bool* bJoinableSquad);
		void JoinSquad(class AHDSquadState* SquadToJoin, bool* bJoinSuccess);
		void InternalCreateUnnamedSquad(class AHDPlatoonState* ForPlatoon, bool bJoinSquadAfterCreation, bool bStartLocked, bool* bSuccess, class AHDSquadState** NewSquad);
		void GetHDTeamState(class AHDTeamState** TeamState);
		void GetHDPlayerState(class AHDPlayerState** PlayerState);
		void SpawnVehicleAtPlayer(class UClass* VehicleClass);
		void HideHUD();
		void ShowHUD();
		void GetTeamKits();
		void GetMinimapWidget(class UDFMinimap** MinimapWidget);
		void DeathScreenToggle(bool bShow);
		void UnloadDeathScreen();
		void LoadDeathScreen();
		void DeployMenuToggle(bool bShowMenu, bool bForce);
		void UnloadDeployMenu();
		void LoadDeployMenu();
		void LoadAndActivateDeployMenu();
		void InpActEvt_F8_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Fire_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_DeployMenu_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_F1_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_F2_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_F3_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Use_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_F4_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnLoaded_97A2A56D4425648AEE60ECA073085E53(class UClass* Loaded);
		void InpActEvt_ChatHistoryToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ServerCreateAndJoinUserSquadUnnamed(class AHDPlatoonState* ForPlatoon);
		void ServerLeaveCurrentSquad();
		void ServerJoinSquad(class AHDSquadState* SquadToJoin);
		void ServerSetSquadLockedState(class AHDSquadState* Squad, bool bLocked);
		void ServerKickSquadMember(class AHDSquadState* Squad, class AHDPlayerState* MemberToRemove);
		void ReceiveBeginPlay();
		void OnDeployMenuPreloadFinished();
		void ReceiveOnRepPlayerState();
		void OnPlayerSpawnTimerElapsed();
		void ReceivePlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void TryGetInVehicle(class AArcBaseVehicle* Vehicle);
		void RequestExitVehicle(class AArcBaseVehicle* Vehicle);
		void Server_RequestSeatChange(int32_t Seat);
		void ReceivePossessPawn(class APawn* NewPawn);
		void CharacterDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void Auth_SpawnVehicle();
		void ReceiveGameHasEnded(class AActor* EndGameFocus, bool bIsWinner);
		void ExecuteUbergraph_BP_HDPlayerControllerBase(int32_t EntryPoint);
		void OnRepPlayerState__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
