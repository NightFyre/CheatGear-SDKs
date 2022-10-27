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
	 * Enum OnlineSubsystem.EOnlineStatsSuccess
	 */
	enum class EOnlineStatsSuccess : uint8_t
	{
		Success         = 0,
		UnknownError    = 1,
		InvalidStatId   = 2,
		InvalidArgument = 3,
		InvalidUser     = 4,
		MAX             = 5
	};

	/**
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Success    = 0,
		Failed     = 1,
		Cancelled  = 2,
		Invalid    = 3,
		NotAllowed = 4,
		Restored   = 5,
		Unknown    = 6,
		MAX        = 7
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class EMPMatchOutcome : uint8_t
	{
		None        = 0,
		Quit        = 1,
		Won         = 2,
		Lost        = 3,
		Tied        = 4,
		TimeExpired = 5,
		First       = 6,
		Second      = 7,
		Third       = 8,
		Fourth      = 9,
		MAX         = 10
	};

	/**
	 * Enum OnlineSubsystem.EPlatformId
	 */
	enum class EPlatformId : uint8_t
	{
		Unknown  = 0,
		XboxLive = 1,
		Steam    = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystem.NamedInterface
	 * Size -> 0x0010
	 */
	struct FNamedInterface
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             InterfaceObject;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaceDef
	 * Size -> 0x0018
	 */
	struct FNamedInterfaceDef
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              InterfaceClassName;                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
	 * Size -> 0x00A0
	 */
	struct FInAppPurchaseProductInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TransactionIdentifier;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DisplayPrice;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrencyCode;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrencySymbol;                                          // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              DecimalSeparator;                                        // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              GroupingSeparator;                                       // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ReceiptData;                                             // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
	 * Size -> 0x0020
	 */
	struct FInAppPurchaseRestoreInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ReceiptData;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OnlineSubsystem.AchievementUpdatedEvent
	 * Size -> 0x0038
	 */
	struct FAchievementUpdatedEvent
	{
	public:
		class FString                                              AchievementId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   Progress;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Successful;                                              // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WJUX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Reason;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Platform;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct OnlineSubsystem.OnlineStoreCatalogItem
	 * Size -> 0x0090
	 */
	struct FOnlineStoreCatalogItem
	{
	public:
		class FString                                              ProductId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Title;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              Description;                                             // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              FormattedPrice;                                          // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              FormattedBasePrice;                                      // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       IsOnSale;                                                // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W4V9[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SaleEndDate;                                             // 0x0058(0x0008) ZeroConstructor
		class FString                                              ImageUri;                                                // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              CurrencyCode;                                            // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      MetaTags;                                                // 0x0080(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
	 * Size -> 0x0018
	 */
	struct FInAppPurchaseProductRequest
	{
	public:
		class FString                                              ProductIdentifier;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bIsConsumable;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K1WA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
