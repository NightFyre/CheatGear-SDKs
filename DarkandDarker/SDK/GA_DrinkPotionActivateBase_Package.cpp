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
	 * 		Name   -> Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.OnFinish_17D93366455B3BE35432FCBE8DFC6E4D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_DrinkPotionActivateBase_C::OnFinish_17D93366455B3BE35432FCBE8DFC6E4D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.OnFinish_17D93366455B3BE35432FCBE8DFC6E4D");
		
		UGA_DrinkPotionActivateBase_C_OnFinish_17D93366455B3BE35432FCBE8DFC6E4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.Removed_B01C8A3D4B24EB4F232029A52296F212
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_DrinkPotionActivateBase_C::Removed_B01C8A3D4B24EB4F232029A52296F212()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.Removed_B01C8A3D4B24EB4F232029A52296F212");
		
		UGA_DrinkPotionActivateBase_C_Removed_B01C8A3D4B24EB4F232029A52296F212_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_DrinkPotionActivateBase_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.K2_OnEndAbility");
		
		UGA_DrinkPotionActivateBase_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.AbilityActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          TriggerEventData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_DrinkPotionActivateBase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.AbilityActivated");
		
		UGA_DrinkPotionActivateBase_C_AbilityActivated_Params params {};
		params.TriggerEventData = TriggerEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.ExecuteUbergraph_GA_DrinkPotionActivateBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_DrinkPotionActivateBase_C::ExecuteUbergraph_GA_DrinkPotionActivateBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.ExecuteUbergraph_GA_DrinkPotionActivateBase");
		
		UGA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_DrinkPotionActivateBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_DrinkPotionActivateBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C");
		return ptr;
	}

}


