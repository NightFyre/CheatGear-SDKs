#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Enum VivoxCore.DeviceType
	 */
	enum class EDeviceType : uint8_t
	{
		DeviceType_NullDevice                 = 0,
		DeviceType_SpecificDevice             = 1,
		DeviceType_DefaultSystemDevice        = 2,
		DeviceType_DefaultCommunicationDevice = 3,
		DeviceType_DeviceType_MAX             = 4
	};

	/**
	 * Enum VivoxCore.EAudioFadeModel
	 */
	enum class EAudioFadeModel : uint8_t
	{
		InverseByDistance     = 0,
		LinearByDistance      = 1,
		ExponentialByDistance = 2,
		MAX                   = 3
	};

	/**
	 * Enum VivoxCore.ChannelType
	 */
	enum class EChannelType : uint8_t
	{
		ChannelType_NonPositional   = 0,
		ChannelType_Positional      = 1,
		ChannelType_Echo            = 2,
		ChannelType_ChannelType_MAX = 3
	};

	/**
	 * Enum VivoxCore.ConnectionState
	 */
	enum class EConnectionState : uint8_t
	{
		ConnectionState_Disconnected        = 0,
		ConnectionState_Connecting          = 1,
		ConnectionState_Connected           = 2,
		ConnectionState_Disconnecting       = 3,
		ConnectionState_ConnectionState_MAX = 4
	};

	/**
	 * Enum VivoxCore.ParticipantSpeakingUpdateRate
	 */
	enum class EParticipantSpeakingUpdateRate : uint8_t
	{
		ParticipantSpeakingUpdateRate_StateChange                       = 0,
		ParticipantSpeakingUpdateRate_Never                             = 1,
		ParticipantSpeakingUpdateRate_Update1Hz                         = 2,
		ParticipantSpeakingUpdateRate_Update5Hz                         = 3,
		ParticipantSpeakingUpdateRate_Update10Hz                        = 4,
		ParticipantSpeakingUpdateRate_ParticipantSpeakingUpdateRate_MAX = 5
	};

	/**
	 * Enum VivoxCore.TransmissionMode
	 */
	enum class ETransmissionMode : uint8_t
	{
		TransmissionMode_None                 = 0,
		TransmissionMode_Single               = 1,
		TransmissionMode_All                  = 2,
		TransmissionMode_TransmissionMode_MAX = 3
	};

	/**
	 * Enum VivoxCore.SubscriptionReply
	 */
	enum class ESubscriptionReply : uint8_t
	{
		SubscriptionReply_Allow                 = 0,
		SubscriptionReply_Block                 = 1,
		SubscriptionReply_SubscriptionReply_MAX = 2
	};

	/**
	 * Enum VivoxCore.SubscriptionMode
	 */
	enum class ESubscriptionMode : uint8_t
	{
		SubscriptionMode_Accept               = 0,
		SubscriptionMode_Block                = 1,
		SubscriptionMode_Defer                = 2,
		SubscriptionMode_SubscriptionMode_MAX = 3
	};

	/**
	 * Enum VivoxCore.LoginState
	 */
	enum class ELoginState : uint8_t
	{
		LoginState_LoggedOut      = 0,
		LoginState_LoggingIn      = 1,
		LoginState_LoggedIn       = 2,
		LoginState_LoggingOut     = 3,
		LoginState_LoginState_MAX = 4
	};

	/**
	 * Enum VivoxCore.TTSMessageState
	 */
	enum class ETTSMessageState : uint8_t
	{
		TTSMessageState_Playing             = 0,
		TTSMessageState_Enqueued            = 1,
		TTSMessageState_TTSMessageState_MAX = 2
	};

	/**
	 * Enum VivoxCore.TTSDestination
	 */
	enum class ETTSDestination : uint8_t
	{
		TTSDestination_Default                                   = 0,
		TTSDestination_RemoteTransmission                        = 1,
		TTSDestination_LocalPlayback                             = 2,
		TTSDestination_RemoteTransmissionWithLocalPlayback       = 3,
		TTSDestination_QueuedRemoteTransmission                  = 4,
		TTSDestination_QueuedLocalPlayback                       = 5,
		TTSDestination_QueuedRemoteTransmissionWithLocalPlayback = 6,
		TTSDestination_ScreenReader                              = 7,
		TTSDestination_TTSDestination_MAX                        = 8
	};

	/**
	 * Enum VivoxCore.PresenceStatus
	 */
	enum class EPresenceStatus : uint8_t
	{
		PresenceStatus_Unavailable        = 0,
		PresenceStatus_Available          = 1,
		PresenceStatus_Chat               = 2,
		PresenceStatus_DoNotDisturb       = 3,
		PresenceStatus_Away               = 4,
		PresenceStatus_ExtendedAway       = 5,
		PresenceStatus_PresenceStatus_MAX = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
