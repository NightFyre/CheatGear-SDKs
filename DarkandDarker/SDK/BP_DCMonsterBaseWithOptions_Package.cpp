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
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::MoveFailTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout");
		
		ABP_DCMonsterBaseWithOptions_C_MoveFailTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::CheckPeaceToCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat");
		
		ABP_DCMonsterBaseWithOptions_C_CheckPeaceToCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::CheckCombatToComeback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback");
		
		ABP_DCMonsterBaseWithOptions_C_CheckCombatToComeback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::TriggerOutRecogArea(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area");
		
		ABP_DCMonsterBaseWithOptions_C_TriggerOutRecogArea_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::TriggerInRecogArea(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area");
		
		ABP_DCMonsterBaseWithOptions_C_TriggerInRecogArea_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::TriggerOutCombatArea(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area");
		
		ABP_DCMonsterBaseWithOptions_C_TriggerOutCombatArea_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::TriggerInCombatArea(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area");
		
		ABP_DCMonsterBaseWithOptions_C_TriggerInCombatArea_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::SpawnBoxforAreaCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check");
		
		ABP_DCMonsterBaseWithOptions_C_SpawnBoxforAreaCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::SetActivityArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea");
		
		ABP_DCMonsterBaseWithOptions_C_SetActivityArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADCCharacterBase*                            AsDCCharacterBase                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** AsDCCharacterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase");
		
		ABP_DCMonsterBaseWithOptions_C_GetBBTargetActorToCharacterBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AsDCCharacterBase != nullptr)
			*AsDCCharacterBase = params.AsDCCharacterBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_DCMonsterBaseWithOptions_C*              DCMonsterBaseWithOptions                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase");
		
		ABP_DCMonsterBaseWithOptions_C_GetBBTargetActorToMonsterBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (DCMonsterBaseWithOptions != nullptr)
			*DCMonsterBaseWithOptions = params.DCMonsterBaseWithOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::GetBBTargetActor(bool* Result, class UObject** ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor");
		
		ABP_DCMonsterBaseWithOptions_C_GetBBTargetActor_Params params {};
		
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
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDCGameObjectLinkComponent*                  DCGameLinkObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FObjectLinkRequestEvent                     RecvEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObjectLinkMetaDataBlueprint*                SendEventParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::IgnoreSignalFromMe(class UDCGameObjectLinkComponent* DCGameLinkObject, const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe");
		
		ABP_DCMonsterBaseWithOptions_C_IgnoreSignalFromMe_Params params {};
		params.DCGameLinkObject = DCGameLinkObject;
		params.RecvEvent = RecvEvent;
		params.SendEventParam = SendEventParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FObjectLinkRequestEvent                     RecvEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObjectLinkMetaDataBlueprint*                SendEventParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::GetLinkedMonsters(const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters");
		
		ABP_DCMonsterBaseWithOptions_C_GetLinkedMonsters_Params params {};
		params.RecvEvent = RecvEvent;
		params.SendEventParam = SendEventParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDCGameObjectLinkComponent*                  DCGameLinkObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FObjectLinkRequestEvent                     RecvEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObjectLinkMetaDataBlueprint*                SendEventParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::LinkEventBase(class UDCGameObjectLinkComponent* DCGameLinkObject, const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase");
		
		ABP_DCMonsterBaseWithOptions_C_LinkEventBase_Params params {};
		params.DCGameLinkObject = DCGameLinkObject;
		params.RecvEvent = RecvEvent;
		params.SendEventParam = SendEventParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E");
		
		ABP_DCMonsterBaseWithOptions_C_OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E_Params params {};
		params.Source = Source;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Removed_CE0B13EA482C4B99CB7832A70FAC7611
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::Removed_CE0B13EA482C4B99CB7832A70FAC7611()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Removed_CE0B13EA482C4B99CB7832A70FAC7611");
		
		ABP_DCMonsterBaseWithOptions_C_Removed_CE0B13EA482C4B99CB7832A70FAC7611_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnFail_21CEDD05472CF8AA4A07758D48F80F14(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14");
		
		ABP_DCMonsterBaseWithOptions_C_OnFail_21CEDD05472CF8AA4A07758D48F80F14_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnSuccess_21CEDD05472CF8AA4A07758D48F80F14(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14");
		
		ABP_DCMonsterBaseWithOptions_C_OnSuccess_21CEDD05472CF8AA4A07758D48F80F14_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnFail_801A2F7E484A71F27AD0278F8B82FB99(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99");
		
		ABP_DCMonsterBaseWithOptions_C_OnFail_801A2F7E484A71F27AD0278F8B82FB99_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnSuccess_801A2F7E484A71F27AD0278F8B82FB99(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99");
		
		ABP_DCMonsterBaseWithOptions_C_OnSuccess_801A2F7E484A71F27AD0278F8B82FB99_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSetAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnSetAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSetAI");
		
		ABP_DCMonsterBaseWithOptions_C_OnSetAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FDCGameplayEffectContext                    EffectContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_DCMonsterBaseWithOptions_C::BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature(class UClass* GameplayEffectClass, const struct FDCGameplayEffectContext& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature");
		
		ABP_DCMonsterBaseWithOptions_C_BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                InGameplayTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated");
		
		ABP_DCMonsterBaseWithOptions_C_GameplayTagUpdated_Params params {};
		params.InGameplayTag = InGameplayTag;
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed");
		
		ABP_DCMonsterBaseWithOptions_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ComebackEventStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event Start");
		
		ABP_DCMonsterBaseWithOptions_C_ComebackEventStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ComebackEventEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event End");
		
		ABP_DCMonsterBaseWithOptions_C_ComebackEventEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgGASAttributeNotify                      InMsg                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint");
		
		ABP_DCMonsterBaseWithOptions_C_OnFMsgGASAttributeNotifyBlueprint_Params params {};
		params.InMsg = InMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnBeforeDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::OnBeforeDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnBeforeDeath");
		
		ABP_DCMonsterBaseWithOptions_C_OnBeforeDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceiveBeginPlay");
		
		ABP_DCMonsterBaseWithOptions_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ComebackActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated");
		
		ABP_DCMonsterBaseWithOptions_C_ComebackActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::PeaceActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated");
		
		ABP_DCMonsterBaseWithOptions_C_PeaceActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::CombatActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated");
		
		ABP_DCMonsterBaseWithOptions_C_CombatActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ExecuteUbergraph_BP_DCMonsterBaseWithOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions");
		
		ABP_DCMonsterBaseWithOptions_C_ExecuteUbergraph_BP_DCMonsterBaseWithOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated Event Dispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::ComebackActivatedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated Event Dispatcher__DelegateSignature");
		
		ABP_DCMonsterBaseWithOptions_C_ComebackActivatedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated Event Dispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::PeaceActivatedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated Event Dispatcher__DelegateSignature");
		
		ABP_DCMonsterBaseWithOptions_C_PeaceActivatedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated Event Dispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DCMonsterBaseWithOptions_C::CombatActivatedEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated Event Dispatcher__DelegateSignature");
		
		ABP_DCMonsterBaseWithOptions_C_CombatActivatedEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DCMonsterBaseWithOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DCMonsterBaseWithOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C");
		return ptr;
	}

}


