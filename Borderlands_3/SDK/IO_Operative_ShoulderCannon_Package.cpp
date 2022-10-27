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
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonCreateLightProjectile(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile");
		
		AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeShoulderCannon                           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonSetState(EOperativeShoulderCannon NewState, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState");
		
		AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeFireShoulderCannon(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon");
		
		AIO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DigistructIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished");
		
		AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params params {};
		params.DigistructIn = DigistructIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::TryCannonMod5(class UObject* DamageType, class AActor* DamagedActor, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod5");
		
		AIO_Operative_ShoulderCannon_C_TryCannonMod5_Params params {};
		params.DamageType = DamageType;
		params.DamagedActor = DamagedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WarCrit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::TryCannonMod4(bool WarCrit, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod4");
		
		AIO_Operative_ShoulderCannon_C_TryCannonMod4_Params params {};
		params.WarCrit = WarCrit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasCritOrDeath                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::TryCannonMod3(class AActor* DamagedActor, bool WasCritOrDeath, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TryCannonMod3");
		
		AIO_Operative_ShoulderCannon_C_TryCannonMod3_Params params {};
		params.DamagedActor = DamagedActor;
		params.WasCritOrDeath = WasCritOrDeath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::CanBePulled(class AActor* Target, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.CanBePulled");
		
		AIO_Operative_ShoulderCannon_C_CanBePulled_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::PlayCannonFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.PlayCannonFeedback");
		
		AIO_Operative_ShoulderCannon_C_PlayCannonFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::AttachToOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.AttachToOwner");
		
		AIO_Operative_ShoulderCannon_C_AttachToOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_ShoulderCannon_C::GetFireAction(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetFireAction");
		
		AIO_Operative_ShoulderCannon_C_GetFireAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AIO_Operative_ShoulderCannon_C::GetShoulderCannonDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.GetShoulderCannonDamage");
		
		AIO_Operative_ShoulderCannon_C_GetShoulderCannonDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnBeginReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnBeginReload");
		
		AIO_Operative_ShoulderCannon_C_OnBeginReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnFininshedDespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnFininshedDespawned");
		
		AIO_Operative_ShoulderCannon_C_OnFininshedDespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnDespawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnDespawning");
		
		AIO_Operative_ShoulderCannon_C_OnDespawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnCannonFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonFired");
		
		AIO_Operative_ShoulderCannon_C_OnCannonFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnCannonCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnCannonCreated");
		
		AIO_Operative_ShoulderCannon_C_OnCannonCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::OnRep_CannonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OnRep_CannonState");
		
		AIO_Operative_ShoulderCannon_C_OnRep_CannonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.UserConstructionScript");
		
		AIO_Operative_ShoulderCannon_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::BeginReloadAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginReloadAnim");
		
		AIO_Operative_ShoulderCannon_C_BeginReloadAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::EndReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.EndReload");
		
		AIO_Operative_ShoulderCannon_C_EndReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeShoulderCannonReload(bool Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload");
		
		AIO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params params {};
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fast                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Operative_ShoulderCannon_C::OperativeRemoveShoulderCannon(bool Fast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon");
		
		AIO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params params {};
		params.Fast = Fast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::StartIdleAfterFireTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartIdleAfterFireTimer");
		
		AIO_Operative_ShoulderCannon_C_StartIdleAfterFireTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::IdleToUnequip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.IdleToUnequip");
		
		AIO_Operative_ShoulderCannon_C_IdleToUnequip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::TransitionToUnequipState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.TransitionToUnequipState");
		
		AIO_Operative_ShoulderCannon_C_TransitionToUnequipState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::StartUnequippedIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.StartUnequippedIdle");
		
		AIO_Operative_ShoulderCannon_C_StartUnequippedIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AIO_Operative_ShoulderCannon_C::ShoulderCannon_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedDeath");
		
		AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedDeath_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::BeginCannonFireAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.BeginCannonFireAnim");
		
		AIO_Operative_ShoulderCannon_C_BeginCannonFireAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void AIO_Operative_ShoulderCannon_C::ShoulderCannon_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ShoulderCannon_OnCausedAnyDamage");
		
		AIO_Operative_ShoulderCannon_C_ShoulderCannon_OnCausedAnyDamage_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ReceiveBeginPlay");
		
		AIO_Operative_ShoulderCannon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Operative_ShoulderCannon_C::Audio_PlayFiringSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.Audio_PlayFiringSound");
		
		AIO_Operative_ShoulderCannon_C_Audio_PlayFiringSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Operative_ShoulderCannon_C::ExecuteUbergraph_IO_Operative_ShoulderCannon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C.ExecuteUbergraph_IO_Operative_ShoulderCannon");
		
		AIO_Operative_ShoulderCannon_C_ExecuteUbergraph_IO_Operative_ShoulderCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_Operative_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_Operative_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_Operative_ShoulderCannon.IO_Operative_ShoulderCannon_C");
		return ptr;
	}

}


