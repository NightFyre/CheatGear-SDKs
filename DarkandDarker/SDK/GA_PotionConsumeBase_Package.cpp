/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PotionConsumeBase_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.K2_OnEndAbility");
		
		UGA_PotionConsumeBase_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          TriggerEventData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_PotionConsumeBase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.AbilityActivated");
		
		UGA_PotionConsumeBase_C_AbilityActivated_Params params {};
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ConsumeDuration                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PotionConsumeBase_C::OnConsumeStartEventReceived(float ConsumeDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeStartEventReceived");
		
		UGA_PotionConsumeBase_C_OnConsumeStartEventReceived_Params params {};
		params.ConsumeDuration = ConsumeDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeEndEventReceived
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_PotionConsumeBase_C::OnConsumeEndEventReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.OnConsumeEndEventReceived");
		
		UGA_PotionConsumeBase_C_OnConsumeEndEventReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_PotionConsumeBase_C::ExecuteUbergraph_GA_PotionConsumeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_PotionConsumeBase.GA_PotionConsumeBase_C.ExecuteUbergraph_GA_PotionConsumeBase");
		
		UGA_PotionConsumeBase_C_ExecuteUbergraph_GA_PotionConsumeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_PotionConsumeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_PotionConsumeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_PotionConsumeBase.GA_PotionConsumeBase_C");
		return ptr;
	}

}


