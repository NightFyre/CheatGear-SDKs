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
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.CallModifiedEvent
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_OptionsRow_BaseClass_C::CallModifiedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.CallModifiedEvent");
		
		UBP_OptionsRow_BaseClass_C_CallModifiedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_BaseClass_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseEnter");
		
		UBP_OptionsRow_BaseClass_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_BaseClass_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnAddedToFocusPath");
		
		UBP_OptionsRow_BaseClass_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_OptionsRow_BaseClass_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnMouseLeave");
		
		UBP_OptionsRow_BaseClass_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_OptionsRow_BaseClass_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnRemovedFromFocusPath");
		
		UBP_OptionsRow_BaseClass_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.ExecuteUbergraph_BP_OptionsRow_BaseClass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_BaseClass_C::ExecuteUbergraph_BP_OptionsRow_BaseClass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.ExecuteUbergraph_BP_OptionsRow_BaseClass");
		
		UBP_OptionsRow_BaseClass_C_ExecuteUbergraph_BP_OptionsRow_BaseClass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionModified__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_BaseClass_C::OnOptionModified__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionModified__DelegateSignature");
		
		UBP_OptionsRow_BaseClass_C_OnOptionModified__DelegateSignature_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionUnhovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_BaseClass_C::OnOptionUnhovered__DelegateSignature(class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionUnhovered__DelegateSignature");
		
		UBP_OptionsRow_BaseClass_C_OnOptionUnhovered__DelegateSignature_Params params {};
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBP_OptionsRow_BaseClass_C*                  OptionWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_BaseClass_C::OnOptionHovered__DelegateSignature(const class FText& Title, const class FText& Description, class UBP_OptionsRow_BaseClass_C* OptionWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C.OnOptionHovered__DelegateSignature");
		
		UBP_OptionsRow_BaseClass_C_OnOptionHovered__DelegateSignature_Params params {};
		params.Title = Title;
		params.Description = Description;
		params.OptionWidget = OptionWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_BaseClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_BaseClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_BaseClass.BP_OptionsRow_BaseClass_C");
		return ptr;
	}

}


