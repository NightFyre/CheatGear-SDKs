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
	 * 		Name   -> Function BP_HighlightsNotification.BP_HighlightsNotification_C.SetHighlightType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumHighlightsType                                 InHighlightType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HighlightsNotification_C::SetHighlightType(EnumHighlightsType InHighlightType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HighlightsNotification.BP_HighlightsNotification_C.SetHighlightType");
		
		UBP_HighlightsNotification_C_SetHighlightType_Params params {};
		params.InHighlightType = InHighlightType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_HighlightsNotification.BP_HighlightsNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_HighlightsNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HighlightsNotification.BP_HighlightsNotification_C.Construct");
		
		UBP_HighlightsNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_HighlightsNotification.BP_HighlightsNotification_C.ExecuteUbergraph_BP_HighlightsNotification
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HighlightsNotification_C::ExecuteUbergraph_BP_HighlightsNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HighlightsNotification.BP_HighlightsNotification_C.ExecuteUbergraph_BP_HighlightsNotification");
		
		UBP_HighlightsNotification_C_ExecuteUbergraph_BP_HighlightsNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HighlightsNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HighlightsNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HighlightsNotification.BP_HighlightsNotification_C");
		return ptr;
	}

}


