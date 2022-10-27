/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * 		Name   -> PredefinedFunction UModularSynthPresetBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthPresetBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051953B0
	 * 		Name   -> Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UModularSynthPresetBank*                     InBank                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModularSynthPreset                         Preset                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      PresetName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthLibrary::STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset");
		
		UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params params {};
		params.InBank = InBank;
		params.Preset = Preset;
		params.PresetName = PresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModularSynthLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197920
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSynthPreset
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FModularSynthPreset                         SynthPreset                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSynthPreset");
		
		UModularSynthComponent_SetSynthPreset_Params params {};
		params.SynthPreset = SynthPreset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051978A0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SustainGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSustainGain(float SustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSustainGain");
		
		UModularSynthComponent_SetSustainGain_Params params {};
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197820
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DelayWetlevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel");
		
		UModularSynthComponent_SetStereoDelayWetlevel_Params params {};
		params.DelayWetlevel = DelayWetlevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051977A0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DelayTimeMsec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayTime");
		
		UModularSynthComponent_SetStereoDelayTime_Params params {};
		params.DelayTimeMsec = DelayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197720
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DelayRatio                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio");
		
		UModularSynthComponent_SetStereoDelayRatio_Params params {};
		params.DelayRatio = DelayRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051976A0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthStereoDelayMode                              StereoDelayMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayMode");
		
		UModularSynthComponent_SetStereoDelayMode_Params params {};
		params.StereoDelayMode = StereoDelayMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197610
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               StereoDelayEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled");
		
		UModularSynthComponent_SetStereoDelayIsEnabled_Params params {};
		params.StereoDelayEnabled = StereoDelayEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197590
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DelayFeedback                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback");
		
		UModularSynthComponent_SetStereoDelayFeedback_Params params {};
		params.DelayFeedback = DelayFeedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197510
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetSpread
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Spread                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetSpread(float Spread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSpread");
		
		UModularSynthComponent_SetSpread_Params params {};
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197490
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetReleaseTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetReleaseTime");
		
		UModularSynthComponent_SetReleaseTime_Params params {};
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197410
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPortamento
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Portamento                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPortamento(float Portamento)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPortamento");
		
		UModularSynthComponent_SetPortamento_Params params {};
		params.Portamento = Portamento;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197390
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPitchBend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              PitchBend                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPitchBend(float PitchBend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPitchBend");
		
		UModularSynthComponent_SetPitchBend_Params params {};
		params.PitchBend = PitchBend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197310
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetPan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Pan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetPan(float Pan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPan");
		
		UModularSynthComponent_SetPan_Params params {};
		params.Pan = Pan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197250
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynth1OscType                                     OscType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscType(int32_t OscIndex, ESynth1OscType OscType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscType");
		
		UModularSynthComponent_SetOscType_Params params {};
		params.OscIndex = OscIndex;
		params.OscType = OscType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051971C0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscSync
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsSynced                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscSync(bool bIsSynced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSync");
		
		UModularSynthComponent_SetOscSync_Params params {};
		params.bIsSynced = bIsSynced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051970F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscSemitones
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Semitones                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscSemitones(int32_t OscIndex, float Semitones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSemitones");
		
		UModularSynthComponent_SetOscSemitones_Params params {};
		params.OscIndex = OscIndex;
		params.Semitones = Semitones;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05197020
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pulsewidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscPulsewidth(int32_t OscIndex, float Pulsewidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscPulsewidth");
		
		UModularSynthComponent_SetOscPulsewidth_Params params {};
		params.OscIndex = OscIndex;
		params.Pulsewidth = Pulsewidth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196F50
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscOctave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Octave                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscOctave(int32_t OscIndex, float Octave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscOctave");
		
		UModularSynthComponent_SetOscOctave_Params params {};
		params.OscIndex = OscIndex;
		params.Octave = Octave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196E80
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscGainMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscGainMod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscGainMod(int32_t OscIndex, float OscGainMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGainMod");
		
		UModularSynthComponent_SetOscGainMod_Params params {};
		params.OscIndex = OscIndex;
		params.OscGainMod = OscGainMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196DB0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscGain                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscGain(int32_t OscIndex, float OscGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGain");
		
		UModularSynthComponent_SetOscGain_Params params {};
		params.OscIndex = OscIndex;
		params.OscGain = OscGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196CE0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OscFreqMod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod");
		
		UModularSynthComponent_SetOscFrequencyMod_Params params {};
		params.OscIndex = OscIndex;
		params.OscFreqMod = OscFreqMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196C10
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetOscCents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OscIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Cents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetOscCents(int32_t OscIndex, float Cents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscCents");
		
		UModularSynthComponent_SetOscCents_Params params {};
		params.OscIndex = OscIndex;
		params.Cents = Cents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196B90
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SustainGain                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain");
		
		UModularSynthComponent_SetModEnvSustainGain_Params params {};
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196B10
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Release                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvReleaseTime(float Release)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime");
		
		UModularSynthComponent_SetModEnvReleaseTime_Params params {};
		params.Release = Release;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196A90
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvPatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthModEnvPatch                                  InPatchType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvPatch(ESynthModEnvPatch InPatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvPatch");
		
		UModularSynthComponent_SetModEnvPatch_Params params {};
		params.InPatchType = InPatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196A00
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvInvert(bool bInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvInvert");
		
		UModularSynthComponent_SetModEnvInvert_Params params {};
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196980
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Depth                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvDepth(float Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDepth");
		
		UModularSynthComponent_SetModEnvDepth_Params params {};
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196900
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime");
		
		UModularSynthComponent_SetModEnvDecayTime_Params params {};
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196880
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthModEnvBiasPatch                              InPatchType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch");
		
		UModularSynthComponent_SetModEnvBiasPatch_Params params {};
		params.InPatchType = InPatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051967F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert");
		
		UModularSynthComponent_SetModEnvBiasInvert_Params params {};
		params.bInvert = bInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196770
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime");
		
		UModularSynthComponent_SetModEnvAttackTime_Params params {};
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051966B0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOType                                      LFOType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOType");
		
		UModularSynthComponent_SetLFOType_Params params {};
		params.LFOIndex = LFOIndex;
		params.LFOType = LFOType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051965F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOPatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOPatchType                                 LFOPatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOPatch");
		
		UModularSynthComponent_SetLFOPatch_Params params {};
		params.LFOIndex = LFOIndex;
		params.LFOPatchType = LFOPatchType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196530
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESynthLFOMode                                      LFOMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOMode");
		
		UModularSynthComponent_SetLFOMode_Params params {};
		params.LFOIndex = LFOIndex;
		params.LFOMode = LFOMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196460
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOGainMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GainMod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOGainMod(int32_t LFOIndex, float GainMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGainMod");
		
		UModularSynthComponent_SetLFOGainMod_Params params {};
		params.LFOIndex = LFOIndex;
		params.GainMod = GainMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196390
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gain                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOGain(int32_t LFOIndex, float Gain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGain");
		
		UModularSynthComponent_SetLFOGain_Params params {};
		params.LFOIndex = LFOIndex;
		params.Gain = Gain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051962C0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrequencyModHz                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod");
		
		UModularSynthComponent_SetLFOFrequencyMod_Params params {};
		params.LFOIndex = LFOIndex;
		params.FrequencyModHz = FrequencyModHz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051961F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetLFOFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LFOIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetLFOFrequency(int32_t LFOIndex, float FrequencyHz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequency");
		
		UModularSynthComponent_SetLFOFrequency_Params params {};
		params.LFOIndex = LFOIndex;
		params.FrequencyHz = FrequencyHz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196170
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetGainDb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              GainDb                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetGainDb(float GainDb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetGainDb");
		
		UModularSynthComponent_SetGainDb_Params params {};
		params.GainDb = GainDb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051960F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthFilterType                                   FilterType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterType");
		
		UModularSynthComponent_SetFilterType_Params params {};
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05196070
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterQMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FilterQ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterQMod(float FilterQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQMod");
		
		UModularSynthComponent_SetFilterQMod_Params params {};
		params.FilterQ = FilterQ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195FF0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterQ
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FilterQ                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterQ(float FilterQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQ");
		
		UModularSynthComponent_SetFilterQ_Params params {};
		params.FilterQ = FilterQ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195F70
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FilterFrequencyHz                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod");
		
		UModularSynthComponent_SetFilterFrequencyMod_Params params {};
		params.FilterFrequencyHz = FilterFrequencyHz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195EF0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FilterFrequencyHz                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequency");
		
		UModularSynthComponent_SetFilterFrequency_Params params {};
		params.FilterFrequencyHz = FilterFrequencyHz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195E70
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthFilterAlgorithm                              FilterAlgorithm                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm");
		
		UModularSynthComponent_SetFilterAlgorithm_Params params {};
		params.FilterAlgorithm = FilterAlgorithm;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195DE0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableUnison
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               EnableUnison                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableUnison");
		
		UModularSynthComponent_SetEnableUnison_Params params {};
		params.EnableUnison = EnableUnison;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195D50
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               RetriggerEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableRetrigger");
		
		UModularSynthComponent_SetEnableRetrigger_Params params {};
		params.RetriggerEnabled = RetriggerEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195CC0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnablePolyphony                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePolyphony");
		
		UModularSynthComponent_SetEnablePolyphony_Params params {};
		params.bEnablePolyphony = bEnablePolyphony;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195BF0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnablePatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPatchId                                    PatchId                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEnabled                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePatch");
		
		UModularSynthComponent_SetEnablePatch_Params params {};
		params.PatchId = PatchId;
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195B60
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetEnableLegato
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               LegatoEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableLegato");
		
		UModularSynthComponent_SetEnableLegato_Params params {};
		params.LegatoEnabled = LegatoEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195AE0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetDecayTime");
		
		UModularSynthComponent_SetDecayTime_Params params {};
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195A60
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusFrequency(float Frequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFrequency");
		
		UModularSynthComponent_SetChorusFrequency_Params params {};
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051959E0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusFeedback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusFeedback(float Feedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFeedback");
		
		UModularSynthComponent_SetChorusFeedback_Params params {};
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195950
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               EnableChorus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusEnabled");
		
		UModularSynthComponent_SetChorusEnabled_Params params {};
		params.EnableChorus = EnableChorus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051958D0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetChorusDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Depth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetChorusDepth(float Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusDepth");
		
		UModularSynthComponent_SetChorusDepth_Params params {};
		params.Depth = Depth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195850
	 * 		Name   -> Function Synthesis.ModularSynthComponent.SetAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetAttackTime");
		
		UModularSynthComponent_SetAttackTime_Params params {};
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195740
	 * 		Name   -> Function Synthesis.ModularSynthComponent.NoteOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::NoteOn(float Note, int32_t Velocity, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOn");
		
		UModularSynthComponent_NoteOn_Params params {};
		params.Note = Note;
		params.Velocity = Velocity;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05195630
	 * 		Name   -> Function Synthesis.ModularSynthComponent.NoteOff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllNotesOff                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKillAllNotes                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOff");
		
		UModularSynthComponent_NoteOff_Params params {};
		params.Note = Note;
		params.bAllNotesOff = bAllNotesOff;
		params.bKillAllNotes = bKillAllNotes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051954F0
	 * 		Name   -> Function Synthesis.ModularSynthComponent.CreatePatch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ESynth1PatchSource                                 PatchSource                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSynth1PatchCable>                   PatchCables                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableByDefault                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPatchId UModularSynthComponent::CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.CreatePatch");
		
		UModularSynthComponent_CreatePatch_Params params {};
		params.PatchSource = PatchSource;
		params.PatchCables = PatchCables;
		params.bEnableByDefault = bEnableByDefault;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModularSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModularSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C430
	 * 		Name   -> Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectBitCrusherSettings             InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings");
		
		USourceEffectBitCrusherPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectBitCrusherPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectBitCrusherPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C4E0
	 * 		Name   -> Function Synthesis.SourceEffectChorusPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectChorusSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSettings");
		
		USourceEffectChorusPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectChorusPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectChorusPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C590
	 * 		Name   -> Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectDynamicsProcessorSettings      InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings");
		
		USourceEffectDynamicsProcessorPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectDynamicsProcessorPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectDynamicsProcessorPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvelopeFollowerListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvelopeFollowerListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CDB0
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UEnvelopeFollowerListener*                   EnvelopeFollowerListener                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener");
		
		USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params params {};
		params.EnvelopeFollowerListener = EnvelopeFollowerListener;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C6F0
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectEnvelopeFollowerSettings       InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings");
		
		USourceEffectEnvelopeFollowerPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C330
	 * 		Name   -> Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UEnvelopeFollowerListener*                   EnvelopeFollowerListener                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener");
		
		USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params params {};
		params.EnvelopeFollowerListener = EnvelopeFollowerListener;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectEnvelopeFollowerPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectEnvelopeFollowerPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C640
	 * 		Name   -> Function Synthesis.SourceEffectEQPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectEQSettings                     InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEQPreset.SetSettings");
		
		USourceEffectEQPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectEQPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectEQPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C7A0
	 * 		Name   -> Function Synthesis.SourceEffectFilterPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectFilterSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFilterPreset.SetSettings");
		
		USourceEffectFilterPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectFilterPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectFilterPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C850
	 * 		Name   -> Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectFoldbackDistortionSettings     InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings");
		
		USourceEffectFoldbackDistortionPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectFoldbackDistortionPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectFoldbackDistortionPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C900
	 * 		Name   -> Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectMidSideSpreaderSettings        InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings");
		
		USourceEffectMidSideSpreaderPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectMidSideSpreaderPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectMidSideSpreaderPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C9B0
	 * 		Name   -> Function Synthesis.SourceEffectPannerPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectPannerSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPannerPreset.SetSettings");
		
		USourceEffectPannerPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectPannerPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectPannerPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CA60
	 * 		Name   -> Function Synthesis.SourceEffectPhaserPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectPhaserSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPhaserPreset.SetSettings");
		
		USourceEffectPhaserPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectPhaserPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectPhaserPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CB20
	 * 		Name   -> Function Synthesis.SourceEffectRingModulationPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectRingModulationSettings         InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectRingModulationPreset.SetSettings");
		
		USourceEffectRingModulationPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectRingModulationPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectRingModulationPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CBC0
	 * 		Name   -> Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectSimpleDelaySettings            InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings");
		
		USourceEffectSimpleDelayPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectSimpleDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectSimpleDelayPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CC70
	 * 		Name   -> Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectStereoDelaySettings            InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings");
		
		USourceEffectStereoDelayPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectStereoDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectStereoDelayPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C9B0
	 * 		Name   -> Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSourceEffectWaveShaperSettings             InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings");
		
		USourceEffectWaveShaperPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USourceEffectWaveShaperPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USourceEffectWaveShaperPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioImpulseResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioImpulseResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519CD10
	 * 		Name   -> Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectConvolutionReverbSettings      InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings");
		
		USubmixEffectConvolutionReverbPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519C3B0
	 * 		Name   -> Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioImpulseResponse*                       InImpulseResponse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse");
		
		USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params params {};
		params.InImpulseResponse = InImpulseResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectConvolutionReverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectConvolutionReverbPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A24B0
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectDelaySettings                  InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetSettings");
		
		USubmixEffectDelayPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A19F0
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime");
		
		USubmixEffectDelayPreset_SetInterpolationTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0BC0
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.SetDelay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectDelayPreset::SetDelay(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDelay");
		
		USubmixEffectDelayPreset_SetDelay_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FD70
	 * 		Name   -> Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds");
		
		USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectDelayPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2570
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectFilterSettings                 InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetSettings");
		
		USubmixEffectFilterPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A12E0
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESubmixFilterType                                  InType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterType");
		
		USubmixEffectFilterPreset_SetFilterType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1260
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InQ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod");
		
		USubmixEffectFilterPreset_SetFilterQMod_Params params {};
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A11E0
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InQ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterQ(float InQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ");
		
		USubmixEffectFilterPreset_SetFilterQ_Params params {};
		params.InQ = InQ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0D40
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFrequency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod");
		
		USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params params {};
		params.InFrequency = InFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0CC0
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFrequency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency");
		
		USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params params {};
		params.InFrequency = InFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0C40
	 * 		Name   -> Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESubmixFilterAlgorithm                             InAlgorithm                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm");
		
		USubmixEffectFilterPreset_SetFilterAlgorithm_Params params {};
		params.InAlgorithm = InAlgorithm;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectFilterPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectFilterPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2620
	 * 		Name   -> Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectFlexiverbSettings              InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings");
		
		USubmixEffectFlexiverbPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectFlexiverbPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectFlexiverbPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2A30
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTapDelayInfo                               TapInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetTap(int32_t TapId, const struct FTapDelayInfo& TapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetTap");
		
		USubmixEffectTapDelayPreset_SetTap_Params params {};
		params.TapId = TapId;
		params.TapInfo = TapInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A26E0
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSubmixEffectTapDelaySettings               InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings");
		
		USubmixEffectTapDelayPreset_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1A70
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime");
		
		USubmixEffectTapDelayPreset_SetInterpolationTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0410
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::RemoveTap(int32_t TapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap");
		
		USubmixEffectTapDelayPreset_RemoveTap_Params params {};
		params.TapId = TapId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FF30
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    TapIds                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32_t>* TapIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds");
		
		USubmixEffectTapDelayPreset_GetTapIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapIds != nullptr)
			*TapIds = params.TapIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FE50
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTapDelayInfo                               TapInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::GetTap(int32_t TapId, struct FTapDelayInfo* TapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTap");
		
		USubmixEffectTapDelayPreset_GetTap_Params params {};
		params.TapId = TapId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapInfo != nullptr)
			*TapInfo = params.TapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FD90
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds");
		
		USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FB40
	 * 		Name   -> Function Synthesis.SubmixEffectTapDelayPreset.AddTap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TapId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubmixEffectTapDelayPreset::AddTap(int32_t* TapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.AddTap");
		
		USubmixEffectTapDelayPreset_AddTap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TapId != nullptr)
			*TapId = params.TapId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubmixEffectTapDelayPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubmixEffectTapDelayPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2B10
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetValue(const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetValue");
		
		USynth2DSlider_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A28A0
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetStepSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetStepSize");
		
		USynth2DSlider_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A27A0
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetSliderHandleColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetSliderHandleColor");
		
		USynth2DSlider_SetSliderHandleColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1AF0
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetLocked");
		
		USynth2DSlider_SetLocked_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1960
	 * 		Name   -> Function Synthesis.Synth2DSlider.SetIndentHandle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynth2DSlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetIndentHandle");
		
		USynth2DSlider_SetIndentHandle_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FFE0
	 * 		Name   -> Function Synthesis.Synth2DSlider.GetValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D USynth2DSlider::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.GetValue");
		
		USynth2DSlider_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynth2DSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynth2DSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2920
	 * 		Name   -> Function Synthesis.GranularSynth.SetSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SustainGain                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetSustainGain(float SustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSustainGain");
		
		UGranularSynth_SetSustainGain_Params params {};
		params.SustainGain = SustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2820
	 * 		Name   -> Function Synthesis.GranularSynth.SetSoundWave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundWave*                                  InSoundWave                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSoundWave");
		
		UGranularSynth_SetSoundWave_Params params {};
		params.InSoundWave = InSoundWave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2420
	 * 		Name   -> Function Synthesis.GranularSynth.SetScrubMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bScrubMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetScrubMode(bool bScrubMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetScrubMode");
		
		UGranularSynth_SetScrubMode_Params params {};
		params.bScrubMode = bScrubMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A23A0
	 * 		Name   -> Function Synthesis.GranularSynth.SetReleaseTimeMsec
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ReleaseTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetReleaseTimeMsec");
		
		UGranularSynth_SetReleaseTimeMsec_Params params {};
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1D00
	 * 		Name   -> Function Synthesis.GranularSynth.SetPlayheadTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPositionSec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpTimeSec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGranularSynthSeekType                             SeekType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlayheadTime");
		
		UGranularSynth_SetPlayheadTime_Params params {};
		params.InPositionSec = InPositionSec;
		params.LerpTimeSec = LerpTimeSec;
		params.SeekType = SeekType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1C80
	 * 		Name   -> Function Synthesis.GranularSynth.SetPlaybackSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPlayheadRate                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlaybackSpeed");
		
		UGranularSynth_SetPlaybackSpeed_Params params {};
		params.InPlayheadRate = InPlayheadRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1820
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainVolume
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BaseVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   VolumeRange                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainVolume");
		
		UGranularSynth_SetGrainVolume_Params params {};
		params.BaseVolume = BaseVolume;
		params.VolumeRange = VolumeRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A18E0
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainsPerSecond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InGrainsPerSecond                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainsPerSecond");
		
		UGranularSynth_SetGrainsPerSecond_Params params {};
		params.InGrainsPerSecond = InGrainsPerSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A17A0
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainProbability
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InGrainProbability                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainProbability(float InGrainProbability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainProbability");
		
		UGranularSynth_SetGrainProbability_Params params {};
		params.InGrainProbability = InGrainProbability;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A16E0
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainPitch
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BasePitch                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PitchRange                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPitch");
		
		UGranularSynth_SetGrainPitch_Params params {};
		params.BasePitch = BasePitch;
		params.PitchRange = PitchRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1620
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainPan
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BasePan                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PanRange                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPan");
		
		UGranularSynth_SetGrainPan_Params params {};
		params.BasePan = BasePan;
		params.PanRange = PanRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A15A0
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainEnvelopeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGranularSynthEnvelopeType                         EnvelopeType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainEnvelopeType");
		
		UGranularSynth_SetGrainEnvelopeType_Params params {};
		params.EnvelopeType = EnvelopeType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A14E0
	 * 		Name   -> Function Synthesis.GranularSynth.SetGrainDuration
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              BaseDurationMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   DurationRange                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainDuration");
		
		UGranularSynth_SetGrainDuration_Params params {};
		params.BaseDurationMsec = BaseDurationMsec;
		params.DurationRange = DurationRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A08B0
	 * 		Name   -> Function Synthesis.GranularSynth.SetDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DecayTimeMsec                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetDecayTime(float DecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetDecayTime");
		
		UGranularSynth_SetDecayTime_Params params {};
		params.DecayTimeMsec = DecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A08B0
	 * 		Name   -> Function Synthesis.GranularSynth.SetAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              AttackTimeMsec                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::SetAttackTime(float AttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetAttackTime");
		
		UGranularSynth_SetAttackTime_Params params {};
		params.AttackTimeMsec = AttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A01A0
	 * 		Name   -> Function Synthesis.GranularSynth.NoteOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::NoteOn(float Note, int32_t Velocity, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOn");
		
		UGranularSynth_NoteOn_Params params {};
		params.Note = Note;
		params.Velocity = Velocity;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0050
	 * 		Name   -> Function Synthesis.GranularSynth.NoteOff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Note                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKill                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGranularSynth::NoteOff(float Note, bool bKill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOff");
		
		UGranularSynth_NoteOff_Params params {};
		params.Note = Note;
		params.bKill = bKill;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0020
	 * 		Name   -> Function Synthesis.GranularSynth.IsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGranularSynth::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.IsLoaded");
		
		UGranularSynth_IsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FE20
	 * 		Name   -> Function Synthesis.GranularSynth.GetSampleDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGranularSynth::GetSampleDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetSampleDuration");
		
		UGranularSynth_GetSampleDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FBD0
	 * 		Name   -> Function Synthesis.GranularSynth.GetCurrentPlayheadTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGranularSynth::GetCurrentPlayheadTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetCurrentPlayheadTime");
		
		UGranularSynth_GetCurrentPlayheadTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGranularSynth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGranularSynth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonoWaveTableSynthPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonoWaveTableSynthPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2B90
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition");
		
		USynthComponentMonoWaveTable_SetWaveTablePosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A29A0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InSustainPedalState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState");
		
		USynthComponentMonoWaveTable_SetSustainPedalState_Params params {};
		params.InSustainPedalState = InSustainPedalState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1F00
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESynthLFOType                                      InLfoType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoType(ESynthLFOType InLfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType");
		
		USynthComponentMonoWaveTable_SetPosLfoType_Params params {};
		params.InLfoType = InLfoType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1E80
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InLfoFrequency                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency");
		
		USynthComponentMonoWaveTable_SetPosLfoFrequency_Params params {};
		params.InLfoFrequency = InLfoFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1E00
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InLfoDepth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth");
		
		USynthComponentMonoWaveTable_SetPosLfoDepth_Params params {};
		params.InLfoDepth = InLfoDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2320
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params params {};
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A22A0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params params {};
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2210
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params params {};
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2190
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2110
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params params {};
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2080
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params params {};
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A2000
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1F80
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime");
		
		USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params params {};
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1C00
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewQ                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance");
		
		USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params params {};
		params.InNewQ = InNewQ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1B80
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InNewFrequency                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetLowPassFilterFrequency(float InNewFrequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency");
		
		USynthComponentMonoWaveTable_SetLowPassFilterFrequency_Params params {};
		params.InNewFrequency = InNewFrequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1460
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote");
		
		USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params params {};
		params.InMidiNote = InMidiNote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A13E0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FrequencyOffsetCents                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend");
		
		USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params params {};
		params.FrequencyOffsetCents = FrequencyOffsetCents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1360
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              FrequencyHz                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency");
		
		USynthComponentMonoWaveTable_SetFrequency_Params params {};
		params.FrequencyHz = FrequencyHz;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A10E0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params params {};
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1060
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params params {};
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A1160
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params params {};
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0FD0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params params {};
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0F50
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0EC0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params params {};
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0E40
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0DC0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime");
		
		USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params params {};
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0AC0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KeyframeIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue");
		
		USynthComponentMonoWaveTable_SetCurveValue_Params params {};
		params.TableIndex = TableIndex;
		params.KeyframeIndex = KeyframeIndex;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A09F0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InNewTangent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveTangent(int32_t TableIndex, float InNewTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent");
		
		USynthComponentMonoWaveTable_SetCurveTangent_Params params {};
		params.TableIndex = TableIndex;
		params.InNewTangent = InNewTangent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0930
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECurveInterpolationType                            InterpolationType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USynthComponentMonoWaveTable::SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32_t TableIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType");
		
		USynthComponentMonoWaveTable_SetCurveInterpolationType_Params params {};
		params.InterpolationType = InterpolationType;
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0830
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSustainGain                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params params {};
		params.InSustainGain = InSustainGain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A07B0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InReleaseTimeMsec                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params params {};
		params.InReleaseTimeMsec = InReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0720
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInInvert                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params params {};
		params.bInInvert = bInInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A06A0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0620
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDecayTimeMsec                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params params {};
		params.InDecayTimeMsec = InDecayTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0590
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInBiasInvert                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params params {};
		params.bInBiasInvert = bInBiasInvert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0510
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InDepth                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params params {};
		params.InDepth = InDepth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0490
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InAttackTimeMsec                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime");
		
		USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params params {};
		params.InAttackTimeMsec = InAttackTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0390
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::RefreshWaveTable(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable");
		
		USynthComponentMonoWaveTable_RefreshWaveTable_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0370
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USynthComponentMonoWaveTable::RefreshAllWaveTables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables");
		
		USynthComponentMonoWaveTable_RefreshAllWaveTables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A02B0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InVelocity                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOn");
		
		USynthComponentMonoWaveTable_NoteOn_Params params {};
		params.InMidiNote = InMidiNote;
		params.InVelocity = InVelocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A0120
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InMidiNote                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthComponentMonoWaveTable::NoteOff(float InMidiNote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.NoteOff");
		
		USynthComponentMonoWaveTable_NoteOff_Params params {};
		params.InMidiNote = InMidiNote;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FDF0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t USynthComponentMonoWaveTable::GetNumTableEntries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries");
		
		USynthComponentMonoWaveTable_GetNumTableEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FDB0
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USynthComponentMonoWaveTable::GetMaxTableIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex");
		
		USynthComponentMonoWaveTable_GetMaxTableIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FC90
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable");
		
		USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params params {};
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0519FC00
	 * 		Name   -> Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TableIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USynthComponentMonoWaveTable::GetCurveTangent(int32_t TableIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent");
		
		USynthComponentMonoWaveTable_GetCurveTangent_Params params {};
		params.TableIndex = TableIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthComponentMonoWaveTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthComponentMonoWaveTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3C30
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetSoundWave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundWave*                                  InSoundWave                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetSoundWave");
		
		USynthSamplePlayer_SetSoundWave_Params params {};
		params.InSoundWave = InSoundWave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3BB0
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InScrubTimeWidthSec                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth");
		
		USynthSamplePlayer_SetScrubTimeWidth_Params params {};
		params.InScrubTimeWidthSec = InScrubTimeWidthSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3B20
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetScrubMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bScrubMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubMode");
		
		USynthSamplePlayer_SetScrubMode_Params params {};
		params.bScrubMode = bScrubMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3A60
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SetPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InPitch                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetPitch");
		
		USynthSamplePlayer_SetPitch_Params params {};
		params.InPitch = InPitch;
		params.TimeSec = TimeSec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A38C0
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.SeekToTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeSec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESamplePlayerSeekType                              SeekType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWrap                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SeekToTime");
		
		USynthSamplePlayer_SeekToTime_Params params {};
		params.TimeSec = TimeSec;
		params.SeekType = SeekType;
		params.bWrap = bWrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3890
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.IsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USynthSamplePlayer::IsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.IsLoaded");
		
		USynthSamplePlayer_IsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3830
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetSampleDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USynthSamplePlayer::GetSampleDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetSampleDuration");
		
		USynthSamplePlayer_GetSampleDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3800
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime");
		
		USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A37D0
	 * 		Name   -> Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent");
		
		USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthSamplePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthSamplePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3D30
	 * 		Name   -> Function Synthesis.SynthKnob.SetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetValue");
		
		USynthKnob_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3CB0
	 * 		Name   -> Function Synthesis.SynthKnob.SetStepSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetStepSize");
		
		USynthKnob_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A39D0
	 * 		Name   -> Function Synthesis.SynthKnob.SetLocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USynthKnob::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetLocked");
		
		USynthKnob_SetLocked_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051A3860
	 * 		Name   -> Function Synthesis.SynthKnob.GetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USynthKnob::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.GetValue");
		
		USynthKnob_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynthKnob.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynthKnob::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}

}


