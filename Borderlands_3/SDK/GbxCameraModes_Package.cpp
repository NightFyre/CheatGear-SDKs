/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02FD24E0
	 * 		Name   -> Function GbxCameraModes.CameraBehavior.Update
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraState*                                State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraBehavior::Update(float DeltaTime, class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.Update");
		
		UCameraBehavior_Update_Params params {};
		params.DeltaTime = DeltaTime;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD2450
	 * 		Name   -> Function GbxCameraModes.CameraBehavior.Start
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraState*                                State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraBehavior::Start(class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.Start");
		
		UCameraBehavior_Start_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1AD0
	 * 		Name   -> Function GbxCameraModes.CameraBehavior.End
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraState*                                State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraBehavior::End(class UCameraState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraBehavior.End");
		
		UCameraBehavior_End_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_InitialRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_InitialRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_InitialRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_BlendToFOV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_BlendToFOV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_BlendToFOV");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_Look.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_Look::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_Look");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_FOV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_FOV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_FOV");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_OffsetViewModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_OffsetViewModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetViewModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD2690
	 * 		Name   -> Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FActiveGbxFeedbackEffect                    TrackedFeedback                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APlayerCameraModesManager::UpdateCameraShakeFromGbxFeedback(const struct FActiveGbxFeedbackEffect& TrackedFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback");
		
		APlayerCameraModesManager_UpdateCameraShakeFromGbxFeedback_Params params {};
		params.TrackedFeedback = TrackedFeedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD25B0
	 * 		Name   -> Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FActiveTrackedFeedback                      TrackedFeedback                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void APlayerCameraModesManager::UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback");
		
		APlayerCameraModesManager_UpdateCameraShakeFromFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrackedFeedback != nullptr)
			*TrackedFeedback = params.TrackedFeedback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerCameraModesManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerCameraModesManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.PlayerCameraModesManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraInputs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraInputs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraInputs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_AnchorToEyeLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_AnchorToEyeLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_AnchorToSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_AnchorToSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AnchorToSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_AutoFollowRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_AutoFollowRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_AutoFollowRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_CollisionOffsetTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_CollisionOffsetTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_DefaultFOV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_DefaultFOV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_DefaultFOV");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_FromAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_FromAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_FromAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_LimitLook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_LimitLook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_LimitLook");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_LimitPitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_LimitPitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_LimitPitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_OffsetAbsolute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_OffsetAbsolute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetAbsolute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_OffsetCameraRelative.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_OffsetCameraRelative::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetCameraRelative");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_OffsetCameraRelativeFromInputs.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_OffsetCameraRelativeFromInputs::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_RestoreControllerRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_RestoreControllerRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_RestoreControllerRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraBehavior_RestoreStartRotation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraBehavior_RestoreStartRotation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraBehavior_RestoreStartRotation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraModeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraModeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModeSetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModeSetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraModeSetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD21F0
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ModeName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTimeOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceResetMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_SetCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode");
		
		UCameraModesFunctionLibrary_SetCameraMode_Params params {};
		params.Controller = Controller;
		params.ModeName = ModeName;
		params.BlendTimeOverride = BlendTimeOverride;
		params.bTeleport = bTeleport;
		params.bForceResetMode = bForceResetMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1F40
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_ResetCameraRotation(class APlayerController* Controller, const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation");
		
		UCameraModesFunctionLibrary_ResetCameraRotation_Params params {};
		params.Controller = Controller;
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1E90
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraModeSetData*                          ModeSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet");
		
		UCameraModesFunctionLibrary_RemoveCameraModeSet_Params params {};
		params.Controller = Controller;
		params.ModeSet = ModeSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1D50
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ModeName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTimeOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_PushCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode");
		
		UCameraModesFunctionLibrary_PushCameraMode_Params params {};
		params.Controller = Controller;
		params.ModeName = ModeName;
		params.BlendTimeOverride = BlendTimeOverride;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1C10
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ModeName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTimeOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_PopCameraMode(class APlayerController* Controller, const class FName& ModeName, float BlendTimeOverride, bool bTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode");
		
		UCameraModesFunctionLibrary_PopCameraMode_Params params {};
		params.Controller = Controller;
		params.ModeName = ModeName;
		params.BlendTimeOverride = BlendTimeOverride;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1800
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DeltaRotation                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_ApplyCameraRotation(class APlayerController* Controller, const struct FRotator& DeltaRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation");
		
		UCameraModesFunctionLibrary_ApplyCameraRotation_Params params {};
		params.Controller = Controller;
		params.DeltaRotation = DeltaRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1620
	 * 		Name   -> Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraModeSetData*                          ModeSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraModesFunctionLibrary::STATIC_AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet");
		
		UCameraModesFunctionLibrary_AddCameraModeSet_Params params {};
		params.Controller = Controller;
		params.ModeSet = ModeSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModesFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModesFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraModesFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraModesManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraModesManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraModesManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD2380
	 * 		Name   -> Function GbxCameraModes.CameraState.SetViewModelFOV
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDefault                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraState::SetViewModelFOV(float NewFOV, bool bDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetViewModelFOV");
		
		UCameraState_SetViewModelFOV_Params params {};
		params.NewFOV = NewFOV;
		params.bDefault = bDefault;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD2160
	 * 		Name   -> Function GbxCameraModes.CameraState.SetBaseRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCameraState::SetBaseRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseRotation");
		
		UCameraState_SetBaseRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD20D0
	 * 		Name   -> Function GbxCameraModes.CameraState.SetBaseLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraState::SetBaseLocation(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseLocation");
		
		UCameraState_SetBaseLocation_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD2000
	 * 		Name   -> Function GbxCameraModes.CameraState.SetBaseFOV
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDefault                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraState::SetBaseFOV(float NewFOV, bool bDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.SetBaseFOV");
		
		UCameraState_SetBaseFOV_Params params {};
		params.NewFOV = NewFOV;
		params.bDefault = bDefault;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1BD0
	 * 		Name   -> Function GbxCameraModes.CameraState.GetBaseRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator UCameraState::GetBaseRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseRotation");
		
		UCameraState_GetBaseRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1B90
	 * 		Name   -> Function GbxCameraModes.CameraState.GetBaseLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UCameraState::GetBaseLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseLocation");
		
		UCameraState_GetBaseLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD1B60
	 * 		Name   -> Function GbxCameraModes.CameraState.GetBaseFOV
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCameraState::GetBaseFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.GetBaseFOV");
		
		UCameraState_GetBaseFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD18C0
	 * 		Name   -> Function GbxCameraModes.CameraState.CameraTrace
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      IgnoreMask                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UCameraState::CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, ECollisionChannel TraceChannel, unsigned char IgnoreMask, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.CameraTrace");
		
		UCameraState_CameraTrace_Params params {};
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.TraceChannel = TraceChannel;
		params.IgnoreMask = IgnoreMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02FD16D0
	 * 		Name   -> Function GbxCameraModes.CameraState.AddPostProcessBlend
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPostProcessSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BlendWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraState::AddPostProcessBlend(const struct FPostProcessSettings& Settings, float BlendWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxCameraModes.CameraState.AddPostProcessBlend");
		
		UCameraState_AddPostProcessBlend_Params params {};
		params.Settings = Settings;
		params.BlendWeight = BlendWeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraViewTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraViewTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxCameraModes.CameraViewTargetInterface");
		return ptr;
	}

}


