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
	 * Class ShantyPuzzle.ShantyPuzzleCompletionComponent
	 * Size -> 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
	 */
	class UShantyPuzzleCompletionComponent : public UActorComponent
	{
	public:
		float                                                      CompletionTime;                                          // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HLUA[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLandmarkReactionKeyFrame>                   StartCompletionReaction;                                 // 0x00D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FLandmarkReactionKeyFrame>                   AbortCompletionReaction;                                 // 0x00E0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		TArray<struct FLandmarkReactionKeyFrame>                   PuzzleCompletedReaction;                                 // 0x00F0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		class ALandmarkReactionPlayer*                             ReactionPlayer;                                          // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayReactions_Net(EShantyPuzzleCompletionReactionState State);
		static UClass* StaticClass();
	};

	/**
	 * Class ShantyPuzzle.ShantyPuzzleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShantyPuzzleInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ShantyPuzzle.ShantyPuzzleComponent
	 * Size -> 0x0110 (FullSize[0x03F0] - InheritedSize[0x02E0])
	 */
	class UShantyPuzzleComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_UPLD[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RequiredShantyItemDesc;                                  // 0x02E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FShantyPuzzleInteractionZoneDefinition>      ShantyPuzzleInteractionZoneDefinitions;                  // 0x02F0(0x0010) Edit, ZeroConstructor, Protected
		bool                                                       TimeLimited;                                             // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		bool                                                       ShouldMoveEnsembleToActorPosition;                       // 0x0301(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		unsigned char                                              UnknownData_JXLM[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameTimeRange                                      ActiveTimeRange;                                         // 0x0308(0x0010) Edit, Protected
		TArray<class UShantyPuzzleInteractionZoneComponent*>       ShantyPuzzleInteractionZones;                            // 0x0318(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected
		class AEnsemble*                                           CurrentlyPlayingShantyPuzzleEnsemble;                    // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_KU9H[0xC0];                                  // 0x0330(0x00C0) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex);
		void OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int32_t InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
	 * Size -> 0x0020 (FullSize[0x0600] - InheritedSize[0x05E0])
	 */
	class UShantyPuzzleInteractionZoneComponent : public USphereComponent
	{
	public:
		unsigned char                                              UnknownData_69RE[0x20];                                  // 0x05E0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
