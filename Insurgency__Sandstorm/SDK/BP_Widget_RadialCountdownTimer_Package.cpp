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
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetMaximumTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewMaximumTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUpdate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_RadialCountdownTimer_C::SetMaximumTime(float NewMaximumTime, bool bUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetMaximumTime");
		
		UBP_Widget_RadialCountdownTimer_C_SetMaximumTime_Params params {};
		params.NewMaximumTime = NewMaximumTime;
		params.bUpdate = bUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetTargetWorldTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTargetTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RadialCountdownTimer_C::SetTargetWorldTime(float NewTargetTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetTargetWorldTime");
		
		UBP_Widget_RadialCountdownTimer_C_SetTargetWorldTime_Params params {};
		params.NewTargetTime = NewTargetTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.UpdateTimer
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_RadialCountdownTimer_C::UpdateTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.UpdateTimer");
		
		UBP_Widget_RadialCountdownTimer_C_UpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetCountdownTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewCountdown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RadialCountdownTimer_C::SetCountdownTimer(float NewCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.SetCountdownTimer");
		
		UBP_Widget_RadialCountdownTimer_C_SetCountdownTimer_Params params {};
		params.NewCountdown = NewCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Widget_RadialCountdownTimer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Construct");
		
		UBP_Widget_RadialCountdownTimer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RadialCountdownTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.Tick");
		
		UBP_Widget_RadialCountdownTimer_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.ExecuteUbergraph_BP_Widget_RadialCountdownTimer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_RadialCountdownTimer_C::ExecuteUbergraph_BP_Widget_RadialCountdownTimer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C.ExecuteUbergraph_BP_Widget_RadialCountdownTimer");
		
		UBP_Widget_RadialCountdownTimer_C_ExecuteUbergraph_BP_Widget_RadialCountdownTimer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_RadialCountdownTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_RadialCountdownTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_RadialCountdownTimer.BP_Widget_RadialCountdownTimer_C");
		return ptr;
	}

}


