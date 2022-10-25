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
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::OnLoop(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnLoop");
		
		UACharge_PetLoader_Charge_C_OnLoop_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UACharge_PetLoader_Charge_C::AttackCommandUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.AttackCommandUsed");
		
		UACharge_PetLoader_Charge_C_AttackCommandUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UACharge_PetLoader_Charge_C::StrikeDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.StrikeDamage");
		
		UACharge_PetLoader_Charge_C_StrikeDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::OnStrike(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnStrike");
		
		UACharge_PetLoader_Charge_C_OnStrike_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::OnHitWall(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnHitWall");
		
		UACharge_PetLoader_Charge_C_OnHitWall_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerEnd");
		
		UACharge_PetLoader_Charge_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.OnServerBegin");
		
		UACharge_PetLoader_Charge_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UACharge_PetLoader_Charge_C::CallAttackCommandUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.CallAttackCommandUsed");
		
		UACharge_PetLoader_Charge_C_CallAttackCommandUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UACharge_PetLoader_Charge_C::ExecuteUbergraph_ACharge_PetLoader_Charge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C.ExecuteUbergraph_ACharge_PetLoader_Charge");
		
		UACharge_PetLoader_Charge_C_ExecuteUbergraph_ACharge_PetLoader_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UACharge_PetLoader_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UACharge_PetLoader_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ACharge_PetLoader_Charge.ACharge_PetLoader_Charge_C");
		return ptr;
	}

}


