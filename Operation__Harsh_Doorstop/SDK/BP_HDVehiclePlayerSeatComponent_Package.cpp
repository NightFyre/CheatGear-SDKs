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
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.GetValidSeatConfig
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UArcVehicleSeatConfig*                       SeatConfig                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::GetValidSeatConfig(class UArcVehicleSeatConfig** SeatConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.GetValidSeatConfig");
		
		UBP_HDVehiclePlayerSeatComponent_C_GetValidSeatConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SeatConfig != nullptr)
			*SeatConfig = params.SeatConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ReceiveBeginPlay");
		
		UBP_HDVehiclePlayerSeatComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VictimPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 VictimController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::OnDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnDeath");
		
		UBP_HDVehiclePlayerSeatComponent_C_OnDeath_Params params {};
		params.VictimPawn = VictimPawn;
		params.VictimController = VictimController;
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnSeatChangeEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EArcVehicleSeatChangeType                          SeatChangeType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::OnSeatChangeEvent(EArcVehicleSeatChangeType SeatChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.OnSeatChangeEvent");
		
		UBP_HDVehiclePlayerSeatComponent_C_OnSeatChangeEvent_Params params {};
		params.SeatChangeType = SeatChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ResetPlayerCameraConstraints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::ResetPlayerCameraConstraints(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ResetPlayerCameraConstraints");
		
		UBP_HDVehiclePlayerSeatComponent_C_ResetPlayerCameraConstraints_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.SetupPlayerCameraConstraints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::SetupPlayerCameraConstraints(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.SetupPlayerCameraConstraints");
		
		UBP_HDVehiclePlayerSeatComponent_C_SetupPlayerCameraConstraints_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDVehiclePlayerSeatComponent_C::ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C.ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent");
		
		UBP_HDVehiclePlayerSeatComponent_C_ExecuteUbergraph_BP_HDVehiclePlayerSeatComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDVehiclePlayerSeatComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDVehiclePlayerSeatComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDVehiclePlayerSeatComponent.BP_HDVehiclePlayerSeatComponent_C");
		return ptr;
	}

}


