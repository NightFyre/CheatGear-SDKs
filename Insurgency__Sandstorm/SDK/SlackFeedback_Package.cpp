/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UPrintDebugInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrintDebugInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlackFeedback.PrintDebugInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05027CF0
	 * 		Name   -> Function SlackFeedback.SlackFeedbackUploaderAsync.BeginSlackSubmitFeedback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserFeedbackString                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Catagory                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBug                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USlackFeedbackUploaderAsync* USlackFeedbackUploaderAsync::STATIC_BeginSlackSubmitFeedback(const class FString& UserFeedbackString, class APlayerController* PC, const class FString& Catagory, bool bIsBug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlackFeedback.SlackFeedbackUploaderAsync.BeginSlackSubmitFeedback");
		
		USlackFeedbackUploaderAsync_BeginSlackSubmitFeedback_Params params {};
		params.UserFeedbackString = UserFeedbackString;
		params.PC = PC;
		params.Catagory = Catagory;
		params.bIsBug = bIsBug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlackFeedbackUploaderAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlackFeedbackUploaderAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlackFeedback.SlackFeedbackUploaderAsync");
		return ptr;
	}

}


