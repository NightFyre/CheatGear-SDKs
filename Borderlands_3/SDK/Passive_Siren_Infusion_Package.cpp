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
	 * 		Name   -> Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWeaponShotModifier*                         res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Siren_Infusion_C::GetShotModifier(class UWeaponShotModifier** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.GetShotModifier");
		
		UPassive_Siren_Infusion_C_GetShotModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Siren_Infusion_C::AddShotModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.AddShotModifier");
		
		UPassive_Siren_Infusion_C_AddShotModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPassive_Siren_Infusion_C::RemoveAllShotModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.RemoveAllShotModifiers");
		
		UPassive_Siren_Infusion_C_RemoveAllShotModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Siren_Infusion_C::OnAttunedElementChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.OnAttunedElementChanged");
		
		UPassive_Siren_Infusion_C_OnAttunedElementChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Siren_Infusion_C::ExecuteUbergraph_Passive_Siren_Infusion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Siren_Infusion.Passive_Siren_Infusion_C.ExecuteUbergraph_Passive_Siren_Infusion");
		
		UPassive_Siren_Infusion_C_ExecuteUbergraph_Passive_Siren_Infusion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Siren_Infusion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Siren_Infusion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_Infusion.Passive_Siren_Infusion_C");
		return ptr;
	}

}


