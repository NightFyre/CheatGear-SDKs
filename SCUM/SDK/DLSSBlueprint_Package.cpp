/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness");
		
		UDLSSLibrary_SetDLSSSharpness_Params params {};
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::SetDLSSMode(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode");
		
		UDLSSLibrary_SetDLSSMode_Params params {};
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	 * 		Flags  -> ()
	 */
	EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport");
		
		UDLSSLibrary_QueryDLSSSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	 * 		Flags  -> ()
	 */
	bool UDLSSLibrary::IsDLSSSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported");
		
		UDLSSLibrary_IsDLSSSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::IsDLSSModeSupported(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported");
		
		UDLSSLibrary_IsDLSSModeSupported_Params params {};
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	 * 		Flags  -> ()
	 */
	bool UDLSSLibrary::IsDLAAEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled");
		
		UDLSSLibrary_IsDLAAEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	 * 		Flags  -> ()
	 */
	TArray<EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes");
		
		UDLSSLibrary_GetSupportedDLSSModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	 * 		Flags  -> ()
	 */
	float UDLSSLibrary::GetDLSSSharpness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness");
		
		UDLSSLibrary_GetDLSSSharpness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange");
		
		UDLSSLibrary_GetDLSSScreenPercentageRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSupported                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFixedScreenPercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalSharpness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation");
		
		UDLSSLibrary_GetDLSSModeInformation_Params params {};
		params.DLSSMode = DLSSMode;
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSupported != nullptr)
			*bIsSupported = params.bIsSupported;
		if (OptimalScreenPercentage != nullptr)
			*OptimalScreenPercentage = params.OptimalScreenPercentage;
		if (bIsFixedScreenPercentage != nullptr)
			*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
		if (OptimalSharpness != nullptr)
			*OptimalSharpness = params.OptimalSharpness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	 * 		Flags  -> ()
	 */
	EUDLSSMode UDLSSLibrary::GetDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode");
		
		UDLSSLibrary_GetDLSSMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion");
		
		UDLSSLibrary_GetDLSSMinimumDriverVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinDriverVersionMajor != nullptr)
			*MinDriverVersionMajor = params.MinDriverVersionMajor;
		if (MinDriverVersionMinor != nullptr)
			*MinDriverVersionMinor = params.MinDriverVersionMinor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	 * 		Flags  -> ()
	 */
	EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode");
		
		UDLSSLibrary_GetDefaultDLSSMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.EnableDLAA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDLSSLibrary::EnableDLAA(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.EnableDLAA");
		
		UDLSSLibrary_EnableDLAA_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLSSLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLSSLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DLSSBlueprint.DLSSLibrary");
		return ptr;
	}

}


