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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOakActionCloak_TrackedTargetState          TrackedTargetState                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	class UClass* UBP_CE_Beastmaster_CloakAbility_On_C::GetTrackedTargetEffect(const struct FOakActionCloak_TrackedTargetState& TrackedTargetState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_GetTrackedTargetEffect_Params params {};
		params.TrackedTargetState = TrackedTargetState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::StopTrackedTargetCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_StopTrackedTargetCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UBP_CE_Beastmaster_CloakAbility_On_C::ShouldRegisterWeaponFireDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_ShouldRegisterWeaponFireDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::CleanupServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_CleanupServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::SetupMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_SetupMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::SetupServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_SetupServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_Beastmaster_CloakAbility_On_C::ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On");
		
		UBP_CE_Beastmaster_CloakAbility_On_C_ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CE_Beastmaster_CloakAbility_On_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_Beastmaster_CloakAbility_On_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C");
		return ptr;
	}

}


