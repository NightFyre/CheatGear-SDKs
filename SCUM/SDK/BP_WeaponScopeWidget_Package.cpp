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
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponScopeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick");
		
		UBP_WeaponScopeWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
	 * 		Flags  -> ()
	 */
	void UBP_WeaponScopeWidget_C::OnShowElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements");
		
		UBP_WeaponScopeWidget_C_OnShowElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
	 * 		Flags  -> ()
	 */
	void UBP_WeaponScopeWidget_C::OnHideElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements");
		
		UBP_WeaponScopeWidget_C_OnHideElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
	 * 		Flags  -> ()
	 */
	void UBP_WeaponScopeWidget_C::OnConstructFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished");
		
		UBP_WeaponScopeWidget_C_OnConstructFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UBP_WeaponScopeWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");
		
		UBP_WeaponScopeWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WeaponScopeWidget_C::ExecuteUbergraph_BP_WeaponScopeWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget");
		
		UBP_WeaponScopeWidget_C_ExecuteUbergraph_BP_WeaponScopeWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WeaponScopeWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WeaponScopeWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WeaponScopeWidget.BP_WeaponScopeWidget_C");
		return ptr;
	}

}


