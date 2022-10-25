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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ToggleDayNight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::ToggleDayNight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ToggleDayNight");
		
		UBP_MainMenu_Tutorials_Training_C_ToggleDayNight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Training_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnKeyDown");
		
		UBP_MainMenu_Tutorials_Training_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ChangeDescriptionOnPS4
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::ChangeDescriptionOnPS4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ChangeDescriptionOnPS4");
		
		UBP_MainMenu_Tutorials_Training_C_ChangeDescriptionOnPS4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Get Text Block Time Text
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenu_Tutorials_Training_C::Get_Text_Block_Time_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Get Text Block Time Text");
		
		UBP_MainMenu_Tutorials_Training_C_Get_Text_Block_Time_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.CheckShouldHighlightTrainingBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::CheckShouldHighlightTrainingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.CheckShouldHighlightTrainingBox");
		
		UBP_MainMenu_Tutorials_Training_C_CheckShouldHighlightTrainingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_MainMenu_Tutorials_Training_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnFocusReceived");
		
		UBP_MainMenu_Tutorials_Training_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnCustomNavigation
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBP_MainMenu_Tutorials_Training_C::OnCustomNavigation(class UWidget* Widget, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnCustomNavigation");
		
		UBP_MainMenu_Tutorials_Training_C_OnCustomNavigation_Params params {};
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
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.GetBreadcrumbData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Top                                                        (Parm, OutParm)
	 * 		class FText                                        Bottom                                                     (Parm, OutParm)
	 */
	void UBP_MainMenu_Tutorials_Training_C::GetBreadcrumbData(class FText* Top, class FText* Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.GetBreadcrumbData");
		
		UBP_MainMenu_Tutorials_Training_C_GetBreadcrumbData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Top != nullptr)
			*Top = params.Top;
		if (Bottom != nullptr)
			*Bottom = params.Bottom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnPageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EnumMainMenuPage                                   NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Training_C::OnPageSelected(EnumMainMenuPage NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnPageSelected");
		
		UBP_MainMenu_Tutorials_Training_C_OnPageSelected_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_113_OnButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_332_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_360_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_379_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_393_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_410_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.Construct");
		
		UBP_MainMenu_Tutorials_Training_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButton_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__CombatTrainingButton_K2Node_ComponentBoundEvent_4_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_5_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__LessonsButton_K2Node_ComponentBoundEvent_6_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_32_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_BndEvt__RangeButtonDayNight_K2Node_ComponentBoundEvent_33_OnButtonFocusEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Training
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Training_C::ExecuteUbergraph_BP_MainMenu_Tutorials_Training(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Training");
		
		UBP_MainMenu_Tutorials_Training_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Training_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnWantsLessons__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::OnWantsLessons__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnWantsLessons__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_OnWantsLessons__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnNavigateBack__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Training_C::OnNavigateBack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C.OnNavigateBack__DelegateSignature");
		
		UBP_MainMenu_Tutorials_Training_C_OnNavigateBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Tutorials_Training_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Tutorials_Training_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Training.BP_MainMenu_Tutorials_Training_C");
		return ptr;
	}

}


