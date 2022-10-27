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
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_GenericFXHazard_C::ConvertRelativeLocationsToWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld");
		
		AIO_GenericFXHazard_C_ConvertRelativeLocationsToWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDA_GenericFXHazard_C*                       self3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_GenericFXHazard_C::Audio_PlayShutdown(class UDA_GenericFXHazard_C* self3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown");
		
		AIO_GenericFXHazard_C_Audio_PlayShutdown_Params params {};
		params.self3 = self3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDA_GenericFXHazard_C*                       DataAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_GenericFXHazard_C::Audio_PlayWarmup(class UDA_GenericFXHazard_C* DataAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup");
		
		AIO_GenericFXHazard_C_Audio_PlayWarmup_Params params {};
		params.DataAsset = DataAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_GenericFXHazard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript");
		
		AIO_GenericFXHazard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_GenericFXHazard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay");
		
		AIO_GenericFXHazard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_GenericFXHazard_C::__UserState_FireState_1(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1");
		
		AIO_GenericFXHazard_C___UserState_FireState_1_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_GenericFXHazard_C::__UserState_FireState_2(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2");
		
		AIO_GenericFXHazard_C___UserState_FireState_2_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_GenericFXHazard_C::OnActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate");
		
		AIO_GenericFXHazard_C_OnActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_GenericFXHazard_C::OnDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate");
		
		AIO_GenericFXHazard_C_OnDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_GenericFXHazard_C::SetPlaceableFireState(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState");
		
		AIO_GenericFXHazard_C_SetPlaceableFireState_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AIO_GenericFXHazard_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard");
		
		AIO_GenericFXHazard_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_GenericFXHazard_C::ExecuteUbergraph_IO_GenericFXHazard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard");
		
		AIO_GenericFXHazard_C_ExecuteUbergraph_IO_GenericFXHazard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        GbxPlayerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_GenericFXHazard_C::Event_BeginPlayerOverlap__DelegateSignature(class AGbxPlayerController* GbxPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature");
		
		AIO_GenericFXHazard_C_Event_BeginPlayerOverlap__DelegateSignature_Params params {};
		params.GbxPlayerController = GbxPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_GenericFXHazard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_GenericFXHazard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_GenericFXHazard.IO_GenericFXHazard_C");
		return ptr;
	}

}


