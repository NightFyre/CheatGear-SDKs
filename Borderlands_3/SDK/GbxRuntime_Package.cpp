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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxRuntime.GbxDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47C60
	 * 		Name   -> Function GbxRuntime.GbxCondition.K2_EvaluateConditionType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxCondition::STATIC_K2_EvaluateConditionType(class UClass* Condition, class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.GbxCondition.K2_EvaluateConditionType");
		
		UGbxCondition_K2_EvaluateConditionType_Params params {};
		params.Condition = Condition;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47BA0
	 * 		Name   -> Function GbxRuntime.GbxCondition.K2_EvaluateCondition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGbxCondition*                               Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxCondition::STATIC_K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.GbxCondition.K2_EvaluateCondition");
		
		UGbxCondition_K2_EvaluateCondition_Params params {};
		params.Condition = Condition;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxRuntime.GbxCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxDataAssetBlueprintable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxDataAssetBlueprintable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxRuntime.GbxDataAssetBlueprintable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47FF0
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.ToValueVarianceString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UNumericRangeExt::STATIC_ToValueVarianceString(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToValueVarianceString");
		
		UNumericRangeExt_ToValueVarianceString_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C480E0
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.ToValueString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UNumericRangeExt::STATIC_ToValueString(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToValueString");
		
		UNumericRangeExt_ToValueString_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47FF0
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.ToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UNumericRangeExt::STATIC_ToString(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToString");
		
		UNumericRangeExt_ToString_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47F00
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.ToMinMaxString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UNumericRangeExt::STATIC_ToMinMaxString(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.ToMinMaxString");
		
		UNumericRangeExt_ToMinMaxString_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47E30
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.SetMinimum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Minimum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNumericRangeExt::STATIC_SetMinimum(struct FNumericRange* Range, float Minimum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.SetMinimum");
		
		UNumericRangeExt_SetMinimum_Params params {};
		params.Minimum = Minimum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47D60
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.SetMaximum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Maximum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNumericRangeExt::STATIC_SetMaximum(struct FNumericRange* Range, float Maximum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.SetMaximum");
		
		UNumericRangeExt_SetMaximum_Params params {};
		params.Maximum = Maximum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47AC0
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.IsWithin
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNumericRangeExt::STATIC_IsWithin(const struct FNumericRange& Range, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.IsWithin");
		
		UNumericRangeExt_IsWithin_Params params {};
		params.Range = Range;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47A20
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.GetMinimum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UNumericRangeExt::STATIC_GetMinimum(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GetMinimum");
		
		UNumericRangeExt_GetMinimum_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47A20
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.GetMaximum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UNumericRangeExt::STATIC_GetMaximum(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GetMaximum");
		
		UNumericRangeExt_GetMaximum_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C47980
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.GenerateRandomNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FNumericRange                               Range                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UNumericRangeExt::STATIC_GenerateRandomNumber(const struct FNumericRange& Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.GenerateRandomNumber");
		
		UNumericRangeExt_GenerateRandomNumber_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02C478B0
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Minimum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Maximum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FNumericRange UNumericRangeExt::STATIC_CreateNumericRangeMinMax(float Minimum, float Maximum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax");
		
		UNumericRangeExt_CreateNumericRangeMinMax_Params params {};
		params.Minimum = Minimum;
		params.Maximum = Maximum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02975C60
	 * 		Name   -> Function GbxRuntime.NumericRangeExt.CreateNumericRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Variance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FNumericRange UNumericRangeExt::STATIC_CreateNumericRange(float Value, float Variance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxRuntime.NumericRangeExt.CreateNumericRange");
		
		UNumericRangeExt_CreateNumericRange_Params params {};
		params.Value = Value;
		params.Variance = Variance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNumericRangeExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNumericRangeExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxRuntime.NumericRangeExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARenderActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARenderActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxRuntime.RenderActor");
		return ptr;
	}

}


