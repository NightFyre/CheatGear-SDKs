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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
	 * Size -> 0x00A0
	 */
	struct FLevelSequenceObjectReferenceMap
	{
	public:
		unsigned char                                              UnknownData_PCAD[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceObject
	 * Size -> 0x0038
	 */
	struct FLevelSequenceObject
	{
	public:
		TLazyObjectPtr<class UObject>                              ObjectOrOwner;                                           // 0x0000(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_8351[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentName;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		TWeakObjectPtr<class UObject>                              CachedComponent;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
	 * Size -> 0x0008
	 */
	struct FLevelSequenceSnapshotSettings
	{
	public:
		unsigned char                                              ZeroPadAmount;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LEAP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrameRate;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
	 * Size -> 0x0090
	 */
	struct FLevelSequencePlayerSnapshot
	{
	public:
		class FText                                                MasterName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst
		unsigned char                                              UnknownData_OD5K[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      MasterTime;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q31G[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CurrentShotName;                                         // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, EditConst
		unsigned char                                              UnknownData_HTIR[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      CurrentShotLocalTime;                                    // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0WE3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraComponent*                                    CameraComponent;                                         // 0x0080(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLevelSequenceSnapshotSettings                      Settings;                                                // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, EditConst
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceObjectReference
	 * Size -> 0x0020
	 */
	struct FLevelSequenceObjectReference
	{
	public:
		unsigned char                                              UnknownData_B723[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequencePlaybackSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FLevelSequencePlaybackSettings : public FMovieSceneSequencePlaybackSettings
	{	};

	/**
	 * ScriptStruct LevelSequence.BoundActorProxy
	 * Size -> 0x0001
	 */
	struct FBoundActorProxy
	{
	public:
		unsigned char                                              UnknownData_I5BD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
