/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemies In Range And Angle
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              MonsterBase                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResultByTargetActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    DCCharacterBase                                            (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_GetEnemiesInRangeAndAngle(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, bool ResultByTargetActor, double Range, double Direction, double Angle, class UObject* __WorldContext, bool* Result, TArray<class ADCCharacterBase*>* DCCharacterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemies In Range And Angle");
		
		UMonsterBPLibrary_C_GetEnemiesInRangeAndAngle_Params params {};
		params.MonsterBase = MonsterBase;
		params.ResultByTargetActor = ResultByTargetActor;
		params.Range = Range;
		params.Direction = Direction;
		params.Angle = Angle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (DCCharacterBase != nullptr)
			*DCCharacterBase = params.DCCharacterBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Direction Vector
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_Direction                                        Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultVector                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetDirectionVector(class AActor* Actor, E_Direction Direction, double Distance, class UObject* __WorldContext, struct FVector* ResultVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Direction Vector");
		
		UMonsterBPLibrary_C_GetDirectionVector_Params params {};
		params.Actor = Actor;
		params.Direction = Direction;
		params.Distance = Distance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultVector != nullptr)
			*ResultVector = params.ResultVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Timer
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADCMonsterBase*                              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TimerIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_RemoveTimer(class ADCMonsterBase* DCMonsterBase, int32_t TimerIndex, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Timer");
		
		UMonsterBPLibrary_C_RemoveTimer_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.TimerIndex = TimerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Change GE Attribute And Apply
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimaryAssetId                             GameplayEffect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                SetByCallerTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_ChangeGEAttributeAndApply(class AActor* SourceActor, class AActor* TargetActor, const struct FPrimaryAssetId& GameplayEffect, const struct FGameplayTag& SetByCallerTag, double Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Change GE Attribute And Apply");
		
		UMonsterBPLibrary_C_ChangeGEAttributeAndApply_Params params {};
		params.SourceActor = SourceActor;
		params.TargetActor = TargetActor;
		params.GameplayEffect = GameplayEffect;
		params.SetByCallerTag = SetByCallerTag;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB HPRatio
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              MonsterBase                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HPRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetBBHPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, double HPRatio, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB HPRatio");
		
		UMonsterBPLibrary_C_SetBBHPRatio_Params params {};
		params.MonsterBase = MonsterBase;
		params.HPRatio = HPRatio;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB HPRatio
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              MonsterBase                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HPRatio                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetBBHPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, class UObject* __WorldContext, double* HPRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB HPRatio");
		
		UMonsterBPLibrary_C_GetBBHPRatio_Params params {};
		params.MonsterBase = MonsterBase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HPRatio != nullptr)
			*HPRatio = params.HPRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Instigator From Added Tag
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetInstigatorFromAddedTag(const struct FGameplayTag& GameplayTag, const struct FGameplayEffectSpecHandle& SpecHandle, class UObject* __WorldContext, bool* Result, class AActor** Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Instigator From Added Tag");
		
		UMonsterBPLibrary_C_GetInstigatorFromAddedTag_Params params {};
		params.GameplayTag = GameplayTag;
		params.SpecHandle = SpecHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Interrupt Montage Immune Tags
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        InterruptActionImmuneTags                                  (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_GetInterruptMontageImmuneTags(class UObject* __WorldContext, TArray<struct FGameplayTag>* InterruptActionImmuneTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Interrupt Montage Immune Tags");
		
		UMonsterBPLibrary_C_GetInterruptMontageImmuneTags_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterruptActionImmuneTags != nullptr)
			*InterruptActionImmuneTags = params.InterruptActionImmuneTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Debuff Immune Tags
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        DebuffImmuneTags                                           (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_GetDebuffImmuneTags(class UObject* __WorldContext, TArray<struct FGameplayTag>* DebuffImmuneTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Debuff Immune Tags");
		
		UMonsterBPLibrary_C_GetDebuffImmuneTags_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebuffImmuneTags != nullptr)
			*DebuffImmuneTags = params.DebuffImmuneTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Interrtupt Montage Immune
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_RemoveInterrtuptMontageImmune(class AActor* Actor, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Interrtupt Montage Immune");
		
		UMonsterBPLibrary_C_RemoveInterrtuptMontageImmune_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Interrupt Montage Immune
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetInterruptMontageImmune(class AActor* Actor, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Interrupt Montage Immune");
		
		UMonsterBPLibrary_C_SetInterruptMontageImmune_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Debuff Immune
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Impact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               KnockBack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Trap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UnableMove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_RemoveDebuffImmune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Debuff Immune");
		
		UMonsterBPLibrary_C_RemoveDebuffImmune_Params params {};
		params.Actor = Actor;
		params.Fear = Fear;
		params.Impact = Impact;
		params.KnockBack = KnockBack;
		params.Trap = Trap;
		params.UnableMove = UnableMove;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Debuff Immune
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Impact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               KnockBack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Trap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UnableMove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetDebuffImmune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Debuff Immune");
		
		UMonsterBPLibrary_C_SetDebuffImmune_Params params {};
		params.Actor = Actor;
		params.Fear = Fear;
		params.Impact = Impact;
		params.KnockBack = KnockBack;
		params.Trap = Trap;
		params.UnableMove = UnableMove;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Launch Enemy
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               LaunchWeaponDirection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             XYValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_LaunchEnemy(const struct FGameplayEventData& EventData, bool LaunchWeaponDirection, double XYValue, double ZValue, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Launch Enemy");
		
		UMonsterBPLibrary_C_LaunchEnemy_Params params {};
		params.EventData = EventData;
		params.LaunchWeaponDirection = LaunchWeaponDirection;
		params.XYValue = XYValue;
		params.ZValue = ZValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Combo Attack
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDCGameplayAbilityBase*                      GameplayAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Caster                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SphereOverlapForwardPos                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SphereOverlapRadius                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TriggerRatio                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADCCharacterBase*                            TargetEnemy                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    TargetArray                                                (Parm, OutParm)
	 * 		bool                                               ComboTriggered                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetComboAttack(class UDCGameplayAbilityBase* GameplayAbility, class UObject* Caster, double SphereOverlapForwardPos, double SphereOverlapRadius, const struct FGameplayTag& EventTag, double TriggerRatio, class UObject* __WorldContext, class ADCCharacterBase** TargetEnemy, TArray<class ADCCharacterBase*>* TargetArray, bool* ComboTriggered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Combo Attack");
		
		UMonsterBPLibrary_C_SetComboAttack_Params params {};
		params.GameplayAbility = GameplayAbility;
		params.Caster = Caster;
		params.SphereOverlapForwardPos = SphereOverlapForwardPos;
		params.SphereOverlapRadius = SphereOverlapRadius;
		params.EventTag = EventTag;
		params.TriggerRatio = TriggerRatio;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetEnemy != nullptr)
			*TargetEnemy = params.TargetEnemy;
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
		if (ComboTriggered != nullptr)
			*ComboTriggered = params.ComboTriggered;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Projectile Spec and Options
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDCGameplayAbilityBase*                      DCGameplayAbilityBase                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawnedProjectile                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                GameplayTagForSpec                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             PierceCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PierceObstacle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DecreasePierceObstacleCount                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Homing                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADCCharacterBase*                            HomingTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHitBoxType                                        HomingHitBoxType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HomingMagnitude                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AProjectileActor*                            ProjectileActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetProjectileSpecandOptions(class UDCGameplayAbilityBase* DCGameplayAbilityBase, class AActor* SpawnedProjectile, const struct FGameplayTag& GameplayTagForSpec, double PierceCount, bool PierceObstacle, double DecreasePierceObstacleCount, bool Homing, class ADCCharacterBase* HomingTarget, EHitBoxType HomingHitBoxType, double HomingMagnitude, class UObject* __WorldContext, bool* Result, class AProjectileActor** ProjectileActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Projectile Spec and Options");
		
		UMonsterBPLibrary_C_SetProjectileSpecandOptions_Params params {};
		params.DCGameplayAbilityBase = DCGameplayAbilityBase;
		params.SpawnedProjectile = SpawnedProjectile;
		params.GameplayTagForSpec = GameplayTagForSpec;
		params.PierceCount = PierceCount;
		params.PierceObstacle = PierceObstacle;
		params.DecreasePierceObstacleCount = DecreasePierceObstacleCount;
		params.Homing = Homing;
		params.HomingTarget = HomingTarget;
		params.HomingHitBoxType = HomingHitBoxType;
		params.HomingMagnitude = HomingMagnitude;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (ProjectileActor != nullptr)
			*ProjectileActor = params.ProjectileActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Target Actor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              MonsterBaseWithOptions                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADCCharacterBase*                            DCCharacterBase                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetBBTargetActor(class ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, class UObject* __WorldContext, bool* Result, class ADCCharacterBase** DCCharacterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Target Actor");
		
		UMonsterBPLibrary_C_GetBBTargetActor_Params params {};
		params.MonsterBaseWithOptions = MonsterBaseWithOptions;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (DCCharacterBase != nullptr)
			*DCCharacterBase = params.DCCharacterBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Projectile Relative Spawn Transform
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADCCharacterBase*                            StartActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHitBoxType                                        HitBoxType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FRotator>                            ShootingDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             SpawnTransformLocation                                     (Parm, OutParm)
	 * 		TArray<struct FRotator>                            SpawnTransformRotation                                     (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_GetProjectileRelativeSpawnTransform(class ADCCharacterBase* StartActor, const struct FVector& StartLocation, EHitBoxType HitBoxType, TArray<struct FVector>* SpawnLocation, TArray<struct FRotator>* ShootingDirection, class UObject* __WorldContext, bool* Result, TArray<struct FVector>* SpawnTransformLocation, TArray<struct FRotator>* SpawnTransformRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Projectile Relative Spawn Transform");
		
		UMonsterBPLibrary_C_GetProjectileRelativeSpawnTransform_Params params {};
		params.StartActor = StartActor;
		params.StartLocation = StartLocation;
		params.HitBoxType = HitBoxType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnLocation != nullptr)
			*SpawnLocation = params.SpawnLocation;
		if (ShootingDirection != nullptr)
			*ShootingDirection = params.ShootingDirection;
		if (Result != nullptr)
			*Result = params.Result;
		if (SpawnTransformLocation != nullptr)
			*SpawnTransformLocation = params.SpawnTransformLocation;
		if (SpawnTransformRotation != nullptr)
			*SpawnTransformRotation = params.SpawnTransformRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Immune To Comeback
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_RemoveImmuneToComeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Immune To Comeback");
		
		UMonsterBPLibrary_C_RemoveImmuneToComeback_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback For Linked Monsters
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABP_DCMonsterBaseWithOptions_C*>      LinkedMonsterArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetImmuneToComebackForLinkedMonsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>* LinkedMonsterArray, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback For Linked Monsters");
		
		UMonsterBPLibrary_C_SetImmuneToComebackForLinkedMonsters_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedMonsterArray != nullptr)
			*LinkedMonsterArray = params.LinkedMonsterArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetImmuneToComeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback");
		
		UMonsterBPLibrary_C_SetImmuneToComeback_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Combat Area
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ADCCharacterBase*>                    EnemiesInCombatArea                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ADCCharacterBase*>                    LostEnemiesInCombatArea                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfPlayers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetNumberOfActivePlayersInCombatArea(TArray<class ADCCharacterBase*>* EnemiesInCombatArea, TArray<class ADCCharacterBase*>* LostEnemiesInCombatArea, class UObject* __WorldContext, int32_t* NumberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Combat Area");
		
		UMonsterBPLibrary_C_GetNumberOfActivePlayersInCombatArea_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemiesInCombatArea != nullptr)
			*EnemiesInCombatArea = params.EnemiesInCombatArea;
		if (LostEnemiesInCombatArea != nullptr)
			*LostEnemiesInCombatArea = params.LostEnemiesInCombatArea;
		if (NumberOfPlayers != nullptr)
			*NumberOfPlayers = params.NumberOfPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Recognition Area
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              EnemiesInRecogArea                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              LostEnemiesInRecogArea                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberOfPlayers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetNumberOfActivePlayersInRecognitionArea(TArray<class AActor*>* EnemiesInRecogArea, TArray<class AActor*>* LostEnemiesInRecogArea, class UObject* __WorldContext, int32_t* NumberOfPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Recognition Area");
		
		UMonsterBPLibrary_C_GetNumberOfActivePlayersInRecognitionArea_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemiesInRecogArea != nullptr)
			*EnemiesInRecogArea = params.EnemiesInRecogArea;
		if (LostEnemiesInRecogArea != nullptr)
			*LostEnemiesInRecogArea = params.LostEnemiesInRecogArea;
		if (NumberOfPlayers != nullptr)
			*NumberOfPlayers = params.NumberOfPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get And Compare To BlackBoard Mode
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ModeType                                         ModeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetAndCompareToBlackBoardMode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType ModeType, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get And Compare To BlackBoard Mode");
		
		UMonsterBPLibrary_C_GetAndCompareToBlackBoardMode_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.ModeType = ModeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode For Linked Monsters
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABP_DCMonsterBaseWithOptions_C*>      LinkedMonsterArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		E_ModeType                                         ModeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetBlackBoardModeForLinkedMonsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>* LinkedMonsterArray, E_ModeType ModeType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode For Linked Monsters");
		
		UMonsterBPLibrary_C_SetBlackBoardModeForLinkedMonsters_Params params {};
		params.ModeType = ModeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinkedMonsterArray != nullptr)
			*LinkedMonsterArray = params.LinkedMonsterArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ModeType                                         ModeType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetBlackBoardMode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType ModeType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode");
		
		UMonsterBPLibrary_C_SetBlackBoardMode_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.ModeType = ModeType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Check Target Has State Tags To Lose From Array
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_CheckTargetHasStateTagsToLoseFromArray(class UObject* Target, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Check Target Has State Tags To Lose From Array");
		
		UMonsterBPLibrary_C_CheckTargetHasStateTagsToLoseFromArray_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Add Timer
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TimerIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Second                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_AddTimer(class AActor* Actor, int32_t TimerIndex, double Second, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Add Timer");
		
		UMonsterBPLibrary_C_AddTimer_Params params {};
		params.Actor = Actor;
		params.TimerIndex = TimerIndex;
		params.Second = Second;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Max Distance From Perception
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              MonsterBP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DistanceFromVariables                            GetDistanceFrom                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DefaultDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_GetMaxDistanceFromPerception(class ABP_DCMonsterBaseWithOptions_C* MonsterBP, E_DistanceFromVariables GetDistanceFrom, double DefaultDistance, class UObject* __WorldContext, bool* Result, double* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Max Distance From Perception");
		
		UMonsterBPLibrary_C_GetMaxDistanceFromPerception_Params params {};
		params.MonsterBP = MonsterBP;
		params.GetDistanceFrom = GetDistanceFrom;
		params.DefaultDistance = DefaultDistance;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From CombatArea
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FilterDistanceFromSpawnLocation                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    TargetArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    Result                                                     (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_FilterTargetFromCombatArea(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>* TargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From CombatArea");
		
		UMonsterBPLibrary_C_FilterTargetFromCombatArea_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.FilterDistanceFromSpawnLocation = FilterDistanceFromSpawnLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From Spawn Location
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FilterDistanceFromSpawnLocation                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    TargetArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    Result                                                     (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_FilterTargetFromSpawnLocation(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>* TargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From Spawn Location");
		
		UMonsterBPLibrary_C_FilterTargetFromSpawnLocation_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.FilterDistanceFromSpawnLocation = FilterDistanceFromSpawnLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target Has Aggro
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBase_C*                         MonsterBase                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    InputTargetArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    OutputTargetArray                                          (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::STATIC_FilterTargetHasAggro(class ABP_DCMonsterBase_C* MonsterBase, TArray<class ADCCharacterBase*>* InputTargetArray, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* OutputTargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target Has Aggro");
		
		UMonsterBPLibrary_C_FilterTargetHasAggro_Params params {};
		params.MonsterBase = MonsterBase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputTargetArray != nullptr)
			*InputTargetArray = params.InputTargetArray;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (OutputTargetArray != nullptr)
			*OutputTargetArray = params.OutputTargetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Get Target Array
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADCMonsterBase*                              DCMonsterBase                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_SensorType                                       GetListFrom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GetFromCombatArea                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GetTargetHasAggroOnly                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ADCCharacterBase*>                    TargetArray                                                (Parm, OutParm)
	 */
	void UMonsterBPLibrary_C::GetTargetArray(class ADCMonsterBase* DCMonsterBase, E_SensorType GetListFrom, bool GetFromCombatArea, bool GetTargetHasAggroOnly, class UObject* __WorldContext, bool* ReturnValue, TArray<class ADCCharacterBase*>* TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Target Array");
		
		UMonsterBPLibrary_C_GetTargetArray_Params params {};
		params.DCMonsterBase = DCMonsterBase;
		params.GetListFrom = GetListFrom;
		params.GetFromCombatArea = GetFromCombatArea;
		params.GetTargetHasAggroOnly = GetTargetHasAggroOnly;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function MonsterBPLibrary.MonsterBPLibrary_C.Set Target Provider
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DCMonsterBaseWithOptions_C*              SourceTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDCGameObjectLinkComponent*                  DCGameObjectLink                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTagQuery                           ProviderObjectTag                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMonsterBPLibrary_C::STATIC_SetTargetProvider(class ABP_DCMonsterBaseWithOptions_C* SourceTarget, class UDCGameObjectLinkComponent* DCGameObjectLink, const struct FGameplayTagQuery& ProviderObjectTag, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Target Provider");
		
		UMonsterBPLibrary_C_SetTargetProvider_Params params {};
		params.SourceTarget = SourceTarget;
		params.DCGameObjectLink = DCGameObjectLink;
		params.ProviderObjectTag = ProviderObjectTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonsterBPLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonsterBPLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MonsterBPLibrary.MonsterBPLibrary_C");
		return ptr;
	}

}


