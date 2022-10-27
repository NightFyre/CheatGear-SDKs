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
	 * Function LevelSequence.LevelSequenceActor.SetSequence
	 */
	struct ALevelSequenceActor_SetSequence_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 */
	struct ALevelSequenceActor_SetEventReceivers_Params
	{
	public:
		TArray<class AActor*>                                      AdditionalReceivers;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetBinding
	 */
	struct ALevelSequenceActor_SetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBindings
	 */
	struct ALevelSequenceActor_ResetBindings_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBinding
	 */
	struct ALevelSequenceActor_ResetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.RemoveBinding
	 */
	struct ALevelSequenceActor_RemoveBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.OnRequestStopTicking
	 */
	struct ALevelSequenceActor_OnRequestStopTicking_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.OnCancelStopTicking
	 */
	struct ALevelSequenceActor_OnCancelStopTicking_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.GetSequence
	 */
	struct ALevelSequenceActor_GetSequence_Params
	{
	public:
		bool                                                       bLoad;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitializePlayer;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KFHF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequence*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.AddBinding
	 */
	struct ALevelSequenceActor_AddBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 */
	struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0010(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class ALevelSequenceActor*                                 OutActor;                                                // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequencePlayer*                                ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 */
	struct ULevelSequenceBurnInOptions_SetBurnIn_Params
	{
	public:
		struct FSoftClassPath                                      InBurnInClass;                                           // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 */
	struct ULevelSequenceBurnIn_SetSettings_Params
	{
	public:
		class UObject*                                             InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 */
	struct ULevelSequenceBurnIn_GetSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
