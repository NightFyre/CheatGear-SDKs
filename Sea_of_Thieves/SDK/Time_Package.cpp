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
	 * 		RVA    -> 0x033140C0
	 * 		Name   -> Function Time.TimeInterface.GetTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGameTime UTimeInterface::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetTime");
		
		UTimeInterface_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314080
	 * 		Name   -> Function Time.TimeInterface.GetSmoothRealWorldTime
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UTimeInterface::GetSmoothRealWorldTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetSmoothRealWorldTime");
		
		UTimeInterface_GetSmoothRealWorldTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314040
	 * 		Name   -> Function Time.TimeInterface.GetPreciseRealWorldTime
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UTimeInterface::GetPreciseRealWorldTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.GetPreciseRealWorldTime");
		
		UTimeInterface_GetPreciseRealWorldTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03313DA0
	 * 		Name   -> Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FDateTime                                   RealWorldTime                                              (ConstParm, Parm, ZeroConstructor)
	 */
	struct FGameTime UTimeInterface::ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime");
		
		UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params params {};
		params.RealWorldTime = RealWorldTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03313D00
	 * 		Name   -> Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameTime                                   GameWorldTime                                              (ConstParm, Parm)
	 */
	struct FDateTime UTimeInterface::ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime");
		
		UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params params {};
		params.GameWorldTime = GameWorldTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.TimeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033149F0
	 * 		Name   -> Function Time.CustomizableTimeInterface.SetTimeScalar
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RequestedTimeScalar                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizableTimeInterface::SetTimeScalar(int32_t RequestedTimeScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetTimeScalar");
		
		UCustomizableTimeInterface_SetTimeScalar_Params params {};
		params.RequestedTimeScalar = RequestedTimeScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033148F0
	 * 		Name   -> Function Time.CustomizableTimeInterface.SetSunset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SunsetHours                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizableTimeInterface::SetSunset(float SunsetHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetSunset");
		
		UCustomizableTimeInterface_SetSunset_Params params {};
		params.SunsetHours = SunsetHours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033147F0
	 * 		Name   -> Function Time.CustomizableTimeInterface.SetSunrise
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SunriseHours                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizableTimeInterface::SetSunrise(float SunriseHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetSunrise");
		
		UCustomizableTimeInterface_SetSunrise_Params params {};
		params.SunriseHours = SunriseHours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033146B0
	 * 		Name   -> Function Time.CustomizableTimeInterface.SetGameWorldTime
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameTime                                   RequestedTime                                              (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UCustomizableTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.SetGameWorldTime");
		
		UCustomizableTimeInterface_SetGameWorldTime_Params params {};
		params.RequestedTime = RequestedTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314100
	 * 		Name   -> Function Time.CustomizableTimeInterface.GetTimeScalar
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCustomizableTimeInterface::GetTimeScalar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.GetTimeScalar");
		
		UCustomizableTimeInterface_GetTimeScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03313F20
	 * 		Name   -> Function Time.CustomizableTimeInterface.EnableQueryServiceTime
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizableTimeInterface::EnableQueryServiceTime(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeInterface.EnableQueryServiceTime");
		
		UCustomizableTimeInterface_EnableQueryServiceTime_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizableTimeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizableTimeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.CustomizableTimeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314A70
	 * 		Name   -> Function Time.DebugTimeInterface.SetTimeScalar
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RequestedTimeScalar                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugTimeInterface::SetTimeScalar(int32_t RequestedTimeScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetTimeScalar");
		
		UDebugTimeInterface_SetTimeScalar_Params params {};
		params.RequestedTimeScalar = RequestedTimeScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314970
	 * 		Name   -> Function Time.DebugTimeInterface.SetSunset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SunsetHours                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugTimeInterface::SetSunset(float SunsetHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunset");
		
		UDebugTimeInterface_SetSunset_Params params {};
		params.SunsetHours = SunsetHours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314870
	 * 		Name   -> Function Time.DebugTimeInterface.SetSunrise
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SunriseHours                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugTimeInterface::SetSunrise(float SunriseHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetSunrise");
		
		UDebugTimeInterface_SetSunrise_Params params {};
		params.SunriseHours = SunriseHours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314750
	 * 		Name   -> Function Time.DebugTimeInterface.SetGameWorldTime
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameTime                                   RequestedTime                                              (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UDebugTimeInterface::SetGameWorldTime(const struct FGameTime& RequestedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.SetGameWorldTime");
		
		UDebugTimeInterface_SetGameWorldTime_Params params {};
		params.RequestedTime = RequestedTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314130
	 * 		Name   -> Function Time.DebugTimeInterface.GetTimeScalar
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UDebugTimeInterface::GetTimeScalar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.GetTimeScalar");
		
		UDebugTimeInterface_GetTimeScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03313FB0
	 * 		Name   -> Function Time.DebugTimeInterface.EnableQueryServiceTime
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugTimeInterface::EnableQueryServiceTime(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeInterface.EnableQueryServiceTime");
		
		UDebugTimeInterface_EnableQueryServiceTime_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugTimeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugTimeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.DebugTimeInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocationProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.LocationProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033143E0
	 * 		Name   -> Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (Parm, ZeroConstructor)
	 */
	struct FReplicatedDateTime UTimeBlueprintLibrary::STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime");
		
		UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314350
	 * 		Name   -> Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FReplicatedDateTime                         InDateTime                                                 (Parm)
	 */
	struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime");
		
		UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314160
	 * 		Name   -> Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Year                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Day                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Second                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Millisecond                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FDateTime UTimeBlueprintLibrary::STATIC_MakeDateTimeFromRaw(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw");
		
		UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params params {};
		params.Year = Year;
		params.Month = Month;
		params.Day = Day;
		params.Hour = Hour;
		params.Minute = Minute;
		params.Second = Second;
		params.Millisecond = Millisecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03313E30
	 * 		Name   -> Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   FirstDateTime                                              (Parm, ZeroConstructor)
	 * 		struct FDateTime                                   SecondDateTime                                             (Parm, ZeroConstructor)
	 * 		struct FTimespan                                   Tolerance                                                  (Parm, ZeroConstructor)
	 */
	bool UTimeBlueprintLibrary::STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance");
		
		UTimeBlueprintLibrary_DateTimesWithinTolerance_Params params {};
		params.FirstDateTime = FirstDateTime;
		params.SecondDateTime = SecondDateTime;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.TimeBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeFormatterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeFormatterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.TimeFormatterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314690
	 * 		Name   -> Function Time.TimeService.OnRep_ReplicatedServerTime
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATimeService::OnRep_ReplicatedServerTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeService.OnRep_ReplicatedServerTime");
		
		ATimeService_OnRep_ReplicatedServerTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03314460
	 * 		Name   -> Function Time.TimeService.MulticastOnServiceTimeChangedRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		int64_t                                            ServiceTimeInTicks                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATimeService::MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.TimeService.MulticastOnServiceTimeChangedRPC");
		
		ATimeService_MulticastOnServiceTimeChangedRPC_Params params {};
		params.ServiceTimeInTicks = ServiceTimeInTicks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATimeService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimeService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.TimeService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033145C0
	 * 		Name   -> Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		int32_t                                            Scalar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADebugTimeService::MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC");
		
		ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params params {};
		params.Scalar = Scalar;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADebugTimeService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugTimeService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.DebugTimeService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033144F0
	 * 		Name   -> Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		int32_t                                            Scalar                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int64_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACustomizableTimeService::MulticastOnTimeScalarOffsetRPC(int32_t Scalar, int64_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC");
		
		ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params params {};
		params.Scalar = Scalar;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomizableTimeService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomizableTimeService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Time.CustomizableTimeService");
		return ptr;
	}

}


