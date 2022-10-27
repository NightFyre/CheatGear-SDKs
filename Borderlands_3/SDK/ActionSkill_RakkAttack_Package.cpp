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
	 * 		Name   -> Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_RakkAttack_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.OnStartActionAbility");
		
		UActionSkill_RakkAttack_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.ExecuteUbergraph_ActionSkill_RakkAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_RakkAttack_C::ExecuteUbergraph_ActionSkill_RakkAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_RakkAttack.ActionSkill_RakkAttack_C.ExecuteUbergraph_ActionSkill_RakkAttack");
		
		UActionSkill_RakkAttack_C_ExecuteUbergraph_ActionSkill_RakkAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_RakkAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_RakkAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_RakkAttack.ActionSkill_RakkAttack_C");
		return ptr;
	}

}


