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
	 * 		Name   -> Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CriminalRecordText_C::SetValue(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue");
		
		UUI_CriminalRecordText_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UUI_CriminalRecordText_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties");
		
		UUI_CriminalRecordText_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CriminalRecordText_C::ExecuteUbergraph_UI_CriminalRecordText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText");
		
		UUI_CriminalRecordText_C_ExecuteUbergraph_UI_CriminalRecordText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CriminalRecordText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CriminalRecordText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CriminalRecordText.UI_CriminalRecordText_C");
		return ptr;
	}

}


