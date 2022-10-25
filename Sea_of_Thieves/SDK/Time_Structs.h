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
	 * Enum Time.ETimeOfDay
	 */
	enum class ETimeOfDay : uint8_t
	{
		Day   = 0,
		Night = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Time.GameTime
	 * Size -> 0x0008
	 */
	struct FGameTime
	{
	public:
		struct FDateTime                                           DateTimeRepresentation;                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct Time.ReplicatedDateTime
	 * Size -> 0x0008
	 */
	struct FReplicatedDateTime
	{
	public:
		int64_t                                                    Ticks;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Time.ReplicatedAuthoritativeTime
	 * Size -> 0x0010
	 */
	struct FReplicatedAuthoritativeTime
	{
	public:
		struct FReplicatedDateTime                                 WorldTime;                                               // 0x0000(0x0008)
		struct FReplicatedDateTime                                 SyncTime;                                                // 0x0008(0x0008)
	};

	/**
	 * ScriptStruct Time.GameTimeRange
	 * Size -> 0x0010
	 */
	struct FGameTimeRange
	{
	public:
		struct FGameTime                                           Start;                                                   // 0x0000(0x0008) Edit
		struct FGameTime                                           End;                                                     // 0x0008(0x0008) Edit
	};

	/**
	 * ScriptStruct Time.ReplicatedTimespan
	 * Size -> 0x0008
	 */
	struct FReplicatedTimespan
	{
	public:
		int64_t                                                    Ticks;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Time.EventSetDateTime
	 * Size -> 0x0014
	 */
	struct FEventSetDateTime
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Month;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Day;                                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Hour;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Minute;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
