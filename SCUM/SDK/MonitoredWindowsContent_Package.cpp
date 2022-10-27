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
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimerHandle                                updateContentTimer                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonitoredWindowsContent_C::GetUpdateContentTimer(struct FTimerHandle* updateContentTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer");
		
		UMonitoredWindowsContent_C_GetUpdateContentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (updateContentTimer != nullptr)
			*updateContentTimer = params.updateContentTimer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBCUDataInitialized                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMonitoredWindowsContent_C::IsBCUDataInitialized(bool* IsBCUDataInitialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized");
		
		UMonitoredWindowsContent_C_IsBCUDataInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBCUDataInitialized != nullptr)
			*IsBCUDataInitialized = params.IsBCUDataInitialized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff
	 * 		Flags  -> ()
	 */
	void UMonitoredWindowsContent_C::NotifyParentOnAlarmSwitchedOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff");
		
		UMonitoredWindowsContent_C_NotifyParentOnAlarmSwitchedOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised
	 * 		Flags  -> ()
	 */
	void UMonitoredWindowsContent_C::NotifyParentOnAlarmRaised()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised");
		
		UMonitoredWindowsContent_C_NotifyParentOnAlarmRaised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isLifeComponentValid                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMonitoredWindowsContent_C::IsPrisonerLifeComponentValid(bool* isLifeComponentValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid");
		
		UMonitoredWindowsContent_C_IsPrisonerLifeComponentValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isLifeComponentValid != nullptr)
			*isLifeComponentValid = params.isLifeComponentValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonitoredWindowsContent_C::GetPrisoner(class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner");
		
		UMonitoredWindowsContent_C_GetPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMonitoredWindowsContent_C::SetDefaultPrisonerToMonitor(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor");
		
		UMonitoredWindowsContent_C_SetDefaultPrisonerToMonitor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMonitoredWindowsContent_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor");
		
		UMonitoredWindowsContent_C_SetPrisonerToMonitor_Params params {};
		params.Prisoner = Prisoner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   Prisoner                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonitoredWindowsContent_C::GetDefaultPrisoner(class APrisoner** Prisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner");
		
		UMonitoredWindowsContent_C_GetDefaultPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Prisoner != nullptr)
			*Prisoner = params.Prisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet
	 * 		Flags  -> ()
	 */
	void UMonitoredWindowsContent_C::OnPrisonerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet");
		
		UMonitoredWindowsContent_C_OnPrisonerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent
	 * 		Flags  -> ()
	 */
	void UMonitoredWindowsContent_C::UpdateContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent");
		
		UMonitoredWindowsContent_C_UpdateContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct
	 * 		Flags  -> ()
	 */
	void UMonitoredWindowsContent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct");
		
		UMonitoredWindowsContent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonitoredWindowsContent_C::ExecuteUbergraph_MonitoredWindowsContent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent");
		
		UMonitoredWindowsContent_C_ExecuteUbergraph_MonitoredWindowsContent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonitoredWindowsContent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonitoredWindowsContent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C");
		return ptr;
	}

}


