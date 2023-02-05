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
	 * 		Name   -> PredefinedFunction USoundfieldEncodingSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEncodingSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEncodingSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatializationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatializationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B8D0
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetTriggerParameter(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter");
		
		UAudioParameterControllerInterface_SetTriggerParameter_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B7F0
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetStringParameter(const class FName& InName, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter");
		
		UAudioParameterControllerInterface_SetStringParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B6E0
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetStringArrayParameter(const class FName& InName, TArray<class FString> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter");
		
		UAudioParameterControllerInterface_SetStringArrayParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B550
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAudioParameter>                     InParameters                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetParameters_Blueprint(TArray<struct FAudioParameter> InParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint");
		
		UAudioParameterControllerInterface_SetParameters_Blueprint_Params params {};
		params.InParameters = InParameters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B480
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetObjectParameter(const class FName& InName, class UObject* InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter");
		
		UAudioParameterControllerInterface_SetObjectParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B390
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetObjectArrayParameter(const class FName& InName, TArray<class UObject*> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter");
		
		UAudioParameterControllerInterface_SetObjectArrayParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B2C0
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            inInt                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetIntParameter(const class FName& InName, int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter");
		
		UAudioParameterControllerInterface_SetIntParameter_Params params {};
		params.InName = InName;
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B1D0
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetIntArrayParameter(const class FName& InName, TArray<int32_t> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter");
		
		UAudioParameterControllerInterface_SetIntArrayParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B100
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFloat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetFloatParameter(const class FName& InName, float InFloat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter");
		
		UAudioParameterControllerInterface_SetFloatParameter_Params params {};
		params.InName = InName;
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332B010
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetFloatArrayParameter(const class FName& InName, TArray<float> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter");
		
		UAudioParameterControllerInterface_SetFloatArrayParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332AF40
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InBool                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetBoolParameter(const class FName& InName, bool InBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter");
		
		UAudioParameterControllerInterface_SetBoolParameter_Params params {};
		params.InName = InName;
		params.InBool = InBool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332AE50
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioParameterControllerInterface::SetBoolArrayParameter(const class FName& InName, TArray<bool> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter");
		
		UAudioParameterControllerInterface_SetBoolArrayParameter_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0332AE30
	 * 		Name   -> Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UAudioParameterControllerInterface::ResetParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.ResetParameters");
		
		UAudioParameterControllerInterface_ResetParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioParameterControllerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioParameterControllerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.AudioParameterControllerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioCodecEncoderSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCodecEncoderSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.AudioCodecEncoderSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.AudioEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDummyEndpointSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDummyEndpointSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.DummyEndpointSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceDataOverridePluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceDataOverridePluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOcclusionPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReverbPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverbPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.ReverbPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulatorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundModulatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPcmEncoderSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPcmEncoderSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.AudioPcmEncoderSettings");
		return ptr;
	}

}


