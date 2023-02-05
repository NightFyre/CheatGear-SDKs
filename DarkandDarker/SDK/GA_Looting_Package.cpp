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
	 * 		Name   -> Function GA_Looting.GA_Looting_C.GetMaximumDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             HitResultDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaximumDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Looting_C::GetMaximumDistance(double HitResultDistance, double* MaximumDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.GetMaximumDistance");
		
		UGA_Looting_C_GetMaximumDistance_Params params {};
		params.HitResultDistance = HitResultDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaximumDistance != nullptr)
			*MaximumDistance = params.MaximumDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Looting_C::OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B");
		
		UGA_Looting_C_OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Looting_C::OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D");
		
		UGA_Looting_C_OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_Looting_C::OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B");
		
		UGA_Looting_C_OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMsgBaseNode*                                ProxyObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Looting_C::OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C(class UMsgBaseNode* ProxyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C");
		
		UGA_Looting_C_OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C_Params params {};
		params.ProxyObject = ProxyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Looting_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent");
		
		UGA_Looting_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Looting_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.K2_OnEndAbility");
		
		UGA_Looting_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.OnFMsgRemoveLootTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMsgRemoveLootTarget                        Msg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UGA_Looting_C::OnFMsgRemoveLootTarget(const struct FMsgRemoveLootTarget& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.OnFMsgRemoveLootTarget");
		
		UGA_Looting_C_OnFMsgRemoveLootTarget_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Looting_C::ExecuteUbergraph_GA_Looting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting");
		
		UGA_Looting_C_ExecuteUbergraph_GA_Looting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Looting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Looting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Looting.GA_Looting_C");
		return ptr;
	}

}


