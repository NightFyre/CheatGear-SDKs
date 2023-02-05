#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * ScriptStruct DungeonCrawlerMessageRuntime.BindMsgNodeArray
	 * Size -> 0x0010
	 */
	struct FBindMsgNodeArray
	{
	public:
		TArray<class UBindMsgNode*>                                BindMsgNodeArray;                                        // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawlerMessageRuntime.MsgBase
	 * Size -> 0x0018
	 */
	struct FMsgBase
	{
	public:
		unsigned char                                              UnknownData_FNJO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMsgBaseNode*                                        ReplyMsgDelegateBlueprint;                               // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
