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
	 * 		Name   -> Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_Kick_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.OnBegin");
		
		UAction_PetLoader_Kick_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.DoDamageNow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_Kick_C::DoDamageNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.DoDamageNow");
		
		UAction_PetLoader_Kick_C_DoDamageNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.ExecuteUbergraph_Action_PetLoader_Kick
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_Kick_C::ExecuteUbergraph_Action_PetLoader_Kick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_Kick.Action_PetLoader_Kick_C.ExecuteUbergraph_Action_PetLoader_Kick");
		
		UAction_PetLoader_Kick_C_ExecuteUbergraph_Action_PetLoader_Kick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PetLoader_Kick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PetLoader_Kick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_Kick.Action_PetLoader_Kick_C");
		return ptr;
	}

}


