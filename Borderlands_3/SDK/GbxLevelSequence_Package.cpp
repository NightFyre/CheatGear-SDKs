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
	 * 		Name   -> PredefinedFunction UGbxLevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F20A0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxLevelSequenceActor::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Stop");
		
		AGbxLevelSequenceActor_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1FA0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxLevelSequenceActor::SetPlayRate(float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate");
		
		AGbxLevelSequenceActor_SetPlayRate_Params params {};
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1F20
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGbxLevelSequenceActor::PlayLooping(int32_t NumLoops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping");
		
		AGbxLevelSequenceActor_PlayLooping_Params params {};
		params.NumLoops = NumLoops;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1F00
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxLevelSequenceActor::PlayFromStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart");
		
		AGbxLevelSequenceActor_PlayFromStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1EE0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxLevelSequenceActor::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Play");
		
		AGbxLevelSequenceActor_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1EC0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxLevelSequenceActor::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.Pause");
		
		AGbxLevelSequenceActor_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1E80
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGbxLevelSequenceActor::OnRep_ReplicatedCutsceneSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip");
		
		AGbxLevelSequenceActor_OnRep_ReplicatedCutsceneSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1E60
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxLevelSequenceActor::OnLevelSequenceStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop");
		
		AGbxLevelSequenceActor_OnLevelSequenceStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1E40
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxLevelSequenceActor::OnLevelSequencePlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay");
		
		AGbxLevelSequenceActor_OnLevelSequencePlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1E20
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxLevelSequenceActor::OnLevelSequencePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause");
		
		AGbxLevelSequenceActor_OnLevelSequencePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1E00
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGbxLevelSequenceActor::OnLevelSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished");
		
		AGbxLevelSequenceActor_OnLevelSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1D20
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGbxLevelSequenceActor::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying");
		
		AGbxLevelSequenceActor_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1CF0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGbxLevelSequenceActor::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused");
		
		AGbxLevelSequenceActor_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1C90
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGbxLevelSequenceActor::IsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished");
		
		AGbxLevelSequenceActor_IsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1C70
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGbxLevelSequenceActor::GoToEndAndStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop");
		
		AGbxLevelSequenceActor_GoToEndAndStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1C40
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AGbxLevelSequenceActor::GetPlayRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate");
		
		AGbxLevelSequenceActor_GetPlayRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGbxLevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGbxLevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1EA0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGbxLevelSequencePlayer::OnStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted");
		
		UGbxLevelSequencePlayer_OnStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1CC0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGbxLevelSequencePlayer::IsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished");
		
		UGbxLevelSequencePlayer_IsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F19B0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class AGbxLevelSequenceActor*                      OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGbxLevelSequencePlayer* UGbxLevelSequencePlayer::STATIC_CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer");
		
		UGbxLevelSequencePlayer_CreateGbxLevelSequencePlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelSequence = LevelSequence;
		params.bPlay = bPlay;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxLevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F20C0
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxLevelSequenceActor*                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxLevelSequenceThrottleLibrary::STATIC_UnlimitSequenceActor(class AGbxLevelSequenceActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor");
		
		UGbxLevelSequenceThrottleLibrary_UnlimitSequenceActor_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F2020
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InGroup                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGbxLevelSequenceThrottleLibrary::STATIC_ShouldLimitSequenceGroup(const class FName& InGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup");
		
		UGbxLevelSequenceThrottleLibrary_ShouldLimitSequenceGroup_Params params {};
		params.InGroup = InGroup;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1D50
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGbxLevelSequenceActor*                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Group                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxLevelSequenceThrottleLibrary::STATIC_LimitSequenceActor(class AGbxLevelSequenceActor* Player, const class FName& Group)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor");
		
		UGbxLevelSequenceThrottleLibrary_LimitSequenceActor_Params params {};
		params.Player = Player;
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007F1940
	 * 		Name   -> Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Group                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxLevelSequenceThrottleLibrary::STATIC_ClearLimitGroup(const class FName& Group)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup");
		
		UGbxLevelSequenceThrottleLibrary_ClearLimitGroup_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxLevelSequenceThrottleLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxLevelSequenceThrottleLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxMovieSceneBindingOverrides.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxMovieSceneBindingOverrides::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxLevelSequence.GbxMovieSceneBindingOverrides");
		return ptr;
	}

}


