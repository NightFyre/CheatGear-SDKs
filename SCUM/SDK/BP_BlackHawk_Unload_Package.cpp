/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.OnActionAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterActionNotifyType                         notifyType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BlackHawk_Unload_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.OnActionAnimNotify");
		
		UBP_BlackHawk_Unload_C_OnActionAnimNotify_Params params {};
		params.notifyType = notifyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.ExecuteUbergraph_BP_BlackHawk_Unload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BlackHawk_Unload_C::ExecuteUbergraph_BP_BlackHawk_Unload(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BlackHawk_Unload.BP_BlackHawk_Unload_C.ExecuteUbergraph_BP_BlackHawk_Unload");
		
		UBP_BlackHawk_Unload_C_ExecuteUbergraph_BP_BlackHawk_Unload_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BlackHawk_Unload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BlackHawk_Unload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlackHawk_Unload.BP_BlackHawk_Unload_C");
		return ptr;
	}

}


