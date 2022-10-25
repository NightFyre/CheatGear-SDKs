/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x007CFBA0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ToggleWorldSpaceManipulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URTGizmoEditorComponent::ToggleWorldSpaceManipulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ToggleWorldSpaceManipulation");
		
		URTGizmoEditorComponent_ToggleWorldSpaceManipulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF9F0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetWorldSpaceManipulation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewWorldSpace                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetWorldSpaceManipulation(bool bNewWorldSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetWorldSpaceManipulation");
		
		URTGizmoEditorComponent_SetWorldSpaceManipulation_Params params {};
		params.bNewWorldSpace = bNewWorldSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFA80
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetupGizmoDelegates
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseRTGizmo*                                Gizmo                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetupGizmoDelegates(class ABaseRTGizmo* Gizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetupGizmoDelegates");
		
		URTGizmoEditorComponent_SetupGizmoDelegates_Params params {};
		params.Gizmo = Gizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF8E0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetTranslationGridSnapValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewGridSnapValue                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetTranslationGridSnapValue(float NewGridSnapValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetTranslationGridSnapValue");
		
		URTGizmoEditorComponent_SetTranslationGridSnapValue_Params params {};
		params.NewGridSnapValue = NewGridSnapValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF860
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetScaleGridSnapValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewGridSnapValue                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetScaleGridSnapValue(float NewGridSnapValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetScaleGridSnapValue");
		
		URTGizmoEditorComponent_SetScaleGridSnapValue_Params params {};
		params.NewGridSnapValue = NewGridSnapValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF7E0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetRotationGridSnapValue
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewGridSnapValue                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetRotationGridSnapValue(float NewGridSnapValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetRotationGridSnapValue");
		
		URTGizmoEditorComponent_SetRotationGridSnapValue_Params params {};
		params.NewGridSnapValue = NewGridSnapValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF7C0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetNextInactiveGizmoAsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void URTGizmoEditorComponent::SetNextInactiveGizmoAsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetNextInactiveGizmoAsActive");
		
		URTGizmoEditorComponent_SetNextInactiveGizmoAsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF730
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetGridSnapping
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewGridSnapping                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetGridSnapping(bool bNewGridSnapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetGridSnapping");
		
		URTGizmoEditorComponent_SetGridSnapping_Params params {};
		params.bNewGridSnapping = bNewGridSnapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF610
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SetActiveGizmo
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseRTGizmo*                                NewActiveGizmo                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SetActiveGizmo(class ABaseRTGizmo* NewActiveGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SetActiveGizmo");
		
		URTGizmoEditorComponent_SetActiveGizmo_Params params {};
		params.NewActiveGizmo = NewActiveGizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF4D0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerTranslate
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     Translation                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::ServerTranslate(const struct FVector& Translation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerTranslate");
		
		URTGizmoEditorComponent_ServerTranslate_Params params {};
		params.Translation = Translation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF480
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerToggleWorldSpaceManipulation
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void URTGizmoEditorComponent::ServerToggleWorldSpaceManipulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerToggleWorldSpaceManipulation");
		
		URTGizmoEditorComponent_ServerToggleWorldSpaceManipulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF430
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerSetNextInactiveGizmoAsActive
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void URTGizmoEditorComponent::ServerSetNextInactiveGizmoAsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerSetNextInactiveGizmoAsActive");
		
		URTGizmoEditorComponent_ServerSetNextInactiveGizmoAsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF330
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerSelectActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewSelection                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::ServerSelectActor(class AActor* Actor, bool bNewSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerSelectActor");
		
		URTGizmoEditorComponent_ServerSelectActor_Params params {};
		params.Actor = Actor;
		params.bNewSelection = bNewSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF280
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerScale
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     NewScale                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::ServerScale(const struct FVector& NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerScale");
		
		URTGizmoEditorComponent_ServerScale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF1D0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerRotate
	 * 		Flags  -> (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::ServerRotate(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerRotate");
		
		URTGizmoEditorComponent_ServerRotate_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF180
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectAllActors
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void URTGizmoEditorComponent::ServerDeselectAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectAllActors");
		
		URTGizmoEditorComponent_ServerDeselectAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF0C0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::ServerDeselectActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.ServerDeselectActor");
		
		URTGizmoEditorComponent_ServerDeselectActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEFF0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.SelectActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewSelection                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::SelectActor(class AActor* Actor, bool bNewSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.SelectActor");
		
		URTGizmoEditorComponent_SelectActor_Params params {};
		params.Actor = Actor;
		params.bNewSelection = bNewSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEF00
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.RemoveActorFromSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeactivateGizmo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::RemoveActorFromSelection(class AActor* Actor, bool bDeactivateGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.RemoveActorFromSelection");
		
		URTGizmoEditorComponent_RemoveActorFromSelection_Params params {};
		params.Actor = Actor;
		params.bDeactivateGizmo = bDeactivateGizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEE20
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnTranslate
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnTranslate(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnTranslate");
		
		URTGizmoEditorComponent_OnTranslate_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CED40
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnScale
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnScale(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnScale");
		
		URTGizmoEditorComponent_OnScale_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC60
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnRotate
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnRotate(const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnRotate");
		
		URTGizmoEditorComponent_OnRotate_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC00
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActorSelectionList
	 * 		Flags  -> (Native, Protected)
	 */
	void URTGizmoEditorComponent::OnRep_ActorSelectionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActorSelectionList");
		
		URTGizmoEditorComponent_OnRep_ActorSelectionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEBE0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActiveGizmo
	 * 		Flags  -> (Native, Protected)
	 */
	void URTGizmoEditorComponent::OnRep_ActiveGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnRep_ActiveGizmo");
		
		URTGizmoEditorComponent_OnRep_ActiveGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEAC0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnActorSelectionDestroyed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnActorSelectionDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnActorSelectionDestroyed");
		
		URTGizmoEditorComponent_OnActorSelectionDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEA30
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnActorRemoved
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      RemovedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnActorRemoved(class AActor* RemovedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnActorRemoved");
		
		URTGizmoEditorComponent_OnActorRemoved_Params params {};
		params.RemovedActor = RemovedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE9A0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.OnActorAdded
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      AddedActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::OnActorAdded(class AActor* AddedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.OnActorAdded");
		
		URTGizmoEditorComponent_OnActorAdded_Params params {};
		params.AddedActor = AddedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE8D0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.IsManipulatingInWorldSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool URTGizmoEditorComponent::IsManipulatingInWorldSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.IsManipulatingInWorldSpace");
		
		URTGizmoEditorComponent_IsManipulatingInWorldSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE810
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.IsActorSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URTGizmoEditorComponent::IsActorSelected(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.IsActorSelected");
		
		URTGizmoEditorComponent_IsActorSelected_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE620
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.GetOwningRole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ENetRole URTGizmoEditorComponent::GetOwningRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.GetOwningRole");
		
		URTGizmoEditorComponent_GetOwningRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE560
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.GetLastActorSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* URTGizmoEditorComponent::GetLastActorSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.GetLastActorSelection");
		
		URTGizmoEditorComponent_GetLastActorSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE310
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.GetActiveGizmo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ABaseRTGizmo* URTGizmoEditorComponent::GetActiveGizmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.GetActiveGizmo");
		
		URTGizmoEditorComponent_GetActiveGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE2F0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.DeselectAllActors
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void URTGizmoEditorComponent::DeselectAllActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.DeselectAllActors");
		
		URTGizmoEditorComponent_DeselectAllActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE260
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.DeselectActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::DeselectActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.DeselectActor");
		
		URTGizmoEditorComponent_DeselectActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE1D0
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.AddGizmoFromClass
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewGizmoClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::AddGizmoFromClass(class UClass* NewGizmoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.AddGizmoFromClass");
		
		URTGizmoEditorComponent_AddGizmoFromClass_Params params {};
		params.NewGizmoClass = NewGizmoClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE100
	 * 		Name   -> Function RuntimeGizmo.RTGizmoEditorComponent.AddActorToSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAttachActiveGizmo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URTGizmoEditorComponent::AddActorToSelection(class AActor* Actor, bool bAttachActiveGizmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.RTGizmoEditorComponent.AddActorToSelection");
		
		URTGizmoEditorComponent_AddActorToSelection_Params params {};
		params.Actor = Actor;
		params.bAttachActiveGizmo = bAttachActiveGizmo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URTGizmoEditorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URTGizmoEditorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeGizmo.RTGizmoEditorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CFB10
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.ToggleInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::ToggleInput(bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.ToggleInput");
		
		ABaseRTGizmo_ToggleInput_Params params {};
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF960
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.SetWorldSpace
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bWorldCoordinates                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::SetWorldSpace(bool bWorldCoordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.SetWorldSpace");
		
		ABaseRTGizmo_SetWorldSpace_Params params {};
		params.bWorldCoordinates = bWorldCoordinates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF6A0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.SetConsumeInputOnGizmoDragBinding
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bConsumeInput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::SetConsumeInputOnGizmoDragBinding(bool bConsumeInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.SetConsumeInputOnGizmoDragBinding");
		
		ABaseRTGizmo_SetConsumeInputOnGizmoDragBinding_Params params {};
		params.bConsumeInput = bConsumeInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CF580
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.SetActive
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::SetActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.SetActive");
		
		ABaseRTGizmo_SetActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEFD0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.ResetAxisHighlighting
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABaseRTGizmo::ResetAxisHighlighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.ResetAxisHighlighting");
		
		ABaseRTGizmo_ResetAxisHighlighting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC40
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.OnRep_bWorldSpace
	 * 		Flags  -> (Native, Protected)
	 */
	void ABaseRTGizmo::OnRep_bWorldSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.OnRep_bWorldSpace");
		
		ABaseRTGizmo_OnRep_bWorldSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEC20
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.OnRep_bActive
	 * 		Flags  -> (Native, Protected)
	 */
	void ABaseRTGizmo::OnRep_bActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.OnRep_bActive");
		
		ABaseRTGizmo_OnRep_bActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEBC0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.OnGizmoStopDrag
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABaseRTGizmo::OnGizmoStopDrag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.OnGizmoStopDrag");
		
		ABaseRTGizmo_OnGizmoStopDrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00643640
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.OnGizmoStartDrag
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ABaseRTGizmo::OnGizmoStartDrag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.OnGizmoStartDrag");
		
		ABaseRTGizmo_OnGizmoStartDrag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CEB40
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.OnGizmoDrag
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::OnGizmoDrag(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.OnGizmoDrag");
		
		ABaseRTGizmo_OnGizmoDrag_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE900
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.IsSelectingAllAxes
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABaseRTGizmo::IsSelectingAllAxes(const struct FVector& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.IsSelectingAllAxes");
		
		ABaseRTGizmo_IsSelectingAllAxes_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE8A0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.IsInWorldSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ABaseRTGizmo::IsInWorldSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.IsInWorldSpace");
		
		ABaseRTGizmo_IsInWorldSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE7E0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.IsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ABaseRTGizmo::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.IsActive");
		
		ABaseRTGizmo_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE710
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.HighlightAxis
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGizmoAxis                                         Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHighlight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseRTGizmo::HighlightAxis(EGizmoAxis Axis, bool bHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.HighlightAxis");
		
		ABaseRTGizmo_HighlightAxis_Params params {};
		params.Axis = Axis;
		params.bHighlight = bHighlight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE6F0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetSelectedGizmoAxis
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGizmoAxis ABaseRTGizmo::GetSelectedGizmoAxis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetSelectedGizmoAxis");
		
		ABaseRTGizmo_GetSelectedGizmoAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE650
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetPlaneNormalCorrespondingToCameraByAxis
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EGizmoAxis                                         Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ABaseRTGizmo::GetPlaneNormalCorrespondingToCameraByAxis(EGizmoAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetPlaneNormalCorrespondingToCameraByAxis");
		
		ABaseRTGizmo_GetPlaneNormalCorrespondingToCameraByAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE590
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetMaterialForAxis
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EGizmoAxis                                         Axis                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInterface* ABaseRTGizmo::GetMaterialForAxis(EGizmoAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetMaterialForAxis");
		
		ABaseRTGizmo_GetMaterialForAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE480
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetHitResultUnderCursorForGizmo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool ABaseRTGizmo::GetHitResultUnderCursorForGizmo(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetHitResultUnderCursorForGizmo");
		
		ABaseRTGizmo_GetHitResultUnderCursorForGizmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE450
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetGizmoAxisUnderCursor
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGizmoAxis ABaseRTGizmo::GetGizmoAxisUnderCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetGizmoAxisUnderCursor");
		
		ABaseRTGizmo_GetGizmoAxisUnderCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE3C0
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetCorrespondingPlaneByAxis
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EGizmoAxis                                         Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane ABaseRTGizmo::GetCorrespondingPlaneByAxis(EGizmoAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetCorrespondingPlaneByAxis");
		
		ABaseRTGizmo_GetCorrespondingPlaneByAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007CE330
	 * 		Name   -> Function RuntimeGizmo.BaseRTGizmo.GetAxisForMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGizmoAxis ABaseRTGizmo::GetAxisForMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeGizmo.BaseRTGizmo.GetAxisForMaterial");
		
		ABaseRTGizmo_GetAxisForMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseRTGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseRTGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeGizmo.BaseRTGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARTTranslationGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARTTranslationGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeGizmo.RTTranslationGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARTRotationGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARTRotationGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeGizmo.RTRotationGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARTScaleGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARTScaleGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeGizmo.RTScaleGizmo");
		return ptr;
	}

}


