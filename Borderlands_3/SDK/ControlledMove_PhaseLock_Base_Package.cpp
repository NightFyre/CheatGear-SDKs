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
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_Base_C::PlayDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.PlayDetach");
		
		UControlledMove_PhaseLock_Base_C_PlayDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_PhaseLock_Base_C::ConfigurePhaseLockProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ConfigurePhaseLockProperties");
		
		UControlledMove_PhaseLock_Base_C_ConfigurePhaseLockProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_Base_C::TryDestroyComponent(class UParticleSystemComponent* Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.TryDestroyComponent");
		
		UControlledMove_PhaseLock_Base_C_TryDestroyComponent_Params params {};
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_Base_C::OnStart(float MoveDuration, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStart");
		
		UControlledMove_PhaseLock_Base_C_OnStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_PhaseLock_Base_C::OnStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnStop");
		
		UControlledMove_PhaseLock_Base_C_OnStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_Base_C::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStart");
		
		UControlledMove_PhaseLock_Base_C_OnServerStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UControlledMove_PhaseLock_Base_C::OnServerStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.OnServerStop");
		
		UControlledMove_PhaseLock_Base_C_OnServerStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_PhaseLock_Base_C::ExecuteUbergraph_ControlledMove_PhaseLock_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C.ExecuteUbergraph_ControlledMove_PhaseLock_Base");
		
		UControlledMove_PhaseLock_Base_C_ExecuteUbergraph_ControlledMove_PhaseLock_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_PhaseLock_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_PhaseLock_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C");
		return ptr;
	}

}


