/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x006EE2E0
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.RemoveFromMenuStack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFBaseMenu::RemoveFromMenuStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.RemoveFromMenuStack");
		
		UDFBaseMenu_RemoveFromMenuStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuUncovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFBaseMenu::ReceiveOnMenuUncovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuUncovered");
		
		UDFBaseMenu_ReceiveOnMenuUncovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPush
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFBaseMenu::ReceiveOnMenuPush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPush");
		
		UDFBaseMenu_ReceiveOnMenuPush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPop
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFBaseMenu::ReceiveOnMenuPop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuPop");
		
		UDFBaseMenu_ReceiveOnMenuPop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuCovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFBaseMenu::ReceiveOnMenuCovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.ReceiveOnMenuCovered");
		
		UDFBaseMenu_ReceiveOnMenuCovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDE30
	 * 		Name   -> Function DonkehFrameworkUI.DFBaseMenu.IsTopOfMenuStack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFBaseMenu::IsTopOfMenuStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFBaseMenu.IsTopOfMenuStack");
		
		UDFBaseMenu_IsTopOfMenuStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFBaseMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFBaseMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFBaseMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE900
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetBase.TestPrerequisites
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInvokeEvents                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFContextualWidgetBase::TestPrerequisites(bool bInvokeEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetBase.TestPrerequisites");
		
		UDFContextualWidgetBase_TestPrerequisites_Params params {};
		params.bInvokeEvents = bInvokeEvents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE150
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisitesMet
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UDFContextualWidgetBase::PrerequisitesMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisitesMet");
		
		UDFContextualWidgetBase_PrerequisitesMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE0C0
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisiteNotMet
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFContextualWidgetPrerequisiteBase*         FailedPrereq                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFContextualWidgetBase::PrerequisiteNotMet(class UDFContextualWidgetPrerequisiteBase* FailedPrereq)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetBase.PrerequisiteNotMet");
		
		UDFContextualWidgetBase_PrerequisiteNotMet_Params params {};
		params.FailedPrereq = FailedPrereq;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFContextualWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFContextualWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFContextualWidgetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE880
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.TestPrerequisite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFContextualWidgetPrerequisiteBase::TestPrerequisite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.TestPrerequisite");
		
		UDFContextualWidgetPrerequisiteBase_TestPrerequisite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE600
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.SatisfiesPrerequisite
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	bool UDFContextualWidgetPrerequisiteBase::SatisfiesPrerequisite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.SatisfiesPrerequisite");
		
		UDFContextualWidgetPrerequisiteBase_SatisfiesPrerequisite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDA30
	 * 		Name   -> Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.GetWidgetOuter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFContextualWidgetBase* UDFContextualWidgetPrerequisiteBase::GetWidgetOuter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase.GetWidgetOuter");
		
		UDFContextualWidgetPrerequisiteBase_GetWidgetOuter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFContextualWidgetPrerequisiteBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFContextualWidgetPrerequisiteBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFContextualWidgetPrerequisiteBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE990
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManager.Top
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFBaseMenu* UDFMenuManager::Top()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManager.Top");
		
		UDFMenuManager_Top_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE300
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManager.RemoveMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFBaseMenu*                                 MenuToRemove                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMenuManager::RemoveMenu(class UDFBaseMenu* MenuToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManager.RemoveMenu");
		
		UDFMenuManager_RemoveMenu_Params params {};
		params.MenuToRemove = MenuToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE0A0
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManager.PopMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFMenuManager::PopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManager.PopMenu");
		
		UDFMenuManager_PopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED110
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManager.ClearMenuStack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFMenuManager::ClearMenuStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManager.ClearMenuStack");
		
		UDFMenuManager_ClearMenuStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ECEF0
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManager.ActivateMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFBaseMenu*                                 MenuToAdd                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMenuActivationMode                                ActivationMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowMouseCursor                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUIOnlyInput                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMenuManager::ActivateMenu(class UDFBaseMenu* MenuToAdd, EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManager.ActivateMenu");
		
		UDFMenuManager_ActivateMenu_Params params {};
		params.MenuToAdd = MenuToAdd;
		params.ActivationMode = ActivationMode;
		params.bShowMouseCursor = bShowMouseCursor;
		params.bUIOnlyInput = bUIOnlyInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFMenuManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFMenuManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFMenuManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED7E0
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.GetMenuManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFMenuManager* UDFMenuManagerBlueprintFunctions::STATIC_GetMenuManager(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.GetMenuManager");
		
		UDFMenuManagerBlueprintFunctions_GetMenuManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED230
	 * 		Name   -> Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.CreateAndActivate
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      MenuWidgetType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMenuActivationMode                                ActivationMode                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowMouseCursor                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUIOnlyInput                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFBaseMenu* UDFMenuManagerBlueprintFunctions::STATIC_CreateAndActivate(class UObject* WorldContextObject, class UClass* MenuWidgetType, class APlayerController* OwningPlayer, EMenuActivationMode ActivationMode, bool bShowMouseCursor, bool bUIOnlyInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMenuManagerBlueprintFunctions.CreateAndActivate");
		
		UDFMenuManagerBlueprintFunctions_CreateAndActivate_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MenuWidgetType = MenuWidgetType;
		params.OwningPlayer = OwningPlayer;
		params.ActivationMode = ActivationMode;
		params.bShowMouseCursor = bShowMouseCursor;
		params.bUIOnlyInput = bUIOnlyInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFMenuManagerBlueprintFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFMenuManagerBlueprintFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFMenuManagerBlueprintFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EEAB0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.UpdateZoomValue
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewZoomValue                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMinimap::UpdateZoomValue(float NewZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.UpdateZoomValue");
		
		UDFMinimap_UpdateZoomValue_Params params {};
		params.NewZoomValue = NewZoomValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE9E0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.UpdateMapPos
	 * 		Flags  -> (Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   NewMapPos                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMinimap::UpdateMapPos(const struct FVector2D& NewMapPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.UpdateMapPos");
		
		UDFMinimap_UpdateMapPos_Params params {};
		params.NewMapPos = NewMapPos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE7D0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.SetMapDirty
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDFMinimap::SetMapDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.SetMapDirty");
		
		UDFMinimap_SetMapDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE550
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.RemovePOIByActorClass
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      POIActorClass                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::RemovePOIByActorClass(class UClass* POIActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.RemovePOIByActorClass");
		
		UDFMinimap_RemovePOIByActorClass_Params params {};
		params.POIActorClass = POIActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE4B0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.RemovePOIByActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      POIActorToRemove                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::RemovePOIByActor(class AActor* POIActorToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.RemovePOIByActor");
		
		UDFMinimap_RemovePOIByActor_Params params {};
		params.POIActorToRemove = POIActorToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE420
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.RemovePOIAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::RemovePOIAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.RemovePOIAt");
		
		UDFMinimap_RemovePOIAt_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE380
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.RemovePOI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POIToRemove                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::RemovePOI(class UDFPOIWidget* POIToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.RemovePOI");
		
		UDFMinimap_RemovePOI_Params params {};
		params.POIToRemove = POIToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.ReceiveOnPOISelectionStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POI                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMinimap::ReceiveOnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.ReceiveOnPOISelectionStateChanged");
		
		UDFMinimap_ReceiveOnPOISelectionStateChanged_Params params {};
		params.POI = POI;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE170
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.ProjectWorldLocationToMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   MapLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::ProjectWorldLocationToMap(const struct FVector& WorldLocation, struct FVector2D* MapLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.ProjectWorldLocationToMap");
		
		UDFMinimap_ProjectWorldLocationToMap_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapLocation != nullptr)
			*MapLocation = params.MapLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDFD0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.OnPOISelectionStateChanged
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POI                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFMinimap::OnPOISelectionStateChanged(class UDFPOIWidget* POI, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.OnPOISelectionStateChanged");
		
		UDFMinimap_OnPOISelectionStateChanged_Params params {};
		params.POI = POI;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDAB0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.HasPOI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POI                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::HasPOI(class UDFPOIWidget* POI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.HasPOI");
		
		UDFMinimap_HasPOI_Params params {};
		params.POI = POI;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDA50
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.HasAnyPOIs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFMinimap::HasAnyPOIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.HasAnyPOIs");
		
		UDFMinimap_HasAnyPOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED960
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.GetPOIIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UDFPOIWidget*                                POI                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDFMinimap::GetPOIIndex(class UDFPOIWidget* POI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.GetPOIIndex");
		
		UDFMinimap_GetPOIIndex_Params params {};
		params.POI = POI;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED930
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.GetPOICount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDFMinimap::GetPOICount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.GetPOICount");
		
		UDFMinimap_GetPOICount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED8A0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.GetPOIAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFPOIWidget* UDFMinimap::GetPOIAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.GetPOIAt");
		
		UDFMinimap_GetPOIAt_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED7A0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.GetMapSizeLocal
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UDFMinimap::GetMapSizeLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.GetMapSizeLocal");
		
		UDFMinimap_GetMapSizeLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED740
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.GetMapSizeAbsolute
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UDFMinimap::GetMapSizeAbsolute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.GetMapSizeAbsolute");
		
		UDFMinimap_GetMapSizeAbsolute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED4E0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.FindPOIByActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      POIActor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDFPOIWidget*                                OutFoundPOI                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::FindPOIByActor(class AActor* POIActor, class UDFPOIWidget** OutFoundPOI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.FindPOIByActor");
		
		UDFMinimap_FindPOIByActor_Params params {};
		params.POIActor = POIActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundPOI != nullptr)
			*OutFoundPOI = params.OutFoundPOI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED3E0
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.DeprojectMapLocationToWorld
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   MapLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::DeprojectMapLocationToWorld(const struct FVector2D& MapLocation, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.DeprojectMapLocationToWorld");
		
		UDFMinimap_DeprojectMapLocationToWorld_Params params {};
		params.MapLocation = MapLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED160
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.ConvertMapLocationToLocalWidgetLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   MapLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   WidgetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFMinimap::ConvertMapLocationToLocalWidgetLocation(const struct FVector2D& MapLocation, struct FVector2D* WidgetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.ConvertMapLocationToLocalWidgetLocation");
		
		UDFMinimap_ConvertMapLocationToLocalWidgetLocation_Params params {};
		params.MapLocation = MapLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetLocation != nullptr)
			*WidgetLocation = params.WidgetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED130
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.ClearPOIs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UDFMinimap::ClearPOIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.ClearPOIs");
		
		UDFMinimap_ClearPOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED040
	 * 		Name   -> Function DonkehFrameworkUI.DFMinimap.AddNewPOI
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      POIActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDFPOIWidget* UDFMinimap::AddNewPOI(class AActor* POIActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFMinimap.AddNewPOI");
		
		UDFMinimap_AddNewPOI_Params params {};
		params.POIActor = POIActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFMinimap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFMinimap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFMinimap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE9C0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.UnregisterPOI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFPOIComponent::UnregisterPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.UnregisterPOI");
		
		UDFPOIComponent_UnregisterPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE260
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.RegisterPOI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDFMinimap*                                  MinimapWidget                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPOIComponent::RegisterPOI(class UDFMinimap* MinimapWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.RegisterPOI");
		
		UDFPOIComponent_RegisterPOI_Params params {};
		params.MinimapWidget = MinimapWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDE60
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.OnMinimapLateInit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDFMinimap*                                  NewMinimap                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPOIComponent::OnMinimapLateInit(class UDFMinimap* NewMinimap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.OnMinimapLateInit");
		
		UDFPOIComponent_OnMinimapLateInit_Params params {};
		params.NewMinimap = NewMinimap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDDD0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.IsPOIRegistered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIComponent::IsPOIRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.IsPOIRegistered");
		
		UDFPOIComponent_IsPOIRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED9F0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.GetPOIWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFPOIWidget* UDFPOIComponent::GetPOIWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.GetPOIWidget");
		
		UDFPOIComponent_GetPOIWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED860
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIComponent.GetMinimap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDFMinimap* UDFPOIComponent::GetMinimap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIComponent.GetMinimap");
		
		UDFPOIComponent_GetMinimap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPOIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPOIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFPOIComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EEA90
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.UpdateRotation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDFPOIWidget::UpdateRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.UpdateRotation");
		
		UDFPOIWidget_UpdateRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EEA70
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.UpdatePosition
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UDFPOIWidget::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.UpdatePosition");
		
		UDFPOIWidget_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE7F0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.SetPOISelectionState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewSelected                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPOIWidget::SetPOISelectionState(bool bNewSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.SetPOISelectionState");
		
		UDFPOIWidget_SetPOISelectionState_Params params {};
		params.bNewSelected = bNewSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE630
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.SelectPOI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFPOIWidget::SelectPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.SelectPOI");
		
		UDFPOIWidget_SelectPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.ReceivePOISelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFPOIWidget::ReceivePOISelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.ReceivePOISelected");
		
		UDFPOIWidget_ReceivePOISelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIInitialized
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFPOIWidget::ReceivePOIInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIInitialized");
		
		UDFPOIWidget_ReceivePOIInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UDFPOIWidget::ReceivePOIDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.ReceivePOIDeselected");
		
		UDFPOIWidget_ReceivePOIDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.ReceiveOnPOIActorEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPOIWidget::ReceiveOnPOIActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.ReceiveOnPOIActorEndPlay");
		
		UDFPOIWidget_ReceiveOnPOIActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.ReceiveCanSelect
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	bool UDFPOIWidget::ReceiveCanSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.ReceiveCanSelect");
		
		UDFPOIWidget_ReceiveCanSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDF00
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.OnPOIActorEndPlay
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFPOIWidget::OnPOIActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.OnPOIActorEndPlay");
		
		UDFPOIWidget_OnPOIActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDEE0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.OnOwningMapDirty
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDFPOIWidget::OnOwningMapDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.OnOwningMapDirty");
		
		UDFPOIWidget_OnOwningMapDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDE00
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.IsSelectable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::IsSelectable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.IsSelectable");
		
		UDFPOIWidget_IsSelectable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDD60
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.IsPOIActorValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::IsPOIActorValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.IsPOIActorValid");
		
		UDFPOIWidget_IsPOIActorValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDD20
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.IsInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.IsInitialized");
		
		UDFPOIWidget_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDCF0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.IsDynamic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::IsDynamic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.IsDynamic");
		
		UDFPOIWidget_IsDynamic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDB40
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.InitPOI
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDFMinimap*                                  OwningMapWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToTrack                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinimapPOITableRow                         ActorPOIData                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UDFPOIWidget::InitPOI(class UDFMinimap* OwningMapWidget, class AActor* ActorToTrack, struct FMinimapPOITableRow* ActorPOIData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.InitPOI");
		
		UDFPOIWidget_InitPOI_Params params {};
		params.OwningMapWidget = OwningMapWidget;
		params.ActorToTrack = ActorToTrack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorPOIData != nullptr)
			*ActorPOIData = params.ActorPOIData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EDA80
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.HasFixedRotation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::HasFixedRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.HasFixedRotation");
		
		UDFPOIWidget_HasFixedRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED5B0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.GetDefaultIconBrush
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSlateBrush UDFPOIWidget::GetDefaultIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.GetDefaultIconBrush");
		
		UDFPOIWidget_GetDefaultIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED4C0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.DeselectPOI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDFPOIWidget::DeselectPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.DeselectPOI");
		
		UDFPOIWidget_DeselectPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED0E0
	 * 		Name   -> Function DonkehFrameworkUI.DFPOIWidget.CanSelect
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDFPOIWidget::CanSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.DFPOIWidget.CanSelect");
		
		UDFPOIWidget_CanSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFPOIWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFPOIWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.DFPOIWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006EE650
	 * 		Name   -> Function DonkehFrameworkUI.POIWidgetSlotInterface.SetIconBrush
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 NewIconBrush                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UPOIWidgetSlotInterface::SetIconBrush(const struct FSlateBrush& NewIconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.POIWidgetSlotInterface.SetIconBrush");
		
		UPOIWidgetSlotInterface_SetIconBrush_Params params {};
		params.NewIconBrush = NewIconBrush;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED710
	 * 		Name   -> Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconSlot
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UNamedSlot* UPOIWidgetSlotInterface::GetIconSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconSlot");
		
		UPOIWidgetSlotInterface_GetIconSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006ED660
	 * 		Name   -> Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconBrush
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FSlateBrush UPOIWidgetSlotInterface::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DonkehFrameworkUI.POIWidgetSlotInterface.GetIconBrush");
		
		UPOIWidgetSlotInterface_GetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPOIWidgetSlotInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPOIWidgetSlotInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DonkehFrameworkUI.POIWidgetSlotInterface");
		return ptr;
	}

}


