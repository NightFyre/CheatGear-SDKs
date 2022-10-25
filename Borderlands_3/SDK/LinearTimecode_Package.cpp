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
	 * 		RVA    -> 0x008F9850
	 * 		Name   -> Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDropTimecode                               Timecode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDropTimecode                               OutTimecode                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULinearTimecodeComponent::STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int32_t FrameNumber, struct FDropTimecode* OutTimecode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber");
		
		ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params params {};
		params.Timecode = Timecode;
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTimecode != nullptr)
			*OutTimecode = params.OutTimecode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008F9760
	 * 		Name   -> Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDropTimecode                               Timecode                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FrameNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULinearTimecodeComponent::STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int32_t* FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber");
		
		ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params params {};
		params.Timecode = Timecode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrameNumber != nullptr)
			*FrameNumber = params.FrameNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008F9730
	 * 		Name   -> Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULinearTimecodeComponent::GetDropFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber");
		
		ULinearTimecodeComponent_GetDropFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinearTimecodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinearTimecodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008F9650
	 * 		Name   -> Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDropTimecode                               InTimecode                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UDropTimecodeToStringConversion::STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");
		
		UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params params {};
		params.InTimecode = InTimecode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDropTimecodeToStringConversion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropTimecodeToStringConversion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}

}


