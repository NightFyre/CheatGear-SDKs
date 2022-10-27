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
	 * 		Name   -> Function AnimAction_Handgun_Reload_NoRetention_Compressed.AnimAction_Handgun_Reload_NoRetention_Compressed_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_Handgun_Reload_NoRetention_Compressed_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Handgun_Reload_NoRetention_Compressed.AnimAction_Handgun_Reload_NoRetention_Compressed_C.TriggerAction");
		
		UAnimAction_Handgun_Reload_NoRetention_Compressed_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_Handgun_Reload_NoRetention_Compressed.AnimAction_Handgun_Reload_NoRetention_Compressed_C.ExecuteUbergraph_AnimAction_Handgun_Reload_NoRetention_Compressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_Handgun_Reload_NoRetention_Compressed_C::ExecuteUbergraph_AnimAction_Handgun_Reload_NoRetention_Compressed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_Handgun_Reload_NoRetention_Compressed.AnimAction_Handgun_Reload_NoRetention_Compressed_C.ExecuteUbergraph_AnimAction_Handgun_Reload_NoRetention_Compressed");
		
		UAnimAction_Handgun_Reload_NoRetention_Compressed_C_ExecuteUbergraph_AnimAction_Handgun_Reload_NoRetention_Compressed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_Handgun_Reload_NoRetention_Compressed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_Handgun_Reload_NoRetention_Compressed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_Handgun_Reload_NoRetention_Compressed.AnimAction_Handgun_Reload_NoRetention_Compressed_C");
		return ptr;
	}

}


