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
	 * ScriptStruct AthenaSocketLookup.SocketPathNode
	 * Size -> 0x0008
	 */
	struct FSocketPathNode
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaSocketLookup.SocketPath
	 * Size -> 0x0018
	 */
	struct FSocketPath
	{
	public:
		TArray<struct FSocketPathNode>                             Nodes;                                                   // 0x0000(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_3E9P[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaSocketLookup.SocketId
	 * Size -> 0x0020
	 */
	struct FSocketId
	{
	public:
		struct FSocketPath                                         path;                                                    // 0x0000(0x0018) Edit, BlueprintVisible
		class FName                                                Name;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaSocketLookup.SocketLookupCache
	 * Size -> 0x0050
	 */
	struct FSocketLookupCache
	{
	public:
		unsigned char                                              UnknownData_9JUQ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
