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
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class EBeaconConnectionState : uint8_t
	{
		Invalid = 0,
		Closed  = 1,
		Pending = 2,
		Open    = 3,
		MAX     = 4
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		NoResult                   = 0,
		RequestPending             = 1,
		GeneralError               = 2,
		PartyLimitReached          = 3,
		IncorrectPlayerCount       = 4,
		RequestTimedOut            = 5,
		ReservationDuplicate       = 6,
		ReservationNotFound        = 7,
		ReservationAccepted        = 8,
		ReservationDenied          = 9,
		ReservationDenied_Banned   = 10,
		ReservationRequestCanceled = 11,
		ReservationInvalid         = 12,
		BadSessionId               = 13,
		MAX                        = 14
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class EClientRequestType : uint8_t
	{
		NonePending                = 0,
		ExistingSessionReservation = 1,
		ReservationUpdate          = 2,
		EmptyServerReservation     = 3,
		ChangeWorldRequest         = 4,
		Reconnect                  = 5,
		MAX                        = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.PlayerReservation
	 * Size -> 0x0030
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0018) Transient
		class FString                                              ValidationStr;                                           // 0x0018(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash
		float                                                      ElapsedTime;                                             // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BZ6S[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyReservation
	 * Size -> 0x0030
	 */
	struct FPartyReservation
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9WD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0018) Transient
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0020(0x0010) ZeroConstructor, Transient
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x00E0
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_F5U2[0xE0];                                  // 0x0000(0x00E0) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
