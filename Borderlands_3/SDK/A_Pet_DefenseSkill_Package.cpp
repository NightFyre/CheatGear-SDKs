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
	 * 		Name   -> Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_DefenseSkill_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.OnBegin");
		
		UA_Pet_DefenseSkill_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Pet_DefenseSkill_C::Notify_SkillUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.Notify_SkillUse");
		
		UA_Pet_DefenseSkill_C_Notify_SkillUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_DefenseSkill_C::ExecuteUbergraph_A_Pet_DefenseSkill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_DefenseSkill.A_Pet_DefenseSkill_C.ExecuteUbergraph_A_Pet_DefenseSkill");
		
		UA_Pet_DefenseSkill_C_ExecuteUbergraph_A_Pet_DefenseSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Pet_DefenseSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Pet_DefenseSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_DefenseSkill.A_Pet_DefenseSkill_C");
		return ptr;
	}

}


