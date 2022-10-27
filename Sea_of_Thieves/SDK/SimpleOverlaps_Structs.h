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
	 * ScriptStruct SimpleOverlaps.SimpleOverlapInfo
	 * Size -> 0x0010
	 */
	struct FSimpleOverlapInfo
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SimpleOverlaps.SimpleOverlapEnd
	 * Size -> 0x0010
	 */
	struct FSimpleOverlapEnd
	{
	public:
		struct FSimpleOverlapInfo                                  OverlapInfo;                                             // 0x0000(0x0010) ContainsInstancedReference
	};

	/**
	 * ScriptStruct SimpleOverlaps.SimpleOverlapBegin
	 * Size -> 0x0010
	 */
	struct FSimpleOverlapBegin
	{
	public:
		struct FSimpleOverlapInfo                                  OverlapInfo;                                             // 0x0000(0x0010) ContainsInstancedReference
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
