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
	 * Function GbxLevelSequence.GbxLevelSequenceActor.Stop
	 */
	struct AGbxLevelSequenceActor_Stop_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate
	 */
	struct AGbxLevelSequenceActor_SetPlayRate_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping
	 */
	struct AGbxLevelSequenceActor_PlayLooping_Params
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart
	 */
	struct AGbxLevelSequenceActor_PlayFromStart_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.Play
	 */
	struct AGbxLevelSequenceActor_Play_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.Pause
	 */
	struct AGbxLevelSequenceActor_Pause_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip
	 */
	struct AGbxLevelSequenceActor_OnRep_ReplicatedCutsceneSkip_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop
	 */
	struct AGbxLevelSequenceActor_OnLevelSequenceStop_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay
	 */
	struct AGbxLevelSequenceActor_OnLevelSequencePlay_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause
	 */
	struct AGbxLevelSequenceActor_OnLevelSequencePause_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished
	 */
	struct AGbxLevelSequenceActor_OnLevelSequenceFinished_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying
	 */
	struct AGbxLevelSequenceActor_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused
	 */
	struct AGbxLevelSequenceActor_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished
	 */
	struct AGbxLevelSequenceActor_IsFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop
	 */
	struct AGbxLevelSequenceActor_GoToEndAndStop_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate
	 */
	struct AGbxLevelSequenceActor_GetPlayRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted
	 */
	struct UGbxLevelSequencePlayer_OnStarted_Params
	{	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished
	 */
	struct UGbxLevelSequencePlayer_IsFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer
	 */
	struct UGbxLevelSequencePlayer_CreateGbxLevelSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlay;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DWDV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0018(0x0048)  (Parm, NativeAccessSpecifierPublic)
		class AGbxLevelSequenceActor*                              OutActor;                                                // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxLevelSequencePlayer*                             ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor
	 */
	struct UGbxLevelSequenceThrottleLibrary_UnlimitSequenceActor_Params
	{
	public:
		class AGbxLevelSequenceActor*                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup
	 */
	struct UGbxLevelSequenceThrottleLibrary_ShouldLimitSequenceGroup_Params
	{
	public:
		class FName                                                InGroup;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor
	 */
	struct UGbxLevelSequenceThrottleLibrary_LimitSequenceActor_Params
	{
	public:
		class AGbxLevelSequenceActor*                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Group;                                                   // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup
	 */
	struct UGbxLevelSequenceThrottleLibrary_ClearLimitGroup_Params
	{
	public:
		class FName                                                Group;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
