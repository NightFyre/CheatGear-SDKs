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
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MaterialInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinkPotionActor_C::SetHeightParameter(double NewHeight, class UMaterialInstanceDynamic* MaterialInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter");
		
		ABP_DrinkPotionActor_C_SetHeightParameter_Params params {};
		params.NewHeight = NewHeight;
		params.MaterialInstance = MaterialInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.OnRep_CurrentLiquidAmount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DrinkPotionActor_C::OnRep_CurrentLiquidAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.OnRep_CurrentLiquidAmount");
		
		ABP_DrinkPotionActor_C_OnRep_CurrentLiquidAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DrinkPotionActor_C::CalculateLiquidAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount");
		
		ABP_DrinkPotionActor_C_CalculateLiquidAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinkPotionActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick");
		
		ABP_DrinkPotionActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DrinkPotionActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveBeginPlay");
		
		ABP_DrinkPotionActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinkPotionActor_C::SetDrinkingDuration(double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration");
		
		ABP_DrinkPotionActor_C_SetDrinkingDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                InGameplayTag                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinkPotionActor_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32_t InCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated");
		
		ABP_DrinkPotionActor_C_GameplayTagUpdated_Params params {};
		params.InGameplayTag = InGameplayTag;
		params.InCount = InCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DrinkPotionActor_C::ExecuteUbergraph_BP_DrinkPotionActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor");
		
		ABP_DrinkPotionActor_C_ExecuteUbergraph_BP_DrinkPotionActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DrinkPotionActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DrinkPotionActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DrinkPotionActor.BP_DrinkPotionActor_C");
		return ptr;
	}

}


