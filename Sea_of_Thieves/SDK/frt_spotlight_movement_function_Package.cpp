/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void Afrt_spotlight_movement_function_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.UserConstructionScript");
		
		Afrt_spotlight_movement_function_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Afrt_spotlight_movement_function_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ReceiveTick");
		
		Afrt_spotlight_movement_function_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ExecuteUbergraph_frt_spotlight_movement_function
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Afrt_spotlight_movement_function_C::ExecuteUbergraph_frt_spotlight_movement_function(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function frt_spotlight_movement_function.frt_spotlight_movement_function_C.ExecuteUbergraph_frt_spotlight_movement_function");
		
		Afrt_spotlight_movement_function_C_ExecuteUbergraph_frt_spotlight_movement_function_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Afrt_spotlight_movement_function_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Afrt_spotlight_movement_function_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass frt_spotlight_movement_function.frt_spotlight_movement_function_C");
		return ptr;
	}

}


