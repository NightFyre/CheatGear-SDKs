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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBEditableActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBEditableActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerEdit.TBEditableActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808E80
	 * 		Name   -> Function TinkerEdit.TBEditStatics.PlayerHasValidEditComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBEditStatics::STATIC_PlayerHasValidEditComponent(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBEditStatics.PlayerHasValidEditComponent");
		
		UTBEditStatics_PlayerHasValidEditComponent_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808D10
	 * 		Name   -> Function TinkerEdit.TBEditStatics.HasValidEditableComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBEditStatics::STATIC_HasValidEditableComponent(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBEditStatics.HasValidEditableComponent");
		
		UTBEditStatics_HasValidEditableComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808C20
	 * 		Name   -> Function TinkerEdit.TBEditStatics.FindValidPlayerEditComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTBPlayerEditComponent*                      PlayerEditComp                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBEditStatics::STATIC_FindValidPlayerEditComponent(class APlayerController* Player, class UTBPlayerEditComponent** PlayerEditComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBEditStatics.FindValidPlayerEditComponent");
		
		UTBEditStatics_FindValidPlayerEditComponent_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerEditComp != nullptr)
			*PlayerEditComp = params.PlayerEditComp;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808B50
	 * 		Name   -> Function TinkerEdit.TBEditStatics.FindValidEditableActorComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTBEditableActorComponent*                   EditableActorComp                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTBEditStatics::STATIC_FindValidEditableActorComponent(class AActor* Actor, class UTBEditableActorComponent** EditableActorComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBEditStatics.FindValidEditableActorComponent");
		
		UTBEditStatics_FindValidEditableActorComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EditableActorComp != nullptr)
			*EditableActorComp = params.EditableActorComp;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBEditStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBEditStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerEdit.TBEditStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBEditWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBEditWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerEdit.TBEditWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808FB0
	 * 		Name   -> Function TinkerEdit.TBPlayerEditComponent.SetIsEditingEnabled
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEditingEnabled                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTBPlayerEditComponent::SetIsEditingEnabled(bool bIsEditingEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBPlayerEditComponent.SetIsEditingEnabled");
		
		UTBPlayerEditComponent_SetIsEditingEnabled_Params params {};
		params.bIsEditingEnabled = bIsEditingEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808E40
	 * 		Name   -> Function TinkerEdit.TBPlayerEditComponent.OwnerHasAuthority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTBPlayerEditComponent::OwnerHasAuthority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBPlayerEditComponent.OwnerHasAuthority");
		
		UTBPlayerEditComponent_OwnerHasAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00808CF0
	 * 		Name   -> Function TinkerEdit.TBPlayerEditComponent.GetOwningPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class APlayerController* UTBPlayerEditComponent::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TinkerEdit.TBPlayerEditComponent.GetOwningPlayer");
		
		UTBPlayerEditComponent_GetOwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTBPlayerEditComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTBPlayerEditComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TinkerEdit.TBPlayerEditComponent");
		return ptr;
	}

}


