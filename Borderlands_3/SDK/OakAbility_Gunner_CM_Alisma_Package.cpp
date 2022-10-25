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
	 * 		Name   -> Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_Alisma_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnActivated");
		
		UOakAbility_Gunner_CM_Alisma_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Gunner_CM_Alisma_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.OnDeactivated");
		
		UOakAbility_Gunner_CM_Alisma_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_Alisma_C::ExitedIronBear(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExitedIronBear");
		
		UOakAbility_Gunner_CM_Alisma_C_ExitedIronBear_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_IronBear*                      IronBear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_Alisma_C::EnteredIronBear(class AOakCharacter_IronBear* IronBear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.EnteredIronBear");
		
		UOakAbility_Gunner_CM_Alisma_C_EnteredIronBear_Params params {};
		params.IronBear = IronBear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Gunner_CM_Alisma_C::ExecuteUbergraph_OakAbility_Gunner_CM_Alisma(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C.ExecuteUbergraph_OakAbility_Gunner_CM_Alisma");
		
		UOakAbility_Gunner_CM_Alisma_C_ExecuteUbergraph_OakAbility_Gunner_CM_Alisma_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Gunner_CM_Alisma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Gunner_CM_Alisma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Gunner_CM_Alisma.OakAbility_Gunner_CM_Alisma_C");
		return ptr;
	}

}


