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
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.SecondWindKillCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         CausedDeathDetails                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPFightForYourLifeComponent_C::SecondWindKillCheck(class UActorComponent* DamagedActor, const struct FCausedDeathDetails& CausedDeathDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.SecondWindKillCheck");
		
		UBPFightForYourLifeComponent_C_SecondWindKillCheck_Params params {};
		params.DamagedActor = DamagedActor;
		params.CausedDeathDetails = CausedDeathDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WormholeStarting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::WormholeStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WormholeStarting");
		
		UBPFightForYourLifeComponent_C_WormholeStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredIsRespawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::InjuredIsRespawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredIsRespawning");
		
		UBPFightForYourLifeComponent_C_InjuredIsRespawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::MarkDamagedEnemy(class AActor* DamagedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy");
		
		UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Params params {};
		params.DamagedActor = DamagedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_CinematicPause_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Local");
		
		UBPFightForYourLifeComponent_C_DownState_CinematicPause_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_CinematicPause_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_CinematicPause_Host");
		
		UBPFightForYourLifeComponent_C_DownState_CinematicPause_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Exertion_StanceChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStanceChangedEventArgs                     StanceArgs                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void UBPFightForYourLifeComponent_C::Exertion_StanceChange(const struct FStanceChangedEventArgs& StanceArgs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Exertion_StanceChange");
		
		UBPFightForYourLifeComponent_C_Exertion_StanceChange_Params params {};
		params.StanceArgs = StanceArgs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectLocal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ImmediateTravelToResurrectLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectLocal");
		
		UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Finished_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Local");
		
		UBPFightForYourLifeComponent_C_DownState_Finished_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectHost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Interrupted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFightForYourLifeComponent_C::ImmediateTravelToResurrectHost(bool Interrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ImmediateTravelToResurrectHost");
		
		UBPFightForYourLifeComponent_C_ImmediateTravelToResurrectHost_Params params {};
		params.Interrupted = Interrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ResurrectAtResurrectStation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTravelStationResurrectComponent*            ResurrectStationComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::ResurrectAtResurrectStation(class UTravelStationResurrectComponent* ResurrectStationComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ResurrectAtResurrectStation");
		
		UBPFightForYourLifeComponent_C_ResurrectAtResurrectStation_Params params {};
		params.ResurrectStationComponent = ResurrectStationComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::GivingUp_Stopped_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Local");
		
		UBPFightForYourLifeComponent_C_GivingUp_Stopped_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::GivingUp_Started_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Local");
		
		UBPFightForYourLifeComponent_C_GivingUp_Started_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::GivingUp_Stopped_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Stopped_Host");
		
		UBPFightForYourLifeComponent_C_GivingUp_Stopped_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::GivingUp_Started_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.GivingUp_Started_Host");
		
		UBPFightForYourLifeComponent_C_GivingUp_Started_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHeavyAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishHeavyAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHeavyAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishHeavyAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishGrenadeAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishGrenadeAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishGrenadeAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishGrenadeAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishPistolAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishPistolAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishPistolAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishPistolAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishShotgunAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishShotgunAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishShotgunAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishShotgunAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSniperRifleAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishSniperRifleAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSniperRifleAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishSniperRifleAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishAssault RifleAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishAssault_RifleAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishAssault RifleAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishAssault_RifleAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSMGAmmoToSetPercentage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishSMGAmmoToSetPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishSMGAmmoToSetPercentage");
		
		UBPFightForYourLifeComponent_C_ReplenishSMGAmmoToSetPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Finished_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Finished_Host");
		
		UBPFightForYourLifeComponent_C_DownState_Finished_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Stopped_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHealed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFightForYourLifeComponent_C::Reviving_Stopped_Host(bool IsHealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Stopped_Host");
		
		UBPFightForYourLifeComponent_C_Reviving_Stopped_Host_Params params {};
		params.IsHealed = IsHealed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::Reviving_Started_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Local");
		
		UBPFightForYourLifeComponent_C_Reviving_Started_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorBeingRevived                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::Reviving_Started_Host(class AActor* ActorBeingRevived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.Reviving_Started_Host");
		
		UBPFightForYourLifeComponent_C_Reviving_Started_Host_Params params {};
		params.ActorBeingRevived = ActorBeingRevived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.RespawnAtResurrectStation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::RespawnAtResurrectStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.RespawnAtResurrectStation");
		
		UBPFightForYourLifeComponent_C_RespawnAtResurrectStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHealthAndShields
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HealthPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShieldPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::ReplenishHealthAndShields(float HealthPercent, float ShieldPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReplenishHealthAndShields");
		
		UBPFightForYourLifeComponent_C_ReplenishHealthAndShields_Params params {};
		params.HealthPercent = HealthPercent;
		params.ShieldPercent = ShieldPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::InjuredStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredStop");
		
		UBPFightForYourLifeComponent_C_InjuredStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredLive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::InjuredLive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.InjuredLive");
		
		UBPFightForYourLifeComponent_C_InjuredLive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeRevived
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::FightForYourLifeRevived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeRevived");
		
		UBPFightForYourLifeComponent_C_FightForYourLifeRevived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeTimeExpired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::FightForYourLifeTimeExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeTimeExpired");
		
		UBPFightForYourLifeComponent_C_FightForYourLifeTimeExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Stopped_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::BeingRevived_Stopped_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Stopped_Host");
		
		UBPFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Local
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Stopped_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Local");
		
		UBPFightForYourLifeComponent_C_DownState_Stopped_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Stopped_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Stopped_Host");
		
		UBPFightForYourLifeComponent_C_DownState_Stopped_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Local
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::BeingRevived_Started_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Local");
		
		UBPFightForYourLifeComponent_C_BeingRevived_Started_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Host
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::BeingRevived_Started_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.BeingRevived_Started_Host");
		
		UBPFightForYourLifeComponent_C_BeingRevived_Started_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeKilledEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::FightForYourLifeKilledEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FightForYourLifeKilledEnemy");
		
		UBPFightForYourLifeComponent_C_FightForYourLifeKilledEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Local
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Started_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Local");
		
		UBPFightForYourLifeComponent_C_DownState_Started_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Host
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::DownState_Started_Host()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.DownState_Started_Host");
		
		UBPFightForYourLifeComponent_C_DownState_Started_Host_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Recover
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::FFYL_Penalty_Recover(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Recover");
		
		UBPFightForYourLifeComponent_C_FFYL_Penalty_Recover_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_Died
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::MarkDamagedEnemy_Died(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_Died");
		
		UBPFightForYourLifeComponent_C_MarkDamagedEnemy_Died_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_RefreshDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::MarkDamagedEnemy_RefreshDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.MarkDamagedEnemy_RefreshDelay");
		
		UBPFightForYourLifeComponent_C_MarkDamagedEnemy_RefreshDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ReceiveBeginPlay");
		
		UBPFightForYourLifeComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Apply
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UBPFightForYourLifeComponent_C::FFYL_Penalty_Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.FFYL_Penalty_Apply");
		
		UBPFightForYourLifeComponent_C_FFYL_Penalty_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WatchForSecondWindKill
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPFightForYourLifeComponent_C::WatchForSecondWindKill(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.WatchForSecondWindKill");
		
		UBPFightForYourLifeComponent_C_WatchForSecondWindKill_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.CausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPFightForYourLifeComponent_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.CausedDeath");
		
		UBPFightForYourLifeComponent_C_CausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ExecuteUbergraph_BPFightForYourLifeComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPFightForYourLifeComponent_C::ExecuteUbergraph_BPFightForYourLifeComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPFightForYourLifeComponent.BPFightForYourLifeComponent_C.ExecuteUbergraph_BPFightForYourLifeComponent");
		
		UBPFightForYourLifeComponent_C_ExecuteUbergraph_BPFightForYourLifeComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPFightForYourLifeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPFightForYourLifeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPFightForYourLifeComponent.BPFightForYourLifeComponent_C");
		return ptr;
	}

}


