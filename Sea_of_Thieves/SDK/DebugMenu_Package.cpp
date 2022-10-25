/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UDebugMenuComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenuEntryGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuEntryGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenuEntryGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenuDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenuDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenuComponentMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuComponentMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponentMock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03305B00
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDebugMenuTestFunctions::STATIC_IsDebugMenuReady(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuReady");
		
		UDebugMenuTestFunctions_IsDebugMenuReady_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03305A80
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDebugMenuTestFunctions::STATIC_IsDebugMenuOpen(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuOpen");
		
		UDebugMenuTestFunctions_IsDebugMenuOpen_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03305A50
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UDebugMenuTestFunctions::STATIC_IsDebugMenuAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.IsDebugMenuAvailable");
		
		UDebugMenuTestFunctions_IsDebugMenuAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033059C0
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboBetaKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboBetaKeyboard");
		
		UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboBetaKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03305930
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleKeyComboAlphaKeyboard");
		
		UDebugMenuTestFunctions_GetDebugMenuToggleKeyComboAlphaKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033058A0
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboBetaGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboBetaGamepad");
		
		UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboBetaGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03305810
	 * 		Name   -> Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FKey UDebugMenuTestFunctions::STATIC_GetDebugMenuToggleButtonComboAlphaGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugMenu.DebugMenuTestFunctions.GetDebugMenuToggleButtonComboAlphaGamepad");
		
		UDebugMenuTestFunctions_GetDebugMenuToggleButtonComboAlphaGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugMenuTestFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugMenuTestFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugMenu.DebugMenuTestFunctions");
		return ptr;
	}

}


