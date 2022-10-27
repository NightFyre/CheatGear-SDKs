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
	 * 		Name   -> Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.AttackCommandUsed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UA_Pet_AttackCommand_Parent_C::AttackCommandUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.AttackCommandUsed");
		
		UA_Pet_AttackCommand_Parent_C_AttackCommandUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_AttackCommand_Parent_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.OnServerBegin");
		
		UA_Pet_AttackCommand_Parent_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.ExecuteUbergraph_A_Pet_AttackCommand_Parent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_AttackCommand_Parent_C::ExecuteUbergraph_A_Pet_AttackCommand_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C.ExecuteUbergraph_A_Pet_AttackCommand_Parent");
		
		UA_Pet_AttackCommand_Parent_C_ExecuteUbergraph_A_Pet_AttackCommand_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Pet_AttackCommand_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Pet_AttackCommand_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_AttackCommand_Parent.A_Pet_AttackCommand_Parent_C");
		return ptr;
	}

}


