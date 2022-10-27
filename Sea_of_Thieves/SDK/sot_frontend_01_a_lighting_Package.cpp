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
	 * 		Name   -> Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_lighting_C::LightingTestEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent");
		
		Asot_frontend_01_a_lighting_C_LightingTestEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_lighting_C::ExecuteUbergraph_sot_frontend_01_a_lighting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting");
		
		Asot_frontend_01_a_lighting_C_ExecuteUbergraph_sot_frontend_01_a_lighting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_lighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_lighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C");
		return ptr;
	}

}


