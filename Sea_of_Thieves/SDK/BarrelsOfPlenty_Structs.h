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
	 * ScriptStruct BarrelsOfPlenty.BarrelsOfPlentyDebugLocationEntry
	 * Size -> 0x0010
	 */
	struct FBarrelsOfPlentyDebugLocationEntry
	{
	public:
		struct FVector                                             WorldSpacePosition;                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SinkTime;                                                // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
