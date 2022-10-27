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
	 * 		Name   -> Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.ApplyRarityWeightLevelBias
	 * 		Flags  -> (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              LevelToDetermineRarityAt                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GlobalRarityWeightLevelBias                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocalRarityWeightLevelBias                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RarityWeightLevelBiasMultiplier                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Biased_Level                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LootRarityFunctionLibrary_C::STATIC_ApplyRarityWeightLevelBias(float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float RarityWeightLevelBiasMultiplier, class UObject* __WorldContext, float* Biased_Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.ApplyRarityWeightLevelBias");
		
		UBP_LootRarityFunctionLibrary_C_ApplyRarityWeightLevelBias_Params params {};
		params.LevelToDetermineRarityAt = LevelToDetermineRarityAt;
		params.GlobalRarityWeightLevelBias = GlobalRarityWeightLevelBias;
		params.LocalRarityWeightLevelBias = LocalRarityWeightLevelBias;
		params.RarityWeightLevelBiasMultiplier = RarityWeightLevelBiasMultiplier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Biased_Level != nullptr)
			*Biased_Level = params.Biased_Level;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.CalculateRarityWeight
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RarityTableRowHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              LevelToDetermineRarityAt                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GlobalRarityWeightLevelBias                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocalRarityWeightLevelBias                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GlobalRarityWeightModifier                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocalRarityWeightModifier                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LootRarityFunctionLibrary_C::STATIC_CalculateRarityWeight(const struct FDataTableRowHandle& RarityTableRowHandle, float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float GlobalRarityWeightModifier, float LocalRarityWeightModifier, class UObject* __WorldContext, float* Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.CalculateRarityWeight");
		
		UBP_LootRarityFunctionLibrary_C_CalculateRarityWeight_Params params {};
		params.RarityTableRowHandle = RarityTableRowHandle;
		params.LevelToDetermineRarityAt = LevelToDetermineRarityAt;
		params.GlobalRarityWeightLevelBias = GlobalRarityWeightLevelBias;
		params.LocalRarityWeightLevelBias = LocalRarityWeightLevelBias;
		params.GlobalRarityWeightModifier = GlobalRarityWeightModifier;
		params.LocalRarityWeightModifier = LocalRarityWeightModifier;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LootRarityFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LootRarityFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C");
		return ptr;
	}

}


