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
	 * 		Name   -> Function PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassiveSkill_Operative_SeperationAnxiety_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C.OnActivated");
		
		UPassiveSkill_Operative_SeperationAnxiety_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C.ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassiveSkill_Operative_SeperationAnxiety_C::ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C.ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety");
		
		UPassiveSkill_Operative_SeperationAnxiety_C_ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassiveSkill_Operative_SeperationAnxiety_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassiveSkill_Operative_SeperationAnxiety_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C");
		return ptr;
	}

}


