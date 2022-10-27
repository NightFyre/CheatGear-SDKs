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
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHealed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPNPCFightForYourLifeComponent_C::Reviving_Stopped_Host(bool IsHealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host");
		
		UBPNPCFightForYourLifeComponent_C_Reviving_Stopped_Host_Params params {};
		params.IsHealed = IsHealed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorBeingRevived                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPNPCFightForYourLifeComponent_C::Reviving_Started_Host(class AActor* ActorBeingRevived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host");
		
		UBPNPCFightForYourLifeComponent_C_Reviving_Started_Host_Params params {};
		params.ActorBeingRevived = ActorBeingRevived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HealthPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShieldPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPNPCFightForYourLifeComponent_C::ReplenishHealthAndShields(float HealthPercent, float ShieldPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields");
		
		UBPNPCFightForYourLifeComponent_C_ReplenishHealthAndShields_Params params {};
		params.HealthPercent = HealthPercent;
		params.ShieldPercent = ShieldPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::InjuredStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop");
		
		UBPNPCFightForYourLifeComponent_C_InjuredStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::InjuredLive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive");
		
		UBPNPCFightForYourLifeComponent_C_InjuredLive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::BeingRevived_Stopped_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host");
		
		UBPNPCFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::BeingRevived_Started_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host");
		
		UBPNPCFightForYourLifeComponent_C_BeingRevived_Started_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::DownState_Finished_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host");
		
		UBPNPCFightForYourLifeComponent_C_DownState_Finished_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::DownState_Stopped_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host");
		
		UBPNPCFightForYourLifeComponent_C_DownState_Stopped_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::DownState_Started_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host");
		
		UBPNPCFightForYourLifeComponent_C_DownState_Started_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPNPCFightForYourLifeComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay");
		
		UBPNPCFightForYourLifeComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorBeingRevived                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPNPCFightForYourLifeComponent_C::OnRevivingState_StartHost_Event_1(class AActor* ActorBeingRevived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1");
		
		UBPNPCFightForYourLifeComponent_C_OnRevivingState_StartHost_Event_1_Params params {};
		params.ActorBeingRevived = ActorBeingRevived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPNPCFightForYourLifeComponent_C::ExecuteUbergraph_BPNPCFightForYourLifeComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent");
		
		UBPNPCFightForYourLifeComponent_C_ExecuteUbergraph_BPNPCFightForYourLifeComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPNPCFightForYourLifeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPNPCFightForYourLifeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C");
		return ptr;
	}

}


