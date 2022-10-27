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
	 * Class ActorSequence.ActorSequence
	 * Size -> 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
	 */
	class UActorSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FActorSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x02B0(0x0020)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequenceComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UActorSequenceComponent : public UActorComponent
	{
	public:
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x00C8(0x0028) Edit, Protected
		class UActorSequence*                                      Sequence;                                                // 0x00F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash
		class UActorSequencePlayer*                                SequencePlayer;                                          // 0x00F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		bool                                                       bAutoPlay;                                               // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_U6IY[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequencePlayer
	 * Size -> 0x0000 (FullSize[0x0608] - InheritedSize[0x0608])
	 */
	class UActorSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
