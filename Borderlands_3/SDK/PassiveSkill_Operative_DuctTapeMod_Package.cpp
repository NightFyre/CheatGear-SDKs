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
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672");
		
		UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672");
		
		UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated");
		
		UPassiveSkill_Operative_DuctTapeMod_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::DuctTape_OnWeaponReloadEnded(class AWeapon* EventWeapon, bool bCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded");
		
		UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponReloadEnded_Params params {};
		params.EventWeapon = EventWeapon;
		params.bCompleted = bCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeapon*                                     EventWeapon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::DuctTape_OnWeaponUsed(class AWeapon* EventWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed");
		
		UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponUsed_Params params {};
		params.EventWeapon = EventWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_DuctTapeMod_C::ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod");
		
		UPassiveSkill_Operative_DuctTapeMod_C_ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_DuctTapeMod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_DuctTapeMod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C");
		return ptr;
	}

}


