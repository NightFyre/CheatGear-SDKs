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
	 * Class ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorOfInterestBlueprintFunctionLibrary : public UObject
	{
	public:
		void STATIC_GetActorsOfInterestFromIds(class UObject* WorldContextObject, TArray<class UClass*> ActorOfInterestIds, TArray<class AActor*>* Actors);
		class AActor* STATIC_GetActorOfInterestFromId(class UObject* WorldContextObject, class UClass* ActorOfInterestId);
		static UClass* StaticClass();
	};

	/**
	 * Class ActorOfInterestFramework.ActorOfInterestComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UActorOfInterestComponent : public UActorComponent
	{
	public:
		class UClass*                                              ActorOfInterestId;                                       // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_4TTJ[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorOfInterestFramework.ActorOfInterestId
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorOfInterestId : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorOfInterestFramework.ActorOfInterestServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorOfInterestServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorOfInterestFramework.ActorOfInterestService
	 * Size -> 0x0100 (FullSize[0x04C8] - InheritedSize[0x03C8])
	 */
	class AActorOfInterestService : public AActor
	{
	public:
		unsigned char                                              UnknownData_197C[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class AActor*>                         ActorsOfInterest;                                        // 0x03D8(0x0050) ZeroConstructor
		struct FObjectMessagingDispatcher                          EventDispatcher;                                         // 0x0428(0x00A0)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
