/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x033FCEC0
	 * 		Name   -> Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenVisible");
		
		UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033FCE90
	 * 		Name   -> Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UAthenaLoadingScreenBlueprintFunctionLibrary::STATIC_IsLoadingScreenRegistered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary.IsLoadingScreenRegistered");
		
		UAthenaLoadingScreenBlueprintFunctionLibrary_IsLoadingScreenRegistered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaLoadingScreenBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaLoadingScreenBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateLoadingScreenParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateLoadingScreenParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaLoadingScreen.SlateLoadingScreenParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaLoadingScreenParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaLoadingScreenParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x033FCEF0
	 * 		Name   -> Function AthenaLoadingScreen.LoadingUtilities.IsStreaming
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULoadingUtilities::STATIC_IsStreaming(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaLoadingScreen.LoadingUtilities.IsStreaming");
		
		ULoadingUtilities_IsStreaming_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaLoadingScreen.LoadingUtilities");
		return ptr;
	}

}


