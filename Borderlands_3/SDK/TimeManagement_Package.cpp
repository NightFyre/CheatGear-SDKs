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
	 * 		Name   -> PredefinedFunction UFixedFrameRateCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedFrameRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F2B900
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");
		
		UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F2B8C0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FTimecode UTimeManagementBlueprintLibrary::STATIC_GetTimecode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");
		
		UTimeManagementBlueprintLibrary_GetTimecode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F2B790
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTimecode                                   InTimecode                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceSignDisplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTimeManagementBlueprintLibrary::STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");
		
		UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params {};
		params.InTimecode = InTimecode;
		params.bForceSignDisplay = bForceSignDisplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F2B6E0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InFrameTime                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");
		
		UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params {};
		params.InFrameTime = InFrameTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01F2B640
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");
		
		UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params {};
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeManagementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeManagementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynchronizationSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

}


