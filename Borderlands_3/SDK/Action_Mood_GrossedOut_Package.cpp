﻿/**
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
	 * 		Name   -> Function Action_Mood_GrossedOut.Action_Mood_GrossedOut_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Mood_GrossedOut_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Mood_GrossedOut.Action_Mood_GrossedOut_C.OnBegin");
		
		UAction_Mood_GrossedOut_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Mood_GrossedOut.Action_Mood_GrossedOut_C.ExecuteUbergraph_Action_Mood_GrossedOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Mood_GrossedOut_C::ExecuteUbergraph_Action_Mood_GrossedOut(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Mood_GrossedOut.Action_Mood_GrossedOut_C.ExecuteUbergraph_Action_Mood_GrossedOut");
		
		UAction_Mood_GrossedOut_C_ExecuteUbergraph_Action_Mood_GrossedOut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Mood_GrossedOut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Mood_GrossedOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mood_GrossedOut.Action_Mood_GrossedOut_C");
		return ptr;
	}

}


