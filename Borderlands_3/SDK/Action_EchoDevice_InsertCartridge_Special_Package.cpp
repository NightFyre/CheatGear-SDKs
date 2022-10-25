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
	 * 		Name   -> Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_EchoDevice_InsertCartridge_Special_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnBegin");
		
		UAction_EchoDevice_InsertCartridge_Special_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_EchoDevice_InsertCartridge_Special_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.OnEnd");
		
		UAction_EchoDevice_InsertCartridge_Special_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.PlayEchoDeviceScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_EchoDevice_InsertCartridge_Special_C::PlayEchoDeviceScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.PlayEchoDeviceScreen");
		
		UAction_EchoDevice_InsertCartridge_Special_C_PlayEchoDeviceScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_EchoDevice_InsertCartridge_Special_C::ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C.ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special");
		
		UAction_EchoDevice_InsertCartridge_Special_C_ExecuteUbergraph_Action_EchoDevice_InsertCartridge_Special_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_EchoDevice_InsertCartridge_Special_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_EchoDevice_InsertCartridge_Special_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_EchoDevice_InsertCartridge_Special.Action_EchoDevice_InsertCartridge_Special_C");
		return ptr;
	}

}


