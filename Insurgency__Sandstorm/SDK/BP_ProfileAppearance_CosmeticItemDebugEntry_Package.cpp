/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItemDebugEntry.BP_ProfileAppearance_CosmeticItemDebugEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_ProfileAppearance_CosmeticItemDebugEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItemDebugEntry.BP_ProfileAppearance_CosmeticItemDebugEntry_C.Construct");
		
		UBP_ProfileAppearance_CosmeticItemDebugEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ProfileAppearance_CosmeticItemDebugEntry.BP_ProfileAppearance_CosmeticItemDebugEntry_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticItemDebugEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ProfileAppearance_CosmeticItemDebugEntry_C::ExecuteUbergraph_BP_ProfileAppearance_CosmeticItemDebugEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ProfileAppearance_CosmeticItemDebugEntry.BP_ProfileAppearance_CosmeticItemDebugEntry_C.ExecuteUbergraph_BP_ProfileAppearance_CosmeticItemDebugEntry");
		
		UBP_ProfileAppearance_CosmeticItemDebugEntry_C_ExecuteUbergraph_BP_ProfileAppearance_CosmeticItemDebugEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ProfileAppearance_CosmeticItemDebugEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ProfileAppearance_CosmeticItemDebugEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ProfileAppearance_CosmeticItemDebugEntry.BP_ProfileAppearance_CosmeticItemDebugEntry_C");
		return ptr;
	}

}


