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
	 * 		Name   -> PredefinedFunction USoundSimple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundSimple::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundUtilities.SoundSimple");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InBandwidth                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(float InBandwidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth");
		
		USoundUtilitiesBPFunctionLibrary_GetQFromBandwidth_Params params {};
		params.InBandwidth = InBandwidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseMidiNote                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetMidiNote                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");
		
		USoundUtilitiesBPFunctionLibrary_GetPitchScaleFromMIDIPitch_Params params {};
		params.BaseMidiNote = BaseMidiNote;
		params.TargetMidiNote = TargetMidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Frequency                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");
		
		USoundUtilitiesBPFunctionLibrary_GetMIDIPitchFromFrequency_Params params {};
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InDomain                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InRange                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped");
		
		USoundUtilitiesBPFunctionLibrary_GetLogFrequencyClamped_Params params {};
		params.InValue = InValue;
		params.InDomain = InDomain;
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InDomain                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InRange                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped");
		
		USoundUtilitiesBPFunctionLibrary_GetLinearFrequencyClamped_Params params {};
		params.InValue = InValue;
		params.InDomain = InDomain;
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(int32_t InVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity");
		
		USoundUtilitiesBPFunctionLibrary_GetGainFromMidiVelocity_Params params {};
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPitchSemitones                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(float InPitchSemitones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones");
		
		USoundUtilitiesBPFunctionLibrary_GetFrequencyMultiplierFromSemitones_Params params {};
		params.InPitchSemitones = InPitchSemitones;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MidiNote                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int32_t MidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");
		
		USoundUtilitiesBPFunctionLibrary_GetFrequencyFromMIDIPitch_Params params {};
		params.MidiNote = MidiNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BeatsPerMinute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BeatMultiplier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DivisionsOfWholeNote                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");
		
		USoundUtilitiesBPFunctionLibrary_GetBeatTempo_Params params {};
		params.BeatsPerMinute = BeatsPerMinute;
		params.BeatMultiplier = BeatMultiplier;
		params.DivisionsOfWholeNote = DivisionsOfWholeNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InQ                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(float InQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ");
		
		USoundUtilitiesBPFunctionLibrary_GetBandwidthFromQ_Params params {};
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLinear                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFloor                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(float InLinear, float InFloor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels");
		
		USoundUtilitiesBPFunctionLibrary_ConvertLinearToDecibels_Params params {};
		params.InLinear = InLinear;
		params.InFloor = InFloor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDecibels                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(float InDecibels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear");
		
		USoundUtilitiesBPFunctionLibrary_ConvertDecibelsToLinear_Params params {};
		params.InDecibels = InDecibels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundUtilitiesBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundUtilitiesBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}

}


