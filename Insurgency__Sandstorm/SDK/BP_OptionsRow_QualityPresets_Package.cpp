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
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.FindNextOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MovingLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWidget*                                     OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_QualityPresets_C::FindNextOption(bool MovingLeft, class UWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.FindNextOption");
		
		UBP_OptionsRow_QualityPresets_C_FindNextOption_Params params {};
		params.MovingLeft = MovingLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_OptionsRow_QualityPresets_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnCustomNavigation");
		
		UBP_OptionsRow_QualityPresets_C_OnCustomNavigation_Params params {};
		params.Widget = Widget;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_OptionsRow_QualityPresets_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnFocusReceived");
		
		UBP_OptionsRow_QualityPresets_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_OptionsRow_QualityPresets_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.PreConstruct");
		
		UBP_OptionsRow_QualityPresets_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetLow_K2Node_ComponentBoundEvent_46_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetMedium_K2Node_ComponentBoundEvent_55_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetHigh_K2Node_ComponentBoundEvent_69_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetVeryHigh_K2Node_ComponentBoundEvent_80_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_BndEvt__OptionPresetAuto_K2Node_ComponentBoundEvent_92_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_OptionsRow_QualityPresets_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.Construct");
		
		UBP_OptionsRow_QualityPresets_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.ExecuteUbergraph_BP_OptionsRow_QualityPresets
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_QualityPresets_C::ExecuteUbergraph_BP_OptionsRow_QualityPresets(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.ExecuteUbergraph_BP_OptionsRow_QualityPresets");
		
		UBP_OptionsRow_QualityPresets_C_ExecuteUbergraph_BP_OptionsRow_QualityPresets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnQualityPresetChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OptionsRow_QualityPresets_C::OnQualityPresetChanged__DelegateSignature(int32_t Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C.OnQualityPresetChanged__DelegateSignature");
		
		UBP_OptionsRow_QualityPresets_C_OnQualityPresetChanged__DelegateSignature_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OptionsRow_QualityPresets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OptionsRow_QualityPresets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_OptionsRow_QualityPresets.BP_OptionsRow_QualityPresets_C");
		return ptr;
	}

}


