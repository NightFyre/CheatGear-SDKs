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
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-setShowSlideTextures
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_setShowSlideTextures_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q05[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetLoadingSpinnerVisibility
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_SetLoadingSpinnerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCBD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getWrappedIndex
	 */
	struct ABTS_MediaPlayerActor_C_getWrappedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    arrayLength;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-HandleLoadedSlide
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_HandleLoadedSlide_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.getItemWrapped
	 */
	struct ABTS_MediaPlayerActor_C_getItemWrapped_Params
	{
	public:
		unsigned char                                              UnknownData_0E10[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_84MH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_5Z8D[0x2C];                                  // 0x0014(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.IsAssetLoaded
	 */
	struct ABTS_MediaPlayerActor_C_IsAssetLoaded_Params
	{
	public:
		unsigned char                                              UnknownData_FUTJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QNLQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-seekComplete
	 */
	struct ABTS_MediaPlayerActor_C_video_seekComplete_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-IncrementActiveSlide
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_IncrementActiveSlide_Params
	{
	public:
		int32_t                                                    activeSlideIndex;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.SetProgressBarProgress
	 */
	struct ABTS_MediaPlayerActor_C_SetProgressBarProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentFrame;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberOfFrames;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideA
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_SetSlideA_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRZF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SetSlideB
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_SetSlideB_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y46W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekForward
	 */
	struct ABTS_MediaPlayerActor_C_video_SeekForward_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-SeekBack
	 */
	struct ABTS_MediaPlayerActor_C_video_SeekBack_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.video-applyPendingSeek
	 */
	struct ABTS_MediaPlayerActor_C_video_applyPendingSeek_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-GetTextureMaterialParams
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_GetTextureMaterialParams_Params
	{
	public:
		class UTexture2D*                                          Texture2D;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        LinearColor;                                             // 0x0008(0x0010)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.UserConstructionScript
	 */
	struct ABTS_MediaPlayerActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__FinishedFunc
	 */
	struct ABTS_MediaPlayerActor_C_timer_PlaySlide__FinishedFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.timer-PlaySlide__UpdateFunc
	 */
	struct ABTS_MediaPlayerActor_C_timer_PlaySlide__UpdateFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__FinishedFunc
	 */
	struct ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__FinishedFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__UpdateFunc
	 */
	struct ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__UpdateFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.videoPlaybackProgressBarUpdate__Restarted__EventFunc
	 */
	struct ABTS_MediaPlayerActor_C_videoPlaybackProgressBarUpdate__Restarted__EventFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__FinishedFunc
	 */
	struct ABTS_MediaPlayerActor_C_TransitionToNextSlide__FinishedFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TransitionToNextSlide__UpdateFunc
	 */
	struct ABTS_MediaPlayerActor_C_TransitionToNextSlide__UpdateFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__FinishedFunc
	 */
	struct ABTS_MediaPlayerActor_C_powerUp__FinishedFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__UpdateFunc
	 */
	struct ABTS_MediaPlayerActor_C_powerUp__UpdateFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.powerUp__showProgressBar__EventFunc
	 */
	struct ABTS_MediaPlayerActor_C_powerUp__showProgressBar__EventFunc_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_6DDD94D74468A1C216FF6D94153E88FE
	 */
	struct ABTS_MediaPlayerActor_C_OnLoaded_6DDD94D74468A1C216FF6D94153E88FE_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D
	 */
	struct ABTS_MediaPlayerActor_C_OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_F066C206415E813533E292AEFC61AEDE
	 */
	struct ABTS_MediaPlayerActor_C_OnLoaded_F066C206415E813533E292AEFC61AEDE_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.OnLoaded_93832F504C7DE28ABB9EDA930136527A
	 */
	struct ABTS_MediaPlayerActor_C_OnLoaded_93832F504C7DE28ABB9EDA930136527A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesContentSelected
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesContentSelected_Params
	{
	public:
		class UBehindTheScenesMediaContainer*                      MediaContainer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuOpened
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesMenuOpened_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuClosed
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesMenuClosed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuPlayPauseMovie
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesMenuPlayPauseMovie_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuFastForwardMovie
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesMenuFastForwardMovie_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.BehindTheScenesMenuRewindMovie
	 */
	struct ABTS_MediaPlayerActor_C_BehindTheScenesMenuRewindMovie_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PausePressed
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_PausePressed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipBackPressed
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_SkipBackPressed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-SkipForwardPressed
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_SkipForwardPressed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayTransition
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_PlayTransition_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-PlayPressed
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_PlayPressed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.showplaybackWindow
	 */
	struct ABTS_MediaPlayerActor_C_showplaybackWindow_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlide
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_playSlide_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadMedia
	 */
	struct ABTS_MediaPlayerActor_C_loadMedia_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ReceiveBeginPlay
	 */
	struct ABTS_MediaPlayerActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.LoadAdjacentTextures
	 */
	struct ABTS_MediaPlayerActor_C_LoadAdjacentTextures_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.loadNextTexture
	 */
	struct ABTS_MediaPlayerActor_C_loadNextTexture_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-TransitionToNextSlide
	 */
	struct ABTS_MediaPlayerActor_C_ce_slideshow_TransitionToNextSlide_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ce-slideshow-transitionToPreviousSlide
	 */
	struct ABTS_MediaPlayerActor_C_ce_slideshow_transitionToPreviousSlide_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.EndOfVideoReached
	 */
	struct ABTS_MediaPlayerActor_C_EndOfVideoReached_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.slideShow-playSlideFromStart
	 */
	struct ABTS_MediaPlayerActor_C_slideShow_playSlideFromStart_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.TracksChanged
	 */
	struct ABTS_MediaPlayerActor_C_TracksChanged_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.mediaRestart
	 */
	struct ABTS_MediaPlayerActor_C_mediaRestart_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.MediaClosed
	 */
	struct ABTS_MediaPlayerActor_C_MediaClosed_Params
	{	};

	/**
	 * Function BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.ExecuteUbergraph_BTS_MediaPlayerActor
	 */
	struct ABTS_MediaPlayerActor_C_ExecuteUbergraph_BTS_MediaPlayerActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8HMW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
