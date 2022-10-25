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
	 * Class FaceFX.FaceFXAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFaceFXAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXActor
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UFaceFXActor : public UFaceFXAsset
	{
	public:
		TArray<struct FFaceFXActorData>                            PlatformData;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		TArray<class UFaceFXAnim*>                                 Animations;                                              // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		bool                                                       bHasBonesFromMultipleSkeletons;                          // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ4D[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnim
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UFaceFXAnim : public UFaceFXAsset
	{
	public:
		TArray<struct FFaceFXAnimData>                             PlatformData;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate
		struct FFaceFXAnimId                                       ID;                                                      // 0x0038(0x0010) Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPrivate
		struct FFaceFXAudioAsset                                   Audio;                                                   // 0x0048(0x0018) Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnimationSection
	 * Size -> 0x0058 (FullSize[0x0138] - InheritedSize[0x00E0])
	 */
	class UFaceFXAnimationSection : public UMovieSceneSection
	{
	public:
		struct FFaceFXSkelMeshComponentId                          SkelMeshComponentId;                                     // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FFaceFXAnimId                                       AnimationId;                                             // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              Animation[0x28];                                         // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FaceFX.FaceFXAnimationSection.Animation
		float                                                      StartOffset;                                             // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndOffset;                                               // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bIsAnimationDurationLoaded : 1;                          // 0x0130(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2A47[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationDuration;                                       // 0x0134(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnimationTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAnimSet
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFaceFXAnimSet : public UDataAsset
	{
	public:
		struct FGbxFaceFXAnimSetData                               FaceFXAnimSetData;                                       // 0x0030(0x0010) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXAudioComponent
	 * Size -> 0x0028 (FullSize[0x01A0] - InheritedSize[0x0178])
	 */
	class UFaceFXAudioComponent : public UActorComponent
	{
	public:
		TWeakObjectPtr<class UWwiseAudioComponent>                 WwiseAudioComponent;                                     // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JZ0A[0x20];                                  // 0x0180(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXCharacter
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UFaceFXCharacter : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z76P[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaceFXActor*                                        FaceFXActor;                                             // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFaceFXAudioComponent*                               AudioComponent;                                          // 0x0098(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AEH9[0x98];                                  // 0x00A0(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaceFXAnim*                                         CurrentAnim;                                             // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9OUC[0x30];                                  // 0x0140(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFaceFXAnimSet*                                      CurrentAnimSet;                                          // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVEA[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXComponent
	 * Size -> 0x0040 (FullSize[0x01B8] - InheritedSize[0x0178])
	 */
	class UFaceFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPlaybackAudioStart;                                    // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackStopped;                                       // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FFaceFXEntry>                                Entries;                                                 // 0x0198(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VQ3J[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopAll();
		bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UFaceFXAudioComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, class UObject* Caller);
		bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool PlayById(const class FName& Group, const class FName& AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
		bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		void OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId);
		void OnCharacterAudioStart(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UFaceFXAudioComponent* AudioComponentStartedOn);
		bool JumpToById(float Position, bool Pause, const class FName& Group, const class FName& AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPlayingAnimation(const struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
		float GetFaceFXBlendWeight(class USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime);
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXMatineeControl
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UFaceFXMatineeControl : public UInterpTrack
	{
	public:
		TArray<struct FFaceFXTrackKey>                             Keys;                                                    // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXMatineeControlInst
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UFaceFXMatineeControlInst : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0L9[0x54];                                  // 0x002C(0x0054) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFaceFXSettings : public UObject
	{
	public:
		TMap<class FString, struct FFaceFXLocalizationData>        FaceFXLocalizationEquivalents;                           // 0x0028(0x0050) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FaceFX.FaceFXEditorSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UFaceFXEditorSettings : public UObject
	{
	public:
		TMap<class FString, struct FFaceFXDLCPathSettings>         FaceFXDLCSettings;                                       // 0x0028(0x0050) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
