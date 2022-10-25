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
	 * 		Name   -> Function BP_Compass.BP_Compass_C.OnMarkerExpired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_CompassMarker_C*                         MarkerWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Compass_C::OnMarkerExpired(class UBP_CompassMarker_C* MarkerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.OnMarkerExpired");
		
		UBP_Compass_C_OnMarkerExpired_Params params {};
		params.MarkerWidget = MarkerWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Compass.BP_Compass_C.AddCompassMarker
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DestinationLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECompassMarkerType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      FollowActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Compass_C::AddCompassMarker(struct FVector* DestinationLocation, ECompassMarkerType Type, class AActor* FollowActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.AddCompassMarker");
		
		UBP_Compass_C_AddCompassMarker_Params params {};
		params.Type = Type;
		params.FollowActor = FollowActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DestinationLocation != nullptr)
			*DestinationLocation = params.DestinationLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Compass.BP_Compass_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_Compass_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.Construct");
		
		UBP_Compass_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Compass.BP_Compass_C.AddCompassMarkerEvent
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      FollowActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECompassMarkerType                                 MarkerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Compass_C::AddCompassMarkerEvent(const struct FVector& WorldLocation, class AActor* FollowActor, ECompassMarkerType MarkerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.AddCompassMarkerEvent");
		
		UBP_Compass_C_AddCompassMarkerEvent_Params params {};
		params.WorldLocation = WorldLocation;
		params.FollowActor = FollowActor;
		params.MarkerType = MarkerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Compass.BP_Compass_C.UpdateMarkerAngle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    CameraRotation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UBP_Compass_C::UpdateMarkerAngle(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.UpdateMarkerAngle");
		
		UBP_Compass_C_UpdateMarkerAngle_Params params {};
		params.CameraLocation = CameraLocation;
		params.CameraRotation = CameraRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Compass.BP_Compass_C.ExecuteUbergraph_BP_Compass
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Compass_C::ExecuteUbergraph_BP_Compass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Compass.BP_Compass_C.ExecuteUbergraph_BP_Compass");
		
		UBP_Compass_C_ExecuteUbergraph_BP_Compass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Compass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Compass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Compass.BP_Compass_C");
		return ptr;
	}

}


