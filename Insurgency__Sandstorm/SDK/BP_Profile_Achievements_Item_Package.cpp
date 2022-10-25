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
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.UpdateVisibilityForPlatform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Profile_Achievements_Item_C::UpdateVisibilityForPlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.UpdateVisibilityForPlatform");
		
		UBP_Profile_Achievements_Item_C_UpdateVisibilityForPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_Profile_Achievements_Item_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.OnFocusReceived");
		
		UBP_Profile_Achievements_Item_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Get_AchievmentIcon_Brush_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UBP_Profile_Achievements_Item_C::Get_AchievmentIcon_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Get_AchievmentIcon_Brush_1");
		
		UBP_Profile_Achievements_Item_C_Get_AchievmentIcon_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.HalfOpacityIfNotAchieved
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_Profile_Achievements_Item_C::HalfOpacityIfNotAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.HalfOpacityIfNotAchieved");
		
		UBP_Profile_Achievements_Item_C_HalfOpacityIfNotAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfNotAchieved
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Achievements_Item_C::VisibleIfNotAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfNotAchieved");
		
		UBP_Profile_Achievements_Item_C_VisibleIfNotAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfAchieved
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_Profile_Achievements_Item_C::VisibleIfAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.VisibleIfAchieved");
		
		UBP_Profile_Achievements_Item_C_VisibleIfAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Profile_Achievements_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.Construct");
		
		UBP_Profile_Achievements_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Achievements_Item_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBP_Profile_Achievements_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_Profile_Achievements_Item_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_Profile_Achievements_Item_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.ExecuteUbergraph_BP_Profile_Achievements_Item
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Profile_Achievements_Item_C::ExecuteUbergraph_BP_Profile_Achievements_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C.ExecuteUbergraph_BP_Profile_Achievements_Item");
		
		UBP_Profile_Achievements_Item_C_ExecuteUbergraph_BP_Profile_Achievements_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Profile_Achievements_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Profile_Achievements_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Profile_Achievements_Item.BP_Profile_Achievements_Item_C");
		return ptr;
	}

}


