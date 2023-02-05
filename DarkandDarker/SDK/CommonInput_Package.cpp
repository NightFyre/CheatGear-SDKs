/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UCommonUIInputData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUIInputData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonUIInputData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61770
	 * 		Name   -> Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	 * 		Flags  -> (Final, Native, Static, Public)
	 */
	TArray<class FName> UCommonInputBaseControllerData::STATIC_GetRegisteredGamepads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads");
		
		UCommonInputBaseControllerData_GetRegisteredGamepads_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonInputBaseControllerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonInputBaseControllerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputBaseControllerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonInputPlatformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonInputPlatformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputPlatformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonInputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonInputSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F619D0
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonInputSubsystem::ShouldShowInputKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys");
		
		UCommonInputSubsystem_ShouldShowInputKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61940
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.SetGamepadInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InGamepadInputType                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonInputSubsystem::SetGamepadInputType(const class FName& InGamepadInputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetGamepadInputType");
		
		UCommonInputSubsystem_SetGamepadInputType_Params params {};
		params.InGamepadInputType = InGamepadInputType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F618C0
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.SetCurrentInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECommonInputType                                   NewInputType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetCurrentInputType");
		
		UCommonInputSubsystem_SetCurrentInputType_Params params {};
		params.NewInputType = NewInputType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61890
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonInputSubsystem::IsUsingPointerInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsUsingPointerInput");
		
		UCommonInputSubsystem_IsUsingPointerInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61800
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.IsInputMethodActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonInputType                                   InputMethod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonInputSubsystem::IsInputMethodActive(ECommonInputType InputMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsInputMethodActive");
		
		UCommonInputSubsystem_IsInputMethodActive_Params params {};
		params.InputMethod = InputMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61740
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.GetDefaultInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetDefaultInputType");
		
		UCommonInputSubsystem_GetDefaultInputType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F61710
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.GetCurrentInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentInputType");
		
		UCommonInputSubsystem_GetCurrentInputType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F616D0
	 * 		Name   -> Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UCommonInputSubsystem::GetCurrentGamepadName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName");
		
		UCommonInputSubsystem_GetCurrentGamepadName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonInputSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonInputSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CommonInput.CommonInputSubsystem");
		return ptr;
	}

}


