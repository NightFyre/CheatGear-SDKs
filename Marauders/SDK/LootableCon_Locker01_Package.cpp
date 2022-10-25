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
	 * 		Name   -> Function LootableCon_Locker01.LootableCon_Locker01_C.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ALootableCon_Locker01_C::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Locker01.LootableCon_Locker01_C.ActiveCalled");
		
		ALootableCon_Locker01_C_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LootableCon_Locker01.LootableCon_Locker01_C.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ALootableCon_Locker01_C::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Locker01.LootableCon_Locker01_C.DeActiveCalled");
		
		ALootableCon_Locker01_C_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LootableCon_Locker01.LootableCon_Locker01_C.ExecuteUbergraph_LootableCon_Locker01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALootableCon_Locker01_C::ExecuteUbergraph_LootableCon_Locker01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LootableCon_Locker01.LootableCon_Locker01_C.ExecuteUbergraph_LootableCon_Locker01");
		
		ALootableCon_Locker01_C_ExecuteUbergraph_LootableCon_Locker01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALootableCon_Locker01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALootableCon_Locker01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootableCon_Locker01.LootableCon_Locker01_C");
		return ptr;
	}

}


