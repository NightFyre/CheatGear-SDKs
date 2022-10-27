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
	 * 		Name   -> Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_DigLoot_C::Notify_Loot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.Notify_Loot");
		
		UA_PetSpiderant_DigLoot_C_Notify_Loot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_DigLoot_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.OnBegin");
		
		UA_PetSpiderant_DigLoot_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_DigLoot_C::ExecuteUbergraph_A_PetSpiderant_DigLoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C.ExecuteUbergraph_A_PetSpiderant_DigLoot");
		
		UA_PetSpiderant_DigLoot_C_ExecuteUbergraph_A_PetSpiderant_DigLoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSpiderant_DigLoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSpiderant_DigLoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_DigLoot.A_PetSpiderant_DigLoot_C");
		return ptr;
	}

}


