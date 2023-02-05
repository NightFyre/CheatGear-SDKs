#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
	 */
	struct UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params
	{
	public:
		class UResonanceAudioReverbPluginPreset*                   InPreset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
	 */
	struct UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params
	{
	public:
		class UResonanceAudioReverbPluginPreset*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	 */
	struct UResonanceAudioReverbPluginPreset_SetRoomRotation_Params
	{
	public:
		struct FQuat                                               InRotation;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	 */
	struct UResonanceAudioReverbPluginPreset_SetRoomPosition_Params
	{
	public:
		struct FVector                                             InPosition;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	 */
	struct UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params
	{
	public:
		TArray<ERaMaterialName>                                    InMaterials;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	 */
	struct UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params
	{
	public:
		struct FVector                                             InDimensions;                                            // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	 */
	struct UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params
	{
	public:
		float                                                      InReverbTimeModifier;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	 */
	struct UResonanceAudioReverbPluginPreset_SetReverbGain_Params
	{
	public:
		float                                                      InReverbGain;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	 */
	struct UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params
	{
	public:
		float                                                      InReverbBrightness;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	 */
	struct UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params
	{
	public:
		float                                                      InReflectionScalar;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	 */
	struct UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params
	{
	public:
		bool                                                       bInEnableRoomEffects;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	 */
	struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params
	{
	public:
		float                                                      InSpread;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	 */
	struct UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params
	{
	public:
		float                                                      InPattern;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InSharpness;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
