#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BTS_MediaPlayerActor.BTS_MediaPlayerActor_C
	 * Size -> 0x0158 (FullSize[0x0648] - InheritedSize[0x04F0])
	 */
	class ABTS_MediaPlayerActor_C : public ABehindTheScenesMediaPlayerActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) Transient, DuplicateTransient
		class UMediaSoundComponent*                                MediaSound;                                              // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ProgressBar;                                             // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Background;                                              // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PlaybackWindow;                                          // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CameraLocation;                                          // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlaybackWindowScene;                                     // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             powerUp_Scale_96994FF54D6A64D7FC64E785F92BC944;          // 0x0530(0x000C) IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      powerUp_backgroundGlow_96994FF54D6A64D7FC64E785F92BC944; // 0x053C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      powerUp_FadeIn_96994FF54D6A64D7FC64E785F92BC944;         // 0x0540(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         powerUp__Direction_96994FF54D6A64D7FC64E785F92BC944;     // 0x0544(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TPMY[0x3];                                   // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  powerUp;                                                 // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      timer_PlaySlide_Progress_757F9F1C4B95DABFCCED7C857462C731; // 0x0550(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         timer_PlaySlide__Direction_757F9F1C4B95DABFCCED7C857462C731; // 0x0554(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K9XY[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  timer_PlaySlide;                                         // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         videoPlaybackProgressBarUpdate__Direction_A82B2407463563DBA0FC448EF6FC40C7; // 0x0560(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P80P[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  videoPlaybackProgressBarUpdate;                          // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TransitionToNextSlide_blend_B51AA176461F6CFE85594F940FF016FC; // 0x0570(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TransitionToNextSlide__Direction_B51AA176461F6CFE85594F940FF016FC; // 0x0574(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FJRY[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TransitionToNextSlide;                                   // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            slideshowMatierial;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    slideActiveIndex;                                        // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    slideBIndex;                                             // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            videoMaterial;                                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehindTheScenesMediaContainer*                      activeMediaContainer;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             offsetFromCamera;                                        // 0x05A0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Scale;                                                   // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotationOffset;                                          // 0x05B0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W2SH[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              activeSlideShowMedia[0x10];                              // 0x05C0(0x0010) UNKNOWN PROPERTY: ArrayProperty BTS_MediaPlayerActor.BTS_MediaPlayerActor_C.activeSlideShowMedia
		class UMediaPlayer*                                        currentVideoMediaPlayer;                                 // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMediaPaused;                                           // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FOET[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SeekForwardIncrement;                                    // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SeekBackwardIncrement;                                   // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      slideShowBlendValue;                                     // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             originalScale;                                           // 0x05E8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3OGK[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            progressBarMaterial;                                     // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      seekOffset;                                              // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMediaSeeking;                                          // 0x0604(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ORLK[0x3];                                   // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  loadedSlideShowTextures;                                 // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    slideAIndex;                                             // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    adjacentSlideCurrentDepth;                               // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    adjacentSlideMaxDepth;                                   // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    maxNumLoadedSlides;                                      // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    requestedSlideIndex;                                     // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5MOH[0x4];                                   // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            backgroundMatieral;                                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      CurrentVidLanguageTracks;                                // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void slideShow_setShowSlideTextures(bool Visible);
		void slideShow_SetLoadingSpinnerVisibility(bool IsVisible);
		int32_t getWrappedIndex(int32_t Index, int32_t arrayLength);
		void slideShow_HandleLoadedSlide(class UObject* Object);
		void getItemWrapped(int32_t Index);
		bool IsAssetLoaded();
		void video_seekComplete();
		void slideShow_IncrementActiveSlide(int32_t* activeSlideIndex);
		void SetProgressBarProgress(float Progress, int32_t CurrentFrame, int32_t NumberOfFrames);
		void slideShow_SetSlideA(int32_t Index);
		void slideShow_SetSlideB(int32_t Index);
		void video_SeekForward();
		void video_SeekBack();
		void video_applyPendingSeek();
		void slideShow_GetTextureMaterialParams(class UTexture2D* Texture2D, struct FLinearColor* LinearColor);
		void UserConstructionScript();
		void timer_PlaySlide__FinishedFunc();
		void timer_PlaySlide__UpdateFunc();
		void videoPlaybackProgressBarUpdate__FinishedFunc();
		void videoPlaybackProgressBarUpdate__UpdateFunc();
		void videoPlaybackProgressBarUpdate__Restarted__EventFunc();
		void TransitionToNextSlide__FinishedFunc();
		void TransitionToNextSlide__UpdateFunc();
		void powerUp__FinishedFunc();
		void powerUp__UpdateFunc();
		void powerUp__showProgressBar__EventFunc();
		void OnLoaded_6DDD94D74468A1C216FF6D94153E88FE(class UObject* Loaded);
		void OnLoaded_DA904FD24F2D4211A168D5A4EC5B640D(class UObject* Loaded);
		void OnLoaded_F066C206415E813533E292AEFC61AEDE(class UObject* Loaded);
		void OnLoaded_93832F504C7DE28ABB9EDA930136527A(class UObject* Loaded);
		void BehindTheScenesContentSelected(class UBehindTheScenesMediaContainer* MediaContainer);
		void BehindTheScenesMenuOpened();
		void BehindTheScenesMenuClosed();
		void BehindTheScenesMenuPlayPauseMovie();
		void BehindTheScenesMenuFastForwardMovie();
		void BehindTheScenesMenuRewindMovie();
		void slideShow_PausePressed();
		void slideShow_SkipBackPressed();
		void slideShow_SkipForwardPressed();
		void slideShow_PlayTransition();
		void slideShow_PlayPressed();
		void showplaybackWindow();
		void slideShow_playSlide();
		void loadMedia();
		void ReceiveBeginPlay();
		void LoadAdjacentTextures();
		void loadNextTexture();
		void ce_slideshow_TransitionToNextSlide();
		void ce_slideshow_transitionToPreviousSlide();
		void EndOfVideoReached();
		void slideShow_playSlideFromStart();
		void TracksChanged();
		void mediaRestart();
		void MediaClosed();
		void ExecuteUbergraph_BTS_MediaPlayerActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
