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
	 * Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	 */
	struct UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params
	{
	public:
		TArray<struct FMediaCaptureDevice>                         OutDevices;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    Filter;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	 */
	struct UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params
	{
	public:
		TArray<struct FMediaCaptureDevice>                         OutDevices;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    Filter;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	 */
	struct UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params
	{
	public:
		TArray<struct FMediaCaptureDevice>                         OutDevices;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    Filter;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaComponent.GetMediaTexture
	 */
	struct UMediaComponent_GetMediaTexture_Params
	{
	public:
		class UMediaTexture*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaComponent.GetMediaPlayer
	 */
	struct UMediaComponent_GetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SupportsSeeking
	 */
	struct UMediaPlayer_SupportsSeeking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SupportsScrubbing
	 */
	struct UMediaPlayer_SupportsScrubbing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SupportsRate
	 */
	struct UMediaPlayer_SupportsRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Unthinned;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetViewRotation
	 */
	struct UMediaPlayer_SetViewRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       Absolute;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetViewField
	 */
	struct UMediaPlayer_SetViewField_Params
	{
	public:
		float                                                      Horizontal;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Vertical;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Absolute;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	 */
	struct UMediaPlayer_SetVideoTrackFrameRate_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FrameRate;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetTrackFormat
	 */
	struct UMediaPlayer_SetTrackFormat_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RL8R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetTimeDelay
	 */
	struct UMediaPlayer_SetTimeDelay_Params
	{
	public:
		struct FTimespan                                           TimeDelay;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetRate
	 */
	struct UMediaPlayer_SetRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetNativeVolume
	 */
	struct UMediaPlayer_SetNativeVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetMediaOptions
	 */
	struct UMediaPlayer_SetMediaOptions_Params
	{
	public:
		class UMediaSource*                                        Options;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetLooping
	 */
	struct UMediaPlayer_SetLooping_Params
	{
	public:
		bool                                                       Looping;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	 */
	struct UMediaPlayer_SetDesiredPlayerName_Params
	{
	public:
		class FName                                                PlayerName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SetBlockOnTime
	 */
	struct UMediaPlayer_SetBlockOnTime_Params
	{
	public:
		struct FTimespan                                           Time;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.SelectTrack
	 */
	struct UMediaPlayer_SelectTrack_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_00BT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Seek
	 */
	struct UMediaPlayer_Seek_Params
	{
	public:
		struct FTimespan                                           Time;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Rewind
	 */
	struct UMediaPlayer_Rewind_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Reopen
	 */
	struct UMediaPlayer_Reopen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Previous
	 */
	struct UMediaPlayer_Previous_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.PlayAndSeek
	 */
	struct UMediaPlayer_PlayAndSeek_Params
	{	};

	/**
	 * Function MediaAssets.MediaPlayer.Play
	 */
	struct UMediaPlayer_Play_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Pause
	 */
	struct UMediaPlayer_Pause_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenUrl
	 */
	struct UMediaPlayer_OpenUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	 */
	struct UMediaPlayer_OpenSourceWithOptions_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMediaPlayerOptions                                 Options;                                                 // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenSourceLatent
	 */
	struct UMediaPlayer_OpenSourceLatent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0008(0x0018)  (Parm)
		class UMediaSource*                                        MediaSource;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMediaPlayerOptions                                 Options;                                                 // 0x0028(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       bSuccess;                                                // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenSource
	 */
	struct UMediaPlayer_OpenSource_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	 */
	struct UMediaPlayer_OpenPlaylistIndex_Params
	{
	public:
		class UMediaPlaylist*                                      InPlaylist;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenPlaylist
	 */
	struct UMediaPlayer_OpenPlaylist_Params
	{
	public:
		class UMediaPlaylist*                                      InPlaylist;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.OpenFile
	 */
	struct UMediaPlayer_OpenFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Next
	 */
	struct UMediaPlayer_Next_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsReady
	 */
	struct UMediaPlayer_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsPreparing
	 */
	struct UMediaPlayer_IsPreparing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsPlaying
	 */
	struct UMediaPlayer_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsPaused
	 */
	struct UMediaPlayer_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsLooping
	 */
	struct UMediaPlayer_IsLooping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsConnecting
	 */
	struct UMediaPlayer_IsConnecting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsClosed
	 */
	struct UMediaPlayer_IsClosed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.IsBuffering
	 */
	struct UMediaPlayer_IsBuffering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.HasError
	 */
	struct UMediaPlayer_HasError_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetViewRotation
	 */
	struct UMediaPlayer_GetViewRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVideoTrackType
	 */
	struct UMediaPlayer_GetVideoTrackType_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	 */
	struct UMediaPlayer_GetVideoTrackFrameRates_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFloatRange                                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	 */
	struct UMediaPlayer_GetVideoTrackFrameRate_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	 */
	struct UMediaPlayer_GetVideoTrackDimensions_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntPoint                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	 */
	struct UMediaPlayer_GetVideoTrackAspectRatio_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	 */
	struct UMediaPlayer_GetVerticalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetUrl
	 */
	struct UMediaPlayer_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTrackLanguage
	 */
	struct UMediaPlayer_GetTrackLanguage_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1OT4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTrackFormat
	 */
	struct UMediaPlayer_GetTrackFormat_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06UF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTrackDisplayName
	 */
	struct UMediaPlayer_GetTrackDisplayName_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_50ZU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTimeStamp
	 */
	struct UMediaPlayer_GetTimeStamp_Params
	{
	public:
		class UMediaTimeStampInfo*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTimeDelay
	 */
	struct UMediaPlayer_GetTimeDelay_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetTime
	 */
	struct UMediaPlayer_GetTime_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetSupportedRates
	 */
	struct UMediaPlayer_GetSupportedRates_Params
	{
	public:
		TArray<struct FFloatRange>                                 OutRates;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       Unthinned;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetSelectedTrack
	 */
	struct UMediaPlayer_GetSelectedTrack_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetRate
	 */
	struct UMediaPlayer_GetRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetPlaylistIndex
	 */
	struct UMediaPlayer_GetPlaylistIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetPlaylist
	 */
	struct UMediaPlayer_GetPlaylist_Params
	{
	public:
		class UMediaPlaylist*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetPlayerName
	 */
	struct UMediaPlayer_GetPlayerName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetNumTracks
	 */
	struct UMediaPlayer_GetNumTracks_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EHCY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetNumTrackFormats
	 */
	struct UMediaPlayer_GetNumTrackFormats_Params
	{
	public:
		EMediaPlayerTrack                                          TrackType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26C3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TrackIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetMediaName
	 */
	struct UMediaPlayer_GetMediaName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	 */
	struct UMediaPlayer_GetHorizontalFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetDuration
	 */
	struct UMediaPlayer_GetDuration_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	 */
	struct UMediaPlayer_GetDesiredPlayerName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetAudioTrackType
	 */
	struct UMediaPlayer_GetAudioTrackType_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	 */
	struct UMediaPlayer_GetAudioTrackSampleRate_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	 */
	struct UMediaPlayer_GetAudioTrackChannels_Params
	{
	public:
		int32_t                                                    TrackIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FormatIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlayer.Close
	 */
	struct UMediaPlayer_Close_Params
	{	};

	/**
	 * Function MediaAssets.MediaPlayer.CanPlayUrl
	 */
	struct UMediaPlayer_CanPlayUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.CanPlaySource
	 */
	struct UMediaPlayer_CanPlaySource_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlayer.CanPause
	 */
	struct UMediaPlayer_CanPause_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Replace
	 */
	struct UMediaPlaylist_Replace_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D052[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        Replacement;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.RemoveAt
	 */
	struct UMediaPlaylist_RemoveAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Remove
	 */
	struct UMediaPlaylist_Remove_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Num
	 */
	struct UMediaPlaylist_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Insert
	 */
	struct UMediaPlaylist_Insert_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.GetRandom
	 */
	struct UMediaPlaylist_GetRandom_Params
	{
	public:
		int32_t                                                    OutIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PE3N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.GetPrevious
	 */
	struct UMediaPlaylist_GetPrevious_Params
	{
	public:
		int32_t                                                    InOutIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J17R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.GetNext
	 */
	struct UMediaPlaylist_GetNext_Params
	{
	public:
		int32_t                                                    InOutIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VDVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Get
	 */
	struct UMediaPlaylist_Get_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WR4R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMediaSource*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.AddUrl
	 */
	struct UMediaPlaylist_AddUrl_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.AddFile
	 */
	struct UMediaPlaylist_AddFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaPlaylist.Add
	 */
	struct UMediaPlaylist_Add_Params
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaSource.Validate
	 */
	struct UMediaSource_Validate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaSource.SetMediaOptionString
	 */
	struct UMediaSource_SetMediaOptionString_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaSource.SetMediaOptionFloat
	 */
	struct UMediaSource_SetMediaOptionFloat_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaSource.SetMediaOptionBool
	 */
	struct UMediaSource_SetMediaOptionBool_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MediaAssets.MediaSource.GetUrl
	 */
	struct UMediaSource_GetUrl_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.FileMediaSource.SetFilePath
	 */
	struct UFileMediaSource_SetFilePath_Params
	{
	public:
		class FString                                              path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.SetMediaPlayer
	 */
	struct UMediaTexture_SetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        NewMediaPlayer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.GetWidth
	 */
	struct UMediaTexture_GetWidth_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.GetTextureNumMips
	 */
	struct UMediaTexture_GetTextureNumMips_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.GetMediaPlayer
	 */
	struct UMediaTexture_GetMediaPlayer_Params
	{
	public:
		class UMediaPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.GetHeight
	 */
	struct UMediaTexture_GetHeight_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MediaAssets.MediaTexture.GetAspectRatio
	 */
	struct UMediaTexture_GetAspectRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
