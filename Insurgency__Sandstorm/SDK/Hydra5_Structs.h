#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Enum Hydra5.EHydraErrorCode
	 */
	enum class EHydraErrorCode : uint16_t
	{
		SUCCESS                                                                               = 0,
		CANCELLED                                                                             = 1,
		UNKNOWN_ERROR                                                                         = 2,
		INVALID_ARGUMENT                                                                      = 3,
		DEADLINE_EXCEEDED                                                                     = 4,
		NOT_FOUND                                                                             = 5,
		ALREADY_EXISTS                                                                        = 6,
		PERMISSION_DENIED                                                                     = 7,
		RESOURCE_EXHAUSTED                                                                    = 8,
		FAILED_PRECONDITION                                                                   = 9,
		ABORTED                                                                               = 10,
		OUT_OF_RANGE                                                                          = 11,
		UNIMPLEMENTED                                                                         = 12,
		INTERNAL_ERROR                                                                        = 13,
		UNAVAILABLE                                                                           = 14,
		DATA_LOSS                                                                             = 15,
		UNAUTHENTICATED                                                                       = 16,
		INVALID_CONTEXT                                                                       = 17,
		CONCURRENCY_FAILURE                                                                   = 18,
		INVALID_HYDRA_USER_ID                                                                 = 19,
		SDK_NOT_INITIALIZED                                                                   = 20,
		SDK_BUSY                                                                              = 21,
		SDK_INTERNAL_ERROR                                                                    = 22,
		SDK_TIMEOUT                                                                           = 23,
		SDK_PARSE_ERROR                                                                       = 24,
		SDK_CANCELLED                                                                         = 25,
		SDK_NOT_ALLOWED                                                                       = 26,
		SDK_TIMEOUT_SPIKE                                                                     = 27,
		SDK_INVALID_PARAMETER                                                                 = 28,
		SDK_NO_SERVICE_ENDPOINT                                                               = 29,
		SDK_ENDPOINTS_DISPATCHER_NO_DEFAULT_ENVIRONMENT                                       = 30,
		SDK_INVALID_STATE                                                                     = 31,
		SDK_NOT_A_MEMBER                                                                      = 32,
		SDK_NOT_AN_OWNER                                                                      = 33,
		SDK_USER_IS_NOT_ALLOWED                                                               = 34,
		SDK_MAX_COUNT_LIMIT                                                                   = 35,
		SDK_NOT_FOUND                                                                         = 36,
		SDK_ASYNC_WAIT_CALLBACK                                                               = 37,
		USER_LOGIN_ALREADY_EXISTS                                                             = 38,
		USER_SESSION_WAS_NOT_FOUND                                                            = 39,
		USER_VERSION_MISMATCH                                                                 = 40,
		USER_DATA_TOO_LARGE                                                                   = 41,
		USER_SESSION_REQUEST_CONTEXT_IS_MALFORMED                                             = 42,
		USER_SIGNED_OUT                                                                       = 43,
		USER_DATA_ACCESS_DENIED                                                               = 44,
		USER_DATA_INVALID_PARAMETERS                                                          = 45,
		USER_DATA_RULE_FOR_CONTAINER_DOES_NOT_EXIST                                           = 46,
		USER_SESSION_EXPIRED                                                                  = 47,
		AUTHORIZATION_INVALID_CREDENTIALS                                                     = 48,
		AUTHORIZATION_INVALID_LOGIN                                                           = 49,
		AUTHORIZATION_INVALID_TOKEN                                                           = 50,
		AUTHORIZATION_TOKEN_EXPIRED                                                           = 51,
		AUTHORIZATION_INVALID_AUTH_TICKET                                                     = 52,
		AUTHORIZATION_DOUBLE_SIGN_IN                                                          = 53,
		AUTHORIZATION_SESSION_STORAGE_ISSUE                                                   = 54,
		AUTHORIZATION_PROVIDER_IS_DISABLED                                                    = 55,
		AUTHORIZATION_TITLE_NOT_FOUND                                                         = 56,
		AUTHORIZATION_TITLE_IS_DISABLED                                                       = 57,
		AUTHORIZATION_INVALID_TITLE_ID                                                        = 58,
		AUTHORIZATION_ROLE_NOT_FOUND                                                          = 59,
		AUTHORIZATION_SECRET_NOT_FOUND                                                        = 60,
		AUTHORIZATION_SECRET_EXPIRED                                                          = 61,
		AUTHORIZATION_SECRET_NOT_ACTIVE                                                       = 62,
		AUTHORIZATION_INVALID_STANDALONE_CODE                                                 = 63,
		AUTHORIZATION_NINTENDO_ENTITLEMENT_CHECK_FAILED                                       = 64,
		AUTHORIZATION_PSN_EMPTY_ID_TOKEN                                                      = 65,
		EOS_OWNERSHIP_VERIFICATION_FAILED                                                     = 66,
		STEAM_TOKEN_VALIDATION_FAILED                                                         = 67,
		STEAM_GAME_ACCESS_VALIDATION_FAILED                                                   = 68,
		DATACENTER_TAG_NOT_FOUND                                                              = 69,
		DATACENTER_PROVIDER_TAG_NOT_FOUND                                                     = 70,
		DATACENTER_CONFIGURATION_TAG_IS_NOT_UNIQUE                                            = 71,
		DATA_CENTER_NOT_FOUND                                                                 = 72,
		DATA_CENTER_IN_USE                                                                    = 73,
		FACTS_UNABLE_TO_WRITE_INDEX                                                           = 74,
		FACTS_CATEGORIES_CONTEXTS_EMPTY                                                       = 75,
		FACTS_PARAMETERS_NOT_SPECIFIED                                                        = 76,
		FACTS_UNABLE_TO_WRITE_CHUNK                                                           = 77,
		SERVER_MANAGER_AGENT_NOT_FOUND                                                        = 78,
		SERVER_MANAGER_PACKS_COUNT_LIMIT_EXCEEDED                                             = 79,
		SERVER_MANAGER_INVALID_DATACENTER_CONFIGURATION_TAG                                   = 80,
		SESSION_CONTROL_SESSION_NOT_FOUND                                                     = 81,
		SESSION_CONTROL_SESSION_FINISHED_NORMAL                                               = 82,
		SESSION_CONTROL_SESSION_FINISHED_REJECTED                                             = 83,
		SESSION_CONTROL_SESSION_FINISH_NO_MATCHING_DSM                                        = 84,
		SESSION_CONTROL_SESSION_FINISH_TIMEOUT_ACTIVATE                                       = 85,
		SESSION_CONTROL_SESSION_FINISH_TIMEOUT_DS                                             = 86,
		SESSION_CONTROL_DSM_TIMEOUT                                                           = 87,
		SESSION_CONTROL_INVALID_CLIENT_VERSION                                                = 88,
		SESSION_CONTROL_INVALID_MAX_PLAYERS_COUNT                                             = 89,
		SESSION_CONTROL_SESSION_ALREADY_ACTIVATED                                             = 90,
		SESSION_CONTROL_SESSION_ACTIVATION_FAILED                                             = 91,
		ENDPOINT_DISPATCHER_AUTH_ENDPOINTS_NOT_FOUND                                          = 92,
		ENDPOINT_DISPATCHER_INCOMPATIBLE_CLIENT_VERSIONS                                      = 93,
		PRESENCE_UNEXPECTED                                                                   = 94,
		PRESENCE_PARTY_ALREADY_MEMBER                                                         = 95,
		PRESENCE_PARTY_MAX_COUNT_LIMIT                                                        = 96,
		PRESENCE_PLAYLIST_NOT_FOUND                                                           = 97,
		PRESENCE_PARTY_NOT_A_MEMBER                                                           = 98,
		PRESENCE_PARTY_NOT_AN_OWNER                                                           = 99,
		PRESENCE_SESSION_NOT_A_MEMBER                                                         = 100,
		PRESENCE_SESSION_NOT_AN_OWNER                                                         = 101,
		PRESENCE_INVALID_STATE                                                                = 102,
		PRESENCE_SESSION_JOIN_NO_SESSION                                                      = 103,
		PRESENCE_SESSION_JOIN_DOMAIN_MISMATCH                                                 = 104,
		PRESENCE_SESSION_JOIN_SESSION_FULL                                                    = 105,
		PRESENCE_SESSION_JOIN_SESSION_TEAM_MODE                                               = 106,
		PRESENCE_SESSION_JOIN_SESSION_SETTINGS                                                = 107,
		PRESENCE_SESSION_JOIN_IN_SESSION                                                      = 108,
		PRESENCE_VARIANTS_DUPLICATE_KEYS                                                      = 109,
		PRESENCE_VARIANTS_DUPLICATE_VALUES                                                    = 110,
		PRESENCE_DCPINGS_EMPTY                                                                = 111,
		PRESENCE_SESSSION_INVALID_MAX_COUNT                                                   = 112,
		PRESENCE_MEMBERS_EXCEED                                                               = 113,
		PRESENCE_PARTY_JOIN_NO_PARTY                                                          = 114,
		PRESENCE_PARTY_NOT_INVITABLE                                                          = 115,
		PRESENCE_USER_TIMEOUTED                                                               = 116,
		PRESENCE_INVITE_ALREADY_SENT                                                          = 117,
		PRESENCE_INVITE_NOT_FOUND                                                             = 118,
		PRESENCE_INVITE_DELEGATION_OWNER                                                      = 119,
		PRESENCE_PARTY_MAX_COUNT_EXCEEDS_PLAYLIST_COUNT                                       = 120,
		PRESENCE_PARTY_MAX_COUNT_EXCEEDS_CURRENT_COUNT                                        = 121,
		PRESENCE_PARTY_IS_NOT_JOINABLE                                                        = 122,
		PRESENCE_INVITE_PARTY_IS_NOT_JOINABLE                                                 = 123,
		PRESENCE_JOIN_CODE_PARTY_IS_NOT_JOINABLE                                              = 124,
		PRESENCE_DATA_SIZE_LIMIT                                                              = 125,
		PRESENCE_PARTY_MEMBERS_INCORRECT_STATE                                                = 126,
		PRESENCE_EXTERNAL_CALL_TIMEOUT                                                        = 127,
		PUSH_TOKEN_ALREADY_CONNECTED                                                          = 128,
		PUSH_SYSTEM_FAILED_TO_INITIALIZE                                                      = 129,
		LEADERBOARD_INVALID_CONFIGURATION                                                     = 130,
		LEADERBOARD_UPDATE_EXCEEDS_MAX_UPDATE_COUNT                                           = 131,
		LEADERBOARD_UPDATE_MUST_CONTAIN_USER_RESULTS                                          = 132,
		LEADERBOARD_RESULTS_COUNT_EXCEEDS                                                     = 133,
		LEADERBOARD_CUSTOM_DATA_EXCEEDS                                                       = 134,
		LEADERBOARD_WRONG_LEADERBOARD_ID                                                      = 135,
		LEADERBOARD_TEMPORARY_UNAVAILABLE                                                     = 136,
		RATINGS_CONFIGURATION_INVALID_RATING_ID                                               = 137,
		RATINGS_RESULTS_COUNT_EXCEEDS                                                         = 138,
		RATINGS_CUSTOM_DATA_EXCEEDS                                                           = 139,
		RATINGS_UPDATE_EXCEEDS_MAX_UPDATE_COUNT                                               = 140,
		RATINGS_WRONG_RATING_ID                                                               = 141,
		ECONOMY_OFFER_NOT_FOUND                                                               = 142,
		ECONOMY_UNEXPECTED_OFFER_ERROR                                                        = 143,
		ECONOMY_DOES_NOT_HAVE_ITEM                                                            = 144,
		ECONOMY_COMMAND_NOT_SUPPORTED                                                         = 145,
		ECONOMY_ERROR                                                                         = 146,
		ECONOMY_DBC_ERROR                                                                     = 147,
		ECONOMY_VALIDATION_FAILED                                                             = 148,
		OFFER_UNSUCCESSFUL_STEAM_RESULT                                                       = 149,
		OFFER_GOOGLE_PLAY_RMT_FAILED                                                          = 150,
		BI_KAFKA_SENDING_FAILED                                                               = 151,
		BI_KAFKA_CONNECTION_ERROR                                                             = 152,
		BOT_SERVICE_RETRIABLE                                                                 = 153,
		BOT_SERVICE_FATAL                                                                     = 154,
		BOT_SERVICE_TERMINAL                                                                  = 155,
		BOT_LOGIC_ERROR                                                                       = 156,
		ROLES_INVALID_PARAMETERS                                                              = 157,
		TITLES_WORLD_ID_IS_EMPTY                                                              = 158,
		TITLES_STORAGE_IS_FULL                                                                = 159,
		TITLE_NAME_IS_INVALID                                                                 = 160,
		BUILDS_GROUP_DATA_FAILED                                                              = 161,
		BUILDS_GROUP_REQUEST_FAILED                                                           = 162,
		BUILDS_GROUP_LOGIC_FAILED                                                             = 163,
		BUILD_VERSION_ALREADY_REGISTERED                                                      = 164,
		DIAGNOSTICS_VALIDATION_FAILED                                                         = 165,
		DIAGNOSTICS_DATA_IS_EMPTY                                                             = 166,
		DIAGNOSTICS_UNABLE_TO_WRITE_DATA                                                      = 167,
		TITLES_STORAGE_WRONG_IMAGE_TYPE                                                       = 168,
		WEB_PORTAL_BACKEND_PARAMETER_INVALID_VALUE                                            = 169,
		WEB_PORTAL_BACKEND_TOKEN_DECRYPTION_FAILED                                            = 170,
		PLUGIN_BAD_REQUEST                                                                    = 171,
		PLUGIN_INTERNAL_ERROR                                                                 = 172,
		PLUGIN_NOT_FOUND                                                                      = 173,
		PLUGIN_BUILD_NOT_FOUND                                                                = 174,
		PLUGIN_NOT_BELONGS_TO_TITLE                                                           = 175,
		PLUGIN_BUILD_NOT_BELONGS_TO_TITLE                                                     = 176,
		PLUGIN_ALREADY_EXISTS                                                                 = 177,
		PLUGIN_SECRET_NOT_FOUND                                                               = 178,
		PLUGIN_BUILD_ALREADY_UPLOADED                                                         = 179,
		PLUGIN_BUILD_NOT_UPLOADED                                                             = 180,
		PLUGIN_BUILD_ALREADY_REGISTERED                                                       = 181,
		BINARY_PACK_INVALID_COMPRESSION                                                       = 182,
		BINARY_PACK_INVALID_FORMAT                                                            = 183,
		NOTIFICATIONS_SLACK_TOKEN_IS_NOT_VALID                                                = 184,
		NOTIFICATIONS_TELEGRAM_TOKEN_IS_NOT_VALID                                             = 185,
		NOTIFICATIONS_SLACK_TOKEN_IS_ALREADY_LINKED                                           = 186,
		NOTIFICATIONS_TELEGRAM_TOKEN_IS_ALREADY_LINKED                                        = 187,
		ACCOUNT_CODE_EXPIRED                                                                  = 188,
		ACCOUNT_CODE_ALREADY_EXIST                                                            = 189,
		ACCOUNT_CODE_NOT_FOUND                                                                = 190,
		ACCOUNT_CODE_NOT_VALID                                                                = 191,
		WP_INVALID_PROVIDER                                                                   = 192,
		WP_INVALID_PASSWORD                                                                   = 193,
		WP_INVALID_LOGIN                                                                      = 194,
		WP_ACCOUNT_ALREADY_EXIST                                                              = 195,
		WP_CODE_ALREADY_LINKED                                                                = 196,
		WP_ACCOUNT_NOT_FOUND                                                                  = 197,
		WP_ACCOUNT_NOT_CONFIRMED                                                              = 198,
		WP_ACCOUNT_CONFIRMED                                                                  = 199,
		WP_THROTTLE_CONFIRMATION_CODE_GENERATION                                              = 200,
		WP_INVALID_CONFIRMATION_CODE                                                          = 201,
		WP_CONFIRMATION_CODE_EXPIRED                                                          = 202,
		WP_PASSWORD_RESET_CODE_CLAIMED                                                        = 203,
		WP_INVALID_PASSWORD_RESET_CODE                                                        = 204,
		WP_PASSWORD_RESET_CODE_EXPIRED                                                        = 205,
		WP_CODE_CLAIM_ATTEMPTS_EXCEEDED                                                       = 206,
		WP_ACCOUNT_INVALID_EMAIL                                                              = 207,
		WP_ACCOUNT_ANOTHER_USER_WITH_SAME_PROVIDER_ALREADY_LINKED                             = 208,
		WP_ACCOUNT_ANOTHER_USER_WITH_SAME_PROVIDER_AND_DIFFERENT_TITLE_ALREADY_LINKED         = 209,
		WP_ACCOUNT_USER_ALREADY_HAVE_ACCOUNT_WITH_LINKED_TITLES_FOR_CURRENT_PROVIDER          = 210,
		WP_ACCOUNT_EMAIL_ALREADY_EXIST                                                        = 211,
		WP_ACCOUNT_INVALID_USERNAME                                                           = 212,
		WP_ACCOUNT_INVALID_PROVIDER_FOR_EXISTING_ACCOUNT                                      = 213,
		WP_ACCOUNT_PASSWORD_ALREADY_SET                                                       = 214,
		WP_ACCOUNT_IS_UNDER_DELETION                                                          = 215,
		WP_ACCOUNT_IS_NOT_ACTIVE                                                              = 216,
		WP_ACCOUNT_IS_SUSPENDED                                                               = 217,
		WP_THROTTLE_CONFIRMATION_CODE_CLAIM                                                   = 218,
		WP_ACCOUNT_NOT_CONFIRMED_AND_CANT_RESEND_CONFIRMATION_CODE                            = 219,
		ENTITLEMENT_NOT_FOUND                                                                 = 220,
		ENTITLEMENT_NOT_VALID                                                                 = 221,
		ENTITLEMENT_UPDATE_FAILED                                                             = 222,
		ENTITLEMENT_REWARD_CODE_EXPIRED                                                       = 223,
		ENTITLEMENT_ACCOUNT_IS_NOT_LINKED_WITH_ANY_USER                                       = 224,
		ENTITLEMENT_REWARD_CODE_ALREADY_EXIST                                                 = 225,
		ENTITLEMENT_REWARD_CODE_WRONG_ACCOUNT                                                 = 226,
		ENTITLEMENT_REWARD_CODE_ALREADY_USED                                                  = 227,
		ENTITLEMENT_REWARD_CODE_FILTER_FAILED                                                 = 228,
		ENTITLEMENT_REWARD_CODE_NOT_FOUND                                                     = 229,
		ENTITLEMENT_CONSUME_COUNT_EXCEEDS_CONSUME_LIMIT                                       = 230,
		ENTITLEMENT_USER_NOT_LINKED                                                           = 231,
		ENTITLEMENT_CATALOG_ITEM_ID_ALREADY_EXISTS                                            = 232,
		ENTITLEMENT_CATALOG_ITEM_NOT_FOUND                                                    = 233,
		ENTITLEMENT_CATALOG_ITEM_INTERNAL_ERROR                                               = 234,
		PII_STORAGE_USER_NOT_FOUND                                                            = 235,
		PII_STORAGE_ACCOUNT_NOT_FOUND                                                         = 236,
		PII_SHARD_NOT_FOUND                                                                   = 237,
		BANNER_CONFIGURATION_NOT_FOUND                                                        = 238,
		WP_BANNER_CAMPAIGN_ALREADY_EXIST                                                      = 239,
		TITLE_STORAGE_TITLE_DETAILS_NOT_ALLOWED_FOR_REQUESTED_ACCOUNT                         = 240,
		UNIQUE_CODE_GENERATION_CODE_NOT_CREATED                                               = 241,
		CAN_NOT_INIT_SEQUENCE_FOR_UNIQUE_CODE_GENERATION                                      = 242,
		CAN_NOT_UPDATE_SEQUENCE_FOR_UNIQUE_CODE_GENERATION                                    = 243,
		NOT_SUPPORTED_AGREEMENT_DOCUMENT_TYPE                                                 = 244,
		AGREEMENTS_CACHE_CAN_NOT_BE_UPDATED                                                   = 245,
		AGREEMENT_STATUS_DRAFT_CAN_NOT_BE_SET                                                 = 246,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_DELETED                 = 247,
		CAN_NOT_CREATE_AGREEMENT_VERSION_FOR_NON_EXISTING_AGREEMENT                           = 248,
		NEW_AGREEMENT_VERSION_MUST_BE_GREATER_THAN_LAST_EXISTING_VERSION                      = 249,
		AGREEMENT_VERSION_TAG_IS_INVALID                                                      = 250,
		AGREEMENT_DOES_NOT_EXIST                                                              = 251,
		AGREEMENT_VERSION_DOES_NOT_EXIST                                                      = 252,
		CAN_NOT_ACTIVATE_AGREEMENT_VERSION_WITH_LOWER_VERSION_THAN_PREVIOUS_ACTIVE            = 253,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_SET_TO_STATUS_ACTIVE    = 254,
		AGREEMENT_OR_AGREEMENT_VERSION_NOT_IN_STATUS_ACTIVE_CAN_NOT_BE_SET_TO_STATUS_INACTIVE = 255,
		CAN_NOT_DELETE_AGREEMENT_VERSION_FOR_NON_EXISTING_AGREEMENT                           = 256,
		AGREEMENT_WITHOUT_ACTIVE_VERSION_CAN_NOT_BE_ACTIVATED                                 = 257,
		SIGNED_AGREEMENT_CAN_NOT_BE_CHANGED                                                   = 258,
		AGREEMENT_VERSION_ALREADY_EXISTS                                                      = 259,
		AGREEMENT_VERSION_NOT_IN_STATUS_DRAFT_CAN_NOT_BE_UPDATED                              = 260,
		LOCALIZATION_FOR_TITLE_NOT_FOUND                                                      = 261,
		LOCALIZATION_STRING_ID_NOT_FOUND                                                      = 262,
		LOCALIZATION_UPDATE_FAILED                                                            = 263,
		LOCALIZATION_STRING_ID_ALREADY_EXIST                                                  = 264,
		LOCALIZATION_NOT_SUPPORTED_FILE_TYPE                                                  = 265,
		LOCALIZATION_TRANSLATION_NOT_FOUND                                                    = 266,
		LOCALIZATION_INCORRECT_TITLE_ID_IN_THE_FILE                                           = 267,
		LOCALIZATION_INVALID_FILE_FORMAT                                                      = 268,
		LOCALIZATION_INVALID_STRING_ID_IN_THE_FILE                                            = 269,
		LOCALIZATION_INVALID_LOCALE_CODE_IN_THE_FILE                                          = 270,
		MAILING_TOPIC_DOESNT_EXIST                                                            = 271,
		MAILING_TOPIC_ALREADY_EXISTS                                                          = 272,
		MAILING_INVALID_NAME                                                                  = 273,
		MAILING_INVALID_EVENT                                                                 = 274,
		MAILING_TEMPLATE_PARSE_ERROR                                                          = 275,
		CROSS_SAVE_TOO_MANY_UPDATES                                                           = 276,
		CROSS_SAVE_TRANSFER_NOT_VALID                                                         = 277,
		CROSS_SAVE_SNAPSHOT_MAX_SIZE_EXCEEDED                                                 = 278,
		MAX                                                                                   = 279
	};

	/**
	 * Enum Hydra5.EHydraConnectionState
	 */
	enum class EHydraConnectionState : uint8_t
	{
		NOT_INITIALIZED            = 0,
		OFFLINE                    = 1,
		CONNECTING                 = 2,
		ONLINE                     = 3,
		DISCONNECTING              = 4,
		UNEXPECTEDLY_BAD_FRACTURED = 5,
		MAX                        = 6
	};

	/**
	 * Enum Hydra5.EHydraServiceState
	 */
	enum class EHydraServiceState : uint8_t
	{
		OFFLINE       = 0,
		CONNECTING    = 1,
		ONLINE        = 2,
		DISCONNECTING = 3,
		MAX           = 4
	};

	/**
	 * Enum Hydra5.EUserStateDataType
	 */
	enum class EUserStateDataType : uint8_t
	{
		Unknown      = 0,
		Numerical    = 1,
		TimeBased    = 2,
		String       = 3,
		VectorString = 4,
		MAX          = 5
	};

	/**
	 * Enum Hydra5.EUserStateOwnType
	 */
	enum class EUserStateOwnType : uint8_t
	{
		Unknown  = 0,
		DontHave = 1,
		Bought   = 2,
		Rented   = 3,
		MAX      = 4
	};

	/**
	 * Enum Hydra5.EUserStateOpType
	 */
	enum class EUserStateOpType : uint8_t
	{
		Unknown     = 0,
		Add         = 1,
		Remove      = 2,
		Rent        = 3,
		Set         = 4,
		Sub         = 5,
		Require     = 6,
		RequireLess = 7,
		MAX         = 8
	};

	/**
	 * Enum Hydra5.EHydraPresenceOperationType
	 */
	enum class EHydraPresenceOperationType : uint8_t
	{
		PARTY_CREATE                     = 0,
		PARTY_DISBAND                    = 1,
		PARTY_LEAVE                      = 2,
		PARTY_JOIN                       = 3,
		PARTY_INVITE_SEND                = 4,
		PARTY_INVITE_REVOKE              = 5,
		PARTY_INVITE_ACCEPT              = 6,
		PARTY_INVITE_REJECT              = 7,
		PARTY_REMOVE_MEMBER              = 8,
		PARTY_SET_LEADER                 = 9,
		PARTY_SET_SETTINGS               = 10,
		PARTY_JOIN_CODE_GENERATE         = 11,
		PARTY_JOIN_CODE_RESET            = 12,
		PARTY_JOIN_CODE_USE              = 13,
		MATCHMAKE_SESSION_CREATE         = 14,
		MATCHMAKE_SESSION_JOIN           = 15,
		MATCHMAKE_SESSION_LEAVE          = 16,
		MATCHMAKE_SESSION_REMOVE_MEMBERS = 17,
		MATCHMAKE_SESSION_SET_OWNER      = 18,
		MATCHMAKE_SESSION_SET_SETTINGS   = 19,
		MATCHMAKE_START                  = 20,
		MATCHMAKE_STOP                   = 21,
		MAX                              = 22
	};

	/**
	 * Enum Hydra5.EPartyInviteAnswer
	 */
	enum class EPartyInviteAnswer : uint8_t
	{
		ACCEPT_SUCCESS = 0,
		ACCEPT_FAILED  = 1,
		REJECT         = 2,
		MAX            = 3
	};

	/**
	 * Enum Hydra5.EPartyJoinDelegation
	 */
	enum class EPartyJoinDelegation : uint8_t
	{
		DISABLED = 0,
		EVERYONE = 1,
		MAX      = 2
	};

	/**
	 * Enum Hydra5.EPartyInviteDelegation
	 */
	enum class EPartyInviteDelegation : uint8_t
	{
		OWNER    = 0,
		EVERYONE = 1,
		MAX      = 2
	};

	/**
	 * Enum Hydra5.EGameSessionIdChangeReason
	 */
	enum class EGameSessionIdChangeReason : uint8_t
	{
		None                   = 0,
		Join                   = 1,
		Leave                  = 2,
		Kick                   = 3,
		Disband                = 4,
		FinishedNormal         = 5,
		FinishedNoMatchingDsm  = 6,
		FinishedPendingTimeout = 7,
		FinishedNoSlotsDsm     = 8,
		FinishedNoProvider     = 9,
		FinishedTimeoutQueue   = 10,
		MAX                    = 11
	};

	/**
	 * Enum Hydra5.EMatchmakeState
	 */
	enum class EMatchmakeState : uint8_t
	{
		None  = 0,
		Queue = 1,
		Game  = 2,
		MAX   = 3
	};

	/**
	 * Enum Hydra5.EMatchmakeJoinDelegation
	 */
	enum class EMatchmakeJoinDelegation : uint8_t
	{
		Disabled   = 0,
		Everyone   = 1,
		AllowUsers = 2,
		MAX        = 3
	};

	/**
	 * Enum Hydra5.EMatchmakeJipState
	 */
	enum class EMatchmakeJipState : uint8_t
	{
		Disabled = 0,
		Enabled  = 1,
		MAX      = 2
	};

	/**
	 * Enum Hydra5.ERatingsGameMatchResult
	 */
	enum class ERatingsGameMatchResult : uint8_t
	{
		None = 0,
		Win  = 1,
		Lose = 2,
		MAX  = 3
	};

	/**
	 * Enum Hydra5.EServerClientEventType
	 */
	enum class EServerClientEventType : uint8_t
	{
		None     = 0,
		Add      = 1,
		Remove   = 2,
		Awaiting = 3,
		Return   = 4,
		MAX      = 5
	};

	/**
	 * Enum Hydra5.ESessionControlAcceptStatus
	 */
	enum class ESessionControlAcceptStatus : uint8_t
	{
		Pending  = 0,
		Accepted = 1,
		Rejected = 2,
		MAX      = 3
	};

	/**
	 * Enum Hydra5.ESessionControlEndpointScheme
	 */
	enum class ESessionControlEndpointScheme : uint8_t
	{
		Secured   = 0,
		Unsecured = 1,
		UDP       = 2,
		MAX       = 3
	};

	/**
	 * Enum Hydra5.EHydraLogLevel
	 */
	enum class EHydraLogLevel : uint8_t
	{
		LOGERROR   = 0,
		LOGWARNING = 1,
		LOGINFO    = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Hydra5.UserIdEpicOnlineServicesResult
	 * Size -> 0x0020
	 */
	struct FUserIdEpicOnlineServicesResult
	{
	public:
		class FString                                              EosId;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hydra5UserId;                                            // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LayerProperties
	 * Size -> 0x0020
	 */
	struct FLayerProperties
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LayerInfo
	 * Size -> 0x0030
	 */
	struct FLayerInfo
	{
	public:
		struct FLayerProperties                                    Properties;                                              // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LayerData
	 * Size -> 0x0040
	 */
	struct FLayerData
	{
	public:
		struct FLayerInfo                                          Info;                                                    // 0x0000(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.AbstractDataRecordHeader
	 * Size -> 0x0010
	 */
	struct FAbstractDataRecordHeader
	{
	public:
		int64_t                                                    DataVersion;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DataLayout;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.AbstractDataRecord
	 * Size -> 0x0020
	 */
	struct FAbstractDataRecord
	{
	public:
		struct FAbstractDataRecordHeader                           Header;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              Buffer;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.AbstractDataContainerRecord
	 * Size -> 0x0030
	 */
	struct FAbstractDataContainerRecord
	{
	public:
		class FString                                              ContainerName;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAbstractDataRecord                                 AbstractDataRecord;                                      // 0x0010(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.AbstractDataKeyRecord
	 * Size -> 0x0020
	 */
	struct FAbstractDataKeyRecord
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAbstractDataContainerRecord>                Containers;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.OfferItem
	 * Size -> 0x0020
	 */
	struct FOfferItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReferenceId;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyUserStateValue
	 * Size -> 0x0030
	 */
	struct FEconomyUserStateValue
	{
	public:
		EUserStateOwnType                                          OwnType;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserStateDataType                                         DataType;                                                // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJYI[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ValueString;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ValueInt64;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ValueVectorStrings;                                      // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyTransactionExtendedInfo
	 * Size -> 0x0020
	 */
	struct FEconomyTransactionExtendedInfo
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyTransactionItem
	 * Size -> 0x0088
	 */
	struct FEconomyTransactionItem
	{
	public:
		class FString                                              StateId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserStateOpType                                           OperationType;                                           // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPO9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEconomyUserStateValue                              Previous;                                                // 0x0018(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FEconomyUserStateValue                              Current;                                                 // 0x0048(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FEconomyTransactionExtendedInfo>             Infos;                                                   // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyTransaction
	 * Size -> 0x0048
	 */
	struct FEconomyTransaction
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOfferItem                                          OfferItem;                                               // 0x0008(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FEconomyTransactionItem>                     Items;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEconomyTransactionExtendedInfo>             Infos;                                                   // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyUserState
	 * Size -> 0x0040
	 */
	struct FEconomyUserState
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEconomyUserStateValue                              Value;                                                   // 0x0010(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyUpdate
	 * Size -> 0x0020
	 */
	struct FEconomyUpdate
	{
	public:
		TArray<struct FEconomyTransaction>                         Transactions;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEconomyUserState>                           States;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LeaderboardEntry
	 * Size -> 0x0028
	 */
	struct FLeaderboardEntry
	{
	public:
		class FString                                              Hydra5UserId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA5O[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Data;                                                    // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LeaderboardPosition
	 * Size -> 0x0038
	 */
	struct FLeaderboardPosition
	{
	public:
		struct FLeaderboardEntry                                   Entry;                                                   // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int64_t                                                    LastUpdated;                                             // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70JF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.LeaderboardBoard
	 * Size -> 0x0060
	 */
	struct FLeaderboardBoard
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Total;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQNN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLeaderboardPosition>                        Positions;                                               // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLeaderboardPosition                                LocalHydraUser;                                          // 0x0028(0x0038) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.PartySettingsHydra
	 * Size -> 0x0008
	 */
	struct FPartySettingsHydra
	{
	public:
		int32_t                                                    MembersMaxCount;                                         // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPartyInviteDelegation                                     InviteDelegation;                                        // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPartyJoinDelegation                                       JoinDelegation;                                          // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJoinable;                                               // 0x0006(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisbandOnOwnerLeave;                                    // 0x0007(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.PartyMemberHydra
	 * Size -> 0x0040
	 */
	struct FPartyMemberHydra
	{
	public:
		class FString                                              Hydra5UserId;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StaticData;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwner;                                                // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S3W[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SortIndex;                                               // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocal;                                                // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOFI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.PartyStatus
	 * Size -> 0x0048
	 */
	struct FPartyStatus
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              JoinCode;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPartySettingsHydra                                 Settings;                                                // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPartyMemberHydra>                           Members;                                                 // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionStatusUpdateReasons
	 * Size -> 0x0001
	 */
	struct FMatchmakeSessionStatusUpdateReasons
	{
	public:
		EGameSessionIdChangeReason                                 SessionIdChangeReason;                                   // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionSettings
	 * Size -> 0x0008
	 */
	struct FMatchmakeSessionSettings
	{
	public:
		int32_t                                                    PlayersMaxCount;                                         // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakeJipState                                         Jip;                                                     // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakeJoinDelegation                                   JoinDelegation;                                          // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9I8[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionVariant
	 * Size -> 0x0020
	 */
	struct FMatchmakeSessionVariant
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionMember
	 * Size -> 0x0048
	 */
	struct FMatchmakeSessionMember
	{
	public:
		class FString                                              Hydra5UserId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StaticData;                                              // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOwner;                                                // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocal;                                                // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y6I[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SortIndex;                                               // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupId;                                                 // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionStatus
	 * Size -> 0x0060
	 */
	struct FMatchmakeSessionStatus
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlaylistId;                                              // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatchmakeSessionSettings                           Settings;                                                // 0x0030(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeSessionVariant>                    Variants;                                                // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeSessionMember>                     Members;                                                 // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakeState                                            State;                                                   // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BC3J[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.PresenceUserSessionStatus
	 * Size -> 0x0048
	 */
	struct FPresenceUserSessionStatus
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMatchmakeSessionSettings                           Settings;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeSessionVariant>                    Variants;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeSessionMember>                     Members;                                                 // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.PresenceUserPresenceData
	 * Size -> 0x0070
	 */
	struct FPresenceUserPresenceData
	{
	public:
		class FString                                              Hydra5UserId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOnline;                                               // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInvitable;                                            // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5FT[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StaticData;                                              // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPresenceUserSessionStatus                          SessionStatus;                                           // 0x0028(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.PresenceUsersPresence
	 * Size -> 0x0010
	 */
	struct FPresenceUsersPresence
	{
	public:
		TArray<struct FPresenceUserPresenceData>                   Users;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.RatingsGameEntry
	 * Size -> 0x0038
	 */
	struct FRatingsGameEntry
	{
	public:
		int32_t                                                    GamesCount;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rating;                                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Time;                                                    // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Data;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERatingsGameMatchResult                                    Result;                                                  // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUAU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.RatingsEntry
	 * Size -> 0x0028
	 */
	struct FRatingsEntry
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rating;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GamesCount;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRatingsGameEntry>                           History;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.SessionControlKeyContainer
	 * Size -> 0x0050
	 */
	struct FSessionControlKeyContainer
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HashKey;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InitVectorValue;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nonce;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSessionId;                                         // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.ClientData
	 * Size -> 0x0078
	 */
	struct FClientData
	{
	public:
		class FString                                              ClientId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EServerClientEventType                                     Type;                                                    // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZJ6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSessionControlKeyContainer                         KeyInfo;                                                 // 0x0028(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.SessionControlAcceptData
	 * Size -> 0x0050
	 */
	struct FSessionControlAcceptData
	{
	public:
		struct FSessionControlKeyContainer                         KeyInfo;                                                 // 0x0000(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.SessionControlServerInfo
	 * Size -> 0x0020
	 */
	struct FSessionControlServerInfo
	{
	public:
		class FString                                              ConnectionInfo;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerProperty;                                          // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.SessionControlAcceptClientResult
	 * Size -> 0x0078
	 */
	struct FSessionControlAcceptClientResult
	{
	public:
		ESessionControlAcceptStatus                                Status;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YZ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSessionControlAcceptData                           Data;                                                    // 0x0008(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSessionControlServerInfo                           ServerInfo;                                              // 0x0058(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.SessionControlEchoEndpoint
	 * Size -> 0x0018
	 */
	struct FSessionControlEchoEndpoint
	{
	public:
		class FString                                              Ip;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESessionControlEndpointScheme                              Scheme;                                                  // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRTT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.SessionControlDataCenter
	 * Size -> 0x0020
	 */
	struct FSessionControlDataCenter
	{
	public:
		class FString                                              DataCenterId;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSessionControlEchoEndpoint>                 Endpoints;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.AbstractDataGetRequestRecord
	 * Size -> 0x0020
	 */
	struct FAbstractDataGetRequestRecord
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Containers;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.DiagnosticsCrashReportProperty
	 * Size -> 0x0020
	 */
	struct FDiagnosticsCrashReportProperty
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.DiagnosticsCrashDumpData
	 * Size -> 0x0030
	 */
	struct FDiagnosticsCrashDumpData
	{
	public:
		class FString                                              DumpData;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DumpHash;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDiagnosticsCrashReportProperty>             Properties;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.ZenDiscountOfferItem
	 * Size -> 0x0038
	 */
	struct FZenDiscountOfferItem
	{
	public:
		struct FOfferItem                                          OfferItem;                                               // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int64_t                                                    Price;                                                   // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Discounts;                                               // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.EconomyZenEventPlaytime
	 * Size -> 0x0018
	 */
	struct FEconomyZenEventPlaytime
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveSec;                                               // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PFC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.EconomyUserStates
	 * Size -> 0x0010
	 */
	struct FEconomyUserStates
	{
	public:
		TArray<struct FEconomyUserState>                           States;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LayerInfoArray
	 * Size -> 0x0010
	 */
	struct FLayerInfoArray
	{
	public:
		TArray<struct FLayerInfo>                                  Info;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.LeaderboardGetRequest
	 * Size -> 0x0018
	 */
	struct FLeaderboardGetRequest
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResultsCount;                                            // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeDatacenterPingInfo
	 * Size -> 0x0018
	 */
	struct FMatchmakeDatacenterPingInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Ping;                                                    // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZBC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionOptions
	 * Size -> 0x0020
	 */
	struct FMatchmakeSessionOptions
	{
	public:
		class FString                                              PlaylistId;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeDatacenterPingInfo>                Pings;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeQueueVariant
	 * Size -> 0x0020
	 */
	struct FMatchmakeQueueVariant
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Values;                                                  // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeQueueOptions
	 * Size -> 0x0030
	 */
	struct FMatchmakeQueueOptions
	{
	public:
		struct FMatchmakeSessionOptions                            SessionOptions;                                          // 0x0000(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeQueueVariant>                      Variants;                                                // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.MatchmakeSessionCreateOptions
	 * Size -> 0x0038
	 */
	struct FMatchmakeSessionCreateOptions
	{
	public:
		struct FMatchmakeSessionOptions                            Options;                                                 // 0x0000(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FMatchmakeSessionSettings                           Settings;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FMatchmakeSessionVariant>                    Variants;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.PartyCreateData
	 * Size -> 0x0028
	 */
	struct FPartyCreateData
	{
	public:
		struct FPartySettingsHydra                                 Settings;                                                // 0x0000(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PartyData;                                               // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartyMemberData;                                         // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Hydra5.RatingsUpdateEntry
	 * Size -> 0x0030
	 */
	struct FRatingsUpdateEntry
	{
	public:
		class FString                                              Hydra5UserId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rating;                                                  // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TYJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Data;                                                    // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERatingsGameMatchResult                                    Result;                                                  // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34YH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.ServerTicket
	 * Size -> 0x0040
	 */
	struct FServerTicket
	{
	public:
		class FString                                              ticket;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Domain;                                                  // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Port;                                                    // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSecured;                                                // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1BA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Hydra5.ServerSimpleInitOptions
	 * Size -> 0x0020
	 */
	struct FServerSimpleInitOptions
	{
	public:
		class FString                                              ConnectionInfo;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Property;                                                // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
