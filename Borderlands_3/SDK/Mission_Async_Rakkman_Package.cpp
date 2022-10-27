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
	 * 		Name   -> Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Obj_KillRakkman
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Rakkman_C::Obj_KillRakkman(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Obj_KillRakkman");
		
		UMission_Async_Rakkman_C_Obj_KillRakkman_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Set_KillRakkman
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Rakkman_C::Set_KillRakkman(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.Set_KillRakkman");
		
		UMission_Async_Rakkman_C_Set_KillRakkman_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.MCE_RakkmanKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Rakkman_C::MCE_RakkmanKilled(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.MCE_RakkmanKilled");
		
		UMission_Async_Rakkman_C_MCE_RakkmanKilled_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.ExecuteUbergraph_Mission_Async_Rakkman
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Rakkman_C::ExecuteUbergraph_Mission_Async_Rakkman(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Rakkman.Mission_Async_Rakkman_C.ExecuteUbergraph_Mission_Async_Rakkman");
		
		UMission_Async_Rakkman_C_ExecuteUbergraph_Mission_Async_Rakkman_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_Async_Rakkman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_Async_Rakkman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_Rakkman.Mission_Async_Rakkman_C");
		return ptr;
	}

}


