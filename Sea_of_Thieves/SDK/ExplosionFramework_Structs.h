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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ExplosionFramework.EExplosionReceiverCurveType
	 */
	enum class EExplosionReceiverCurveType : uint8_t
	{
		None   = 0,
		Other  = 1,
		Player = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ExplosionFramework.EventAffectedByExplosion
	 * Size -> 0x0018
	 */
	struct FEventAffectedByExplosion
	{
	public:
		class UClass*                                              DamagerType;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q611[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ExplosionFramework.EventExplosionIgnitedActor
	 * Size -> 0x0008
	 */
	struct FEventExplosionIgnitedActor
	{
	public:
		class AActor*                                              IgnitedActor;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ExplosionFramework.EventOnExploded
	 * Size -> 0x000C
	 */
	struct FEventOnExploded
	{
	public:
		unsigned char                                              UnknownData_HLIN[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ExplosionFramework.EventExplosionOverlap
	 * Size -> 0x0008
	 */
	struct FEventExplosionOverlap
	{
	public:
		class UClass*                                              DamagerType;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
