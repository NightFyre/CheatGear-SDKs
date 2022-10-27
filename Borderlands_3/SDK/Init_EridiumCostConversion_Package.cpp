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
	 * 		Name   -> Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.MoneyMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      GearItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GearTypeMult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GearMoneyMult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_EridiumCostConversion_C::MoneyMultiplier(class AActor* GearItem, float GearTypeMult, float* GearMoneyMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.MoneyMultiplier");
		
		UInit_EridiumCostConversion_C_MoneyMultiplier_Params params {};
		params.GearItem = GearItem;
		params.GearTypeMult = GearTypeMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearMoneyMult != nullptr)
			*GearMoneyMult = params.GearMoneyMult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.GearTypeMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      GearItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GearTypeMult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_EridiumCostConversion_C::GearTypeMultiplier(class AActor* GearItem, float* GearTypeMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.GearTypeMultiplier");
		
		UInit_EridiumCostConversion_C_GearTypeMultiplier_Params params {};
		params.GearItem = GearItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GearTypeMult != nullptr)
			*GearTypeMult = params.GearTypeMult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UInit_EridiumCostConversion_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_EridiumCostConversion.Init_EridiumCostConversion_C.CalculateAttributeInitialValue");
		
		UInit_EridiumCostConversion_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_EridiumCostConversion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_EridiumCostConversion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_EridiumCostConversion.Init_EridiumCostConversion_C");
		return ptr;
	}

}


