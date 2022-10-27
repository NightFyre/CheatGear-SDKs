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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyWwiseEmitterComponentRetrievalInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyWwiseEmitterComponentRetrievalInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.AnimNotifyWwiseEmitterComponentRetrievalInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD30A0
	 * 		Name   -> Function WwiseAudio.WwiseEvent.IsAudible
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     SoundPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ListenerPos                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              AttenuationScaler                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWwiseEvent::IsAudible(const struct FVector& SoundPosition, const struct FVector& ListenerPos, float AttenuationScaler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.IsAudible");
		
		UWwiseEvent_IsAudible_Params params {};
		params.SoundPosition = SoundPosition;
		params.ListenerPos = ListenerPos;
		params.AttenuationScaler = AttenuationScaler;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2DA0
	 * 		Name   -> Function WwiseAudio.WwiseEvent.GetMaxAttenuation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseEvent::GetMaxAttenuation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxAttenuation");
		
		UWwiseEvent_GetMaxAttenuation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2D60
	 * 		Name   -> Function WwiseAudio.WwiseEvent.GetDurationType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EWwiseEventDurationType UWwiseEvent::GetDurationType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationType");
		
		UWwiseEvent_GetDurationType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2D30
	 * 		Name   -> Function WwiseAudio.WwiseEvent.GetDurationMin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseEvent::GetDurationMin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMin");
		
		UWwiseEvent_GetDurationMin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2D00
	 * 		Name   -> Function WwiseAudio.WwiseEvent.GetDurationMax
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseEvent::GetDurationMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetDurationMax");
		
		UWwiseEvent_GetDurationMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiEmitterRootComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiEmitterRootComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MultiEmitterRootComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseSubSystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseSubSystemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseSubSystemInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseDebugManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseDebugManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseDebugManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEmitterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEmitterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseEmitterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMergedMultiEmitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMergedMultiEmitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MergedMultiEmitterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEmitterManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEmitterManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseEmitterManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseDDSEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseDDSEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseDDSEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseIDsDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseIDsDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseIDsDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseInputManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseInputManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseInputManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseInputManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseInputManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseInputManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseMediaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseMediaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseMediaManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwisePersistentContentStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwisePersistentContentStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwisePersistentContentStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwisePoolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwisePoolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwisePoolManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseSoundFrameManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseSoundFrameManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseSoundFrameManager");
		return ptr;
	}

}


