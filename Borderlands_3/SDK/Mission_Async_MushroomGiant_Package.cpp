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
	 * 		Name   -> Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Obj_KillMushroomGiant
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_MushroomGiant_C::Obj_KillMushroomGiant(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Obj_KillMushroomGiant");
		
		UMission_Async_MushroomGiant_C_Obj_KillMushroomGiant_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Set_KillMushroomGiant
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_MushroomGiant_C::Set_KillMushroomGiant(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.Set_KillMushroomGiant");
		
		UMission_Async_MushroomGiant_C_Set_KillMushroomGiant_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.MCE_MushroomGiantKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_MushroomGiant_C::MCE_MushroomGiantKilled(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.MCE_MushroomGiantKilled");
		
		UMission_Async_MushroomGiant_C_MCE_MushroomGiantKilled_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.ExecuteUbergraph_Mission_Async_MushroomGiant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_Async_MushroomGiant_C::ExecuteUbergraph_Mission_Async_MushroomGiant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C.ExecuteUbergraph_Mission_Async_MushroomGiant");
		
		UMission_Async_MushroomGiant_C_ExecuteUbergraph_Mission_Async_MushroomGiant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_Async_MushroomGiant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_Async_MushroomGiant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Async_MushroomGiant.Mission_Async_MushroomGiant_C");
		return ptr;
	}

}


