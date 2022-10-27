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
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::AttackCommandUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed");
		
		UAction_PetLoader_EyeLaser_C_AttackCommandUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent");
		
		UAction_PetLoader_EyeLaser_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_EyeLaser_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd");
		
		UAction_PetLoader_EyeLaser_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_EyeLaser_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd");
		
		UAction_PetLoader_EyeLaser_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::Start_EyeLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser");
		
		UAction_PetLoader_EyeLaser_C_Start_EyeLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::Stop_EyeLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser");
		
		UAction_PetLoader_EyeLaser_C_Stop_EyeLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4");
		
		UAction_PetLoader_EyeLaser_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::Start_EyeLaserCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge");
		
		UAction_PetLoader_EyeLaser_C_Start_EyeLaserCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_EyeLaser_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin");
		
		UAction_PetLoader_EyeLaser_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_EyeLaser_C::Audio_EyeBeam_Charge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge");
		
		UAction_PetLoader_EyeLaser_C_Audio_EyeBeam_Charge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_EyeLaser_C::ExecuteUbergraph_Action_PetLoader_EyeLaser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser");
		
		UAction_PetLoader_EyeLaser_C_ExecuteUbergraph_Action_PetLoader_EyeLaser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PetLoader_EyeLaser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PetLoader_EyeLaser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C");
		return ptr;
	}

}


