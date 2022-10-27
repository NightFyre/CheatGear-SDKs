/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function AnimAction_AR15_Reload_NoMag.AnimAction_AR15_Reload_NoMag_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_AR15_Reload_NoMag_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_AR15_Reload_NoMag.AnimAction_AR15_Reload_NoMag_C.TriggerAction");
		
		UAnimAction_AR15_Reload_NoMag_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_AR15_Reload_NoMag.AnimAction_AR15_Reload_NoMag_C.ExecuteUbergraph_AnimAction_AR15_Reload_NoMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_AR15_Reload_NoMag_C::ExecuteUbergraph_AnimAction_AR15_Reload_NoMag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_AR15_Reload_NoMag.AnimAction_AR15_Reload_NoMag_C.ExecuteUbergraph_AnimAction_AR15_Reload_NoMag");
		
		UAnimAction_AR15_Reload_NoMag_C_ExecuteUbergraph_AnimAction_AR15_Reload_NoMag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_AR15_Reload_NoMag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_AR15_Reload_NoMag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_AR15_Reload_NoMag.AnimAction_AR15_Reload_NoMag_C");
		return ptr;
	}

}


