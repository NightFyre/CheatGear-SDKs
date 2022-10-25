/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LootableCon_Fridge.LootableCon_Fridge_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ALootableCon_Fridge_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Fridge.LootableCon_Fridge_C.ActiveCalled");
		
		ALootableCon_Fridge_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LootableCon_Fridge.LootableCon_Fridge_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ALootableCon_Fridge_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Fridge.LootableCon_Fridge_C.DeActiveCalled");
		
		ALootableCon_Fridge_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LootableCon_Fridge.LootableCon_Fridge_C.ExecuteUbergraph_LootableCon_Fridge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALootableCon_Fridge_C::ExecuteUbergraph_LootableCon_Fridge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Fridge.LootableCon_Fridge_C.ExecuteUbergraph_LootableCon_Fridge");
		
		ALootableCon_Fridge_C_ExecuteUbergraph_LootableCon_Fridge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALootableCon_Fridge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALootableCon_Fridge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootableCon_Fridge.LootableCon_Fridge_C");
		return ptr;
	}

}


