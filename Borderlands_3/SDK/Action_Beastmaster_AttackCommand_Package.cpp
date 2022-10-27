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
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_AttackCommand_C::Notify_Attack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Attack");
		
		UAction_Beastmaster_AttackCommand_C_Notify_Attack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_AttackCommand_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBeginBringUpWeapon");
		
		UAction_Beastmaster_AttackCommand_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_AttackCommand_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnBegin");
		
		UAction_Beastmaster_AttackCommand_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_AttackCommand_C::Notify_Feedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.Notify_Feedback");
		
		UAction_Beastmaster_AttackCommand_C_Notify_Feedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_AttackCommand_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.OnServerEnd");
		
		UAction_Beastmaster_AttackCommand_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_AttackCommand_C::ExecuteUbergraph_Action_Beastmaster_AttackCommand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C.ExecuteUbergraph_Action_Beastmaster_AttackCommand");
		
		UAction_Beastmaster_AttackCommand_C_ExecuteUbergraph_Action_Beastmaster_AttackCommand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Beastmaster_AttackCommand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Beastmaster_AttackCommand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_AttackCommand.Action_Beastmaster_AttackCommand_C");
		return ptr;
	}

}


