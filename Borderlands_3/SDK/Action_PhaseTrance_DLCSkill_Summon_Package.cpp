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
	 * 		Name   -> Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_DLCSkill_Summon_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnBegin");
		
		UAction_PhaseTrance_DLCSkill_Summon_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_DLCSkill_Summon_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnEnd");
		
		UAction_PhaseTrance_DLCSkill_Summon_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PhaseTrance_DLCSkill_Summon_C::ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon");
		
		UAction_PhaseTrance_DLCSkill_Summon_C_ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PhaseTrance_DLCSkill_Summon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PhaseTrance_DLCSkill_Summon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C");
		return ptr;
	}

}


