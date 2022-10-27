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
	 * Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation
	 */
	struct UActiveAmbientLocationChooser_Blueprint_NominateSoundLocation_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Out_Location;                                            // 0x0008(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Out_Radius;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser
	 */
	struct UActiveAmbientLocationChooser_Blueprint_InitLocationChooser_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations
	 */
	struct UActiveAmbientLocationChooser_PreselectedLocation_UpdateLocations_Params
	{	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations
	 */
	struct UActiveAmbientLocationChooser_PreselectedLocation_DrawLocations_Params
	{	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation
	 */
	struct UActiveAmbientLocationChooser_PreselectedLocation_AddLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRadius;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid
	 */
	struct UActiveAmbientLocationValidator_Blueprint_IsProposedLocationValid_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientSound.EnableSounds
	 */
	struct AActiveAmbientSound_EnableSounds_Params
	{	};

	/**
	 * Function GbxAudio.ActiveAmbientSound.DisableSounds
	 */
	struct AActiveAmbientSound_DisableSounds_Params
	{	};

	/**
	 * Function GbxAudio.ActiveAmbientSoundComponent.Startle
	 */
	struct UActiveAmbientSoundComponent_Startle_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance
	 */
	struct UActiveAmbientUpdater_Blueprint_UpdateActiveAmbientInstance_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveAmbientInstance                              ActiveAmbientInstance;                                   // 0x0008(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance
	 */
	struct UActiveAmbientUpdater_Blueprint_InitializeActiveAmbientInstance_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActiveAmbientInstance                              ActiveAmbientInstance;                                   // 0x0008(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize
	 */
	struct AAudioOcclusionVoxelizerZone_Voxelize_Params
	{	};

	/**
	 * Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE
	 */
	struct AAudioOcclusionVoxelizerZone_ExportAsRLE_Params
	{	};

	/**
	 * Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw
	 */
	struct AAudioOcclusionVoxelizerZone_ExportAsRaw_Params
	{	};

	/**
	 * Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation
	 */
	struct UAudioPrepLocationFinder_Blueprint_AddLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations
	 */
	struct UAudioPrepLocationFinder_Blueprint_AddFoundLocations_Params
	{	};

	/**
	 * Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations
	 */
	struct UActiveAmbientLocationFinder_Blueprint_AddFoundLocations_Params
	{
	public:
		class UActiveAmbientSoundComponent*                        ActiveAmbientComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActiveAmbientLocationChooser_PreselectedLocation*   PreselectedLocationChooser;                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.CharacterSoundData.RefreshAll
	 */
	struct UCharacterSoundData_RefreshAll_Params
	{	};

	/**
	 * Function GbxAudio.DistributedAmbientSound.DoUpdateTree
	 */
	struct ADistributedAmbientSound_DoUpdateTree_Params
	{	};

	/**
	 * Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild
	 */
	struct ADistributedAmbientSound_DoFindNewLocationsAndRebuild_Params
	{	};

	/**
	 * Function GbxAudio.FluidSimExampleZone.UpdateVisualization
	 */
	struct AFluidSimExampleZone_UpdateVisualization_Params
	{	};

	/**
	 * Function GbxAudio.FluidSimExampleZone.ExportVectorField
	 */
	struct AFluidSimExampleZone_ExportVectorField_Params
	{	};

	/**
	 * Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim
	 */
	struct AFluidSimExampleZone_ApplyToOtherSim_Params
	{	};

	/**
	 * Function GbxAudio.FoleyMainComponent.SetSurfaceModifier
	 */
	struct UFoleyMainComponent_SetSurfaceModifier_Params
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FootstepVolumeMultiplier;                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.FoleyMainComponent.PlayFootstepEvent
	 */
	struct UFoleyMainComponent_PlayFootstepEvent_Params
	{
	public:
		struct FFoleyEventParams                                   EventParams;                                             // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.FoleyMainComponent.PlayFootstep
	 */
	struct UFoleyMainComponent_PlayFootstep_Params
	{
	public:
		struct FVector                                             FootstepLocation;                                        // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            FootstepRotation;                                        // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UWwiseSwitch*                                        MaterialSwitch;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeAdjustment;                                        // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchAdjustment;                                         // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         ConfigureEvent;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreview;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound
	 */
	struct UGbxAudioBlueprintLibrary_TriggerCharacterSound_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterSoundTag*                                  SoundTag;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect
	 */
	struct UGbxAudioBlueprintLibrary_RemoveListenerAudioEffect_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAuxBus*                                        Efx;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter
	 */
	struct UGbxAudioBlueprintLibrary_PassesAudioPreparationHitFilter_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FAudioPrepHitResultFilter                           Filter;                                                  // 0x0090(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter
	 */
	struct UGbxAudioBlueprintLibrary_PassesAudioPreparationComponentFilter_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAudioPrepComponentFilter                           Filter;                                                  // 0x0008(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect
	 */
	struct UGbxAudioBlueprintLibrary_ApplyListenerAudioEffect_Params
	{
	public:
		class AActor*                                              Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseAuxBus*                                        Efx;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetVolume;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DryVolume;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.LightAudioComponent.SetRTPCValue
	 */
	struct ULightAudioComponent_SetRTPCValue_Params
	{
	public:
		class UWwiseRtpc*                                          GameParameter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8GH4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ValueChangeDuration;                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWwiseCurveInterpolation                                   FadeCurve;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.LightAudioComponent.PostWwiseEvent
	 */
	struct ULightAudioComponent_PostWwiseEvent_Params
	{
	public:
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWwisePlaybackInstance                              ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.StopSequence
	 */
	struct UMusicSequencerComponent_StopSequence_Params
	{	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.PostSequenceEvent
	 */
	struct UMusicSequencerComponent_PostSequenceEvent_Params
	{
	public:
		class UWwiseAudioComponent*                                WwiseComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Note;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Velocity;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Channel;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartBeat;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.PlaySequence
	 */
	struct UMusicSequencerComponent_PlaySequence_Params
	{	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.PauseSequence
	 */
	struct UMusicSequencerComponent_PauseSequence_Params
	{	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.IsPlaying
	 */
	struct UMusicSequencerComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat
	 */
	struct UMusicSequencerComponent_GetRealTimeUntilBeat_Params
	{
	public:
		float                                                      Beat;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.MusicSequencerComponent.GetCurrentBeat
	 */
	struct UMusicSequencerComponent_GetCurrentBeat_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect
	 */
	struct UWwiseListenerEffectComponent_RemoveAudioEffect_Params
	{
	public:
		class UWwiseAuxBus*                                        Efx;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects
	 */
	struct UWwiseListenerEffectComponent_RemoveAllAudioEffects_Params
	{	};

	/**
	 * Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect
	 */
	struct UWwiseListenerEffectComponent_ApplyAudioEffect_Params
	{
	public:
		class UWwiseAuxBus*                                        Efx;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WetPercent;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DryPercent;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
