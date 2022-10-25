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
	 * ScriptStruct RemoteActorDestruction.DestroyActorData
	 * Size -> 0x0004
	 */
	struct FDestroyActorData
	{
	public:
		int32_t                                                    ActorNetID;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassData
	 * Size -> 0x0010
	 */
	struct FDestroyAllExistingActorsByClassData
	{
	public:
		TArray<class FString>                                      ActorClassNames;                                         // 0x0000(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
