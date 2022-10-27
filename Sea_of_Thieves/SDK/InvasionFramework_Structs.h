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
	 * Enum InvasionFramework.EInvasionStatus
	 */
	enum class EInvasionStatus : uint8_t
	{
		None       = 0,
		Aggressive = 1,
		Passive    = 2,
		MAX        = 3
	};

	/**
	 * Enum InvasionFramework.EInvasionEndedReason
	 */
	enum class EInvasionEndedReason : uint8_t
	{
		ShipSunk               = 0,
		ParticipantLeftFaction = 1,
		ParticipantLeftServer  = 2,
		InvasionTimeout        = 3,
		None                   = 4,
		MAX                    = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InvasionFramework.InvasionCrewData
	 * Size -> 0x0014
	 */
	struct FInvasionCrewData
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EInvasionStatus                                            InvasionStatus;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReadyForInvasion;                                        // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JRZ6[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InvasionFramework.InvasionParticipatingCrewData
	 * Size -> 0x0070
	 */
	struct FInvasionParticipatingCrewData
	{
	public:
		TArray<struct FInvasionCrewData>                           CrewIds;                                                 // 0x0000(0x0010) ZeroConstructor
		TArray<class UCrewVoyageParticipant*>                      Participants;                                            // 0x0010(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_ICJ7[0x50];                                  // 0x0020(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InvasionFramework.InvasionEndedTelemetryEvent
	 * Size -> 0x0040
	 */
	struct FInvasionEndedTelemetryEvent
	{
	public:
		TArray<struct FInvasionCrewData>                           Participants;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		struct FInvasionCrewData                                   Winner;                                                  // 0x0010(0x0014) BlueprintVisible, BlueprintReadOnly
		float                                                      InvasionDurationInSeconds;                               // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FCrewFactionTelemetryData>                   ParticipantFactionData;                                  // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		EInvasionEndedReason                                       InvasionEndedReason;                                     // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LX3W[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
