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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NetCore.ENetworkFailure
	 */
	enum class ENetworkFailure : uint8_t
	{
		NetDriverAlreadyExists   = 0,
		NetDriverCreateFailure   = 1,
		NetDriverListenFailure   = 2,
		ConnectionLost           = 3,
		ConnectionTimeout        = 4,
		FailureReceived          = 5,
		OutdatedClient           = 6,
		OutdatedServer           = 7,
		PendingConnectionFailure = 8,
		NetGuidMismatch          = 9,
		NetChecksumMismatch      = 10,
		MAX                      = 11
	};

	/**
	 * Enum NetCore.EFastArraySerializerDeltaFlags
	 */
	enum class EFastArraySerializerDeltaFlags : uint8_t
	{
		None                      = 0,
		HasBeenSerialized         = 1,
		HasDeltaBeenRequested     = 2,
		IsUsingDeltaSerialization = 3,
		MAX                       = 4
	};

	/**
	 * Enum NetCore.ENetCloseResult
	 */
	enum class ENetCloseResult : uint8_t
	{
		NetDriverAlreadyExists             = 0,
		NetDriverCreateFailure             = 1,
		NetDriverListenFailure             = 2,
		ConnectionLost                     = 3,
		ConnectionTimeout                  = 4,
		FailureReceived                    = 5,
		OutdatedClient                     = 6,
		OutdatedServer                     = 7,
		PendingConnectionFailure           = 8,
		NetGuidMismatch                    = 9,
		NetChecksumMismatch                = 10,
		SecurityMalformedPacket            = 11,
		SecurityInvalidData                = 12,
		SecurityClosed                     = 13,
		Unknown                            = 14,
		Success                            = 15,
		Extended                           = 16,
		RPCDoS                             = 17,
		Cleanup                            = 18,
		MissingLevelPackage                = 19,
		PacketHandlerIncomingError         = 20,
		ZeroLastByte                       = 21,
		ZeroSize                           = 22,
		ReadHeaderFail                     = 23,
		ReadHeaderExtraFail                = 24,
		AckSequenceMismatch                = 25,
		BunchBadChannelIndex               = 26,
		BunchChannelNameFail               = 27,
		BunchWrongChannelType              = 28,
		BunchHeaderOverflow                = 29,
		BunchDataOverflow                  = 30,
		BunchPrematureControlChannel       = 31,
		BunchPrematureChannel              = 32,
		BunchPrematureControlClose         = 33,
		UnknownChannelType                 = 34,
		PrematureSend                      = 35,
		CorruptData                        = 36,
		SocketSendFailure                  = 37,
		BadChildConnectionIndex            = 38,
		LogLimitInstant                    = 39,
		LogLimitSustained                  = 40,
		ReceivedNetGUIDBunchFail           = 41,
		MaxReliableExceeded                = 42,
		ReceivedNextBunchFail              = 43,
		ReceivedNextBunchQueueFail         = 44,
		PartialInitialReliableDestroy      = 45,
		PartialMergeReliableDestroy        = 46,
		PartialInitialNonByteAligned       = 47,
		PartialNonByteAligned              = 48,
		PartialFinalPackageMapExports      = 49,
		PartialTooLarge                    = 50,
		AlreadyOpen                        = 51,
		ReliableBeforeOpen                 = 52,
		ReliableBufferOverflow             = 53,
		ControlChannelClose                = 54,
		ControlChannelEndianCheck          = 55,
		ControlChannelPlayerChannelFail    = 56,
		ControlChannelMessageUnknown       = 57,
		ControlChannelMessageFail          = 58,
		ControlChannelMessagePayloadFail   = 59,
		ControlChannelBunchOverflowed      = 60,
		ControlChannelQueueBunchOverflowed = 61,
		ClientHasMustBeMappedGUIDs         = 62,
		UnregisteredMustBeMappedGUID       = 63,
		ObjectReplicatorReceivedBunchFail  = 64,
		ContentBlockFail                   = 65,
		ContentBlockHeaderRepLayoutFail    = 66,
		ContentBlockHeaderIsActorFail      = 67,
		ContentBlockHeaderObjFail          = 68,
		ContentBlockHeaderPrematureEnd     = 69,
		ContentBlockHeaderSubObjectActor   = 70,
		ContentBlockHeaderBadParent        = 71,
		ContentBlockHeaderInvalidCreate    = 72,
		ContentBlockHeaderStablyNamedFail  = 73,
		ContentBlockHeaderNoSubObjectClass = 74,
		ContentBlockHeaderUObjectSubObject = 75,
		ContentBlockHeaderAActorSubObject  = 76,
		ContentBlockHeaderFail             = 77,
		ContentBlockPayloadBitsFail        = 78,
		FieldHeaderRepIndex                = 79,
		FieldHeaderBadRepIndex             = 80,
		FieldHeaderPayloadBitsFail         = 81,
		FieldPayloadFail                   = 82,
		FaultDisconnect                    = 83,
		NotRecoverable                     = 84,
		MAX                                = 85
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetCore.NetAnalyticsDataConfig
	 * Size -> 0x000C
	 */
	struct FNetAnalyticsDataConfig
	{
	public:
		class FName                                                DataName;                                                // 0x0000(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0008(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL43[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetCore.FastArraySerializerItem
	 * Size -> 0x000C
	 */
	struct FFastArraySerializerItem
	{
	public:
		int32_t                                                    ReplicationID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplicationKey;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MostRecentArrayReplicationKey;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NetCore.FastArraySerializer
	 * Size -> 0x0108
	 */
	struct FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_G7EB[0x54];                                  // 0x0000(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ArrayReplicationKey;                                     // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFMN[0xA8];                                  // 0x0058(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFastArraySerializerDeltaFlags                             DeltaFlags;                                              // 0x0100(0x0001) ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2E02[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetCore.StateStruct
	 * Size -> 0x0018
	 */
	struct FStateStruct
	{
	public:
		unsigned char                                              UnknownData_GYS1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StateName;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct NetCore.EscalationState
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FEscalationState : public FStateStruct
	{
	public:
		bool                                                       bLogEscalate;                                            // 0x0018(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDormant;                                                // 0x0019(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    CooloffTime;                                             // 0x001A(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    AutoEscalateTime;                                        // 0x001C(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     HighestTimePeriod;                                       // 0x001E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YW1S[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int8_t>                                             AllTimePeriods;                                          // 0x0020(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct NetCore.NetFaultState
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FNetFaultState : public FEscalationState
	{
	public:
		bool                                                       bCloseConnection;                                        // 0x0030(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJKQ[0x1];                                   // 0x0031(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    EscalateQuotaFaultsPerPeriod;                            // 0x0032(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     EscalateQuotaFaultPercentPerPeriod;                      // 0x0034(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHQ2[0x1];                                   // 0x0035(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    DescalateQuotaFaultsPerPeriod;                           // 0x0036(0x0002) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     DescalateQuotaFaultPercentPerPeriod;                     // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     EscalateQuotaTimePeriod;                                 // 0x0039(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFI9[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
