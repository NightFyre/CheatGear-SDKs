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
	 * 		Name   -> Function GA_Rest.GA_Rest_C.EventReceived_1354684B4ED7CD1780504781985CC179
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Rest_C::EventReceived_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.EventReceived_1354684B4ED7CD1780504781985CC179");
		
		UGA_Rest_C_EventReceived_1354684B4ED7CD1780504781985CC179_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnCancelled_1354684B4ED7CD1780504781985CC179
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Rest_C::OnCancelled_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnCancelled_1354684B4ED7CD1780504781985CC179");
		
		UGA_Rest_C_OnCancelled_1354684B4ED7CD1780504781985CC179_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Rest_C::OnInterrupted_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnInterrupted_1354684B4ED7CD1780504781985CC179");
		
		UGA_Rest_C_OnInterrupted_1354684B4ED7CD1780504781985CC179_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Rest_C::OnBlendOut_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnBlendOut_1354684B4ED7CD1780504781985CC179");
		
		UGA_Rest_C_OnBlendOut_1354684B4ED7CD1780504781985CC179_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnCompleted_1354684B4ED7CD1780504781985CC179
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Rest_C::OnCompleted_1354684B4ED7CD1780504781985CC179(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnCompleted_1354684B4ED7CD1780504781985CC179");
		
		UGA_Rest_C_OnCompleted_1354684B4ED7CD1780504781985CC179_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Rest_C::OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B");
		
		UGA_Rest_C_OnVelocityChange_B977E483464C8462F9CCFEAAC9BC697B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.Removed_D6EA05E04C84E42B757C98B704B33CD4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Rest_C::Removed_D6EA05E04C84E42B757C98B704B33CD4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.Removed_D6EA05E04C84E42B757C98B704B33CD4");
		
		UGA_Rest_C_Removed_D6EA05E04C84E42B757C98B704B33CD4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnSync_F91698B446A3FF36AB7603AD2D824105
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Rest_C::OnSync_F91698B446A3FF36AB7603AD2D824105()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnSync_F91698B446A3FF36AB7603AD2D824105");
		
		UGA_Rest_C_OnSync_F91698B446A3FF36AB7603AD2D824105_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActionNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Rest_C::OnFinished_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnFinished_08B6AFA441544B64E6F9A8854A58A87C");
		
		UGA_Rest_C_OnFinished_08B6AFA441544B64E6F9A8854A58A87C_Params params {};
		params.ActionNumber = ActionNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActionNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Rest_C::OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C(int32_t ActionNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C");
		
		UGA_Rest_C_OnPerformAction_08B6AFA441544B64E6F9A8854A58A87C_Params params {};
		params.ActionNumber = ActionNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           InputActionValue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UGA_Rest_C::InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0");
		
		UGA_Rest_C_InputActionCompleted_3E8A5B98486BF3C623D730942B6F7EB0_Params params {};
		params.InputActionValue = InputActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           InputActionValue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UGA_Rest_C::InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0");
		
		UGA_Rest_C_InputActionStarted_3E8A5B98486BF3C623D730942B6F7EB0_Params params {};
		params.InputActionValue = InputActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           InputActionValue                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UGA_Rest_C::InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0(const struct FInputActionValue& InputActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0");
		
		UGA_Rest_C_InputActionTriggered_3E8A5B98486BF3C623D730942B6F7EB0_Params params {};
		params.InputActionValue = InputActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Rest_C::OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B");
		
		UGA_Rest_C_OnSync_BAECC0EE47841CCD9C7F0E84FCA28F0B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Rest_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.K2_OnEndAbility");
		
		UGA_Rest_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Rest_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.K2_ActivateAbilityFromEvent");
		
		UGA_Rest_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.OnRestEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Rest_C::OnRestEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.OnRestEnd");
		
		UGA_Rest_C_OnRestEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Rest.GA_Rest_C.ExecuteUbergraph_GA_Rest
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Rest_C::ExecuteUbergraph_GA_Rest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Rest.GA_Rest_C.ExecuteUbergraph_GA_Rest");
		
		UGA_Rest_C_ExecuteUbergraph_GA_Rest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Rest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Rest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Rest.GA_Rest_C");
		return ptr;
	}

}


