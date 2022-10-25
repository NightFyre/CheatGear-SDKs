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
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnPaused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::OnPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnPaused");
		
		UPassiveSkill_Siren_IlluminatedFist_C_OnPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnDeactivated");
		
		UPassiveSkill_Siren_IlluminatedFist_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_SetDamageType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::ToothAndNail_SetDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_SetDamageType");
		
		UPassiveSkill_Siren_IlluminatedFist_C_ToothAndNail_SetDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_RemoveDamageType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::ToothAndNail_RemoveDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ToothAndNail_RemoveDamageType");
		
		UPassiveSkill_Siren_IlluminatedFist_C_ToothAndNail_RemoveDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnAttunedElementChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::OnAttunedElementChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnAttunedElementChanged");
		
		UPassiveSkill_Siren_IlluminatedFist_C_OnAttunedElementChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.OnActivated");
		
		UPassiveSkill_Siren_IlluminatedFist_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Siren_IlluminatedFist_C::ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C.ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist");
		
		UPassiveSkill_Siren_IlluminatedFist_C_ExecuteUbergraph_PassiveSkill_Siren_IlluminatedFist_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Siren_IlluminatedFist_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Siren_IlluminatedFist_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_IlluminatedFist.PassiveSkill_Siren_IlluminatedFist_C");
		return ptr;
	}

}


