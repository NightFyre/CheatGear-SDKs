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
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.UpdateCameraPOV
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
	bool ABP_Tablet_C::UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.UpdateCameraPOV");
		
		ABP_Tablet_C_UpdateCameraPOV_Params params {};
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
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.GetWeaponsPositionTransitionTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGBWeaponPosition                                  FromPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGBWeaponPosition                                  ToPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Tablet_C::GetWeaponsPositionTransitionTime(EGBWeaponPosition FromPosition, EGBWeaponPosition ToPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.GetWeaponsPositionTransitionTime");
		
		ABP_Tablet_C_GetWeaponsPositionTransitionTime_Params params {};
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
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.GetEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand                                              TargetHand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGBSwitchItemInfo                           OutEquipInfo                                               (Parm, OutParm, ContainsInstancedReference)
	 */
	bool ABP_Tablet_C::GetEquipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.GetEquipInfo");
		
		ABP_Tablet_C_GetEquipInfo_Params params {};
		params.TargetHand = TargetHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipInfo != nullptr)
			*OutEquipInfo = params.OutEquipInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.GatherAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSoftObjectPath>                     OutAssets                                                  (Parm, OutParm)
	 */
	void ABP_Tablet_C::GatherAssets(TArray<struct FSoftObjectPath>* OutAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.GatherAssets");
		
		ABP_Tablet_C_GatherAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssets != nullptr)
			*OutAssets = params.OutAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.InpActEvt_MissionIntel_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Tablet_C::InpActEvt_MissionIntel_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.InpActEvt_MissionIntel_K2Node_InputActionEvent_1");
		
		ABP_Tablet_C_InpActEvt_MissionIntel_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.OnLoadAssetsComplete
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::OnLoadAssetsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.OnLoadAssetsComplete");
		
		ABP_Tablet_C_OnLoadAssetsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.OnBeingEquipped");
		
		ABP_Tablet_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.EnableWidget
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::EnableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.EnableWidget");
		
		ABP_Tablet_C_EnableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.DisableWidget
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::DisableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.DisableWidget");
		
		ABP_Tablet_C_DisableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.OnBeingUnequipped");
		
		ABP_Tablet_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.UseOffHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::UseOffHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.UseOffHandPressed");
		
		ABP_Tablet_C_UseOffHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.UseOffHandReleased
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::UseOffHandReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.UseOffHandReleased");
		
		ABP_Tablet_C_UseOffHandReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.OnAddedToInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::OnAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.OnAddedToInventoryEvent");
		
		ABP_Tablet_C_OnAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.OnRemovedFromInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_Tablet_C::OnRemovedFromInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.OnRemovedFromInventoryEvent");
		
		ABP_Tablet_C_OnRemovedFromInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tablet.BP_Tablet_C.ExecuteUbergraph_BP_Tablet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tablet_C::ExecuteUbergraph_BP_Tablet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Tablet.BP_Tablet_C.ExecuteUbergraph_BP_Tablet");
		
		ABP_Tablet_C_ExecuteUbergraph_BP_Tablet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Tablet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tablet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tablet.BP_Tablet_C");
		return ptr;
	}

}


