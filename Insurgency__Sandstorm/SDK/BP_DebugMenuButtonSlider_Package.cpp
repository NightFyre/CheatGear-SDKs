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
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Get_HoverBG_BrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_DebugMenuButtonSlider_C::Get_HoverBG_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Get_HoverBG_BrushColor_1");
		
		UBP_DebugMenuButtonSlider_C_Get_HoverBG_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_DebugMenuButtonSlider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnFocusReceived");
		
		UBP_DebugMenuButtonSlider_C_OnFocusReceived_Params params {};
		params.MyGeometry = MyGeometry;
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Execute
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugMenuButtonSlider_C::Execute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Execute");
		
		UBP_DebugMenuButtonSlider_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugMenuButtonSlider_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");
		
		UBP_DebugMenuButtonSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DebugMenuButtonSlider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.PreConstruct");
		
		UBP_DebugMenuButtonSlider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_DebugMenuButtonSlider_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnAddedToFocusPath");
		
		UBP_DebugMenuButtonSlider_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_DebugMenuButtonSlider_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnRemovedFromFocusPath");
		
		UBP_DebugMenuButtonSlider_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_DebugMenuButtonSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseEnter");
		
		UBP_DebugMenuButtonSlider_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_DebugMenuButtonSlider_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnMouseLeave");
		
		UBP_DebugMenuButtonSlider_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenuButtonSlider_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UBP_DebugMenuButtonSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_DebugMenuButtonSlider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.Construct");
		
		UBP_DebugMenuButtonSlider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.ExecuteUbergraph_BP_DebugMenuButtonSlider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenuButtonSlider_C::ExecuteUbergraph_BP_DebugMenuButtonSlider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.ExecuteUbergraph_BP_DebugMenuButtonSlider");
		
		UBP_DebugMenuButtonSlider_C_ExecuteUbergraph_BP_DebugMenuButtonSlider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButtonSlider_C*                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenuButtonSlider_C::OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButtonSlider_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C.OnClicked__DelegateSignature");
		
		UBP_DebugMenuButtonSlider_C_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DebugMenuButtonSlider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DebugMenuButtonSlider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DebugMenuButtonSlider.BP_DebugMenuButtonSlider_C");
		return ptr;
	}

}


