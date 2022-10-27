/**
 * Name: Shooter_Game
 * Version: 03.22.2014
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasLoSTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasLoSTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.BTDecorator_HasLoSTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_FindPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FindPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.BTTask_FindPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_FindPointNearEnemy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FindPointNearEnemy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.BTTask_FindPointNearEnemy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterAIController.ShootEnemy
	 * 		Flags  -> ()
	 */
	void AShooterAIController::ShootEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAIController.ShootEnemy");
		
		AShooterAIController_ShootEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterAIController.FindClosestEnemyWithLOS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AShooterCharacter*                           ExcludeEnemy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AShooterAIController::FindClosestEnemyWithLOS(class AShooterCharacter* ExcludeEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAIController.FindClosestEnemyWithLOS");
		
		AShooterAIController_FindClosestEnemyWithLOS_Params params {};
		params.ExcludeEnemy = ExcludeEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterAIController.FindClosestEnemy
	 * 		Flags  -> ()
	 */
	void AShooterAIController::FindClosestEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAIController.FindClosestEnemy");
		
		AShooterAIController_FindClosestEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.ServerSetTargeting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewTargeting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterCharacter::ServerSetTargeting(bool bNewTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetTargeting");
		
		AShooterCharacter_ServerSetTargeting_Params params {};
		params.bNewTargeting = bNewTargeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.ServerSetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewRunning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterCharacter::ServerSetRunning(bool bNewRunning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetRunning");
		
		AShooterCharacter_ServerSetRunning_Params params {};
		params.bNewRunning = bNewRunning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.ServerEquipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AShooterWeapon*                              NewWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterCharacter::ServerEquipWeapon(class AShooterWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerEquipWeapon");
		
		AShooterCharacter_ServerEquipWeapon_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo
	 * 		Flags  -> ()
	 */
	void AShooterCharacter::OnRep_LastTakeHitInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo");
		
		AShooterCharacter_OnRep_LastTakeHitInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AShooterWeapon*                              LastWeapon                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterCharacter::OnRep_CurrentWeapon(class AShooterWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentWeapon");
		
		AShooterCharacter_OnRep_CurrentWeapon_Params params {};
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.IsTargeting
	 * 		Flags  -> ()
	 */
	bool AShooterCharacter::IsTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsTargeting");
		
		AShooterCharacter_IsTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.IsRunning
	 * 		Flags  -> ()
	 */
	bool AShooterCharacter::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsRunning");
		
		AShooterCharacter_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.IsFirstPerson
	 * 		Flags  -> ()
	 */
	bool AShooterCharacter::IsFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFirstPerson");
		
		AShooterCharacter_IsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.IsFiring
	 * 		Flags  -> ()
	 */
	bool AShooterCharacter::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFiring");
		
		AShooterCharacter_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.GetWeapon
	 * 		Flags  -> ()
	 */
	class AShooterWeapon* AShooterCharacter::GetWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeapon");
		
		AShooterCharacter_GetWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
	 * 		Flags  -> ()
	 */
	float AShooterCharacter::GetTargetingSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier");
		
		AShooterCharacter_GetTargetingSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier
	 * 		Flags  -> ()
	 */
	float AShooterCharacter::GetRunningSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier");
		
		AShooterCharacter_GetRunningSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCharacter.GetAimOffsets
	 * 		Flags  -> ()
	 */
	struct FRotator AShooterCharacter::GetAimOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimOffsets");
		
		AShooterCharacter_GetAimOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterBot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterBot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterBot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterCharacterMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterCharacterMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterCharacterMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterChatWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterChatWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterChatWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.Suicide
	 * 		Flags  -> ()
	 */
	void AShooterPlayerController::Suicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Suicide");
		
		AShooterPlayerController_Suicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.SimulateInputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SimulateInputKey");
		
		AShooterPlayerController_SimulateInputKey_Params params {};
		params.Key = Key;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.SetGodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::SetGodMode(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetGodMode");
		
		AShooterPlayerController_SetGodMode_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerSuicide
	 * 		Flags  -> ()
	 */
	void AShooterPlayerController::ServerSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSuicide");
		
		AShooterPlayerController_ServerSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerSay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::ServerSay(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSay");
		
		AShooterPlayerController_ServerSay_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerCheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::ServerCheat(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCheat");
		
		AShooterPlayerController_ServerCheat_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.Say
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::Say(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Say");
		
		AShooterPlayerController_Say_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.OnLeaderboardReadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::OnLeaderboardReadComplete(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnLeaderboardReadComplete");
		
		AShooterPlayerController_OnLeaderboardReadComplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame
	 * 		Flags  -> ()
	 */
	void AShooterPlayerController::ClientStartOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame");
		
		AShooterPlayerController_ClientStartOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientSetSpectatorCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSetSpectatorCamera");
		
		AShooterPlayerController_ClientSetSpectatorCamera_Params params {};
		params.CameraLocation = CameraLocation;
		params.CameraRotation = CameraRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ExpendedTimeInSeconds                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerController::ClientSendRoundEndEvent(bool bIsWinner, int32_t ExpendedTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent");
		
		AShooterPlayerController_ClientSendRoundEndEvent_Params params {};
		params.bIsWinner = bIsWinner;
		params.ExpendedTimeInSeconds = ExpendedTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientGameStarted
	 * 		Flags  -> ()
	 */
	void AShooterPlayerController::ClientGameStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientGameStarted");
		
		AShooterPlayerController_ClientGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame
	 * 		Flags  -> ()
	 */
	void AShooterPlayerController::ClientEndOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame");
		
		AShooterPlayerController_ClientEndOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.ToggleMatchTimer
	 * 		Flags  -> ()
	 */
	void UShooterCheatManager::ToggleMatchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleMatchTimer");
		
		UShooterCheatManager_ToggleMatchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.ToggleInfiniteClip
	 * 		Flags  -> ()
	 */
	void UShooterCheatManager::ToggleInfiniteClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleInfiniteClip");
		
		UShooterCheatManager_ToggleInfiniteClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.ToggleInfiniteAmmo
	 * 		Flags  -> ()
	 */
	void UShooterCheatManager::ToggleInfiniteAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleInfiniteAmmo");
		
		UShooterCheatManager_ToggleInfiniteAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.SpawnBot
	 * 		Flags  -> ()
	 */
	void UShooterCheatManager::SpawnBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnBot");
		
		UShooterCheatManager_SpawnBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.ForceMatchStart
	 * 		Flags  -> ()
	 */
	void UShooterCheatManager::ForceMatchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForceMatchStart");
		
		UShooterCheatManager_ForceMatchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.Cheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShooterCheatManager::Cheat(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.Cheat");
		
		UShooterCheatManager_Cheat_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterCheatManager.ChangeTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTeamNumber                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShooterCheatManager::ChangeTeam(int32_t NewTeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ChangeTeam");
		
		UShooterCheatManager_ChangeTeam_Params params {};
		params.NewTeamNumber = NewTeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterDemoSpectator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterDemoSpectator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterDemoSpectator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterExplosionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterExplosionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterExplosionEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterGameMode.SetAllowBots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowBots                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMaxBots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterGameMode::SetAllowBots(bool bInAllowBots, int32_t InMaxBots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SetAllowBots");
		
		AShooterGameMode_SetAllowBots_Params params {};
		params.bInAllowBots = bInAllowBots;
		params.InMaxBots = InMaxBots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterGameMode.FinishMatch
	 * 		Flags  -> ()
	 */
	void AShooterGameMode::FinishMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.FinishMatch");
		
		AShooterGameMode_FinishMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGame_FreeForAll.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGame_FreeForAll::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGame_FreeForAll");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGame_Menu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGame_Menu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGame_Menu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGame_TeamDeathMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGame_TeamDeathMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGame_TeamDeathMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterImpactEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterImpactEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterImpactEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterMenuItemWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterMenuItemWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterMenuItemWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterMenuSoundsWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterMenuSoundsWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterMenuSoundsWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterMenuWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterMenuWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterMenuWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterOnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterOptionsWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterOptionsWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterOptionsWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterPersistentUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterPersistentUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPersistentUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPickup.OnRespawnEvent
	 * 		Flags  -> ()
	 */
	void AShooterPickup::OnRespawnEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnRespawnEvent");
		
		AShooterPickup_OnRespawnEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPickup.OnRep_IsActive
	 * 		Flags  -> ()
	 */
	void AShooterPickup::OnRep_IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnRep_IsActive");
		
		AShooterPickup_OnRep_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPickup.OnPickedUpEvent
	 * 		Flags  -> ()
	 */
	void AShooterPickup::OnPickedUpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnPickedUpEvent");
		
		AShooterPickup_OnPickedUpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPickup_Ammo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPickup_Ammo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Ammo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPickup_Health.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPickup_Health::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPickup_Health");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPlayerController_Menu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPlayerController_Menu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerController_Menu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerState.OnRep_TeamColor
	 * 		Flags  -> ()
	 */
	void AShooterPlayerState::OnRep_TeamColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_TeamColor");
		
		AShooterPlayerState_OnRep_TeamColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerState.InformAboutKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AShooterPlayerState*                         KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AShooterPlayerState*                         KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerState::InformAboutKill(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.InformAboutKill");
		
		AShooterPlayerState_InformAboutKill_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterPlayerState.BroadcastDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AShooterPlayerState*                         KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AShooterPlayerState*                         KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterPlayerState::BroadcastDeath(class AShooterPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class AShooterPlayerState* KilledPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.BroadcastDeath");
		
		AShooterPlayerState_BroadcastDeath_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterProjectile.OnRep_Exploded
	 * 		Flags  -> ()
	 */
	void AShooterProjectile::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnRep_Exploded");
		
		AShooterProjectile_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterProjectile.OnImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AShooterProjectile::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnImpact");
		
		AShooterProjectile_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterReplicationGraphNode_AlwaysRelevant_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterReplicationGraphNode_PlayerStateFrequencyLimiter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterReplicationGraphNode_PlayerStateFrequencyLimiter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterScoreboardWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterScoreboardWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterScoreboardWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterSpectatorPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterSpectatorPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterSpectatorPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterTeamStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterTeamStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTeamStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerBasicDedicatedServerTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerBasicDedicatedServerTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerBasicDedicatedServerTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerBootTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerBootTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerBootTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerDedicatedServerTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerDedicatedServerTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerDedicatedServerTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerListenServerClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerListenServerClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerListenServerClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerListenServerHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerListenServerHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerListenServerHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShooterTestControllerListenServerQuickMatchClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterTestControllerListenServerQuickMatchClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterTestControllerListenServerQuickMatchClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStopReload
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ServerStopReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopReload");
		
		AShooterWeapon_ServerStopReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStopFire
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ServerStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopFire");
		
		AShooterWeapon_ServerStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStartReload
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ServerStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartReload");
		
		AShooterWeapon_ServerStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStartFire
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ServerStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartFire");
		
		AShooterWeapon_ServerStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerHandleFiring
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ServerHandleFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerHandleFiring");
		
		AShooterWeapon_ServerHandleFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.OnRep_Reload
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::OnRep_Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_Reload");
		
		AShooterWeapon_OnRep_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.OnRep_MyPawn
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::OnRep_MyPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_MyPawn");
		
		AShooterWeapon_OnRep_MyPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.OnRep_BurstCounter
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::OnRep_BurstCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_BurstCounter");
		
		AShooterWeapon_OnRep_BurstCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.GetPawnOwner
	 * 		Flags  -> ()
	 */
	class AShooterCharacter* AShooterWeapon::GetPawnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetPawnOwner");
		
		AShooterWeapon_GetPawnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon.ClientStartReload
	 * 		Flags  -> ()
	 */
	void AShooterWeapon::ClientStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientStartReload");
		
		AShooterWeapon_ClientStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.ServerNotifyMiss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandomSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReticleSpread                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterWeapon_Instant::ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.ServerNotifyMiss");
		
		AShooterWeapon_Instant_ServerNotifyMiss_Params params {};
		params.ShootDir = ShootDir;
		params.RandomSeed = RandomSeed;
		params.ReticleSpread = ReticleSpread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.ServerNotifyHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandomSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReticleSpread                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterWeapon_Instant::ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.ServerNotifyHit");
		
		AShooterWeapon_Instant_ServerNotifyHit_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		params.RandomSeed = RandomSeed;
		params.ReticleSpread = ReticleSpread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.OnRep_HitNotify
	 * 		Flags  -> ()
	 */
	void AShooterWeapon_Instant::OnRep_HitNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Instant.OnRep_HitNotify");
		
		AShooterWeapon_Instant_OnRep_HitNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterWeapon_Instant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterWeapon_Instant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Instant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AShooterWeapon_Projectile::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile");
		
		AShooterWeapon_Projectile_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterWeapon_Projectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterWeapon_Projectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.ShooterWeapon_Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundNodeLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundNodeLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ShooterGame.SoundNodeLocalPlayer");
		return ptr;
	}

}


