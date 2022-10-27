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
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Digiclone                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::GetDigiCloneReference(class AActor** Digiclone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneReference");
		
		UActionSkill_Operative_DigiClone_C_GetDigiCloneReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Digiclone != nullptr)
			*Digiclone = params.Digiclone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UActionSkill_Operative_DigiClone_C::Is_DigiClone_Active(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Is DigiClone Active");
		
		UActionSkill_Operative_DigiClone_C_Is_DigiClone_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Attempt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FEnvQueryParams                             Params                                                     (Parm, OutParm, ContainsInstancedReference)
	 * 		class AActor*                                      QueryContext                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::GetQueryParamsForCloneSwapLocationAttempt(int32_t Attempt, struct FEnvQueryParams* Params, class AActor** QueryContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetQueryParamsForCloneSwapLocationAttempt");
		
		UActionSkill_Operative_DigiClone_C_GetQueryParamsForCloneSwapLocationAttempt_Params params {};
		params.Attempt = Attempt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
		if (QueryContext != nullptr)
			*QueryContext = params.QueryContext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UActionSkill_Operative_DigiClone_C::ShouldStopAbilityOnPawnSlotComponentAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldStopAbilityOnPawnSlotComponentAttach");
		
		UActionSkill_Operative_DigiClone_C_ShouldStopAbilityOnPawnSlotComponentAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABPChar_DigiClone_Base_C*                    NewClone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::PlayDigiCloneSpawnFX(class ABPChar_DigiClone_Base_C* NewClone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PlayDigiCloneSpawnFX");
		
		UActionSkill_Operative_DigiClone_C_PlayDigiCloneSpawnFX_Params params {};
		params.NewClone = NewClone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GrenadeSpawnCost                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::PayDigiCloneSpawnCost(int32_t GrenadeSpawnCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.PayDigiCloneSpawnCost");
		
		UActionSkill_Operative_DigiClone_C_PayDigiCloneSpawnCost_Params params {};
		params.GrenadeSpawnCost = GrenadeSpawnCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::GetDigiCloneGrenadeSpawnCost(int32_t* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigiCloneGrenadeSpawnCost");
		
		UActionSkill_Operative_DigiClone_C_GetDigiCloneGrenadeSpawnCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            GrenadeSpawnCost                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::GetDigicloneClass(int32_t GrenadeSpawnCost, class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetDigicloneClass");
		
		UActionSkill_Operative_DigiClone_C_GetDigicloneClass_Params params {};
		params.GrenadeSpawnCost = GrenadeSpawnCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::DoBurst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.DoBurst");
		
		UActionSkill_Operative_DigiClone_C_DoBurst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Operative_DigiClone_C::TryJustAcceptRefund(float Damage, const struct FVector& HitLocation, const struct FVector& HitDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.TryJustAcceptRefund");
		
		UActionSkill_Operative_DigiClone_C_TryJustAcceptRefund_Params params {};
		params.Damage = Damage;
		params.HitLocation = HitLocation;
		params.HitDirection = HitDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AOakCharacter* UActionSkill_Operative_DigiClone_C::SpawnNewDigiclone(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SpawnNewDigiclone");
		
		UActionSkill_Operative_DigiClone_C_SpawnNewDigiclone_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::StartDistractionPrinciple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartDistractionPrinciple");
		
		UActionSkill_Operative_DigiClone_C_StartDistractionPrinciple_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		unsigned char                                      OutAbortCode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSkill_Operative_DigiClone_C::ShouldAbortActivation(unsigned char* OutAbortCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ShouldAbortActivation");
		
		UActionSkill_Operative_DigiClone_C_ShouldAbortActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAbortCode != nullptr)
			*OutAbortCode = params.OutAbortCode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	float UActionSkill_Operative_DigiClone_C::GetCooldownRestartPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.GetCooldownRestartPercent");
		
		UActionSkill_Operative_DigiClone_C_GetCooldownRestartPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::Add_Swap_Places_Modifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Add Swap Places Modifier");
		
		UActionSkill_Operative_DigiClone_C_Add_Swap_Places_Modifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::Corsican(float Damage, class APawn* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Corsican");
		
		UActionSkill_Operative_DigiClone_C_Corsican_Params params {};
		params.Damage = Damage;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnStartActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnStartActionAbility");
		
		UActionSkill_Operative_DigiClone_C_OnStartActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ECloneSwapReason                                   Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::SwapPlaces(ECloneSwapReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.SwapPlaces");
		
		UActionSkill_Operative_DigiClone_C_SwapPlaces_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Digiclone                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::ReleaseDigiclone(class AOakCharacter* Digiclone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ReleaseDigiclone");
		
		UActionSkill_Operative_DigiClone_C_ReleaseDigiclone_Params params {};
		params.Digiclone = Digiclone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::OnCorsicanDamage(float Damage, class APawn* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCorsicanDamage");
		
		UActionSkill_Operative_DigiClone_C_OnCorsicanDamage_Params params {};
		params.Damage = Damage;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::BeginDetonateClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.BeginDetonateClone");
		
		UActionSkill_Operative_DigiClone_C_BeginDetonateClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::CancelDetonateClone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.CancelDetonateClone");
		
		UActionSkill_Operative_DigiClone_C_CancelDetonateClone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::NotifyPanicButtonTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.NotifyPanicButtonTriggered");
		
		UActionSkill_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::Just_Accept_It_Timer_Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.Just Accept It Timer Done");
		
		UActionSkill_Operative_DigiClone_C_Just_Accept_It_Timer_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnCloneSwapStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapStarted");
		
		UActionSkill_Operative_DigiClone_C_OnCloneSwapStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnPlayerSwapStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapStarted");
		
		UActionSkill_Operative_DigiClone_C_OnPlayerSwapStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnPlayerSwapSucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapSucceeded");
		
		UActionSkill_Operative_DigiClone_C_OnPlayerSwapSucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::StartSeperationAnxietyNova(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.StartSeperationAnxietyNova");
		
		UActionSkill_Operative_DigiClone_C_StartSeperationAnxietyNova_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnCloneSwapSucceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapSucceeded");
		
		UActionSkill_Operative_DigiClone_C_OnCloneSwapSucceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnPlayerSwapFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnPlayerSwapFailed");
		
		UActionSkill_Operative_DigiClone_C_OnPlayerSwapFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UActionSkill_Operative_DigiClone_C::OnCloneSwapFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.OnCloneSwapFailed");
		
		UActionSkill_Operative_DigiClone_C_OnCloneSwapFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionSkill_Operative_DigiClone_C::ExecuteUbergraph_ActionSkill_Operative_DigiClone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C.ExecuteUbergraph_ActionSkill_Operative_DigiClone");
		
		UActionSkill_Operative_DigiClone_C_ExecuteUbergraph_ActionSkill_Operative_DigiClone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionSkill_Operative_DigiClone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSkill_Operative_DigiClone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionSkill_Operative_DigiClone.ActionSkill_Operative_DigiClone_C");
		return ptr;
	}

}


