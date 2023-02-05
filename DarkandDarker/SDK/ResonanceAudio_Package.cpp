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
	 * 		Name   -> PredefinedFunction UResonanceAudioSoundfieldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResonanceAudioSoundfieldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSoundfieldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC830
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UResonanceAudioReverbPluginPreset*           InPreset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioBlueprintFunctionLibrary::STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset");
		
		UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params params {};
		params.InPreset = InPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC770
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::STATIC_GetGlobalReverbPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset");
		
		UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResonanceAudioBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResonanceAudioBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AResonanceAudioDirectivityVisualizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AResonanceAudioDirectivityVisualizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioDirectivityVisualizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECC80
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FQuat                                       InRotation                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetRoomRotation(const struct FQuat& InRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation");
		
		UResonanceAudioReverbPluginPreset_SetRoomRotation_Params params {};
		params.InRotation = InRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECBF0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetRoomPosition(const struct FVector& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition");
		
		UResonanceAudioReverbPluginPreset_SetRoomPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECB40
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<ERaMaterialName>                            InMaterials                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetRoomMaterials(TArray<ERaMaterialName> InMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials");
		
		UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params params {};
		params.InMaterials = InMaterials;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECAB0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InDimensions                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetRoomDimensions(const struct FVector& InDimensions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions");
		
		UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params params {};
		params.InDimensions = InDimensions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECA30
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReverbTimeModifier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float InReverbTimeModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier");
		
		UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params params {};
		params.InReverbTimeModifier = InReverbTimeModifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC9B0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReverbGain                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetReverbGain(float InReverbGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain");
		
		UResonanceAudioReverbPluginPreset_SetReverbGain_Params params {};
		params.InReverbGain = InReverbGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC930
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReverbBrightness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness");
		
		UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params params {};
		params.InReverbBrightness = InReverbBrightness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC8B0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReflectionScalar                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar");
		
		UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params params {};
		params.InReflectionScalar = InReflectionScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC7A0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnableRoomEffects                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects");
		
		UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params params {};
		params.bInEnableRoomEffects = bInEnableRoomEffects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResonanceAudioReverbPluginPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResonanceAudioReverbPluginPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioReverbPluginPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResonanceAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResonanceAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECDE0
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSpread                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread");
		
		UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params params {};
		params.InSpread = InSpread;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECD10
	 * 		Name   -> Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPattern                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InSharpness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity");
		
		UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params params {};
		params.InPattern = InPattern;
		params.InSharpness = InSharpness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResonanceAudioSpatializationSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResonanceAudioSpatializationSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings");
		return ptr;
	}

}


