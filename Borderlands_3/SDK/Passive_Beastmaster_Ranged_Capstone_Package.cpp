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
	 * 		Name   -> Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPassive_Beastmaster_Ranged_Capstone_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.OnActivated");
		
		UPassive_Beastmaster_Ranged_Capstone_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPassive_Beastmaster_Ranged_Capstone_C::ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C.ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone");
		
		UPassive_Beastmaster_Ranged_Capstone_C_ExecuteUbergraph_Passive_Beastmaster_Ranged_Capstone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPassive_Beastmaster_Ranged_Capstone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPassive_Beastmaster_Ranged_Capstone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_Ranged_Capstone.Passive_Beastmaster_Ranged_Capstone_C");
		return ptr;
	}

}


