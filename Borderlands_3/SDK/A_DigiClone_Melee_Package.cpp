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
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_DigiClone_Melee_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin");
		
		UA_DigiClone_Melee_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_DigiClone_Melee_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd");
		
		UA_DigiClone_Melee_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_DigiClone_Melee_C::TurnOnOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades");
		
		UA_DigiClone_Melee_C_TurnOnOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_DigiClone_Melee_C::TurnOffOperativeBlades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades");
		
		UA_DigiClone_Melee_C_TurnOffOperativeBlades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_DigiClone_Melee_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon");
		
		UA_DigiClone_Melee_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_DigiClone_Melee_C::AN_CloneMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee");
		
		UA_DigiClone_Melee_C_AN_CloneMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_DigiClone_Melee_C::ExecuteUbergraph_A_DigiClone_Melee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee");
		
		UA_DigiClone_Melee_C_ExecuteUbergraph_A_DigiClone_Melee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_DigiClone_Melee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_DigiClone_Melee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_DigiClone_Melee.A_DigiClone_Melee_C");
		return ptr;
	}

}


