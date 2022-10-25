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
	 * 		Name   -> Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Pet_FindLoot_C::Notify_FoundLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.Notify_FoundLoot");
		
		UAction_Pet_FindLoot_C_Notify_FoundLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Pet_FindLoot_C::ExecuteUbergraph_Action_Pet_FindLoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Pet_FindLoot.Action_Pet_FindLoot_C.ExecuteUbergraph_Action_Pet_FindLoot");
		
		UAction_Pet_FindLoot_C_ExecuteUbergraph_Action_Pet_FindLoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Pet_FindLoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Pet_FindLoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_FindLoot.Action_Pet_FindLoot_C");
		return ptr;
	}

}


