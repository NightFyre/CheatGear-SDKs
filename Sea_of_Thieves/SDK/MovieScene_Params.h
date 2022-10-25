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
	 * Function MovieScene.MovieSceneSequencePlayer.Stop
	 */
	struct UMovieSceneSequencePlayer_Stop_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
	 */
	struct UMovieSceneSequencePlayer_StartPlayingNextTick_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	 */
	struct UMovieSceneSequencePlayer_SetPlayRate_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	 */
	struct UMovieSceneSequencePlayer_SetPlaybackRange_Params
	{
	public:
		float                                                      NewStartTime;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewEndTime;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	 */
	struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
	{
	public:
		float                                                      NewPlaybackPosition;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.SetOverridePlaybackSettings
	 */
	struct UMovieSceneSequencePlayer_SetOverridePlaybackSettings_Params
	{
	public:
		struct FMovieSceneSequencePlaybackSettings                 InSettings;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	 */
	struct UMovieSceneSequencePlayer_PlayReverse_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	 */
	struct UMovieSceneSequencePlayer_PlayLooping_Params
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Play
	 */
	struct UMovieSceneSequencePlayer_Play_Params
	{
	public:
		class ACharacter*                                          OptionalInteractingCharacter;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.Pause
	 */
	struct UMovieSceneSequencePlayer_Pause_Params
	{	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	 */
	struct UMovieSceneSequencePlayer_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	 */
	struct UMovieSceneSequencePlayer_GetPlayRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	 */
	struct UMovieSceneSequencePlayer_GetPlaybackStart_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	 */
	struct UMovieSceneSequencePlayer_GetPlaybackPosition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	 */
	struct UMovieSceneSequencePlayer_GetPlaybackEnd_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.GetLength
	 */
	struct UMovieSceneSequencePlayer_GetLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	 */
	struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
