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
	 * 		RVA    -> 0x022037B0
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnUnregistered
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnUnregistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnUnregistered");
		
		UGbxAbility_OnUnregistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02919D90
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnResumed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnResumed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnResumed");
		
		UGbxAbility_OnResumed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED410
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnRep_Manager
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxAbility::OnRep_Manager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRep_Manager");
		
		UGbxAbility_OnRep_Manager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED3F0
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnRep_AbilityState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxAbility::OnRep_AbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRep_AbilityState");
		
		UGbxAbility_OnRep_AbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0291A0D0
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnRegistered
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnRegistered");
		
		UGbxAbility_OnRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02203700
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnPaused
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnPaused");
		
		UGbxAbility_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02091B30
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnForcedRefresh
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnForcedRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnForcedRefresh");
		
		UGbxAbility_OnForcedRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02162B60
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnDeactivated
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnDeactivated");
		
		UGbxAbility_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02945E40
	 * 		Name   -> Function GbxAbilities.GbxAbility.OnActivated
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGbxAbility::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.OnActivated");
		
		UGbxAbility_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED3D0
	 * 		Name   -> Function GbxAbilities.GbxAbility.IsReplicated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxAbility::IsReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.IsReplicated");
		
		UGbxAbility_IsReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED310
	 * 		Name   -> Function GbxAbilities.GbxAbility.GetAbilityOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UGbxAbility::GetAbilityOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.GetAbilityOwner");
		
		UGbxAbility_GetAbilityOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021E8E70
	 * 		Name   -> Function GbxAbilities.GbxAbility.Client_Deactivate
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UGbxAbility::Client_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.Client_Deactivate");
		
		UGbxAbility_Client_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED250
	 * 		Name   -> Function GbxAbilities.GbxAbility.CalculateAbilityState
	 * 		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	EGbxAbilityState UGbxAbility::CalculateAbilityState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbility.CalculateAbilityState");
		
		UGbxAbility_CalculateAbilityState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityEffectTargetResolutionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityEffectTargetResolutionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED780
	 * 		Name   -> Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      AbilityClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAbilityManagerComponent::RemoveAbility(class UClass* AbilityClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility");
		
		UGbxAbilityManagerComponent_RemoveAbility_Params params {};
		params.AbilityClass = AbilityClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED340
	 * 		Name   -> Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      AbilityClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxAbilityManagerComponent::HasAbility(class UClass* AbilityClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.HasAbility");
		
		UGbxAbilityManagerComponent_HasAbility_Params params {};
		params.AbilityClass = AbilityClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED280
	 * 		Name   -> Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      AbilityClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxAbility* UGbxAbilityManagerComponent::FindAbility(class UClass* AbilityClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.FindAbility");
		
		UGbxAbilityManagerComponent_FindAbility_Params params {};
		params.AbilityClass = AbilityClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED1B0
	 * 		Name   -> Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilitySpec                             Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UGbxAbility* UGbxAbilityManagerComponent::AddAbility(const struct FGbxAbilitySpec& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityManagerComponent.AddAbility");
		
		UGbxAbilityManagerComponent_AddAbility_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityManagerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityManagerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityManagerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityAttributePropertyValueResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityAttributePropertyValueResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityAttributePropertyValueResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityEffectTargetResolutionData_Owner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityEffectTargetResolutionData_Owner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityEffectTargetResolutionData_Self.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityEffectTargetResolutionData_Self::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030EDA40
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ResourcePoolDelegate Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED930
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ConditionalDamageModifier Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED810
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ScriptDelegate Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ScriptDelegate      Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_UnregisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate* Controller, const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED660
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ResourcePoolDelegate Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED550
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ConditionalDamageModifier Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030ED430
	 * 		Name   -> Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGbxAbilityResourceController_ScriptDelegate Controller                                                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGbxAbilityResourceSpec_ScriptDelegate      Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGbxAbilityResourceControllerBlueprintFunctionLibrary::STATIC_RegisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate* Controller, const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate");
		
		UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params params {};
		params.Spec = Spec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxAbilityResourceControllerBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxAbilityResourceControllerBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition_HasAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition_HasAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxAbilities.GbxCondition_HasAbility");
		return ptr;
	}

}


