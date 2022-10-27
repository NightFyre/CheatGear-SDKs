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
	 * 		Name   -> Function WindowsContent.WindowsContent_C.GetChildrenWindows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UCustomGUIWindow_C*>                  childrenWidgets                                            (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWindowsContent_C::GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetChildrenWindows");
		
		UWindowsContent_C_GetChildrenWindows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (childrenWidgets != nullptr)
			*childrenWidgets = params.childrenWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.AddChildWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomGUIWindow_C*                          childWindowRef                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindowsContent_C::AddChildWindow(class UCustomGUIWindow_C* childWindowRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.AddChildWindow");
		
		UWindowsContent_C_AddChildWindow_Params params {};
		params.childWindowRef = childWindowRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent
	 * 		Flags  -> ()
	 */
	void UWindowsContent_C::NotifyParentOnAlarmSwitchedOffOnContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent");
		
		UWindowsContent_C_NotifyParentOnAlarmSwitchedOffOnContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent
	 * 		Flags  -> ()
	 */
	void UWindowsContent_C::NotifyParentOnAlarmRaisedOnContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent");
		
		UWindowsContent_C_NotifyParentOnAlarmRaisedOnContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged
	 * 		Flags  -> ()
	 */
	void UWindowsContent_C::NotifyParentOnWindowsContentSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged");
		
		UWindowsContent_C_NotifyParentOnWindowsContentSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.SetParentWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomGUIWindow_C*                          parentWindowToSet                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindowsContent_C::SetParentWindow(class UCustomGUIWindow_C* parentWindowToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.SetParentWindow");
		
		UWindowsContent_C_SetParentWindow_Params params {};
		params.parentWindowToSet = parentWindowToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.GetParentWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCustomGUIWindow_C*                          parentWindow                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindowsContent_C::GetParentWindow(class UCustomGUIWindow_C** parentWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetParentWindow");
		
		UWindowsContent_C_GetParentWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (parentWindow != nullptr)
			*parentWindow = params.parentWindow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.WindowContentSizeChanged
	 * 		Flags  -> ()
	 */
	void UWindowsContent_C::WindowContentSizeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.WindowContentSizeChanged");
		
		UWindowsContent_C_WindowContentSizeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWindowsContent_C::ExecuteUbergraph_WindowsContent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent");
		
		UWindowsContent_C_ExecuteUbergraph_WindowsContent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWindowsContent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowsContent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C");
		return ptr;
	}

}


