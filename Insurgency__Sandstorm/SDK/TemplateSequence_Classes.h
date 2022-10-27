#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class TemplateSequence.TemplateSequence
	 * Size -> 0x00A8 (FullSize[0x03F0] - InheritedSize[0x0348])
	 */
	class UTemplateSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoundActorClass[0x28];                                   // 0x0350(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BoundPreviewActor[0x28];                                 // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, class FName>                            BoundActorComponents;                                    // 0x03A0(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequence
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	class UCameraAnimationSequence : public UTemplateSequence
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceActor
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ATemplateSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_TNHW[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0228(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I1A[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTemplateSequencePlayer*                             SequencePlayer;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TemplateSequence;                                        // 0x0248(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTemplateSequenceBindingOverrideData                BindingOverride;                                         // 0x0260(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G87R[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSequence(class UTemplateSequence* InSequence);
		void SetBinding(class AActor* Actor);
		class UTemplateSequence* LoadSequence();
		class UTemplateSequencePlayer* GetSequencePlayer();
		class UTemplateSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePlayer
	 * Size -> 0x0008 (FullSize[0x0890] - InheritedSize[0x0888])
	 */
	class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_151H[0x8];                                   // 0x0888(0x0008) MISSED OFFSET (PADDING)

	public:
		class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSection
	 * Size -> 0x0000 (FullSize[0x0158] - InheritedSize[0x0158])
	 */
	class UTemplateSequenceSection : public UMovieSceneSubSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceTrack
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UTemplateSequenceTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
