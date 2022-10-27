#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 */
	struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0010(0x0028)  (Parm)
		class ULevelSequencePlayer*                                ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetSequence
	 */
	struct ALevelSequenceActor_SetSequence_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LoadSequence;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetBinding
	 */
	struct ALevelSequenceActor_SetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingPtr                         Binding;                                                 // 0x0000(0x0010)  (Parm)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
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
		struct FMovieSceneObjectBindingPtr                         Binding;                                                 // 0x0000(0x0010)  (Parm)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.RemoveBinding
	 */
	struct ALevelSequenceActor_RemoveBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingPtr                         Binding;                                                 // 0x0000(0x0010)  (Parm)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.GetSequence
	 */
	struct ALevelSequenceActor_GetSequence_Params
	{
	public:
		bool                                                       Load;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LMCN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequence*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.AddBinding
	 */
	struct ALevelSequenceActor_AddBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingPtr                         Binding;                                                 // 0x0000(0x0010)  (Parm)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 */
	struct ULevelSequenceBurnIn_SetSettings_Params
	{
	public:
		class UObject*                                             InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 */
	struct ULevelSequenceBurnIn_GetSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
