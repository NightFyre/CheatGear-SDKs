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
	 * 		Name   -> Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.GetOutputText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_TextWithReplaceableText_C::GetOutputText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.GetOutputText");
		
		UBP_TextWithReplaceableText_C_GetOutputText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.UpdateJustification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETextJustify                                       Justification                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextWithReplaceableText_C::UpdateJustification(ETextJustify Justification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.UpdateJustification");
		
		UBP_TextWithReplaceableText_C_UpdateJustification_Params params {};
		params.Justification = Justification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_TextWithReplaceableText_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.PreConstruct");
		
		UBP_TextWithReplaceableText_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.ExecuteUbergraph_BP_TextWithReplaceableText
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextWithReplaceableText_C::ExecuteUbergraph_BP_TextWithReplaceableText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextWithReplaceableText.BP_TextWithReplaceableText_C.ExecuteUbergraph_BP_TextWithReplaceableText");
		
		UBP_TextWithReplaceableText_C_ExecuteUbergraph_BP_TextWithReplaceableText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TextWithReplaceableText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TextWithReplaceableText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TextWithReplaceableText.BP_TextWithReplaceableText_C");
		return ptr;
	}

}


