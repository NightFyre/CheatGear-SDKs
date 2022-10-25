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
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ExpandableContainer_C*                   container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ExpandableContainer_C::SetParentContainer(class UUI_ExpandableContainer_C* container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer");
		
		UUI_ExpandableContainer_C_SetParentContainer_Params params {};
		params.container = container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::DisableAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm");
		
		UUI_ExpandableContainer_C_DisableAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::EnableAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm");
		
		UUI_ExpandableContainer_C_EnableAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::CheckAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm");
		
		UUI_ExpandableContainer_C_CheckAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::DecrementAlarmsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount");
		
		UUI_ExpandableContainer_C_DecrementAlarmsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::IncrementAlarmsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount");
		
		UUI_ExpandableContainer_C_IncrementAlarmsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::Minimize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize");
		
		UUI_ExpandableContainer_C_Minimize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::Maximize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize");
		
		UUI_ExpandableContainer_C_Maximize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct");
		
		UUI_ExpandableContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUI_ExpandableContainer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties_2
	 * 		Flags  -> ()
	 */
	void UUI_ExpandableContainer_C::OnSynchronizeProperties_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties_2");
		
		UUI_ExpandableContainer_C_OnSynchronizeProperties_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ExpandableContainer_C::ExecuteUbergraph_UI_ExpandableContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer");
		
		UUI_ExpandableContainer_C_ExecuteUbergraph_UI_ExpandableContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_ExpandableContainer_C*                   container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isMinimized                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ExpandableContainer_C::OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool isMinimized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature");
		
		UUI_ExpandableContainer_C_OnExpandChanged__DelegateSignature_Params params {};
		params.container = container;
		params.isMinimized = isMinimized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ExpandableContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ExpandableContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ExpandableContainer.UI_ExpandableContainer_C");
		return ptr;
	}

}


