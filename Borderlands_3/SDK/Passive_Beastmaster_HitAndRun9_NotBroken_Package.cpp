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
	 * 		Name   -> Function Passive_Beastmaster_HitAndRun9_NotBroken.Passive_Beastmaster_HitAndRun9_NotBroken_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_HitAndRun9_NotBroken_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun9_NotBroken.Passive_Beastmaster_HitAndRun9_NotBroken_C.OnActivated");
		
		UPassive_Beastmaster_HitAndRun9_NotBroken_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_HitAndRun9_NotBroken.Passive_Beastmaster_HitAndRun9_NotBroken_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun9_NotBroken
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_HitAndRun9_NotBroken_C::ExecuteUbergraph_Passive_Beastmaster_HitAndRun9_NotBroken(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun9_NotBroken.Passive_Beastmaster_HitAndRun9_NotBroken_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun9_NotBroken");
		
		UPassive_Beastmaster_HitAndRun9_NotBroken_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun9_NotBroken_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_HitAndRun9_NotBroken_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_HitAndRun9_NotBroken_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_HitAndRun9_NotBroken.Passive_Beastmaster_HitAndRun9_NotBroken_C");
		return ptr;
	}

}


