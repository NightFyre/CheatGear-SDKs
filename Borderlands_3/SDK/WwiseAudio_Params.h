#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound
	 */
	struct AWwiseAmbientSound_ToggleAmbientSound_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAmbientSound.StopAmbientSound
	 */
	struct AWwiseAmbientSound_StopAmbientSound_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAmbientSound.StartAmbientSound
	 */
	struct AWwiseAmbientSound_StartAmbientSound_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation
	 */
	struct AWwiseAmbientSound_GetAudioEmitterLocation_Params
	{
	public:
		struct FVector                                             ListenerLocation;                                        // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.StopManagedLoop
	 */
	struct UWwiseAudioComponent_StopManagedLoop_Params
	{
	public:
		class UWwiseEvent*                                         OptionalStopEvent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.StopAll
	 */
	struct UWwiseAudioComponent_StopAll_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.StartManagedLoop
	 */
	struct UWwiseAudioComponent_StartManagedLoop_Params
	{
	public:
		class UWwiseEvent*                                         NewLoopEvent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.SetSwitch
	 */
	struct UWwiseAudioComponent_SetSwitch_Params
	{
	public:
		class UWwiseSwitch*                                        WwiseSwitch;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.SetRTPCValue
	 */
	struct UWwiseAudioComponent_SetRTPCValue_Params
	{
	public:
		class UWwiseRtpc*                                          GameParameter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueChangeDuration;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations
	 */
	struct UWwiseAudioComponent_SetEmitterLocations_Params
	{
	public:
		TArray<struct FWwiseLocationOverride>                      NewLocations;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EWwiseMultiPositionType                                    MultiPositionType;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLocationsAreRelative;                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.ScaleToRadius
	 */
	struct UWwiseAudioComponent_ScaleToRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation
	 */
	struct UWwiseAudioComponent_ScaleAttenuation_Params
	{
	public:
		float                                                      ScalingFactor;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback
	 */
	struct UWwiseAudioComponent_RegisterRtpcValueCallback_Params
	{
	public:
		TArray<class UWwiseRtpc*>                                  CallbackRtpcs;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent
	 */
	struct UWwiseAudioComponent_PostWwiseEvent_Params
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Flags;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PAHN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwisePlaybackInstance                              ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.PostTrigger
	 */
	struct UWwiseAudioComponent_PostTrigger_Params
	{
	public:
		class UWwiseTrigger*                                       Trigger;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.MakeMidiNote
	 */
	struct UWwiseAudioComponent_MakeMidiNote_Params
	{
	public:
		int32_t                                                    NoteNum;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Velocity;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8G1E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseEvent*                                         AssociatedEvent;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.Jettison
	 */
	struct UWwiseAudioComponent_Jettison_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible
	 */
	struct UWwiseAudioComponent_IsPossiblyAudible_Params
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EventAttenuationScale;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.IsPlaying
	 */
	struct UWwiseAudioComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.GetRtpcValue
	 */
	struct UWwiseAudioComponent_GetRtpcValue_Params
	{
	public:
		class UWwiseRtpc*                                          RTPC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.GetRadius
	 */
	struct UWwiseAudioComponent_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances
	 */
	struct UWwiseAudioComponent_GetPlayingInstances_Params
	{
	public:
		TArray<struct FWwisePlaybackInstance>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius
	 */
	struct UWwiseAudioComponent_GetMaxAttenuationRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent
	 */
	struct UWwiseAudioComponentPool_GetPooledComponent_Params
	{
	public:
		class UWwiseAudioComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseEvent.GetMaxDuration
	 */
	struct UWwiseEvent_GetMaxDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseAudioEffect.DeactivateEffect
	 */
	struct UWwiseAudioEffect_DeactivateEffect_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseAudioEffect.ActivateEffect
	 */
	struct UWwiseAudioEffect_ActivateEffect_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback
	 */
	struct UWwiseGameplayStatics_WaitForAudioPlayback_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection
	 */
	struct UWwiseGameplayStatics_WaitForAudioInputConnection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAudioInputEvent*                               AudioInputEvent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MaxWaitTime;                                             // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.UnloadBank
	 */
	struct UWwiseGameplayStatics_UnloadBank_Params
	{
	public:
		class UWwiseBank*                                          Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture
	 */
	struct UWwiseGameplayStatics_StopProfilerCapture_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture
	 */
	struct UWwiseGameplayStatics_StopOutputCapture_Params
	{	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.StopAudio
	 */
	struct UWwiseGameplayStatics_StopAudio_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture
	 */
	struct UWwiseGameplayStatics_StartProfilerCapture_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture
	 */
	struct UWwiseGameplayStatics_StartOutputCapture_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation
	 */
	struct UWwiseGameplayStatics_SpawnWwiseComponentAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EmitterRadius;                                           // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x0018(0x000C)  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       IsTemporaryComponent;                                    // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X7EQ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseAudioComponent*                                ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent
	 */
	struct UWwiseGameplayStatics_SpawnAttachedWwiseComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsTemporaryComponent;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5BZU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAudioComponent*                                ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.SetGlobalState
	 */
	struct UWwiseGameplayStatics_SetGlobalState_Params
	{
	public:
		class UWwiseState*                                         State;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue
	 */
	struct UWwiseGameplayStatics_SetGlobalRTPCValue_Params
	{
	public:
		class UWwiseRtpc*                                          GameParameter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition
	 */
	struct UWwiseGameplayStatics_SetAudioPlaybackPosition_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      PlaybackPosition;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.ResumeAudio
	 */
	struct UWwiseGameplayStatics_ResumeAudio_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations
	 */
	struct UWwiseGameplayStatics_PostEventAtMultipleLocations_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FWwiseLocationOverride>                      NewLocations;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EWwiseMultiPositionType                                    MultiPositionType;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4T83[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwisePlaybackInstance                              ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation
	 */
	struct UWwiseGameplayStatics_PostEventAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EmitterRadius;                                           // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x0020(0x000C)  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9DDD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwisePlaybackInstance                              ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent
	 */
	struct UWwiseGameplayStatics_PostAttachedEvent_Params
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              AttachToActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EmitterRadius;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_19IK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwisePlaybackInstance                              ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.PauseAudio
	 */
	struct UWwiseGameplayStatics_PauseAudio_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      TransitionDuration;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.LoadBank
	 */
	struct UWwiseGameplayStatics_LoadBank_Params
	{
	public:
		class UWwiseBank*                                          Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible
	 */
	struct UWwiseGameplayStatics_IsPossiblyAudible_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         inWwiseEvent;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AttenuationScale;                                        // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EmitterRadius;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying
	 */
	struct UWwiseGameplayStatics_IsAudioPlaying_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused
	 */
	struct UWwiseGameplayStatics_IsAudioPaused_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport
	 */
	struct UWwiseGameplayStatics_GetWwiseBankEfficiencyReport_Params
	{
	public:
		TArray<struct FWwiseBankEfficiencyReportDatum>             ReportData;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent
	 */
	struct UWwiseGameplayStatics_GetPlayingEvent_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration
	 */
	struct UWwiseGameplayStatics_GetEstimatedAudioDuration_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent
	 */
	struct UWwiseGameplayStatics_GetDefaultWwiseComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCreateIfNotFound;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AY6Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseAudioComponent*                                ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation
	 */
	struct UWwiseGameplayStatics_GetClosestListenerLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TestPosition;                                            // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ClosestLocation;                                         // 0x0014(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition
	 */
	struct UWwiseGameplayStatics_GetAudioPlaybackPosition_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bExtrapolateSubFrameTime;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YTSB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance
	 */
	struct UWwiseGameplayStatics_GetAudioComponentFromPlaybackInstance_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCreateIfNotFound;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CXZK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseAudioComponent*                                ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance
	 */
	struct UWwiseGameplayStatics_ExecuteActionOnAudioInstance_Params
	{
	public:
		struct FWwisePlaybackInstance                              PlaybackInstance;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		EWwiseEventAction                                          Action;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OATW[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TransitionDuration;                                      // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect
	 */
	struct UWwiseGameplayStatics_CreateZoneAudioEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAuxBus*                                        AuxBus;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EffectLocation;                                          // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectSize;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectAttenuationDistance;                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PMNH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseZoneAudioEffect*                               ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect
	 */
	struct UWwiseGameplayStatics_CreateListenerAudioEffect_Params
	{
	public:
		class UWwiseAuxBus*                                        AuxBus;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetAmount;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LI4Z[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseListenerEnvironmentalEffect*                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect
	 */
	struct UWwiseGameplayStatics_CreateAudioEffect_Params
	{
	public:
		class UWwiseAuxBus*                                        AuxBus;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseEffectType                                           EffectType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2W4V[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WetAmount;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAudioEffect*                                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides
	 */
	struct UWwiseGameplayStatics_ConvertLocationsToWwiseLocationOverrides_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		float                                                      Gain;                                                    // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CG96[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FWwiseLocationOverride>                      ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker
	 */
	struct UWwiseGameplayStatics_AddOutputCaptureMarker_Params
	{
	public:
		class FString                                              MarkerText;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue
	 */
	struct UWwiseListenerComponent_SetBusRTPCValue_Params
	{
	public:
		class UWwiseRtpc*                                          GameParameter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ValueChangeDuration;                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener
	 */
	struct UWwiseListenerComponent_FindAssociatedListener_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseListenerComponent*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WwiseAudio.WwiseListenerComponent.ConfigureListener
	 */
	struct UWwiseListenerComponent_ConfigureListener_Params
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
