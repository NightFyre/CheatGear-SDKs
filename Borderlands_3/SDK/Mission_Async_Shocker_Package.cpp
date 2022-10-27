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
	 * 		Name   -> Function Mission_Async_Shocker.Mission_Async_Shocker_C.Obj_KillShocker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Shocker_C::Obj_KillShocker(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.Obj_KillShocker");
		
		UMission_Async_Shocker_C_Obj_KillShocker_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Shocker.Mission_Async_Shocker_C.Set_KillShocker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Shocker_C::Set_KillShocker(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.Set_KillShocker");
		
		UMission_Async_Shocker_C_Set_KillShocker_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Shocker.Mission_Async_Shocker_C.MCE_ShockerKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Shocker_C::MCE_ShockerKilled(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.MCE_ShockerKilled");
		
		UMission_Async_Shocker_C_MCE_ShockerKilled_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_Shocker.Mission_Async_Shocker_C.ExecuteUbergraph_Mission_Async_Shocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_Shocker_C::ExecuteUbergraph_Mission_Async_Shocker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_Shocker.Mission_Async_Shocker_C.ExecuteUbergraph_Mission_Async_Shocker");
		
		UMission_Async_Shocker_C_ExecuteUbergraph_Mission_Async_Shocker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_Async_Shocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_Async_Shocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_Shocker.Mission_Async_Shocker_C");
		return ptr;
	}

}


