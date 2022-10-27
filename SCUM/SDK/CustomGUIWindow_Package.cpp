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
	 * 		Name   -> Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 */
	void UCustomGUIWindow_C::GetTitle(class FText* Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.GetTitle");
		
		UCustomGUIWindow_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        titleToSet                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCustomGUIWindow_C::SetTitle(const class FText& titleToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.SetTitle");
		
		UCustomGUIWindow_C_SetTitle_Params params {};
		params.titleToSet = titleToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
	 * 		Flags  -> ()
	 */
	void UCustomGUIWindow_C::AlarmOnWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent");
		
		UCustomGUIWindow_C_AlarmOnWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
	 * 		Flags  -> ()
	 */
	void UCustomGUIWindow_C::AlarmOffWindowContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent");
		
		UCustomGUIWindow_C_AlarmOffWindowContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomGUIWindow_C::ExecuteUbergraph_CustomGUIWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow");
		
		UCustomGUIWindow_C_ExecuteUbergraph_CustomGUIWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGUIWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGUIWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C");
		return ptr;
	}

}


