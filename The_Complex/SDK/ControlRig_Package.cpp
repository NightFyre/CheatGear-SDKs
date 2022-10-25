/**
 * Name: The_Complex
 * Version: 9349459
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00F412E0
	 * 		Name   -> Function ControlRig.ControlRig.SupportsEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InEventName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRig::SupportsEvent(const class FName& InEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SupportsEvent");
		
		UControlRig_SupportsEvent_Params params {};
		params.InEventName = InEventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F411E0
	 * 		Name   -> Function ControlRig.ControlRig.SetVariableFromString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRig::SetVariableFromString(const class FName& InVariableName, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetVariableFromString");
		
		UControlRig_SetVariableFromString_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F41060
	 * 		Name   -> Function ControlRig.ControlRig.SetInteractionRigClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InInteractionRigClass                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetInteractionRigClass(class UClass* InInteractionRigClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRigClass");
		
		UControlRig_SetInteractionRigClass_Params params {};
		params.InInteractionRigClass = InInteractionRigClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40FD0
	 * 		Name   -> Function ControlRig.ControlRig.SetInteractionRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InInteractionRig                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRig");
		
		UControlRig_SetInteractionRig_Params params {};
		params.InInteractionRig = InInteractionRig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40BB0
	 * 		Name   -> Function ControlRig.ControlRig.SetFramesPerSecond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFramesPerSecond                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetFramesPerSecond(float InFramesPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetFramesPerSecond");
		
		UControlRig_SetFramesPerSecond_Params params {};
		params.InFramesPerSecond = InFramesPerSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40B30
	 * 		Name   -> Function ControlRig.ControlRig.SetDeltaTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetDeltaTime(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetDeltaTime");
		
		UControlRig_SetDeltaTime_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FD50
	 * 		Name   -> Function ControlRig.ControlRig.SetAbsoluteTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAbsoluteTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InSetDeltaTimeZero                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetAbsoluteTime");
		
		UControlRig_SetAbsoluteTime_Params params {};
		params.InAbsoluteTime = InAbsoluteTime;
		params.InSetDeltaTimeZero = InSetDeltaTimeZero;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FC80
	 * 		Name   -> Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAbsoluteTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime");
		
		UControlRig_SetAbsoluteAndDeltaTime_Params params {};
		params.InAbsoluteTime = InAbsoluteTime;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FBA0
	 * 		Name   -> Function ControlRig.ControlRig.SelectControl
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InControlName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SelectControl(const class FName& InControlName, bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SelectControl");
		
		UControlRig_SelectControl_Params params {};
		params.InControlName = InControlName;
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FB80
	 * 		Name   -> Function ControlRig.ControlRig.RequestSetup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRig::RequestSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.RequestSetup");
		
		UControlRig_RequestSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FB60
	 * 		Name   -> Function ControlRig.ControlRig.RequestInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRig::RequestInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.RequestInit");
		
		UControlRig_RequestInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F750
	 * 		Name   -> Function ControlRig.ControlRig.IsControlSelected
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InControlName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRig::IsControlSelected(const class FName& InControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.IsControlSelected");
		
		UControlRig_IsControlSelected_Params params {};
		params.InControlName = InControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F580
	 * 		Name   -> Function ControlRig.ControlRig.GetVM
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class URigVM* UControlRig::GetVM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVM");
		
		UControlRig_GetVM_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F690
	 * 		Name   -> Function ControlRig.ControlRig.GetVariableType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UControlRig::GetVariableType(const class FName& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVariableType");
		
		UControlRig_GetVariableType_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F5B0
	 * 		Name   -> Function ControlRig.ControlRig.GetVariableAsString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UControlRig::GetVariableAsString(const class FName& InVariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetVariableAsString");
		
		UControlRig_GetVariableAsString_Params params {};
		params.InVariableName = InVariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F500
	 * 		Name   -> Function ControlRig.ControlRig.GetSupportedEvents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRig::GetSupportedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetSupportedEvents");
		
		UControlRig_GetSupportedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F350
	 * 		Name   -> Function ControlRig.ControlRig.GetScriptAccessibleVariables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRig::GetScriptAccessibleVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetScriptAccessibleVariables");
		
		UControlRig_GetScriptAccessibleVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F330
	 * 		Name   -> Function ControlRig.ControlRig.GetInteractionRigClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UControlRig::GetInteractionRigClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRigClass");
		
		UControlRig_GetInteractionRigClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F310
	 * 		Name   -> Function ControlRig.ControlRig.GetInteractionRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UControlRig* UControlRig::GetInteractionRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRig");
		
		UControlRig_GetInteractionRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F090
	 * 		Name   -> Function ControlRig.ControlRig.GetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class URigHierarchy* UControlRig::GetHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetHierarchy");
		
		UControlRig_GetHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EF80
	 * 		Name   -> Function ControlRig.ControlRig.GetCurrentFramesPerSecond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UControlRig::GetCurrentFramesPerSecond()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetCurrentFramesPerSecond");
		
		UControlRig_GetCurrentFramesPerSecond_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E650
	 * 		Name   -> Function ControlRig.ControlRig.GetAbsoluteTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UControlRig::GetAbsoluteTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetAbsoluteTime");
		
		UControlRig_GetAbsoluteTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E540
	 * 		Name   -> Function ControlRig.ControlRig.FindControlRigs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OptionalClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UControlRig*> UControlRig::STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.FindControlRigs");
		
		UControlRig_FindControlRigs_Params params {};
		params.Outer = Outer;
		params.OptionalClass = OptionalClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E460
	 * 		Name   -> Function ControlRig.ControlRig.Execute
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EControlRigState                                   State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InEventName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::Execute(EControlRigState State, const class FName& InEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.Execute");
		
		UControlRig_Execute_Params params {};
		params.State = State;
		params.InEventName = InEventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E310
	 * 		Name   -> Function ControlRig.ControlRig.CurrentControlSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRig::CurrentControlSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CurrentControlSelection");
		
		UControlRig_CurrentControlSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E2C0
	 * 		Name   -> Function ControlRig.ControlRig.ClearControlSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UControlRig::ClearControlSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.ClearControlSelection");
		
		UControlRig_ClearControlSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E260
	 * 		Name   -> Function ControlRig.ControlRig.CanExecute
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UControlRig::CanExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CanExecute");
		
		UControlRig_CanExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdditiveControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdditiveControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.AdditiveControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F41380
	 * 		Name   -> Function ControlRig.ControlRigComponent.Update
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::Update(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Update");
		
		UControlRigComponent_Update_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F410F0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedElement>   NewMappedElements                                          (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetMappedElements");
		
		UControlRigComponent_SetMappedElements_Params params {};
		params.NewMappedElements = NewMappedElements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40E20
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InitialTransform                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetInitialSpaceTransform(const class FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialSpaceTransform");
		
		UControlRigComponent_SetInitialSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.InitialTransform = InitialTransform;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40C30
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InitialTransform                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetInitialBoneTransform(const class FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialBoneTransform");
		
		UControlRigComponent_SetInitialBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.InitialTransform = InitialTransform;
		params.Space = Space;
		params.bPropagateToChildren = bPropagateToChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40A60
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlVector2D
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlVector2D(const class FName& ControlName, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlVector2D");
		
		UControlRigComponent_SetControlVector2D_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F408B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlTransform(const class FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlTransform");
		
		UControlRigComponent_SetControlTransform_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40780
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlScale(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlScale");
		
		UControlRigComponent_SetControlScale_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40650
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlRotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlRotator(const class FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlRotator");
		
		UControlRigComponent_SetControlRotator_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40520
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlPosition(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlPosition");
		
		UControlRigComponent_SetControlPosition_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40370
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OffsetTransform                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlOffset(const class FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlOffset");
		
		UControlRigComponent_SetControlOffset_Params params {};
		params.ControlName = ControlName;
		params.OffsetTransform = OffsetTransform;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F402A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlInt(const class FName& ControlName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlInt");
		
		UControlRigComponent_SetControlInt_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F401D0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlFloat(const class FName& ControlName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlFloat");
		
		UControlRigComponent_SetControlFloat_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F40100
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlBool(const class FName& ControlName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlBool");
		
		UControlRigComponent_SetControlBool_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FEC0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetBoneTransform(const class FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneTransform");
		
		UControlRigComponent_SetBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Transform = Transform;
		params.Space = Space;
		params.Weight = Weight;
		params.bPropagateToChildren = bPropagateToChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FE30
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh");
		
		UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params params {};
		params.InSkeletalMesh = InSkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FAD0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreSetup
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreSetup(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreSetup");
		
		UControlRigComponent_OnPreSetup_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3FA40
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreInitialize");
		
		UControlRigComponent_OnPreInitialize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F9B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreForwardsSolve
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreForwardsSolve");
		
		UControlRigComponent_OnPreForwardsSolve_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F920
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostSetup
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostSetup(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostSetup");
		
		UControlRigComponent_OnPostSetup_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F890
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostInitialize");
		
		UControlRigComponent_OnPostInitialize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F800
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostForwardsSolve
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostForwardsSolve");
		
		UControlRigComponent_OnPostForwardsSolve_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F730
	 * 		Name   -> Function ControlRig.ControlRigComponent.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRigComponent::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Initialize");
		
		UControlRigComponent_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F3D0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetSpaceTransform");
		
		UControlRigComponent_GetSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F1E0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetInitialSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialSpaceTransform");
		
		UControlRigComponent_GetInitialSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3F0B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetInitialBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialBoneTransform");
		
		UControlRigComponent_GetInitialBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EFB0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetElementNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ERigElementType                                    ElementType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UControlRigComponent::GetElementNames(ERigElementType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetElementNames");
		
		UControlRigComponent_GetElementNames_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EEE0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlVector2D
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UControlRigComponent::GetControlVector2D(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlVector2D");
		
		UControlRigComponent_GetControlVector2D_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EDB0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetControlTransform(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlTransform");
		
		UControlRigComponent_GetControlTransform_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3ECD0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UControlRigComponent::GetControlScale(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlScale");
		
		UControlRigComponent_GetControlScale_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EBF0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlRotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UControlRigComponent::GetControlRotator(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRotator");
		
		UControlRigComponent_GetControlRotator_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EBC0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UControlRig* UControlRigComponent::GetControlRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRig");
		
		UControlRigComponent_GetControlRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3EAE0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UControlRigComponent::GetControlPosition(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlPosition");
		
		UControlRigComponent_GetControlPosition_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E9B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetControlOffset(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlOffset");
		
		UControlRigComponent_GetControlOffset_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E910
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UControlRigComponent::GetControlInt(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlInt");
		
		UControlRigComponent_GetControlInt_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E870
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UControlRigComponent::GetControlFloat(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlFloat");
		
		UControlRigComponent_GetControlFloat_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E7D0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigComponent::GetControlBool(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlBool");
		
		UControlRigComponent_GetControlBool_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E6A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetBoneTransform");
		
		UControlRigComponent_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E670
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetAbsoluteTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UControlRigComponent::GetAbsoluteTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetAbsoluteTime");
		
		UControlRigComponent_GetAbsoluteTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E390
	 * 		Name   -> Function ControlRig.ControlRigComponent.DoesElementExist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigElementType                                    ElementType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigComponent::DoesElementExist(const class FName& Name, ERigElementType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.DoesElementExist");
		
		UControlRigComponent_DoesElementExist_Params params {};
		params.Name = Name;
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E2F0
	 * 		Name   -> Function ControlRig.ControlRigComponent.ClearMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRigComponent::ClearMappedElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.ClearMappedElements");
		
		UControlRigComponent_ClearMappedElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E290
	 * 		Name   -> Function ControlRig.ControlRigComponent.CanExecute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UControlRigComponent::CanExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.CanExecute");
		
		UControlRigComponent_CanExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3E0B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FControlRigComponentMappedBone>      Bones                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FControlRigComponentMappedCurve>     Curves                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh");
		
		UControlRigComponent_AddMappedSkeletalMesh_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		params.Bones = Bones;
		params.Curves = Curves;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3DFC0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedElement>   NewMappedElements                                          (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedElements");
		
		UControlRigComponent_AddMappedElements_Params params {};
		params.NewMappedElements = NewMappedElements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3DED0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedComponent> Components                                                 (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedComponents");
		
		UControlRigComponent_AddMappedComponents_Params params {};
		params.Components = Components;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F3DE40
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh");
		
		UControlRigComponent_AddMappedCompleteSkeletalMesh_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45FD0
	 * 		Name   -> Function ControlRig.ControlRigControlActor.Refresh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AControlRigControlActor::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Refresh");
		
		AControlRigControlActor_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45A60
	 * 		Name   -> Function ControlRig.ControlRigControlActor.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AControlRigControlActor::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Clear");
		
		AControlRigControlActor_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AControlRigControlActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AControlRigControlActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigControlActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F46530
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetSelected
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetSelected(bool bInSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelected");
		
		AControlRigShapeActor_SetSelected_Params params {};
		params.bInSelected = bInSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F464A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetSelectable
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelectable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetSelectable(bool bInSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelectable");
		
		AControlRigShapeActor_SetSelectable_Params params {};
		params.bInSelectable = bInSelectable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F46410
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetHovered
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetHovered");
		
		AControlRigShapeActor_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F46300
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetGlobalTransform");
		
		AControlRigShapeActor_SetGlobalTransform_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F46270
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetEnabled(bool bInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetEnabled");
		
		AControlRigShapeActor_SetEnabled_Params params {};
		params.bInEnabled = bInEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnTransformChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnTransformChanged(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnTransformChanged");
		
		AControlRigShapeActor_OnTransformChanged_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnSelectionChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnSelectionChanged");
		
		AControlRigShapeActor_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsManipulating                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnManipulatingChanged");
		
		AControlRigShapeActor_OnManipulatingChanged_Params params {};
		params.bIsManipulating = bIsManipulating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnHoveredChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnHoveredChanged");
		
		AControlRigShapeActor_OnHoveredChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnEnabledChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnEnabledChanged");
		
		AControlRigShapeActor_OnEnabledChanged_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45E90
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsSelectedInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsSelectedInEditor");
		
		AControlRigShapeActor_IsSelectedInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45E60
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsHovered
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsHovered");
		
		AControlRigShapeActor_IsHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45E30
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsEnabled");
		
		AControlRigShapeActor_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45DA0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.GetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AControlRigShapeActor::GetGlobalTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.GetGlobalTransform");
		
		AControlRigShapeActor_GetGlobalTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AControlRigShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AControlRigShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigShapeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigShapeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigShapeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigLayerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigLayerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigLayerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigValidationPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigValidationPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigValidationPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigNumericalValidationPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigNumericalValidationPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigNumericalValidationPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigObjectHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigObjectHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigObjectHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F461A0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.SelectControls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoMirror                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SelectControls");
		
		UControlRigPoseAsset_SelectControls_Params params {};
		params.InControlRig = InControlRig;
		params.bDoMirror = bDoMirror;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F460D0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.SavePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseAll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SavePose");
		
		UControlRigPoseAsset_SavePose_Params params {};
		params.InControlRig = InControlRig;
		params.bUseAll = bUseAll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45FF0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.ReplaceControlName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        CurrentName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::ReplaceControlName(const class FName& CurrentName, const class FName& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.ReplaceControlName");
		
		UControlRigPoseAsset_ReplaceControlName_Params params {};
		params.CurrentName = CurrentName;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45EC0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.PastePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoMirror                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.PastePose");
		
		UControlRigPoseAsset_PastePose_Params params {};
		params.InControlRig = InControlRig;
		params.bDoKey = bDoKey;
		params.bDoMirror = bDoMirror;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45BE0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.GetCurrentPose
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FControlRigControlPose                      OutPose                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetCurrentPose");
		
		UControlRigPoseAsset_GetCurrentPose_Params params {};
		params.InControlRig = InControlRig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPose != nullptr)
			*OutPose = params.OutPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45B60
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.GetControlNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRigPoseAsset::GetControlNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetControlNames");
		
		UControlRigPoseAsset_GetControlNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F45A80
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UControlRig*                                 ControlRig                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ControlName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch");
		
		UControlRigPoseAsset_DoesMirrorMatch_Params params {};
		params.ControlRig = ControlRig;
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseMirrorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseMirrorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseMirrorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSnapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSnapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSnapSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFKControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFKControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.FKControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F57020
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToWorldSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToWorldSpace");
		
		URigHierarchy_SwitchToWorldSpace_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F56E10
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToParent");
		
		URigHierarchy_SwitchToParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F56CD0
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToDefaultParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToDefaultParent");
		
		URigHierarchy_SwitchToDefaultParent_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F56B60
	 * 		Name   -> Function ControlRig.RigHierarchy.SortKeys
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::SortKeys(TArray<struct FRigElementKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SortKeys");
		
		URigHierarchy_SortKeys_Params params {};
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F568B0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetPose_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigPose                                    InPose                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetPose_ForBlueprint");
		
		URigHierarchy_SetPose_ForBlueprint_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F566E0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetParentWeightArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRigElementWeight>                   InWeights                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeightArray");
		
		URigHierarchy_SetParentWeightArray_Params params {};
		params.InChild = InChild;
		params.InWeights = InWeights;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F564F0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetParentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementWeight                           InWeight                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeight");
		
		URigHierarchy_SetParentWeight_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.InWeight = InWeight;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F56210
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLocalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetLocalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransformByIndex");
		
		URigHierarchy_SetLocalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F55E10
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLocalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransform");
		
		URigHierarchy_SetLocalTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F55B80
	 * 		Name   -> Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetGlobalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransformByIndex");
		
		URigHierarchy_SetGlobalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F557C0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransform");
		
		URigHierarchy_SetGlobalTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F55690
	 * 		Name   -> Function ControlRig.RigHierarchy.SetCurveValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValueByIndex");
		
		URigHierarchy_SetCurveValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F55460
	 * 		Name   -> Function ControlRig.RigHierarchy.SetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValue");
		
		URigHierarchy_SetCurveValue_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F55370
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibilityByIndex");
		
		URigHierarchy_SetControlVisibilityByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F551A0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibility");
		
		URigHierarchy_SetControlVisibility_Params params {};
		params.InKey = InKey;
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F54E90
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlValueByIndex(int32_t InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValueByIndex");
		
		URigHierarchy_SetControlValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValue = InValue;
		params.InValueType = InValueType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F54A00
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValue");
		
		URigHierarchy_SetControlValue_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		params.InValueType = InValueType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F547D0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlShapeTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex");
		
		URigHierarchy_SetControlShapeTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F54480
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlShapeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransform");
		
		URigHierarchy_SetControlShapeTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F541E0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlSettingsByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlSettingsByIndex(int32_t InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettingsByIndex");
		
		URigHierarchy_SetControlSettingsByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		params.bForce = bForce;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53E40
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettings");
		
		URigHierarchy_SetControlSettings_Params params {};
		params.InKey = InKey;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		params.bForce = bForce;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53B70
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlOffsetTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex");
		
		URigHierarchy_SetControlOffsetTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53780
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlOffsetTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransform");
		
		URigHierarchy_SetControlOffsetTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53650
	 * 		Name   -> Function ControlRig.RigHierarchy.SendAutoKeyEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InOffsetInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsynchronous                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SendAutoKeyEvent");
		
		URigHierarchy_SendAutoKeyEvent_Params params {};
		params.InElement = InElement;
		params.InOffsetInSeconds = InOffsetInSeconds;
		params.bAsynchronous = bAsynchronous;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F535D0
	 * 		Name   -> Function ControlRig.RigHierarchy.ResetPoseToInitial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERigElementType                                    InTypeFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::ResetPoseToInitial(ERigElementType InTypeFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetPoseToInitial");
		
		URigHierarchy_ResetPoseToInitial_Params params {};
		params.InTypeFilter = InTypeFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F535B0
	 * 		Name   -> Function ControlRig.RigHierarchy.ResetCurveValues
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URigHierarchy::ResetCurveValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetCurveValues");
		
		URigHierarchy_ResetCurveValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53590
	 * 		Name   -> Function ControlRig.RigHierarchy.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URigHierarchy::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Reset");
		
		URigHierarchy_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53570
	 * 		Name   -> Function ControlRig.RigHierarchy.Num
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t URigHierarchy::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Num");
		
		URigHierarchy_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F53230
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector2D");
		
		URigHierarchy_MakeControlValueFromVector2D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F533D0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromVector
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector(const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector");
		
		URigHierarchy_MakeControlValueFromVector_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52FF0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransformNoScale                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale");
		
		URigHierarchy_MakeControlValueFromTransformNoScale_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52D00
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InValue                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransform(const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransform");
		
		URigHierarchy_MakeControlValueFromTransform_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52B20
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromRotator(const struct FRotator& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromRotator");
		
		URigHierarchy_MakeControlValueFromRotator_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F529C0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromInt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromInt(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromInt");
		
		URigHierarchy_MakeControlValueFromInt_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52860
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromFloat(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromFloat");
		
		URigHierarchy_MakeControlValueFromFloat_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F525A0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FEulerTransform                             InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform");
		
		URigHierarchy_MakeControlValueFromEulerTransform_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52440
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromBool(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromBool");
		
		URigHierarchy_MakeControlValueFromBool_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F523A0
	 * 		Name   -> Function ControlRig.RigHierarchy.IsValidIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsValidIndex(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsValidIndex");
		
		URigHierarchy_IsValidIndex_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F522F0
	 * 		Name   -> Function ControlRig.RigHierarchy.IsSelectedByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsSelectedByIndex(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelectedByIndex");
		
		URigHierarchy_IsSelectedByIndex_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F52170
	 * 		Name   -> Function ControlRig.RigHierarchy.IsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsSelected(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelected");
		
		URigHierarchy_IsSelected_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51E90
	 * 		Name   -> Function ControlRig.RigHierarchy.IsParentedTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsParentedTo");
		
		URigHierarchy_IsParentedTo_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51D40
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVectorFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector URigHierarchy::STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorFromControlValue");
		
		URigHierarchy_GetVectorFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51C00
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVector2DFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D URigHierarchy::STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVector2DFromControlValue");
		
		URigHierarchy_GetVector2DFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51A70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransformNoScale URigHierarchy::STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue");
		
		URigHierarchy_GetTransformNoScaleFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F518D0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformFromControlValue");
		
		URigHierarchy_GetTransformFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F517F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetSelectedKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ERigElementType                                    InTypeFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(ERigElementType InTypeFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetSelectedKeys");
		
		URigHierarchy_GetSelectedKeys_Params params {};
		params.InTypeFilter = InTypeFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51690
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRotatorFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator URigHierarchy::STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorFromControlValue");
		
		URigHierarchy_GetRotatorFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51440
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRigidBodyKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigidBodyKeys");
		
		URigHierarchy_GetRigidBodyKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F511F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetReferenceKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetReferenceKeys");
		
		URigHierarchy_GetReferenceKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51130
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPreviousParent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetPreviousParent(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousParent");
		
		URigHierarchy_GetPreviousParent_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F51080
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPreviousName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URigHierarchy::GetPreviousName(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousName");
		
		URigHierarchy_GetPreviousName_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50EF0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigPose URigHierarchy::GetPose(bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPose");
		
		URigHierarchy_GetPose_Params params {};
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50C70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentWeightArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeightArray");
		
		URigHierarchy_GetParentWeightArray_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50B10
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeight");
		
		URigHierarchy_GetParentWeight_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50990
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetParentTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransformByIndex");
		
		URigHierarchy_GetParentTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50750
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransform");
		
		URigHierarchy_GetParentTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50DB0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParents");
		
		URigHierarchy_GetParents_Params params {};
		params.InKey = InKey;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F506A0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNumberOfParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNumberOfParents");
		
		URigHierarchy_GetNumberOfParents_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50450
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNullKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNullKeys");
		
		URigHierarchy_GetNullKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F502B0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransformByIndex");
		
		URigHierarchy_GetLocalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F50050
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransform");
		
		URigHierarchy_GetLocalTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4FF90
	 * 		Name   -> Function ControlRig.RigHierarchy.GetKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetKey(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetKey");
		
		URigHierarchy_GetKey_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4FE70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetIntFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIntFromControlValue");
		
		URigHierarchy_GetIntFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4FD10
	 * 		Name   -> Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIndex_ForBlueprint");
		
		URigHierarchy_GetIndex_ForBlueprint_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4FB70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransformByIndex");
		
		URigHierarchy_GetGlobalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F910
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransform");
		
		URigHierarchy_GetGlobalTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F780
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex");
		
		URigHierarchy_GetGlobalControlShapeTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F530
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform");
		
		URigHierarchy_GetGlobalControlShapeTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F3A0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex");
		
		URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F150
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform");
		
		URigHierarchy_GetGlobalControlOffsetTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4F020
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFloatFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatFromControlValue");
		
		URigHierarchy_GetFloatFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4EF60
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFirstParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFirstParent");
		
		URigHierarchy_GetFirstParent_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4EDB0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEulerTransform URigHierarchy::STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue");
		
		URigHierarchy_GetEulerTransformFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4ECF0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::GetCurveValueByIndex(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValueByIndex");
		
		URigHierarchy_GetCurveValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4EB70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValue");
		
		URigHierarchy_GetCurveValue_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E9D0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveKeys");
		
		URigHierarchy_GetCurveKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E6D0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValueByIndex");
		
		URigHierarchy_GetControlValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValueType = InValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E390
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValue");
		
		URigHierarchy_GetControlValue_Params params {};
		params.InKey = InKey;
		params.InValueType = InValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E930
	 * 		Name   -> Function ControlRig.RigHierarchy.GetController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCreateIfNeeded                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetController");
		
		URigHierarchy_GetController_Params params {};
		params.bCreateIfNeeded = bCreateIfNeeded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E140
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlKeys");
		
		URigHierarchy_GetControlKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4E000
	 * 		Name   -> Function ControlRig.RigHierarchy.GetChildren
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetChildren");
		
		URigHierarchy_GetChildren_Params params {};
		params.InKey = InKey;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4DDB0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetBoneKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoneKeys");
		
		URigHierarchy_GetBoneKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4DCD0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint");
		
		URigHierarchy_GetAllKeys_ForBlueprint_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4DB20
	 * 		Name   -> Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly");
		
		URigHierarchy_FindNull_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4D480
	 * 		Name   -> Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly");
		
		URigHierarchy_FindControl_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4D260
	 * 		Name   -> Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly");
		
		URigHierarchy_FindBone_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4D150
	 * 		Name   -> Function ControlRig.RigHierarchy.CopyPose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCurrent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyPose");
		
		URigHierarchy_CopyPose_Params params {};
		params.InHierarchy = InHierarchy;
		params.bCurrent = bCurrent;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4D0C0
	 * 		Name   -> Function ControlRig.RigHierarchy.CopyHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyHierarchy");
		
		URigHierarchy_CopyHierarchy_Params params {};
		params.InHierarchy = InHierarchy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F4CF50
	 * 		Name   -> Function ControlRig.RigHierarchy.Contains_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Contains_ForBlueprint");
		
		URigHierarchy_Contains_ForBlueprint_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigHierarchy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigHierarchy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.RigHierarchy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5E350
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetSelection
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetSelection");
		
		URigHierarchyController_SetSelection_Params params {};
		params.InKeys = InKeys;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5E180
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetParent");
		
		URigHierarchyController_SetParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5E0F0
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetHierarchy");
		
		URigHierarchyController_SetHierarchy_Params params {};
		params.InHierarchy = InHierarchy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5DF40
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetControlSettings");
		
		URigHierarchyController_SetControlSettings_Params params {};
		params.InKey = InKey;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5DE00
	 * 		Name   -> Function ControlRig.RigHierarchyController.SelectElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearSelection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SelectElement");
		
		URigHierarchyController_SelectElement_Params params {};
		params.InKey = InKey;
		params.bSelect = bSelect;
		params.bClearSelection = bClearSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5DC30
	 * 		Name   -> Function ControlRig.RigHierarchyController.RenameElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearSelection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, const class FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RenameElement");
		
		URigHierarchyController_RenameElement_Params params {};
		params.InElement = InElement;
		params.InName = InName;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		params.bClearSelection = bClearSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5DA60
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveParent");
		
		URigHierarchyController_RemoveParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5D920
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveElement");
		
		URigHierarchyController_RemoveElement_Params params {};
		params.InElement = InElement;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5D770
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveAllParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveAllParents");
		
		URigHierarchyController_RemoveAllParents_Params params {};
		params.InChild = InChild;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5D470
	 * 		Name   -> Function ControlRig.RigHierarchyController.MirrorElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FRigMirrorSettings                          InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.MirrorElements");
		
		URigHierarchyController_MirrorElements_Params params {};
		params.InKeys = InKeys;
		params.InSettings = InSettings;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5D220
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportFromText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InContent                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplaceExistingElements                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportFromText");
		
		URigHierarchyController_ImportFromText_Params params {};
		params.InContent = InContent;
		params.bReplaceExistingElements = bReplaceExistingElements;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5D000
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportCurves
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InNameSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectCurves                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportCurves");
		
		URigHierarchyController_ImportCurves_Params params {};
		params.InSkeleton = InSkeleton;
		params.InNameSpace = InNameSpace;
		params.bSelectCurves = bSelectCurves;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5CD70
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportBones
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InNameSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplaceExistingBones                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveObsoleteBones                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectBones                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportBones(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportBones");
		
		URigHierarchyController_ImportBones_Params params {};
		params.InSkeleton = InSkeleton;
		params.InNameSpace = InNameSpace;
		params.bReplaceExistingBones = bReplaceExistingBones;
		params.bRemoveObsoleteBones = bRemoveObsoleteBones;
		params.bSelectBones = bSelectBones;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5CD40
	 * 		Name   -> Function ControlRig.RigHierarchyController.GetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class URigHierarchy* URigHierarchyController::GetHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetHierarchy");
		
		URigHierarchyController_GetHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C9A0
	 * 		Name   -> Function ControlRig.RigHierarchyController.GetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlSettings URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetControlSettings");
		
		URigHierarchyController_GetControlSettings_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C860
	 * 		Name   -> Function ControlRig.RigHierarchyController.ExportToText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class FString URigHierarchyController::ExportToText(TArray<struct FRigElementKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportToText");
		
		URigHierarchyController_ExportToText_Params params {};
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C7E0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ExportSelectionToText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString URigHierarchyController::ExportSelectionToText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportSelectionToText");
		
		URigHierarchyController_ExportSelectionToText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C5D0
	 * 		Name   -> Function ControlRig.RigHierarchyController.DuplicateElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DuplicateElements");
		
		URigHierarchyController_DuplicateElements_Params params {};
		params.InKeys = InKeys;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C510
	 * 		Name   -> Function ControlRig.RigHierarchyController.DeselectElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DeselectElement");
		
		URigHierarchyController_DeselectElement_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C4B0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ClearSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool URigHierarchyController::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ClearSelection");
		
		URigHierarchyController_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C1F0
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddRigidBody
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigRigidBodySettings                       InSettings                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InLocalTransform                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddRigidBody(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddRigidBody");
		
		URigHierarchyController_AddRigidBody_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InSettings = InSettings;
		params.InLocalTransform = InLocalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5C020
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InWeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddParent");
		
		URigHierarchyController_AddParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.InWeight = InWeight;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5BD60
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddNull
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformInGlobal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddNull(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddNull");
		
		URigHierarchyController_AddNull_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InTransform = InTransform;
		params.bTransformInGlobal = bTransformInGlobal;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5BBC0
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddCurve(const class FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddCurve");
		
		URigHierarchyController_AddCurve_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5B6B0
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddControl_ForBlueprint");
		
		URigHierarchyController_AddControl_ForBlueprint_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InSettings = InSettings;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F5B3B0
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddBone
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformInGlobal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigBoneType                                       InBoneType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddBone(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddBone");
		
		URigHierarchyController_AddBone_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InTransform = InTransform;
		params.bTransformInGlobal = bTransformInGlobal;
		params.InBoneType = InBoneType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigHierarchyController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigHierarchyController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.RigHierarchyController");
		return ptr;
	}

}


