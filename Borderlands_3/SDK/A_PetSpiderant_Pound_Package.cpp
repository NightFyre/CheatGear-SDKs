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
	 * 		Name   -> Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_Pound_C::Notify_Melee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.Notify_Melee");
		
		UA_PetSpiderant_Pound_C_Notify_Melee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_Pound_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.OnBegin");
		
		UA_PetSpiderant_Pound_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_Pound_C::ExecuteUbergraph_A_PetSpiderant_Pound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Pound.A_PetSpiderant_Pound_C.ExecuteUbergraph_A_PetSpiderant_Pound");
		
		UA_PetSpiderant_Pound_C_ExecuteUbergraph_A_PetSpiderant_Pound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSpiderant_Pound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSpiderant_Pound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Pound.A_PetSpiderant_Pound_C");
		return ptr;
	}

}


