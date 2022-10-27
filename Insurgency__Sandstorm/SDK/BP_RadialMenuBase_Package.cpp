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
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetSelectedRadialDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERadialMenuDirection                               NewDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::SetSelectedRadialDirection(ERadialMenuDirection NewDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetSelectedRadialDirection");
		
		UBP_RadialMenuBase_C_SetSelectedRadialDirection_Params params {};
		params.NewDirection = NewDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateVolatileCommands
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::UpdateVolatileCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateVolatileCommands");
		
		UBP_RadialMenuBase_C_UpdateVolatileCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.CreateRadialCommand
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRadialCommand                              RadialCommand                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RadialMenuBase_C::CreateRadialCommand(const struct FRadialCommand& RadialCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.CreateRadialCommand");
		
		UBP_RadialMenuBase_C_CreateRadialCommand_Params params {};
		params.RadialCommand = RadialCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.ShouldSendCommand
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSendCommand                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::ShouldSendCommand(bool* bSendCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.ShouldSendCommand");
		
		UBP_RadialMenuBase_C_ShouldSendCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSendCommand != nullptr)
			*bSendCommand = params.bSendCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.DoesSelectedOptionRequireClick
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bRequireClick                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::DoesSelectedOptionRequireClick(bool* bRequireClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.DoesSelectedOptionRequireClick");
		
		UBP_RadialMenuBase_C_DoesSelectedOptionRequireClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRequireClick != nullptr)
			*bRequireClick = params.bRequireClick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.ResetToCenter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::ResetToCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.ResetToCenter");
		
		UBP_RadialMenuBase_C_ResetToCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetupInputActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::SetupInputActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetupInputActions");
		
		UBP_RadialMenuBase_C_SetupInputActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsActiveRadialMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::IsActiveRadialMenu(bool* bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsActiveRadialMenu");
		
		UBP_RadialMenuBase_C_IsActiveRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsActive != nullptr)
			*bIsActive = params.bIsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateRadialMenuClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewRadialClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::UpdateRadialMenuClass(class UClass* NewRadialClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateRadialMenuClass");
		
		UBP_RadialMenuBase_C_UpdateRadialMenuClass_Params params {};
		params.NewRadialClass = NewRadialClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCommandWidgetForDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_RadialCommand_C*                         Command                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::GetCommandWidgetForDirection(ERadialMenuDirection Direction, class UBP_RadialCommand_C** Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCommandWidgetForDirection");
		
		UBP_RadialMenuBase_C_GetCommandWidgetForDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Command != nullptr)
			*Command = params.Command;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetRadialCommandFromDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRadialCommand                              Command                                                    (Parm, OutParm)
	 */
	void UBP_RadialMenuBase_C::GetRadialCommandFromDirection(ERadialMenuDirection Direction, struct FRadialCommand* Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetRadialCommandFromDirection");
		
		UBP_RadialMenuBase_C_GetRadialCommandFromDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Command != nullptr)
			*Command = params.Command;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsHelpTextVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_RadialMenuBase_C::IsHelpTextVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsHelpTextVisible");
		
		UBP_RadialMenuBase_C_IsHelpTextVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetHelpText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_RadialMenuBase_C::GetHelpText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetHelpText");
		
		UBP_RadialMenuBase_C_GetHelpText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideRadialOnOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::HideRadialOnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideRadialOnOwner");
		
		UBP_RadialMenuBase_C_HideRadialOnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSendCommand                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::HideMenu(bool bSendCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideMenu");
		
		UBP_RadialMenuBase_C_HideMenu_Params params {};
		params.bSendCommand = bSendCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_RadialMenuBase_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnKeyDown");
		
		UBP_RadialMenuBase_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.AddCommandWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_RadialCommand_C*                         CommandWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVolatile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::AddCommandWidget(class UBP_RadialCommand_C* CommandWidget, ERadialMenuDirection Direction, bool bVolatile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.AddCommandWidget");
		
		UBP_RadialMenuBase_C_AddCommandWidget_Params params {};
		params.CommandWidget = CommandWidget;
		params.Direction = Direction;
		params.bVolatile = bVolatile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateCursorPosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::UpdateCursorPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateCursorPosition");
		
		UBP_RadialMenuBase_C_UpdateCursorPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateMouseInputAngleIndicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::UpdateMouseInputAngleIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateMouseInputAngleIndicator");
		
		UBP_RadialMenuBase_C_UpdateMouseInputAngleIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetRadialDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::SetRadialDirection(ERadialMenuDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetRadialDirection");
		
		UBP_RadialMenuBase_C_SetRadialDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCursorCenterOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::GetCursorCenterOffset(float* LocationX, float* LocationY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCursorCenterOffset");
		
		UBP_RadialMenuBase_C_GetCursorCenterOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocationX != nullptr)
			*LocationX = params.LocationX;
		if (LocationY != nullptr)
			*LocationY = params.LocationY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateSelectedRadialDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::UpdateSelectedRadialDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateSelectedRadialDirection");
		
		UBP_RadialMenuBase_C_UpdateSelectedRadialDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.DefaultSetupRadialMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::DefaultSetupRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.DefaultSetupRadialMenu");
		
		UBP_RadialMenuBase_C_DefaultSetupRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.Construct");
		
		UBP_RadialMenuBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.Tick");
		
		UBP_RadialMenuBase_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuBase_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.PreConstruct");
		
		UBP_RadialMenuBase_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 HiddenRadial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::DismissMenuAndSendCommand(class UUserWidget* HiddenRadial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommand");
		
		UBP_RadialMenuBase_C_DismissMenuAndSendCommand_Params params {};
		params.HiddenRadial = HiddenRadial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::DismissMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenu");
		
		UBP_RadialMenuBase_C_DismissMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommandClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuBase_C::DismissMenuAndSendCommandClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommandClicked");
		
		UBP_RadialMenuBase_C_DismissMenuAndSendCommandClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnShowRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 ShownRadial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::OnShowRadialMenu(class UUserWidget* ShownRadial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnShowRadialMenu");
		
		UBP_RadialMenuBase_C_OnShowRadialMenu_Params params {};
		params.ShownRadial = ShownRadial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.ExecuteUbergraph_BP_RadialMenuBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::ExecuteUbergraph_BP_RadialMenuBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.ExecuteUbergraph_BP_RadialMenuBase");
		
		UBP_RadialMenuBase_C_ExecuteUbergraph_BP_RadialMenuBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnHighlightedDirectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::OnHighlightedDirectionChanged__DelegateSignature(ERadialMenuDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnHighlightedDirectionChanged__DelegateSignature");
		
		UBP_RadialMenuBase_C_OnHighlightedDirectionChanged__DelegateSignature_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnSendCommand__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuBase_C::OnSendCommand__DelegateSignature(ERadialMenuDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnSendCommand__DelegateSignature");
		
		UBP_RadialMenuBase_C_OnSendCommand__DelegateSignature_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RadialMenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RadialMenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RadialMenuBase.BP_RadialMenuBase_C");
		return ptr;
	}

}


