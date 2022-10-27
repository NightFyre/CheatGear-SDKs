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
	 * 		Name   -> Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_IronBear_Charge_End_C::OnAnimEnd_B40E293946052D568378BF989B320782()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782");
		
		UAction_IronBear_Charge_End_C_OnAnimEnd_B40E293946052D568378BF989B320782_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_Charge_End_C::OnEnd_B40E293946052D568378BF989B320782(EGbxActionEndState EndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782");
		
		UAction_IronBear_Charge_End_C_OnEnd_B40E293946052D568378BF989B320782_Params params {};
		params.EndState = EndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_Charge_End_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin");
		
		UAction_IronBear_Charge_End_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_Charge_End_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd");
		
		UAction_IronBear_Charge_End_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_Charge_End_C::ExecuteUbergraph_Action_IronBear_Charge_End(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End");
		
		UAction_IronBear_Charge_End_C_ExecuteUbergraph_Action_IronBear_Charge_End_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronBear_Charge_End_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronBear_Charge_End_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_Charge_End.Action_IronBear_Charge_End_C");
		return ptr;
	}

}


