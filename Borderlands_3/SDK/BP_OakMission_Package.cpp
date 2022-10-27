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
	 * 		Name   -> Function BP_OakMission.BP_OakMission_C.Set_Dummy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OakMission_C::Set_Dummy(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakMission.BP_OakMission_C.Set_Dummy");
		
		UBP_OakMission_C_Set_Dummy_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakMission.BP_OakMission_C.Obj_Dummy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OakMission_C::Obj_Dummy(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakMission.BP_OakMission_C.Obj_Dummy");
		
		UBP_OakMission_C_Obj_Dummy_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_OakMission.BP_OakMission_C.ExecuteUbergraph_BP_OakMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OakMission_C::ExecuteUbergraph_BP_OakMission(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OakMission.BP_OakMission_C.ExecuteUbergraph_BP_OakMission");
		
		UBP_OakMission_C_ExecuteUbergraph_BP_OakMission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OakMission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OakMission_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OakMission.BP_OakMission_C");
		return ptr;
	}

}


