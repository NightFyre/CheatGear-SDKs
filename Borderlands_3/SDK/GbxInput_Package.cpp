/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * 		Name   -> PredefinedFunction UGbxInputAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputAction_ConsoleCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputAction_ConsoleCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputAction_ConsoleCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionData_Continuous_Vector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionData_Continuous_Vector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionData_Continuous_Vector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionData_Discrete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionData_Discrete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionData_Discrete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionEventInterpreter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionEventInterpreter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionEventInterpreter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionReceiverDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionReceiverDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionReceiverDelegateBinding_Continuous_Vector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionReceiverDelegateBinding_Continuous_Vector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding_Continuous_Vector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionReceiverDelegateBinding_Discrete.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionReceiverDelegateBinding_Discrete::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverDelegateBinding_Discrete");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputActionReceiverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputActionReceiverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputActionReceiverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00685CB0
	 * 		Name   -> Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGbxInputComponent::StartInputConsumeKeyImpl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.StartInputConsumeKeyImpl");
		
		UGbxInputComponent_StartInputConsumeKeyImpl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00685BE0
	 * 		Name   -> Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxInputActionData_Discrete*                DiscreteAction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConsumeEvent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxInputComponent::StartInputAction_Discrete_Impl(class UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.StartInputAction_Discrete_Impl");
		
		UGbxInputComponent_StartInputAction_Discrete_Impl_Params params {};
		params.DiscreteAction = DiscreteAction;
		params.bConsumeEvent = bConsumeEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00685A30
	 * 		Name   -> Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxInputActionData_Continuous_Vector*       AxisAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxInputComponent::InputAction_Continuous_Vector_Impl(class UGbxInputActionData_Continuous_Vector* AxisAction, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputComponent.InputAction_Continuous_Vector_Impl");
		
		UGbxInputComponent_InputAction_Continuous_Vector_Impl_Params params {};
		params.AxisAction = AxisAction;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputDevice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputDevice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputDevice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00685B70
	 * 		Name   -> Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              NextPulseDelay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxInputEventHelpers::SigFunc_Button_PressPulse(float NextPulseDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputEventHelpers.SigFunc_Button_PressPulse");
		
		UGbxInputEventHelpers_SigFunc_Button_PressPulse_Params params {};
		params.NextPulseDelay = NextPulseDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00685B00
	 * 		Name   -> Function GbxInput.GbxInputEventHelpers.SigFunc_Axis
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Val                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxInputEventHelpers::SigFunc_Axis(const struct FVector& Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxInput.GbxInputEventHelpers.SigFunc_Axis");
		
		UGbxInputEventHelpers_SigFunc_Axis_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputEventHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputEventHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputEventHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputKeyRebindData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputKeyRebindData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputKeyRebindData_Button.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputKeyRebindData_Button::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData_Button");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputKeyRebindData_Axis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputKeyRebindData_Axis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputKeyRebindData_Axis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputRebindCategory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputRebindCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputRebindCategory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxInputRebindContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxInputRebindContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxInputRebindContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxPlayerInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxPlayerInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxInput.GbxPlayerInput");
		return ptr;
	}

}


