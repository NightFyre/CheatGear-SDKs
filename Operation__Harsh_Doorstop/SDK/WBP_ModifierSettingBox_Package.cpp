/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.GetSettingText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        SettingText                                                (Parm, OutParm)
	 */
	void UWBP_ModifierSettingBox_C::GetSettingText(class FText* SettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.GetSettingText");
		
		UWBP_ModifierSettingBox_C_GetSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingText != nullptr)
			*SettingText = params.SettingText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.SetSettingText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InSettingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ModifierSettingBox_C::SetSettingText(const class FText& InSettingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.SetSettingText");
		
		UWBP_ModifierSettingBox_C_SetSettingText_Params params {};
		params.InSettingText = InSettingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ModifierSettingBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.PreConstruct");
		
		UWBP_ModifierSettingBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.ExecuteUbergraph_WBP_ModifierSettingBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ModifierSettingBox_C::ExecuteUbergraph_WBP_ModifierSettingBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.ExecuteUbergraph_WBP_ModifierSettingBox");
		
		UWBP_ModifierSettingBox_C_ExecuteUbergraph_WBP_ModifierSettingBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ModifierSettingBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ModifierSettingBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModifierSettingBox.WBP_ModifierSettingBox_C");
		return ptr;
	}

}


