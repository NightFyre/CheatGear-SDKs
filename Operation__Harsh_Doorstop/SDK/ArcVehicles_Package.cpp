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
	 * 		RVA    -> 0x007EFD70
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.ServerPrintDebug_Request
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void UArcVehiclePlayerSeatComponent::ServerPrintDebug_Request()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.ServerPrintDebug_Request");
		
		UArcVehiclePlayerSeatComponent_ServerPrintDebug_Request_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFA80
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnSeatChangeEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EArcVehicleSeatChangeType                          SeatChangeType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehiclePlayerSeatComponent::OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnSeatChangeEvent");
		
		UArcVehiclePlayerSeatComponent_OnSeatChangeEvent_Params params {};
		params.SeatChangeType = SeatChangeType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF0E0
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_StoredPlayerState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class APlayerState*                                InPreviousPlayerState                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehiclePlayerSeatComponent::OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_StoredPlayerState");
		
		UArcVehiclePlayerSeatComponent_OnRep_StoredPlayerState_Params params {};
		params.InPreviousPlayerState = InPreviousPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_ServerDebugStrings
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UArcVehiclePlayerSeatComponent::OnRep_ServerDebugStrings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_ServerDebugStrings");
		
		UArcVehiclePlayerSeatComponent_OnRep_ServerDebugStrings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF960
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_SeatConfig
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FArcVehicleSeatReference                    InPreviousSeatConfig                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UArcVehiclePlayerSeatComponent::OnRep_SeatConfig(const struct FArcVehicleSeatReference& InPreviousSeatConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.OnRep_SeatConfig");
		
		UArcVehiclePlayerSeatComponent_OnRep_SeatConfig_Params params {};
		params.InPreviousSeatConfig = InPreviousSeatConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ArcVehicles.ArcVehiclePlayerSeatComponent.BP_OnRep_StoredPlayerState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                InPreviousPlayerState                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehiclePlayerSeatComponent::BP_OnRep_StoredPlayerState(class APlayerState* InPreviousPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePlayerSeatComponent.BP_OnRep_StoredPlayerState");
		
		UArcVehiclePlayerSeatComponent_BP_OnRep_StoredPlayerState_Params params {};
		params.InPreviousPlayerState = InPreviousPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehiclePlayerSeatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehiclePlayerSeatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehiclePlayerSeatComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF820
	 * 		Name   -> Function ArcVehicles.ArcVehiclePawn.NotifyPlayerSeatChangeEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UArcVehicleSeatConfig*                       ToSeat                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UArcVehicleSeatConfig*                       FromSeat                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EArcVehicleSeatChangeType                          SeatChangeEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcVehiclePawn::NotifyPlayerSeatChangeEvent(class APlayerState* Player, class UArcVehicleSeatConfig* ToSeat, class UArcVehicleSeatConfig* FromSeat, EArcVehicleSeatChangeType SeatChangeEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePawn.NotifyPlayerSeatChangeEvent");
		
		AArcVehiclePawn_NotifyPlayerSeatChangeEvent_Params params {};
		params.Player = Player;
		params.ToSeat = ToSeat;
		params.FromSeat = FromSeat;
		params.SeatChangeEvent = SeatChangeEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF390
	 * 		Name   -> Function ArcVehicles.ArcVehiclePawn.GetSeatConfig
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UArcVehicleSeatConfig* AArcVehiclePawn::GetSeatConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePawn.GetSeatConfig");
		
		AArcVehiclePawn_GetSeatConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF360
	 * 		Name   -> Function ArcVehicles.ArcVehiclePawn.GetOwningVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class AArcBaseVehicle* AArcVehiclePawn::GetOwningVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehiclePawn.GetOwningVehicle");
		
		AArcVehiclePawn_GetOwningVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArcVehiclePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArcVehiclePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehiclePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFE90
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.SetupSeat
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UArcVehicleSeatConfig*                       SeatConfig                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::SetupSeat(class UArcVehicleSeatConfig* SeatConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.SetupSeat");
		
		AArcBaseVehicle_SetupSeat_Params params {};
		params.SeatConfig = SeatConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFD20
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.ServerPrintDebug_Request
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AArcBaseVehicle::ServerPrintDebug_Request()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.ServerPrintDebug_Request");
		
		AArcBaseVehicle_ServerPrintDebug_Request_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFC90
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.RequestLeaveVehicle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::RequestLeaveVehicle(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.RequestLeaveVehicle");
		
		AArcBaseVehicle_RequestLeaveVehicle_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFB90
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.RequestEnterSeat
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RequestedSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreRestrictions                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::RequestEnterSeat(class APlayerState* InPlayerState, int32_t RequestedSeatIndex, bool bIgnoreRestrictions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.RequestEnterSeat");
		
		AArcBaseVehicle_RequestEnterSeat_Params params {};
		params.InPlayerState = InPlayerState;
		params.RequestedSeatIndex = RequestedSeatIndex;
		params.bIgnoreRestrictions = bIgnoreRestrictions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFB00
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.RequestEnterAnySeat
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerState*                                InPlayerState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::RequestEnterAnySeat(class APlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.RequestEnterAnySeat");
		
		AArcBaseVehicle_RequestEnterAnySeat_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006B6E90
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.OnRep_ServerDebugStrings
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AArcBaseVehicle::OnRep_ServerDebugStrings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.OnRep_ServerDebugStrings");
		
		AArcBaseVehicle_OnRep_ServerDebugStrings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF790
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.IsValidSeatIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InSeatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AArcBaseVehicle::IsValidSeatIndex(int32_t InSeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.IsValidSeatIndex");
		
		AArcBaseVehicle_IsValidSeatIndex_Params params {};
		params.InSeatIndex = InSeatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF3C0
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.GetSortedExitPoints
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTransform                                  InputLocation                                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          OutTransformArray                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::GetSortedExitPoints(const struct FTransform& InputLocation, TArray<struct FTransform>* OutTransformArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.GetSortedExitPoints");
		
		AArcBaseVehicle_GetSortedExitPoints_Params params {};
		params.InputLocation = InputLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransformArray != nullptr)
			*OutTransformArray = params.OutTransformArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF250
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.GetNearestExitTransform
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  InputLocation                                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform AArcBaseVehicle::GetNearestExitTransform(const struct FTransform& InputLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.GetNearestExitTransform");
		
		AArcBaseVehicle_GetNearestExitTransform_Params params {};
		params.InputLocation = InputLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF220
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.GetDriverSeat
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UArcVehicleSeatConfig* AArcBaseVehicle::GetDriverSeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.GetDriverSeat");
		
		AArcBaseVehicle_GetDriverSeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF170
	 * 		Name   -> Function ArcVehicles.ArcBaseVehicle.GetAllSeats
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UArcVehicleSeatConfig*>               Seats                                                      (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AArcBaseVehicle::GetAllSeats(TArray<class UArcVehicleSeatConfig*>* Seats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcBaseVehicle.GetAllSeats");
		
		AArcBaseVehicle_GetAllSeats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seats != nullptr)
			*Seats = params.Seats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArcBaseVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArcBaseVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcBaseVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF6F0
	 * 		Name   -> Function ArcVehicles.ArcVehicleBPFunctionLibrary.IsSeatRefValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FArcVehicleSeatReference                    SeatRef                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UArcVehicleBPFunctionLibrary::STATIC_IsSeatRefValid(const struct FArcVehicleSeatReference& SeatRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleBPFunctionLibrary.IsSeatRefValid");
		
		UArcVehicleBPFunctionLibrary_IsSeatRefValid_Params params {};
		params.SeatRef = SeatRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF5F0
	 * 		Name   -> Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleSeatConfigFromRef
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FArcVehicleSeatReference                    SeatRef                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UArcVehicleSeatConfig* UArcVehicleBPFunctionLibrary::STATIC_GetVehicleSeatConfigFromRef(const struct FArcVehicleSeatReference& SeatRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleSeatConfigFromRef");
		
		UArcVehicleBPFunctionLibrary_GetVehicleSeatConfigFromRef_Params params {};
		params.SeatRef = SeatRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF520
	 * 		Name   -> Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleFromSeatConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FArcVehicleSeatReference                    SeatRef                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AArcBaseVehicle* UArcVehicleBPFunctionLibrary::STATIC_GetVehicleFromSeatConfig(const struct FArcVehicleSeatReference& SeatRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleBPFunctionLibrary.GetVehicleFromSeatConfig");
		
		UArcVehicleBPFunctionLibrary_GetVehicleFromSeatConfig_Params params {};
		params.SeatRef = SeatRef;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleBPFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleExitPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleExitPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleExitPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehiclePlayerStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehiclePlayerStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehiclePlayerStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArcVehicleSeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArcVehicleSeat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleSeat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFF40
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.UnAttachPlayerFromSeat
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleSeatConfig::UnAttachPlayerFromSeat(class APlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.UnAttachPlayerFromSeat");
		
		UArcVehicleSeatConfig_UnAttachPlayerFromSeat_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFF20
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.SetupSeatAttachment
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UArcVehicleSeatConfig::SetupSeatAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.SetupSeatAttachment");
		
		UArcVehicleSeatConfig_SetupSeatAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF6C0
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.IsOpenSeat
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UArcVehicleSeatConfig::IsOpenSeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.IsOpenSeat");
		
		UArcVehicleSeatConfig_IsOpenSeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF690
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.IsDriverSeat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UArcVehicleSeatConfig::IsDriverSeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.IsDriverSeat");
		
		UArcVehicleSeatConfig_IsDriverSeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF5C0
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.GetVehicleOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AArcBaseVehicle* UArcVehicleSeatConfig::GetVehicleOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.GetVehicleOwner");
		
		UArcVehicleSeatConfig_GetVehicleOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.BP_UnAttachPlayerFromSeat
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleSeatConfig::BP_UnAttachPlayerFromSeat(class APlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.BP_UnAttachPlayerFromSeat");
		
		UArcVehicleSeatConfig_BP_UnAttachPlayerFromSeat_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.BP_AttachPlayerToSeat
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleSeatConfig::BP_AttachPlayerToSeat(class APlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.BP_AttachPlayerToSeat");
		
		UArcVehicleSeatConfig_BP_AttachPlayerToSeat_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EF0E0
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig.AttachPlayerToSeat
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleSeatConfig::AttachPlayerToSeat(class APlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig.AttachPlayerToSeat");
		
		UArcVehicleSeatConfig_AttachPlayerToSeat_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleSeatConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleSeatConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleSeatConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleSeatConfig_PlayerAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleSeatConfig_PlayerAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleSeatConfig_PlayerAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFA00
	 * 		Name   -> Function ArcVehicles.ArcVehicleSeatConfig_SeatPawn.OnRep_SeatPawn
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AArcVehiclePawn*                             OldSeatPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleSeatConfig_SeatPawn::OnRep_SeatPawn(class AArcVehiclePawn* OldSeatPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleSeatConfig_SeatPawn.OnRep_SeatPawn");
		
		UArcVehicleSeatConfig_SeatPawn_OnRep_SeatPawn_Params params {};
		params.OldSeatPawn = OldSeatPawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleSeatConfig_SeatPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleSeatConfig_SeatPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleSeatConfig_SeatPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007EFDC0
	 * 		Name   -> Function ArcVehicles.ArcVehicleTurretMovementComp.Server_ServerMove
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FRotator                                    FullRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UArcVehicleTurretMovementComp::Server_ServerMove(const struct FRotator& FullRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcVehicles.ArcVehicleTurretMovementComp.Server_ServerMove");
		
		UArcVehicleTurretMovementComp_Server_ServerMove_Params params {};
		params.FullRotation = FullRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArcVehicleTurretMovementComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcVehicleTurretMovementComp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArcVehicles.ArcVehicleTurretMovementComp");
		return ptr;
	}

}


