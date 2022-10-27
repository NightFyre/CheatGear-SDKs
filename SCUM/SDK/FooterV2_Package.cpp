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
	 * 		Name   -> Function FooterV2.FooterV2_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        textToSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                textColorToSet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFooterV2_C::SetText(const class FText& textToSet, const struct FLinearColor& textColorToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.SetText");
		
		UFooterV2_C_SetText_Params params {};
		params.textToSet = textToSet;
		params.textColorToSet = textColorToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FooterV2.FooterV2_C.Construct
	 * 		Flags  -> ()
	 */
	void UFooterV2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.Construct");
		
		UFooterV2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFooterV2_C::ExecuteUbergraph_FooterV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2");
		
		UFooterV2_C_ExecuteUbergraph_FooterV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFooterV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFooterV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FooterV2.FooterV2_C");
		return ptr;
	}

}


