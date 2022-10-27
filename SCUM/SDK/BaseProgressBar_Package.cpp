/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        percentageString                                           (Parm, OutParm)
	 */
	void UBaseProgressBar_C::PercentageToUITextWOPercSign(float Value, class FText* percentageString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign");
		
		UBaseProgressBar_C_PercentageToUITextWOPercSign_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (percentageString != nullptr)
			*percentageString = params.percentageString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alarmThreshold                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::GetAlarmThresholdHigh(float* alarmThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh");
		
		UBaseProgressBar_C_GetAlarmThresholdHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (alarmThreshold != nullptr)
			*alarmThreshold = params.alarmThreshold;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alarmThreshold                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::SetAlarmThresholdHigh(float alarmThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh");
		
		UBaseProgressBar_C_SetAlarmThresholdHigh_Params params {};
		params.alarmThreshold = alarmThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldAlarmBeOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseProgressBar_C::CheckAlarmThresholdHigh(bool* shouldAlarmBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh");
		
		UBaseProgressBar_C_CheckAlarmThresholdHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldAlarmBeOn != nullptr)
			*shouldAlarmBeOn = params.shouldAlarmBeOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldBeActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseProgressBar_C::SetAlarmThresholdHighActive(bool shouldBeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive");
		
		UBaseProgressBar_C_SetAlarmThresholdHighActive_Params params {};
		params.shouldBeActive = shouldBeActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAlarmOn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseProgressBar_C::GetIsAlarmOn(bool* isAlarmOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn");
		
		UBaseProgressBar_C_GetIsAlarmOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAlarmOn != nullptr)
			*isAlarmOn = params.isAlarmOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        percentageString                                           (Parm, OutParm)
	 */
	void UBaseProgressBar_C::PercentageToUIText(float Value, class FText* percentageString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText");
		
		UBaseProgressBar_C_PercentageToUIText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (percentageString != nullptr)
			*percentageString = params.percentageString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetClamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldEnableClamping                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseProgressBar_C::SetClamping(bool shouldEnableClamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetClamping");
		
		UBaseProgressBar_C_SetClamping_Params params {};
		params.shouldEnableClamping = shouldEnableClamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.PercentageToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PercentageText                                             (Parm, OutParm)
	 */
	void UBaseProgressBar_C::PercentageToText(float Value, class FText* PercentageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToText");
		
		UBaseProgressBar_C_PercentageToText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PercentageText != nullptr)
			*PercentageText = params.PercentageText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              prevPercentage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::GetPreviousPercentage(float* prevPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage");
		
		UBaseProgressBar_C_GetPreviousPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (prevPercentage != nullptr)
			*prevPercentage = params.prevPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shouldAlarmBeOn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseProgressBar_C::CheckAlarmThreshold(bool* shouldAlarmBeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold");
		
		UBaseProgressBar_C_CheckAlarmThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldAlarmBeOn != nullptr)
			*shouldAlarmBeOn = params.shouldAlarmBeOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn
	 * 		Flags  -> ()
	 */
	void UBaseProgressBar_C::AlarmSwitchOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn");
		
		UBaseProgressBar_C_AlarmSwitchOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff
	 * 		Flags  -> ()
	 */
	void UBaseProgressBar_C::AlarmSwitchOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff");
		
		UBaseProgressBar_C_AlarmSwitchOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alarmThreshold                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::GetAlarmThreshold(float* alarmThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold");
		
		UBaseProgressBar_C_GetAlarmThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (alarmThreshold != nullptr)
			*alarmThreshold = params.alarmThreshold;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              alarmThreshold                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::SetAlarmThreshold(float alarmThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold");
		
		UBaseProgressBar_C_SetAlarmThreshold_Params params {};
		params.alarmThreshold = alarmThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.PercentageToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      percentageString                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::PercentageToString(float Value, class FString* percentageString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToString");
		
		UBaseProgressBar_C_PercentageToString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (percentageString != nullptr)
			*percentageString = params.percentageString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.PercentageToInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            percentageInt                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::PercentageToInt(float Value, int32_t* percentageInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToInt");
		
		UBaseProgressBar_C_PercentageToInt_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (percentageInt != nullptr)
			*percentageInt = params.percentageInt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              previousPercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::SetPreviousPercentage(float previousPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage");
		
		UBaseProgressBar_C_SetPreviousPercentage_Params params {};
		params.previousPercentage = previousPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious
	 * 		Flags  -> ()
	 */
	void UBaseProgressBar_C::SavePercentageAsPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious");
		
		UBaseProgressBar_C_SavePercentageAsPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged
	 * 		Flags  -> ()
	 */
	void UBaseProgressBar_C::OnPercentageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged");
		
		UBaseProgressBar_C_OnPercentageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetTitleBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBaseProgressBar_C::SetTitleBase(const class FText& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetTitleBase");
		
		UBaseProgressBar_C_SetTitleBase_Params params {};
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetTitleBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Title                                                      (Parm, OutParm)
	 */
	void UBaseProgressBar_C::GetTitleBase(class FText* Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetTitleBase");
		
		UBaseProgressBar_C_GetTitleBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Title != nullptr)
			*Title = params.Title;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IncreasePercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::IncreasePercentage(float IncreasePercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage");
		
		UBaseProgressBar_C_IncreasePercentage_Params params {};
		params.IncreasePercentage = IncreasePercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.DecreasePercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DecreasePercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::DecreasePercentage(float DecreasePercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.DecreasePercentage");
		
		UBaseProgressBar_C_DecreasePercentage_Params params {};
		params.DecreasePercentage = DecreasePercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.SetPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              percentInputToSet                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::SetPercentage(float percentInputToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPercentage");
		
		UBaseProgressBar_C_SetPercentage_Params params {};
		params.percentInputToSet = percentInputToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BaseProgressBar.BaseProgressBar_C.GetPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseProgressBar_C::GetPercentage(float* Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPercentage");
		
		UBaseProgressBar_C_GetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percentage != nullptr)
			*Percentage = params.Percentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseProgressBar.BaseProgressBar_C");
		return ptr;
	}

}


