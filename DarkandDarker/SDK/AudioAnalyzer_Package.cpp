/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * 		Name   -> PredefinedFunction UAudioAnalyzerAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerAssetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042CD760
	 * 		Name   -> Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioAnalyzer::StopAnalyzing(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing");
		
		UAudioAnalyzer_StopAnalyzing_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042CD690
	 * 		Name   -> Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioBus*                                   AudioBusToAnalyze                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioAnalyzer::StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing");
		
		UAudioAnalyzer_StartAnalyzing_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioBusToAnalyze = AudioBusToAnalyze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerSubsystem");
		return ptr;
	}

}


