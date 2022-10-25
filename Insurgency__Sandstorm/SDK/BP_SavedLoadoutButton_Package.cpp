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
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_SavedLoadoutButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnFocusReceived");
		
		UBP_SavedLoadoutButton_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_SavedLoadoutButton_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnKeyDown");
		
		UBP_SavedLoadoutButton_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateDefaultSupplyCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlayerClass*                                PlayerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SupplyCost                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SavedLoadoutButton_C::CalculateDefaultSupplyCost(class UPlayerClass* PlayerClass, int32_t* SupplyCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateDefaultSupplyCost");
		
		UBP_SavedLoadoutButton_C_CalculateDefaultSupplyCost_Params params {};
		params.PlayerClass = PlayerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SupplyCost != nullptr)
			*SupplyCost = params.SupplyCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.UpdateSupplyCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SavedLoadoutButton_C::UpdateSupplyCost(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.UpdateSupplyCost");
		
		UBP_SavedLoadoutButton_C_UpdateSupplyCost_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.HighlightActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::HighlightActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.HighlightActive");
		
		UBP_SavedLoadoutButton_C_HighlightActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateTotalSupplyCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SupplyCost                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SavedLoadoutButton_C::CalculateTotalSupplyCost(int32_t* SupplyCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.CalculateTotalSupplyCost");
		
		UBP_SavedLoadoutButton_C_CalculateTotalSupplyCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SupplyCost != nullptr)
			*SupplyCost = params.SupplyCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.Get_RemoveButtonBg_BrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_SavedLoadoutButton_C::Get_RemoveButtonBg_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.Get_RemoveButtonBg_BrushColor_1");
		
		UBP_SavedLoadoutButton_C_Get_RemoveButtonBg_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SavedLoadoutButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.PreConstruct");
		
		UBP_SavedLoadoutButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SavedLoadoutButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseEnter");
		
		UBP_SavedLoadoutButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_SavedLoadoutButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnMouseLeave");
		
		UBP_SavedLoadoutButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHovered");
		
		UBP_SavedLoadoutButton_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnhovered");
		
		UBP_SavedLoadoutButton_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnAddedToFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SavedLoadoutButton_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnAddedToFocusPath");
		
		UBP_SavedLoadoutButton_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_SavedLoadoutButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRemovedFromFocusPath");
		
		UBP_SavedLoadoutButton_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_BndEvt__RenameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.ExecuteUbergraph_BP_SavedLoadoutButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SavedLoadoutButton_C::ExecuteUbergraph_BP_SavedLoadoutButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.ExecuteUbergraph_BP_SavedLoadoutButton");
		
		UBP_SavedLoadoutButton_C_ExecuteUbergraph_BP_SavedLoadoutButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SavedLoadoutButton_C::OnUnHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnUnHover__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_OnUnHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SupportRemoval                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SavedLoadoutButton_C::OnHover__DelegateSignature(int32_t NewParam, bool SupportRemoval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnHover__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_OnHover__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		params.SupportRemoval = SupportRemoval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRenameClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSavedLoadout                               Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SavedLoadoutButton_C::OnRenameClicked__DelegateSignature(int32_t OutLoadoutIndex, const struct FSavedLoadout& Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnRenameClicked__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_OnRenameClicked__DelegateSignature_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSavedLoadout                               Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_SavedLoadoutButton_C::OnLoadoutRemoved__DelegateSignature(int32_t OutLoadoutIndex, const struct FSavedLoadout& Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutRemoved__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_OnLoadoutRemoved__DelegateSignature_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutLoadoutIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SavedLoadoutButton_C::OnLoadoutClicked__DelegateSignature(int32_t OutLoadoutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SavedLoadoutButton.BP_SavedLoadoutButton_C.OnLoadoutClicked__DelegateSignature");
		
		UBP_SavedLoadoutButton_C_OnLoadoutClicked__DelegateSignature_Params params {};
		params.OutLoadoutIndex = OutLoadoutIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SavedLoadoutButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SavedLoadoutButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SavedLoadoutButton.BP_SavedLoadoutButton_C");
		return ptr;
	}

}


