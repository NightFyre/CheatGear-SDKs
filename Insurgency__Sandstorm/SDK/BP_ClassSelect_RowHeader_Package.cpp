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
	 * 		Name   -> Function BP_ClassSelect_RowHeader.BP_ClassSelect_RowHeader_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_ClassSelect_RowHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClassSelect_RowHeader.BP_ClassSelect_RowHeader_C.PreConstruct");
		
		UBP_ClassSelect_RowHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ClassSelect_RowHeader.BP_ClassSelect_RowHeader_C.ExecuteUbergraph_BP_ClassSelect_RowHeader
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ClassSelect_RowHeader_C::ExecuteUbergraph_BP_ClassSelect_RowHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ClassSelect_RowHeader.BP_ClassSelect_RowHeader_C.ExecuteUbergraph_BP_ClassSelect_RowHeader");
		
		UBP_ClassSelect_RowHeader_C_ExecuteUbergraph_BP_ClassSelect_RowHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ClassSelect_RowHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ClassSelect_RowHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ClassSelect_RowHeader.BP_ClassSelect_RowHeader_C");
		return ptr;
	}

}


