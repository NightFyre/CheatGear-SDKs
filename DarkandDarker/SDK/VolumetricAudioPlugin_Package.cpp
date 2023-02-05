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
	 * 		RVA    -> 0x00D39880
	 * 		Name   -> Function VolumetricAudioPlugin.BaseVolumetricAudio.GetDistanceAlongSplineFromLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class USplineComponent*                            SplineComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceOnSpline                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormalizedDistanceOnSpline                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseVolumetricAudio::GetDistanceAlongSplineFromLocation(class USplineComponent* SplineComponent, const struct FVector& Location, float* DistanceOnSpline, float* NormalizedDistanceOnSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.BaseVolumetricAudio.GetDistanceAlongSplineFromLocation");
		
		ABaseVolumetricAudio_GetDistanceAlongSplineFromLocation_Params params {};
		params.SplineComponent = SplineComponent;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceOnSpline != nullptr)
			*DistanceOnSpline = params.DistanceOnSpline;
		if (NormalizedDistanceOnSpline != nullptr)
			*NormalizedDistanceOnSpline = params.NormalizedDistanceOnSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseVolumetricAudio.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseVolumetricAudio::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VolumetricAudioPlugin.BaseVolumetricAudio");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D39A50
	 * 		Name   -> Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.SetListener
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Listener                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVolumetricAudioFunctionLibrary::STATIC_SetListener(class APawn** Listener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.SetListener");
		
		UVolumetricAudioFunctionLibrary_SetListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Listener != nullptr)
			*Listener = params.Listener;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D39A20
	 * 		Name   -> Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.GetListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class APawn* UVolumetricAudioFunctionLibrary::STATIC_GetListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VolumetricAudioPlugin.VolumetricAudioFunctionLibrary.GetListener");
		
		UVolumetricAudioFunctionLibrary_GetListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumetricAudioFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumetricAudioFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VolumetricAudioPlugin.VolumetricAudioFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumetricAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumetricAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VolumetricAudioPlugin.VolumetricAudioSettings");
		return ptr;
	}

}


