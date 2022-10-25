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
	 * 		Name   -> PredefinedFunction UAudioParametersProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioParametersProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.AudioParametersProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPositioningProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPositioningProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.AudioPositioningProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackInstWwiseAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackInstWwiseAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.InterpTrackInstWwiseAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackInstWwiseAudioRTPC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackInstWwiseAudioRTPC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.InterpTrackInstWwiseAudioRTPC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackWwiseAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackWwiseAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.InterpTrackWwiseAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterpTrackWwiseAudioRTPC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterpTrackWwiseAudioRTPC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.InterpTrackWwiseAudioRTPC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneWwiseTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneWwiseTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneWwiseTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneWwiseEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneWwiseEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.MovieSceneWwiseEventSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B9170
	 * 		Name   -> Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWwiseAmbientSound::ToggleAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound");
		
		AWwiseAmbientSound_ToggleAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B90D0
	 * 		Name   -> Function WwiseAudio.WwiseAmbientSound.StopAmbientSound
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWwiseAmbientSound::StopAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.StopAmbientSound");
		
		AWwiseAmbientSound_StopAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B9010
	 * 		Name   -> Function WwiseAudio.WwiseAmbientSound.StartAmbientSound
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWwiseAmbientSound::StartAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.StartAmbientSound");
		
		AWwiseAmbientSound_StartAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ListenerLocation                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AWwiseAmbientSound::GetAudioEmitterLocation(const struct FVector& ListenerLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation");
		
		AWwiseAmbientSound_GetAudioEmitterLocation_Params params {};
		params.ListenerLocation = ListenerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWwiseAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWwiseAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAssetSyncDestination.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAssetSyncDestination::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAssetSyncDestination");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseGameObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseGameObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseGameObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B90F0
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.StopManagedLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 OptionalStopEvent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::StopManagedLoop(class UWwiseEvent* OptionalStopEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StopManagedLoop");
		
		UWwiseAudioComponent_StopManagedLoop_Params params {};
		params.OptionalStopEvent = OptionalStopEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B90B0
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.StopAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWwiseAudioComponent::StopAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StopAll");
		
		UWwiseAudioComponent_StopAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B9030
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.StartManagedLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 NewLoopEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::StartManagedLoop(class UWwiseEvent* NewLoopEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.StartManagedLoop");
		
		UWwiseAudioComponent_StartManagedLoop_Params params {};
		params.NewLoopEvent = NewLoopEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8F90
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.SetSwitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseSwitch*                                WwiseSwitch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::SetSwitch(class UWwiseSwitch* WwiseSwitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetSwitch");
		
		UWwiseAudioComponent_SetSwitch_Params params {};
		params.WwiseSwitch = WwiseSwitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8E40
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.SetRTPCValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseRtpc*                                  GameParameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueChangeDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetRTPCValue");
		
		UWwiseAudioComponent_SetRTPCValue_Params params {};
		params.GameParameter = GameParameter;
		params.Value = Value;
		params.ValueChangeDuration = ValueChangeDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8D10
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWwiseLocationOverride>              NewLocations                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EWwiseMultiPositionType                            MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLocationsAreRelative                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::SetEmitterLocations(TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations");
		
		UWwiseAudioComponent_SetEmitterLocations_Params params {};
		params.NewLocations = NewLocations;
		params.MultiPositionType = MultiPositionType;
		params.bLocationsAreRelative = bLocationsAreRelative;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8C90
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.ScaleToRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::ScaleToRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.ScaleToRadius");
		
		UWwiseAudioComponent_ScaleToRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8C10
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ScalingFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::ScaleAttenuation(float ScalingFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation");
		
		UWwiseAudioComponent_ScaleAttenuation_Params params {};
		params.ScalingFactor = ScalingFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8B30
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UWwiseRtpc*>                          CallbackRtpcs                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::RegisterRtpcValueCallback(TArray<class UWwiseRtpc*> CallbackRtpcs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback");
		
		UWwiseAudioComponent_RegisterRtpcValueCallback_Params params {};
		params.CallbackRtpcs = CallbackRtpcs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8A50
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Flags                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwisePlaybackInstance UWwiseAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent, int32_t Flags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent");
		
		UWwiseAudioComponent_PostWwiseEvent_Params params {};
		params.WwiseEvent = WwiseEvent;
		params.Flags = Flags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B89D0
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.PostTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseTrigger*                               Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::PostTrigger(class UWwiseTrigger* Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.PostTrigger");
		
		UWwiseAudioComponent_PostTrigger_Params params {};
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8820
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.MakeMidiNote
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NoteNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 AssociatedEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseAudioComponent::MakeMidiNote(int32_t NoteNum, int32_t Velocity, int32_t Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.MakeMidiNote");
		
		UWwiseAudioComponent_MakeMidiNote_Params params {};
		params.NoteNum = NoteNum;
		params.Velocity = Velocity;
		params.Channel = Channel;
		params.Duration = Duration;
		params.StartTime = StartTime;
		params.AssociatedEvent = AssociatedEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8800
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.Jettison
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWwiseAudioComponent::Jettison()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.Jettison");
		
		UWwiseAudioComponent_Jettison_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8730
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EventAttenuationScale                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWwiseAudioComponent::IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible");
		
		UWwiseAudioComponent_IsPossiblyAudible_Params params {};
		params.WwiseEvent = WwiseEvent;
		params.EventAttenuationScale = EventAttenuationScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8700
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWwiseAudioComponent::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.IsPlaying");
		
		UWwiseAudioComponent_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8660
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.GetRtpcValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseRtpc*                                  RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWwiseAudioComponent::GetRtpcValue(class UWwiseRtpc* RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetRtpcValue");
		
		UWwiseAudioComponent_GetRtpcValue_Params params {};
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8630
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.GetRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseAudioComponent::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetRadius");
		
		UWwiseAudioComponent_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8520
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FWwisePlaybackInstance> UWwiseAudioComponent::GetPlayingInstances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances");
		
		UWwiseAudioComponent_GetPlayingInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B84F0
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseAudioComponent::GetMaxAttenuationRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius");
		
		UWwiseAudioComponent_GetMaxAttenuationRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseWorldComponentPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseWorldComponentPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseWorldComponentPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B8600
	 * 		Name   -> Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UWwiseAudioComponent* UWwiseAudioComponentPool::GetPooledComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent");
		
		UWwiseAudioComponentPool_GetPooledComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAudioComponentPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioComponentPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioComponentPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD710
	 * 		Name   -> Function WwiseAudio.WwiseEvent.GetMaxDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWwiseEvent::GetMaxDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseEvent.GetMaxDuration");
		
		UWwiseEvent_GetMaxDuration_Params params {};
		
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
	 * 		Name   -> PredefinedFunction UWwiseAudioInputEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioInputEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioInputEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAuxBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAuxBus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAuxBus");
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
	 * 		RVA    -> 0x005B84D0
	 * 		Name   -> Function WwiseAudio.WwiseAudioEffect.DeactivateEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWwiseAudioEffect::DeactivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioEffect.DeactivateEffect");
		
		UWwiseAudioEffect_DeactivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005B84B0
	 * 		Name   -> Function WwiseAudio.WwiseAudioEffect.ActivateEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWwiseAudioEffect::ActivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseAudioEffect.ActivateEffect");
		
		UWwiseAudioEffect_ActivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseAudioEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseAudioEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseAudioEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseListenerEnvironmentalEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseListenerEnvironmentalEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseListenerEnvironmentalEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseZoneAudioEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseZoneAudioEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseZoneAudioEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEffectProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEffectProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseEffectProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEnvironmentalEffectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEnvironmentalEffectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseEnvironmentalEffectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseExternalSourcesEditorData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseExternalSourcesEditorData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseExternalSourcesEditorData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseExternalSourceDebugData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseExternalSourceDebugData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseExternalSourceDebugData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEE70
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback");
		
		UWwiseGameplayStatics_WaitForAudioPlayback_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BED20
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseAudioInputEvent*                       AudioInputEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MaxWaitTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection");
		
		UWwiseGameplayStatics_WaitForAudioInputConnection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioInputEvent = AudioInputEvent;
		params.LatentInfo = LatentInfo;
		params.MaxWaitTime = MaxWaitTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BECB0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.UnloadBank
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseBank*                                  Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_UnloadBank(class UWwiseBank* Bank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.UnloadBank");
		
		UWwiseGameplayStatics_UnloadBank_Params params {};
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEC90
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UWwiseGameplayStatics::STATIC_StopProfilerCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture");
		
		UWwiseGameplayStatics_StopProfilerCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEC70
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UWwiseGameplayStatics::STATIC_StopOutputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture");
		
		UWwiseGameplayStatics_StopOutputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEB50
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.StopAudio
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StopAudio");
		
		UWwiseGameplayStatics_StopAudio_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEAC0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_StartProfilerCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture");
		
		UWwiseGameplayStatics_StartProfilerCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BEA30
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_StartOutputCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture");
		
		UWwiseGameplayStatics_StartOutputCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE8A0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EmitterRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               IsTemporaryComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation");
		
		UWwiseGameplayStatics_SpawnWwiseComponentAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.EmitterRadius = EmitterRadius;
		params.Orientation = Orientation;
		params.IsTemporaryComponent = IsTemporaryComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE760
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsTemporaryComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachmentComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_SpawnAttachedWwiseComponent(class AActor* Actor, const class FName& SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent");
		
		UWwiseGameplayStatics_SpawnAttachedWwiseComponent_Params params {};
		params.Actor = Actor;
		params.SocketName = SocketName;
		params.IsTemporaryComponent = IsTemporaryComponent;
		params.AttachmentComponent = AttachmentComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE6F0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.SetGlobalState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseState*                                 State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_SetGlobalState(class UWwiseState* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetGlobalState");
		
		UWwiseGameplayStatics_SetGlobalState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE5C0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseRtpc*                                  GameParameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue");
		
		UWwiseGameplayStatics_SetGlobalRTPCValue_Params params {};
		params.GameParameter = GameParameter;
		params.Value = Value;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE390
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition");
		
		UWwiseGameplayStatics_SetAudioPlaybackPosition_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.PlaybackPosition = PlaybackPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE270
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.ResumeAudio
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ResumeAudio");
		
		UWwiseGameplayStatics_ResumeAudio_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE0C0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FWwiseLocationOverride>              NewLocations                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EWwiseMultiPositionType                            MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride> NewLocations, EWwiseMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations");
		
		UWwiseGameplayStatics_PostEventAtMultipleLocations_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WwiseEvent = WwiseEvent;
		params.NewLocations = NewLocations;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BDF00
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EmitterRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation");
		
		UWwiseGameplayStatics_PostEventAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WwiseEvent = WwiseEvent;
		params.Location = Location;
		params.EmitterRadius = EmitterRadius;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BDD30
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      AttachToActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EmitterRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwisePlaybackInstance UWwiseGameplayStatics::STATIC_PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, const class FName& SocketName, float EmitterRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent");
		
		UWwiseGameplayStatics_PostAttachedEvent_Params params {};
		params.WwiseEvent = WwiseEvent;
		params.AttachToActor = AttachToActor;
		params.AttachToComponent = AttachToComponent;
		params.SocketName = SocketName;
		params.EmitterRadius = EmitterRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BDC10
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.PauseAudio
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.PauseAudio");
		
		UWwiseGameplayStatics_PauseAudio_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BDBA0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.LoadBank
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseBank*                                  Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_LoadBank(class UWwiseBank* Bank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.LoadBank");
		
		UWwiseGameplayStatics_LoadBank_Params params {};
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD9F0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseEvent*                                 inWwiseEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AttenuationScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EmitterRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWwiseGameplayStatics::STATIC_IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* inWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible");
		
		UWwiseGameplayStatics_IsPossiblyAudible_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.inWwiseEvent = inWwiseEvent;
		params.Location = Location;
		params.AttenuationScale = AttenuationScale;
		params.EmitterRadius = EmitterRadius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD950
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UWwiseGameplayStatics::STATIC_IsAudioPlaying(const struct FWwisePlaybackInstance& PlaybackInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying");
		
		UWwiseGameplayStatics_IsAudioPlaying_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD8B0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UWwiseGameplayStatics::STATIC_IsAudioPaused(const struct FWwisePlaybackInstance& PlaybackInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused");
		
		UWwiseGameplayStatics_IsAudioPaused_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD7D0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWwiseBankEfficiencyReportDatum>     ReportData                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport");
		
		UWwiseGameplayStatics_GetWwiseBankEfficiencyReport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReportData != nullptr)
			*ReportData = params.ReportData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD730
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UWwiseEvent* UWwiseGameplayStatics::STATIC_GetPlayingEvent(const struct FWwisePlaybackInstance& PlaybackInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent");
		
		UWwiseGameplayStatics_GetPlayingEvent_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD670
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UWwiseGameplayStatics::STATIC_GetEstimatedAudioDuration(const struct FWwisePlaybackInstance& PlaybackInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration");
		
		UWwiseGameplayStatics_GetEstimatedAudioDuration_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD5B0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent");
		
		UWwiseGameplayStatics_GetDefaultWwiseComponent_Params params {};
		params.Actor = Actor;
		params.bCreateIfNotFound = bCreateIfNotFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD440
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TestPosition                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ClosestLocation                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation");
		
		UWwiseGameplayStatics_GetClosestListenerLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TestPosition = TestPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestLocation != nullptr)
			*ClosestLocation = params.ClosestLocation;
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD350
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bExtrapolateSubFrameTime                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWwiseGameplayStatics::STATIC_GetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition");
		
		UWwiseGameplayStatics_GetAudioPlaybackPosition_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.bExtrapolateSubFrameTime = bExtrapolateSubFrameTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD260
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateIfNotFound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseAudioComponent* UWwiseGameplayStatics::STATIC_GetAudioComponentFromPlaybackInstance(const struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance");
		
		UWwiseGameplayStatics_GetAudioComponentFromPlaybackInstance_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.bCreateIfNotFound = bCreateIfNotFound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD080
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWwisePlaybackInstance                      PlaybackInstance                                           (Parm, NativeAccessSpecifierPublic)
	 * 		EWwiseEventAction                                  Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, EWwiseEventAction Action, float TransitionDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance");
		
		UWwiseGameplayStatics_ExecuteActionOnAudioInstance_Params params {};
		params.PlaybackInstance = PlaybackInstance;
		params.Action = Action;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BCED0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWwiseAuxBus*                                AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EffectLocation                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectAttenuationDistance                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseZoneAudioEffect* UWwiseGameplayStatics::STATIC_CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect");
		
		UWwiseGameplayStatics_CreateZoneAudioEffect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AuxBus = AuxBus;
		params.EffectLocation = EffectLocation;
		params.EffectSize = EffectSize;
		params.EffectAttenuationDistance = EffectAttenuationDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BCDD0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseAuxBus*                                AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseListenerEnvironmentalEffect* UWwiseGameplayStatics::STATIC_CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect");
		
		UWwiseGameplayStatics_CreateListenerAudioEffect_Params params {};
		params.AuxBus = AuxBus;
		params.TargetActor = TargetActor;
		params.WetAmount = WetAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BCC90
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseAuxBus*                                AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEffectType                                   EffectType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WetAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseAudioEffect* UWwiseGameplayStatics::STATIC_CreateAudioEffect(class UWwiseAuxBus* AuxBus, EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect");
		
		UWwiseGameplayStatics_CreateAudioEffect_Params params {};
		params.AuxBus = AuxBus;
		params.EffectType = EffectType;
		params.WetAmount = WetAmount;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BCAE0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		float                                              Gain                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FWwiseLocationOverride> UWwiseGameplayStatics::STATIC_ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector> Locations, const struct FRotator& Orientation, float Gain, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides");
		
		UWwiseGameplayStatics_ConvertLocationsToWwiseLocationOverrides_Params params {};
		params.Locations = Locations;
		params.Orientation = Orientation;
		params.Gain = Gain;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BC9D0
	 * 		Name   -> Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MarkerText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGameplayStatics::STATIC_AddOutputCaptureMarker(const class FString& MarkerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker");
		
		UWwiseGameplayStatics_AddOutputCaptureMarker_Params params {};
		params.MarkerText = MarkerText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseGameplayStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseGameplayStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseGameplayStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseImplementerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseImplementerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseImplementerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BE470
	 * 		Name   -> Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseRtpc*                                  GameParameter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ValueChangeDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseCurveInterpolation                           FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseListenerComponent::SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue");
		
		UWwiseListenerComponent_SetBusRTPCValue_Params params {};
		params.GameParameter = GameParameter;
		params.Value = Value;
		params.ValueChangeDuration = ValueChangeDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BD1E0
	 * 		Name   -> Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWwiseListenerComponent* UWwiseListenerComponent::STATIC_FindAssociatedListener(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener");
		
		UWwiseListenerComponent_FindAssociatedListener_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005BCA60
	 * 		Name   -> Function WwiseAudio.WwiseListenerComponent.ConfigureListener
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWwiseEvent*                                 WwiseEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseListenerComponent::ConfigureListener(class UWwiseEvent* WwiseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseAudio.WwiseListenerComponent.ConfigureListener");
		
		UWwiseListenerComponent_ConfigureListener_Params params {};
		params.WwiseEvent = WwiseEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseListenerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseMediaAudioSinkProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseMediaAudioSinkProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseMediaAudioSinkProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseRtpc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseRtpc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseRtpc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseStateGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseStateGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseStateGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseSwitchGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseSwitchGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseSwitchGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseAudio.WwiseTrigger");
		return ptr;
	}

}


