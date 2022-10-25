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
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateCameraPOV
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
	bool ABP_ANPVS_15_NVG_C::UpdateCameraPOV(class AGBPlayerController* GBPlayerController, const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float CameraFOV, float DeltaTime, const class FName& CameraStyle, struct FVector* OutCameraLocation, struct FRotator* OutCameraRotation, float* OutCameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateCameraPOV");
		
		ABP_ANPVS_15_NVG_C_UpdateCameraPOV_Params params {};
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
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.GetHiddenComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_ANPVS_15_NVG_C::GetHiddenComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.GetHiddenComponents");
		
		ABP_ANPVS_15_NVG_C_GetHiddenComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_ANPVS_15_NVG_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.DecodeKit");
		
		ABP_ANPVS_15_NVG_C_DecodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		params.DecodedOwner = DecodedOwner;
		params.DecodedParentItem = DecodedParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.AllowUsageWhileAttached
	 * 		Flags  -> ()
	 */
	bool ABP_ANPVS_15_NVG_C::AllowUsageWhileAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.AllowUsageWhileAttached");
		
		ABP_ANPVS_15_NVG_C_AllowUsageWhileAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__FinishedFunc");
		
		ABP_ANPVS_15_NVG_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.Timeline_0__UpdateFunc");
		
		ABP_ANPVS_15_NVG_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_4F18AE27471B5F9408A726A253D44324
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::OnLoaded_4F18AE27471B5F9408A726A253D44324(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_4F18AE27471B5F9408A726A253D44324");
		
		ABP_ANPVS_15_NVG_C_OnLoaded_4F18AE27471B5F9408A726A253D44324_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_C2B63AC249909B6D095A6182A08E8C03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::OnLoaded_C2B63AC249909B6D095A6182A08E8C03(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnLoaded_C2B63AC249909B6D095A6182A08E8C03");
		
		ABP_ANPVS_15_NVG_C_OnLoaded_C2B63AC249909B6D095A6182A08E8C03_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1");
		
		ABP_ANPVS_15_NVG_C_InpActEvt_ToggleNightVision_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ANPVS_15_NVG_C::PlayAnimation(bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.PlayAnimation");
		
		ABP_ANPVS_15_NVG_C_PlayAnimation_Params params {};
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     NewParentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::OnAddedToItem(class AGBItem* NewParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToItem");
		
		ABP_ANPVS_15_NVG_C_OnAddedToItem_Params params {};
		params.NewParentItem = NewParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.SetNVGMountMesh
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::SetNVGMountMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.SetNVGMountMesh");
		
		ABP_ANPVS_15_NVG_C_SetNVGMountMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     OldParentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             OldParentComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OldParentSocket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::OnRemovedFromItem(class AGBItem* OldParentItem, class USceneComponent* OldParentComp, const class FName& OldParentSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromItem");
		
		ABP_ANPVS_15_NVG_C_OnRemovedFromItem_Params params {};
		params.OldParentItem = OldParentItem;
		params.OldParentComp = OldParentComp;
		params.OldParentSocket = OldParentSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::OnAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnAddedToInventoryEvent");
		
		ABP_ANPVS_15_NVG_C_OnAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromInventoryEvent
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::OnRemovedFromInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnRemovedFromInventoryEvent");
		
		ABP_ANPVS_15_NVG_C_OnRemovedFromInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.BindOnGameplayTagsUpdated
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::BindOnGameplayTagsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.BindOnGameplayTagsUpdated");
		
		ABP_ANPVS_15_NVG_C_BindOnGameplayTagsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnGameplayTagsUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::OnGameplayTagsUpdated_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.OnGameplayTagsUpdated_Event_1");
		
		ABP_ANPVS_15_NVG_C_OnGameplayTagsUpdated_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UnbindOnGameplayTagsUpdated
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::UnbindOnGameplayTagsUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UnbindOnGameplayTagsUpdated");
		
		ABP_ANPVS_15_NVG_C_UnbindOnGameplayTagsUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateBracketRotation
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::UpdateBracketRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.UpdateBracketRotation");
		
		ABP_ANPVS_15_NVG_C_UpdateBracketRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.EnsureOverlayExists
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::EnsureOverlayExists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.EnsureOverlayExists");
		
		ABP_ANPVS_15_NVG_C_EnsureOverlayExists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.RemoveOverlay
	 * 		Flags  -> ()
	 */
	void ABP_ANPVS_15_NVG_C::RemoveOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.RemoveOverlay");
		
		ABP_ANPVS_15_NVG_C_RemoveOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.ExecuteUbergraph_BP_ANPVS_15_NVG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ANPVS_15_NVG_C::ExecuteUbergraph_BP_ANPVS_15_NVG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C.ExecuteUbergraph_BP_ANPVS_15_NVG");
		
		ABP_ANPVS_15_NVG_C_ExecuteUbergraph_BP_ANPVS_15_NVG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ANPVS_15_NVG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ANPVS_15_NVG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ANPVS_15_NVG.BP_ANPVS_15_NVG_C");
		return ptr;
	}

}


