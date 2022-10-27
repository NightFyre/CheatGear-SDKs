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
	 * ScriptStruct Retraction.RetractorOrientationAdjustmentFlags
	 * Size -> 0x0003
	 */
	struct FRetractorOrientationAdjustmentFlags
	{
	public:
		bool                                                       AdjustPitch;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AdjustRoll;                                              // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AdjustYaw;                                               // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Retraction.EventAttachedRetractableToItemProxy
	 * Size -> 0x0008
	 */
	struct FEventAttachedRetractableToItemProxy
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
