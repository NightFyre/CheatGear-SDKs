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
	 * ScriptStruct ActorOfInterestFramework.ActorOfInterestUnregisteredEvent
	 * Size -> 0x0010
	 */
	struct FActorOfInterestUnregisteredEvent
	{
	public:
		class AActor*                                              ActorOfInterest;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActorOfInterestId;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ActorOfInterestFramework.ActorOfInterestRegisteredEvent
	 * Size -> 0x0010
	 */
	struct FActorOfInterestRegisteredEvent
	{
	public:
		class AActor*                                              ActorOfInterest;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActorOfInterestId;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
