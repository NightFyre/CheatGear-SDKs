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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_States_SwitchFeedback                         FeedbackState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_Switch_C::GetSwitchFeedbackState(Enum_States_SwitchFeedback* FeedbackState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState");
		
		UBPI_IO_Switch_C_GetSwitchFeedbackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FeedbackState != nullptr)
			*FeedbackState = params.FeedbackState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_States_SwitchFeedback                         FeedbackState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_Switch_C::SetSwitchFeedbackState(Enum_States_SwitchFeedback FeedbackState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState");
		
		UBPI_IO_Switch_C_SetSwitchFeedbackState_Params params {};
		params.FeedbackState = FeedbackState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Interactive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Switch_C::GetSwitchInteractiveState(bool* Interactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState");
		
		UBPI_IO_Switch_C_GetSwitchInteractiveState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interactive != nullptr)
			*Interactive = params.Interactive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Locked                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Switch_C::GetSwitchLockedState(bool* Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState");
		
		UBPI_IO_Switch_C_GetSwitchLockedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locked != nullptr)
			*Locked = params.Locked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Switch_State                                  SwitchState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_Switch_C::GetSwitchState(Enum_Switch_State* SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState");
		
		UBPI_IO_Switch_C_GetSwitchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SwitchState != nullptr)
			*SwitchState = params.SwitchState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Interactive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Switch_C::SetSwitchInteractiveState(bool Interactive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState");
		
		UBPI_IO_Switch_C_SetSwitchInteractiveState_Params params {};
		params.Interactive = Interactive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_IO_Switch_C::SetSwitchLockedState(bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState");
		
		UBPI_IO_Switch_C_SetSwitchLockedState_Params params {};
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_Switch_State                                  SwitchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_IO_Switch_C::SetSwitchState(Enum_Switch_State SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState");
		
		UBPI_IO_Switch_C_SetSwitchState_Params params {};
		params.SwitchState = SwitchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_IO_Switch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_IO_Switch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C");
		return ptr;
	}

}


