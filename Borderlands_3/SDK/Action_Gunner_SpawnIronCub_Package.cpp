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
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Gunner_SpawnIronCub_C::AN_SpawnIronCub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub");
		
		UAction_Gunner_SpawnIronCub_C_AN_SpawnIronCub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Gunner_SpawnIronCub_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd");
		
		UAction_Gunner_SpawnIronCub_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Gunner_SpawnIronCub_C::AN_EnableDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice");
		
		UAction_Gunner_SpawnIronCub_C_AN_EnableDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Gunner_SpawnIronCub_C::AN_DisableDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice");
		
		UAction_Gunner_SpawnIronCub_C_AN_DisableDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Gunner_SpawnIronCub_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin");
		
		UAction_Gunner_SpawnIronCub_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Gunner_SpawnIronCub_C::AN_EnableHologram()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram");
		
		UAction_Gunner_SpawnIronCub_C_AN_EnableHologram_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Gunner_SpawnIronCub_C::AN_DisableHologram()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram");
		
		UAction_Gunner_SpawnIronCub_C_AN_DisableHologram_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Gunner_SpawnIronCub_C::ExecuteUbergraph_Action_Gunner_SpawnIronCub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub");
		
		UAction_Gunner_SpawnIronCub_C_ExecuteUbergraph_Action_Gunner_SpawnIronCub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Gunner_SpawnIronCub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Gunner_SpawnIronCub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C");
		return ptr;
	}

}


