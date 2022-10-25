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
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_GetType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_PetLoader_Variations                          LoaderType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_GetType(Enum_PetLoader_Variations* LoaderType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_GetType");
		
		ABPChar_PetLoader_Base_C_PetLoader_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoaderType != nullptr)
			*LoaderType = params.LoaderType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_isMissileBarrageDone
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isDone                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRPG_isMissileBarrageDone(bool* isDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_isMissileBarrageDone");
		
		ABPChar_PetLoader_Base_C_PetLoaderRPG_isMissileBarrageDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isDone != nullptr)
			*isDone = params.isDone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_isSpawningSurveyor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSpawningSurveyor                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_isSpawningSurveyor(bool* IsSpawningSurveyor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_isSpawningSurveyor");
		
		ABPChar_PetLoader_Base_C_PetLoader_isSpawningSurveyor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpawningSurveyor != nullptr)
			*IsSpawningSurveyor = params.IsSpawningSurveyor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRep_bActivateEXPLoader
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::OnRep_bActivateEXPLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRep_bActivateEXPLoader");
		
		ABPChar_PetLoader_Base_C_OnRep_bActivateEXPLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ChangeAlertState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewAlertState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::ChangeAlertState(bool NewAlertState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ChangeAlertState");
		
		ABPChar_PetLoader_Base_C_ChangeAlertState_Params params {};
		params.NewAlertState = NewAlertState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CanLoseMember
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsArm                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLeg                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanLoseMember                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::CanLoseMember(bool IsArm, bool IsLeg, bool* CanLoseMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CanLoseMember");
		
		ABPChar_PetLoader_Base_C_CanLoseMember_Params params {};
		params.IsArm = IsArm;
		params.IsLeg = IsLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanLoseMember != nullptr)
			*CanLoseMember = params.CanLoseMember;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ShowWeaponIfValid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::ShowWeaponIfValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ShowWeaponIfValid");
		
		ABPChar_PetLoader_Base_C_ShowWeaponIfValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CheckStartWithoutMembers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::CheckStartWithoutMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.CheckStartWithoutMembers");
		
		ABPChar_PetLoader_Base_C_CheckStartWithoutMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedLeg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SpawnToSocketName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ActionToPlay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageReactionEventSummary                 HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::SpawnDestroyedLeg(const class FName& SpawnToSocketName, class UClass* ActionToPlay, const struct FDamageReactionEventSummary& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedLeg");
		
		ABPChar_PetLoader_Base_C_SpawnDestroyedLeg_Params params {};
		params.SpawnToSocketName = SpawnToSocketName;
		params.ActionToPlay = ActionToPlay;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedArm
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SpawnToSocketName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageReactionEventSummary                 HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::SpawnDestroyedArm(const class FName& SpawnToSocketName, bool bHasWeapon, const struct FDamageReactionEventSummary& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.SpawnDestroyedArm");
		
		ABPChar_PetLoader_Base_C_SpawnDestroyedArm_Params params {};
		params.SpawnToSocketName = SpawnToSocketName;
		params.bHasWeapon = bHasWeapon;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.UserConstructionScript");
		
		ABPChar_PetLoader_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FStanceChangedEventArgs                     Args                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared(const struct FStanceChangedEventArgs& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared");
		
		ABPChar_PetLoader_Base_C_BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_LoaderShared_Params params {};
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ReceiveBeginPlay");
		
		ABPChar_PetLoader_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartFeetThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::StartFeetThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartFeetThrusters");
		
		ABPChar_PetLoader_Base_C_StartFeetThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StopFeetThrusters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::StopFeetThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StopFeetThrusters");
		
		ABPChar_PetLoader_Base_C_StopFeetThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetImmuneToPhaselock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsImmune                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_SetImmuneToPhaselock(bool bIsImmune)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetImmuneToPhaselock");
		
		ABPChar_PetLoader_Base_C_PetLoader_SetImmuneToPhaselock_Params params {};
		params.bIsImmune = bIsImmune;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.TriggerSmoke
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageReactionEventSummary                 HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::TriggerSmoke(const struct FDamageReactionEventSummary& HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.TriggerSmoke");
		
		ABPChar_PetLoader_Base_C_TriggerSmoke_Params params {};
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaserCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_StartLaserCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaserCharge");
		
		ABPChar_PetLoader_Base_C_PetLoader_StartLaserCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldHit
	 * 		Flags  -> (Net, NetReliable, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ShieldHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldHit");
		
		ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_IsUnboxSpawning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUnboxing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_IsUnboxSpawning(bool IsUnboxing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_IsUnboxSpawning");
		
		ABPChar_PetLoader_Base_C_PetLoader_IsUnboxSpawning_Params params {};
		params.IsUnboxing = IsUnboxing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftLegJointDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageReactionEventSummary                 Damage_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::OnLeftLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftLegJointDamaged");
		
		ABPChar_PetLoader_Base_C_OnLeftLegJointDamaged_Params params {};
		params.Damage_Event = Damage_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_AnticipateLaserBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderBadass_AnticipateLaserBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_AnticipateLaserBall");
		
		ABPChar_PetLoader_Base_C_PetLoaderBadass_AnticipateLaserBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightLegJointDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageReactionEventSummary                 Damage_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::OnRightLegJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightLegJointDamaged");
		
		ABPChar_PetLoader_Base_C_OnRightLegJointDamaged_Params params {};
		params.Damage_Event = Damage_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftArmJointDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageReactionEventSummary                 Damage_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::OnLeftArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnLeftArmJointDamaged");
		
		ABPChar_PetLoader_Base_C_OnLeftArmJointDamaged_Params params {};
		params.Damage_Event = Damage_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightArmJointDamaged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageReactionEventSummary                 Damage_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPChar_PetLoader_Base_C::OnRightArmJointDamaged(const struct FDamageReactionEventSummary& Damage_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnRightArmJointDamaged");
		
		ABPChar_PetLoader_Base_C_OnRightArmJointDamaged_Params params {};
		params.Damage_Event = Damage_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_ThrowLaserBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderBadass_ThrowLaserBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_ThrowLaserBall");
		
		ABPChar_PetLoader_Base_C_PetLoaderBadass_ThrowLaserBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetLoader_Base_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared");
		
		ABPChar_PetLoader_Base_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_LoaderShared_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StopSpawningSurveyor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FinishedWithSuccess                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_StopSpawningSurveyor(bool FinishedWithSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StopSpawningSurveyor");
		
		ABPChar_PetLoader_Base_C_PetLoader_StopSpawningSurveyor_Params params {};
		params.FinishedWithSuccess = FinishedWithSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartSpawningSurveyor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_StartSpawningSurveyor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartSpawningSurveyor");
		
		ABPChar_PetLoader_Base_C_PetLoader_StartSpawningSurveyor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_LaserGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderBadass_LaserGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderBadass_LaserGround");
		
		ABPChar_PetLoader_Base_C_PetLoaderBadass_LaserGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet");
		
		ABPChar_PetLoader_Base_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::OnEnrageBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageBegin");
		
		ABPChar_PetLoader_Base_C_OnEnrageBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::OnEnrageEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.OnEnrageEnd");
		
		ABPChar_PetLoader_Base_C_OnEnrageEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeEnd");
		
		ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftLegRemoveSparks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::LeftLegRemoveSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftLegRemoveSparks");
		
		ABPChar_PetLoader_Base_C_LeftLegRemoveSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightLegRemoveSparks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::RightLegRemoveSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightLegRemoveSparks");
		
		ABPChar_PetLoader_Base_C_RightLegRemoveSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftArmRemoveSparks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::LeftArmRemoveSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.LeftArmRemoveSparks");
		
		ABPChar_PetLoader_Base_C_LeftArmRemoveSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightArmRemoveSparks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::RightArmRemoveSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.RightArmRemoveSparks");
		
		ABPChar_PetLoader_Base_C_RightArmRemoveSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ActivateDLCSkill7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::ActivateDLCSkill7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ActivateDLCSkill7");
		
		ABPChar_PetLoader_Base_C_ActivateDLCSkill7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartDLCSkill7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::StartDLCSkill7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.StartDLCSkill7");
		
		ABPChar_PetLoader_Base_C_StartDLCSkill7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ChargeStart");
		
		ABPChar_PetLoader_Base_C_PetLoaderRIOT_ChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Active");
		
		ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Idle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_Idle");
		
		ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_NotActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_SetEXPCore_NotActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetEXPCore_NotActive");
		
		ABPChar_PetLoader_Base_C_PetLoader_SetEXPCore_NotActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpStart");
		
		ABPChar_PetLoader_Base_C_PetLoader_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_JumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_JumpEnd");
		
		ABPChar_PetLoader_Base_C_PetLoader_JumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_EnterCrawlingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_EnterCrawlingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_EnterCrawlingState");
		
		ABPChar_PetLoader_Base_C_PetLoader_EnterCrawlingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_ToggleHandGrip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_ToggleHandGrip(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_ToggleHandGrip");
		
		ABPChar_PetLoader_Base_C_PetLoader_ToggleHandGrip_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_StartLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_StartLaser");
		
		ABPChar_PetLoader_Base_C_PetLoader_StartLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetProjectedIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_PetLoader_ProjectedIcons                      Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetLoader_Base_C::PetLoader_SetProjectedIcon(Enum_PetLoader_ProjectedIcons Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoader_SetProjectedIcon");
		
		ABPChar_PetLoader_Base_C_PetLoader_SetProjectedIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_ShootMissile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRPG_ShootMissile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRPG_ShootMissile");
		
		ABPChar_PetLoader_Base_C_PetLoaderRPG_ShootMissile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldDestroyed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ShieldDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ShieldDestroyed");
		
		ABPChar_PetLoader_Base_C_PetLoaderRIOT_ShieldDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ThrowShield
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderRIOT_ThrowShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderRIOT_ThrowShield");
		
		ABPChar_PetLoader_Base_C_PetLoaderRIOT_ThrowShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_SelfDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderEXP_SelfDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_SelfDestruct");
		
		ABPChar_PetLoader_Base_C_PetLoaderEXP_SelfDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_Explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_PetLoader_Base_C::PetLoaderEXP_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.PetLoaderEXP_Explode");
		
		ABPChar_PetLoader_Base_C_PetLoaderEXP_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ExecuteUbergraph_BPChar_PetLoader_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_PetLoader_Base_C::ExecuteUbergraph_BPChar_PetLoader_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_PetLoader_Base.BPChar_PetLoader_Base_C.ExecuteUbergraph_BPChar_PetLoader_Base");
		
		ABPChar_PetLoader_Base_C_ExecuteUbergraph_BPChar_PetLoader_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_PetLoader_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_PetLoader_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PetLoader_Base.BPChar_PetLoader_Base_C");
		return ptr;
	}

}


