/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.BindOnEndViewTarget
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::BindOnEndViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.BindOnEndViewTarget");
		
		ABP_Moskito_RF_C_BindOnEndViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnRep_bNightVisionMode
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::OnRep_bNightVisionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnRep_bNightVisionMode");
		
		ABP_Moskito_RF_C_OnRep_bNightVisionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.RangeFindRecursive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RemainingTraceDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::RangeFindRecursive(const struct FVector& TraceStart, float RemainingTraceDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.RangeFindRecursive");
		
		ABP_Moskito_RF_C_RangeFindRecursive_Params params {};
		params.TraceStart = TraceStart;
		params.RemainingTraceDistance = RemainingTraceDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateCameraPOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBPlayerController*                         GBPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CameraLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    CameraRotation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CameraStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutCameraLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OutCameraRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutCameraFOV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Moskito_RF_C::UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateCameraPOV");
		
		ABP_Moskito_RF_C_UpdateCameraPOV_Params params {};
		params.GBPlayerController = GBPlayerController;
		params.CameraLocation = CameraLocation;
		params.CameraRotation = CameraRotation;
		params.CameraFOV = CameraFOV;
		params.DeltaTime = DeltaTime;
		params.CameraStyle = CameraStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCameraLocation != nullptr)
			*OutCameraLocation = params.OutCameraLocation;
		if (OutCameraRotation != nullptr)
			*OutCameraRotation = params.OutCameraRotation;
		if (OutCameraFOV != nullptr)
			*OutCameraFOV = params.OutCameraFOV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.GetHiddenComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_Moskito_RF_C::GetHiddenComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.GetHiddenComponents");
		
		ABP_Moskito_RF_C_GetHiddenComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.GetWeaponsPositionTransitionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGBWeaponPosition                                  FromPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGBWeaponPosition                                  ToPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Moskito_RF_C::GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.GetWeaponsPositionTransitionTime");
		
		ABP_Moskito_RF_C_GetWeaponsPositionTransitionTime_Params params {};
		params.FromPosition = FromPosition;
		params.ToPosition = ToPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.GatherAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     OutAssets                                                  (Parm, OutParm)
	 */
	void ABP_Moskito_RF_C::GatherAssets(TArray<struct FSoftObjectPath>* OutAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.GatherAssets");
		
		ABP_Moskito_RF_C_GatherAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssets != nullptr)
			*OutAssets = params.OutAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1");
		
		ABP_Moskito_RF_C_InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.RemoveOverlay
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::RemoveOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.RemoveOverlay");
		
		ABP_Moskito_RF_C_RemoveOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.EnsureOverlayExists
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::EnsureOverlayExists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.EnsureOverlayExists");
		
		ABP_Moskito_RF_C_EnsureOverlayExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::UseOffHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandPressed");
		
		ABP_Moskito_RF_C_UseOffHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnLoadAssetsComplete
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::OnLoadAssetsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnLoadAssetsComplete");
		
		ABP_Moskito_RF_C_OnLoadAssetsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandReleased
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::UseOffHandReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UseOffHandReleased");
		
		ABP_Moskito_RF_C_UseOffHandReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UseMainHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::UseMainHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UseMainHandPressed");
		
		ABP_Moskito_RF_C_UseMainHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingUnequipped");
		
		ABP_Moskito_RF_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnBeingEquipped");
		
		ABP_Moskito_RF_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnDestroyed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnDestroyed_Event_1");
		
		ABP_Moskito_RF_C_OnDestroyed_Event_1_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.OnStartUsing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::OnStartUsing(int32_t UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.OnStartUsing");
		
		ABP_Moskito_RF_C_OnStartUsing_Params params {};
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.ServerSetRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::ServerSetRange(int32_t Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.ServerSetRange");
		
		ABP_Moskito_RF_C_ServerSetRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewRange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::UpdateRange(int32_t NewRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateRange");
		
		ABP_Moskito_RF_C_UpdateRange_Params params {};
		params.NewRange = NewRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.RangeError
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::RangeError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.RangeError");
		
		ABP_Moskito_RF_C_RangeError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateOverlayTexture
	 * 		Flags  -> ()
	 */
	void ABP_Moskito_RF_C::UpdateOverlayTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.UpdateOverlayTexture");
		
		ABP_Moskito_RF_C_UpdateOverlayTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Moskito_RF.BP_Moskito_RF_C.ExecuteUbergraph_BP_Moskito_RF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Moskito_RF_C::ExecuteUbergraph_BP_Moskito_RF(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Moskito_RF.BP_Moskito_RF_C.ExecuteUbergraph_BP_Moskito_RF");
		
		ABP_Moskito_RF_C_ExecuteUbergraph_BP_Moskito_RF_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Moskito_RF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Moskito_RF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Moskito_RF.BP_Moskito_RF_C");
		return ptr;
	}

}


