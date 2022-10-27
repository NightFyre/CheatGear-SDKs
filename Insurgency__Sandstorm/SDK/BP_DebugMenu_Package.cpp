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
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.PopulateMusicEvents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugMenu_C::PopulateMusicEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.PopulateMusicEvents");
		
		UBP_DebugMenu_C_PopulateMusicEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OnSelectGoBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::OnSelectGoBack(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OnSelectGoBack");
		
		UBP_DebugMenu_C_OnSelectGoBack_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.IsAdmin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsAdmin                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DebugMenu_C::IsAdmin(bool* bIsAdmin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.IsAdmin");
		
		UBP_DebugMenu_C_IsAdmin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAdmin != nullptr)
			*bIsAdmin = params.bIsAdmin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BindingServerBtnEnabled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBP_DebugMenu_C::BindingServerBtnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BindingServerBtnEnabled");
		
		UBP_DebugMenu_C_BindingServerBtnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BackDefault
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_DebugMenuButton_C*                       SelectedButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BackDefault(class UBP_DebugMenuButton_C* SelectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BackDefault");
		
		UBP_DebugMenu_C_BackDefault_Params params {};
		params.SelectedButton = SelectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponUpgrades
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugMenu_C::PopulateWeaponUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponUpgrades");
		
		UBP_DebugMenu_C_PopulateWeaponUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugMenu_C::PopulateWeaponList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.PopulateWeaponList");
		
		UBP_DebugMenu_C_PopulateWeaponList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.ToggleDebugMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_DebugMenu_C::ToggleDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.ToggleDebugMenu");
		
		UBP_DebugMenu_C_ToggleDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_DebugMenu_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.GetText_1");
		
		UBP_DebugMenu_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_DebugMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OnKeyDown");
		
		UBP_DebugMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OnFocusReceived
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	struct FEventReply UBP_DebugMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OnFocusReceived");
		
		UBP_DebugMenu_C_OnFocusReceived_Params params {};
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
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.GetWidgetToFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::GetWidgetToFocus(class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.GetWidgetToFocus");
		
		UBP_DebugMenu_C_GetWidgetToFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.PopHistory
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHasData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBP_DebugMenuPages                                 Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::PopHistory(bool* bHasData, EBP_DebugMenuPages* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.PopHistory");
		
		UBP_DebugMenu_C_PopHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasData != nullptr)
			*bHasData = params.bHasData;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.PushHistory
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBP_DebugMenuPages                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::PushHistory(EBP_DebugMenuPages Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.PushHistory");
		
		UBP_DebugMenu_C_PushHistory_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.GetTitleText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_DebugMenu_C::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.GetTitleText");
		
		UBP_DebugMenu_C_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.Back
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCloseOnRoot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_DebugMenu_C::Back(bool bCloseOnRoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.Back");
		
		UBP_DebugMenu_C_Back_Params params {};
		params.bCloseOnRoot = bCloseOnRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OnChildCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::OnChildCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OnChildCommand");
		
		UBP_DebugMenu_C_OnChildCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OpenCommandList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBP_DebugMenuPages                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::OpenCommandList(EBP_DebugMenuPages Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OpenCommandList");
		
		UBP_DebugMenu_C_OpenCommandList_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_DebugMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.Construct");
		
		UBP_DebugMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnChangeLevelSubmenu_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnLevelOpenCompoundFire_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnSubmenuAI_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnSubmenuPlayer_K2Node_ComponentBoundEvent_110_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnGiveWeapon_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnGiveWeaponUpgrade_K2Node_ComponentBoundEvent_133_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnSubmenuVisuals_K2Node_ComponentBoundEvent_95_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnToggleBulletImpacts_K2Node_ComponentBoundEvent_163_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnToggleBulletTraces_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnSubmenuServer_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnServerChangeLevel_K2Node_ComponentBoundEvent_222_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnServerEndRoundVictory_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnServerEndRoundDefeat_K2Node_ComponentBoundEvent_85_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.OnMusicEventSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::OnMusicEventSelected(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.OnMusicEventSelected");
		
		UBP_DebugMenu_C_OnMusicEventSelected_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BP_DebugMenuButton_C_2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnBeginProfiling_K2Node_ComponentBoundEvent_60_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnBeginProfilingMatch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_DebugMenuButton_C*                       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__BtnSkipMatchWaiting_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Key = Key;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_DebugMenu_C::BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__CloseImageButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__HurtMeHealthAmount_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_DebugMenu_C::BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__ZCords_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_DebugMenu_C::BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__YCords_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_DebugMenu_C::BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature");
		
		UBP_DebugMenu_C_BndEvt__XCords_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DebugMenu.BP_DebugMenu_C.ExecuteUbergraph_BP_DebugMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DebugMenu_C::ExecuteUbergraph_BP_DebugMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DebugMenu.BP_DebugMenu_C.ExecuteUbergraph_BP_DebugMenu");
		
		UBP_DebugMenu_C_ExecuteUbergraph_BP_DebugMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DebugMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DebugMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DebugMenu.BP_DebugMenu_C");
		return ptr;
	}

}


