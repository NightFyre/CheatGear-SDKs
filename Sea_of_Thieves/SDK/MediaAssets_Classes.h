#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MediaAssets.MediaBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		void STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		void STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UMediaComponent : public UActorComponent
	{
	public:
		class UMediaTexture*                                       MediaTexture;                                            // 0x00C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x00D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, Interp, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UMediaTexture* GetMediaTexture();
		class UMediaPlayer* GetMediaPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaTimeStampInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMediaTimeStampInfo : public UObject
	{
	public:
		struct FTimespan                                           Time;                                                    // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		unsigned char                                              UnknownData_HIML[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaPlayer
	 * Size -> 0x0150 (FullSize[0x0178] - InheritedSize[0x0028])
	 */
	class UMediaPlayer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnEndReached;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnMediaClosed;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnMediaOpened;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnMediaOpenFailed;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnPlaybackResumed;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnPlaybackSuspended;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnSeekCompleted;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnTracksChanged;                                         // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		struct FTimespan                                           CacheAhead;                                              // 0x00A8(0x0008) BlueprintVisible, ZeroConstructor
		struct FTimespan                                           CacheBehind;                                             // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor
		struct FTimespan                                           CacheBehindGame;                                         // 0x00B8(0x0008) BlueprintVisible, ZeroConstructor
		bool                                                       NativeAudioOut;                                          // 0x00C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		bool                                                       PlayOnOpen;                                              // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O1JC[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Shuffle : 1;                                             // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor
		unsigned char                                              Loop : 1;                                                // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected
		unsigned char                                              UnknownData_3P31[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlaylist*                                      Playlist;                                                // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		int32_t                                                    PlaylistIndex;                                           // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_124R[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           TimeDelay;                                               // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected
		class UMediaSource*                                        CachedMediaSource;                                       // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      HorizontalFieldOfView;                                   // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		float                                                      VerticalFieldOfView;                                     // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FRotator                                            ViewRotation;                                            // 0x00F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_B1SB[0x64];                                  // 0x00FC(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PlayerGuid;                                              // 0x0160(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O5TN[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SupportsSeeking();
		bool SupportsScrubbing();
		bool SupportsRate(float Rate, bool Unthinned);
		bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
		bool SetViewField(float Horizontal, float Vertical, bool Absolute);
		bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);
		bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);
		void SetTimeDelay(const struct FTimespan& TimeDelay);
		bool SetRate(float Rate);
		bool SetNativeVolume(float Volume);
		void SetMediaOptions(class UMediaSource* Options);
		bool SetLooping(bool Looping);
		void SetDesiredPlayerName(const class FName& PlayerName);
		void SetBlockOnTime(const struct FTimespan& Time);
		bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		bool Seek(const struct FTimespan& Time);
		bool Rewind();
		bool Reopen();
		bool Previous();
		void PlayAndSeek();
		bool Play();
		bool Pause();
		bool OpenUrl(const class FString& URL);
		bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
		void OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
		bool OpenSource(class UMediaSource* MediaSource);
		bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);
		bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
		bool OpenFile(const class FString& FilePath);
		bool Next();
		bool IsReady();
		bool IsPreparing();
		bool IsPlaying();
		bool IsPaused();
		bool IsLooping();
		bool IsConnecting();
		bool IsClosed();
		bool IsBuffering();
		bool HasError();
		struct FRotator GetViewRotation();
		class FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);
		struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);
		float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);
		struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);
		float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);
		float GetVerticalFieldOfView();
		class FString GetUrl();
		class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		class UMediaTimeStampInfo* GetTimeStamp();
		struct FTimespan GetTimeDelay();
		struct FTimespan GetTime();
		void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
		int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);
		float GetRate();
		int32_t GetPlaylistIndex();
		class UMediaPlaylist* GetPlaylist();
		class FName GetPlayerName();
		int32_t GetNumTracks(EMediaPlayerTrack TrackType);
		int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		class FText GetMediaName();
		float GetHorizontalFieldOfView();
		struct FTimespan GetDuration();
		class FName GetDesiredPlayerName();
		class FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);
		int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);
		int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);
		void Close();
		bool CanPlayUrl(const class FString& URL);
		bool CanPlaySource(class UMediaSource* MediaSource);
		bool CanPause();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaPlaylist
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMediaPlaylist : public UObject
	{
	public:
		TArray<class UMediaSource*>                                Items;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, Protected

	public:
		bool Replace(int32_t Index, class UMediaSource* Replacement);
		bool RemoveAt(int32_t Index);
		bool Remove(class UMediaSource* MediaSource);
		int32_t Num();
		void Insert(class UMediaSource* MediaSource, int32_t Index);
		class UMediaSource* GetRandom(int32_t* OutIndex);
		class UMediaSource* GetPrevious(int32_t* InOutIndex);
		class UMediaSource* GetNext(int32_t* InOutIndex);
		class UMediaSource* Get(int32_t Index);
		bool AddUrl(const class FString& URL);
		bool AddFile(const class FString& FilePath);
		bool Add(class UMediaSource* MediaSource);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaSource
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UMediaSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_2LU3[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		bool Validate();
		void SetMediaOptionString(const class FName& Key, const class FString& Value);
		void SetMediaOptionFloat(const class FName& Key, float Value);
		void SetMediaOptionBool(const class FName& Key, bool Value);
		class FString GetUrl();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.BaseMediaSource
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UBaseMediaSource : public UMediaSource
	{
	public:
		class FName                                                PlayerName;                                              // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.FileMediaSource
	 * Size -> 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
	 */
	class UFileMediaSource : public UBaseMediaSource
	{
	public:
		class FString                                              FilePath;                                                // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash
		bool                                                       PrecacheFile;                                            // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay
		unsigned char                                              UnknownData_KLK7[0x17];                                  // 0x0099(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetFilePath(const class FString& path);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.StreamMediaSource
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UStreamMediaSource : public UBaseMediaSource
	{
	public:
		class FString                                              StreamUrl;                                               // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.TimeSynchronizableMediaSource
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UTimeSynchronizableMediaSource : public UBaseMediaSource
	{
	public:
		bool                                                       bUseTimeSynchronization;                                 // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TGQX[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameDelay;                                              // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeDelay;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.PlatformMediaSource
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UPlatformMediaSource : public UMediaSource
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaTexture
	 * Size -> 0x00F0 (FullSize[0x0228] - InheritedSize[0x0138])
	 */
	class UMediaTexture : public UTexture
	{
	public:
		ETextureAddress                                            AddressX;                                                // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash
		ETextureAddress                                            AddressY;                                                // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       AutoClear;                                               // 0x013A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUUR[0x1];                                   // 0x013B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ClearColor;                                              // 0x013C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnableGenMips;                                           // 0x014C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		unsigned char                                              NumMips;                                                 // 0x014D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NewStyleOutput;                                          // 0x014E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		EMediaTextureOutputFormat                                  OutputFormat;                                            // 0x014F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentAspectRatio;                                      // 0x0150(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash
		EMediaTextureOrientation                                   CurrentOrientation;                                      // 0x0154(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash
		unsigned char                                              UnknownData_9YBG[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_OGCQ[0xC8];                                  // 0x0160(0x00C8) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
		int32_t GetWidth();
		int32_t GetTextureNumMips();
		class UMediaPlayer* GetMediaPlayer();
		int32_t GetHeight();
		float GetAspectRatio();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
