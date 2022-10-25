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
	 * Enum ModKit.EModVirusStatus
	 */
	enum class EModVirusStatus : uint8_t
	{
		NotScanned     = 0,
		ScanComplete   = 1,
		InProgress     = 2,
		TooLargeToScan = 3,
		FileNotFound   = 4,
		ErrorScanning  = 5,
		MAX            = 6
	};

	/**
	 * Enum ModKit.EModMaturity
	 */
	enum class EModMaturity : uint8_t
	{
		None     = 0,
		Alcohol  = 1,
		Drugs    = 2,
		Violence = 3,
		Explicit = 4,
		MAX      = 5
	};

	/**
	 * Enum ModKit.EModVisibility
	 */
	enum class EModVisibility : uint8_t
	{
		Hidden = 0,
		Public = 1,
		MAX    = 2
	};

	/**
	 * Enum ModKit.EModStatus
	 */
	enum class EModStatus : uint8_t
	{
		NotAccepted = 0,
		Accepted    = 1,
		Deleted     = 2,
		MAX         = 3
	};

	/**
	 * Enum ModKit.EModPlatformAuthState
	 */
	enum class EModPlatformAuthState : uint8_t
	{
		Guest                     = 0,
		LoggingInFetchingIdentity = 1,
		LoggedIn                  = 2,
		MAX                       = 3
	};

	/**
	 * Enum ModKit.EDownloadTaskState
	 */
	enum class EDownloadTaskState : uint8_t
	{
		Queued       = 0,
		QueryingData = 1,
		Downloading  = 2,
		Extracting   = 3,
		Cleanup      = 4,
		Done         = 5,
		Failed       = 6,
		MAX          = 7
	};

	/**
	 * Enum ModKit.EGetModsSortMethod
	 */
	enum class EGetModsSortMethod : uint8_t
	{
		Recent      = 0,
		Popular     = 1,
		Rating      = 2,
		Downloads   = 3,
		Subscribers = 4,
		MAX         = 5
	};

	/**
	 * Enum ModKit.EModIORequestFilterType
	 */
	enum class EModIORequestFilterType : uint8_t
	{
		FullTextSearch = 0,
		Equals         = 1,
		NotEqualTo     = 2,
		Like           = 3,
		NotLike        = 4,
		In             = 5,
		NotIn          = 6,
		Max            = 7,
		Min            = 8,
		LessThan       = 9,
		GreaterThan    = 10,
		BitwiseAnd     = 11
	};

	/**
	 * Enum ModKit.EModPlatformAuthFlow
	 */
	enum class EModPlatformAuthFlow : uint8_t
	{
		UsernamePassword = 0,
		EmailCode        = 1,
		OnlinePlatform   = 2,
		MAX              = 3
	};

	/**
	 * Enum ModKit.EModioReportType
	 */
	enum class EModioReportType : uint8_t
	{
		Generic = 0,
		DMCA    = 1,
		MAX     = 2
	};

	/**
	 * Enum ModKit.EModioReportResource
	 */
	enum class EModioReportResource : uint8_t
	{
		Games = 0,
		Mods  = 1,
		Users = 2,
		MAX   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ModKit.BaseImageObject
	 * Size -> 0x0020
	 */
	struct FBaseImageObject
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Original;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.AvatarObject
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FAvatarObject : public FBaseImageObject
	{
	public:
		class FString                                              Thumb_50x50;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Thumb_100x100;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.UserObject
	 * Size -> 0x00A0
	 */
	struct FUserObject
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NameId;                                                  // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateOnline;                                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAvatarObject                                       Avatar;                                                  // 0x0030(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Timezone;                                                // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfileUrl;                                              // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ImageObject
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FImageObject : public FBaseImageObject
	{
	public:
		class FString                                              Thumb_320x180;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.LogoObject
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FLogoObject : public FImageObject
	{
	public:
		class FString                                              Thumb_640x360;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Thumb_1280x720;                                          // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModMediaObject
	 * Size -> 0x0030
	 */
	struct FModMediaObject
	{
	public:
		TArray<class FString>                                      Youtube;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Sketchfab;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FImageObject>                                Images;                                                  // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.FilehashObject
	 * Size -> 0x0010
	 */
	struct FFilehashObject
	{
	public:
		class FString                                              Md5;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.DownloadObject
	 * Size -> 0x0018
	 */
	struct FDownloadObject
	{
	public:
		class FString                                              BinaryUrl;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateExpires;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModFileObject
	 * Size -> 0x00A8
	 */
	struct FModFileObject
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ModId;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateAdded;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateScanned;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModVirusStatus                                            VirusStatus;                                             // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VirusPositive;                                           // 0x0021(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V6T[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VirusTotalHash;                                          // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    FileSize;                                                // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilehashObject                                     Filehash;                                                // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Changelog;                                               // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MetadataBlob;                                            // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDownloadObject                                     Download;                                                // 0x0090(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.StatsObject
	 * Size -> 0x0040
	 */
	struct FStatsObject
	{
	public:
		int32_t                                                    ModId;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PopularityRankPosition;                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PopularityRankTotalMods;                                 // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DownloadsTotal;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubscribersTotal;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RatingsTotal;                                            // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RatingsPositive;                                         // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RatingsNegative;                                         // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RatingsPercentagePositive;                               // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RatingsWeightedAggregate;                                // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RatingsDisplayText;                                      // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateExpires;                                             // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.MetadataKVPObject
	 * Size -> 0x0020
	 */
	struct FMetadataKVPObject
	{
	public:
		class FString                                              Metakey;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Metavalue;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModTagObject
	 * Size -> 0x0018
	 */
	struct FModTagObject
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateAdded;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModObject
	 * Size -> 0x02D8
	 */
	struct FModObject
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    GameId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModStatus                                                 Status;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModVisibility                                             Visible;                                                 // 0x0011(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVFX[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserObject                                         SubmittedBy;                                             // 0x0018(0x00A0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int64_t                                                    DateAdded;                                               // 0x00B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateUpdated;                                             // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModMaturity                                               MaturityOption;                                          // 0x00C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQ3W[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLogoObject                                         Logo;                                                    // 0x00D0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              HomepageUrl;                                             // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NameId;                                                  // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Summary;                                                 // 0x0150(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description_Plaintext;                                   // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MetadataBlob;                                            // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProfileUrl;                                              // 0x0190(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModMediaObject                                     Media;                                                   // 0x01A0(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModFileObject                                      Modfile;                                                 // 0x01D0(0x00A8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FStatsObject                                        Stats;                                                   // 0x0278(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FMetadataKVPObject>                          MetadataKvp;                                             // 0x02B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FModTagObject>                               Tags;                                                    // 0x02C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModTag
	 * Size -> 0x0028
	 */
	struct FModTag
	{
	public:
		class FString                                              TagName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TagPrintName;                                            // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModTagCategory
	 * Size -> 0x0028
	 */
	struct FModTagCategory
	{
	public:
		class FText                                                TagCategoryName;                                         // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FModTag>                                     Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModState
	 * Size -> 0x02F8
	 */
	struct FModState
	{
	public:
		struct FModObject                                          ModData;                                                 // 0x0000(0x02D8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              ModRoot;                                                 // 0x02D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModfileRoot;                                             // 0x02E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.BaseResultObject
	 * Size -> 0x0010
	 */
	struct FBaseResultObject
	{
	public:
		int32_t                                                    ResultCount;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResultOffset;                                            // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResultLimit;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResultTotal;                                             // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.RatingObject
	 * Size -> 0x0020
	 */
	struct FRatingObject
	{
	public:
		int64_t                                                    GameId;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ModId;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rating;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS3Y[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    DateAdded;                                               // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.GetUserRatingsSchema
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FGetUserRatingsSchema : public FBaseResultObject
	{
	public:
		TArray<struct FRatingObject>                               Data;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.GetAllModsSchema
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FGetAllModsSchema : public FBaseResultObject
	{
	public:
		TArray<struct FModObject>                                  Data;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModPlatformMessage
	 * Size -> 0x0018
	 */
	struct FModPlatformMessage
	{
	public:
		class FString                                              MessageText;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsError;                                                // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8SK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModKit.ModIOMessage
	 * Size -> 0x0018
	 */
	struct FModIOMessage
	{
	public:
		int32_t                                                    Code;                                                    // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3HW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModIORequestFilter
	 * Size -> 0x0028
	 */
	struct FModIORequestFilter
	{
	public:
		class FString                                              FilterField;                                             // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModIORequestFilterType                                    FilterType;                                              // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFJ1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchValue;                                              // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.GetModsFilters
	 * Size -> 0x0058
	 */
	struct FGetModsFilters
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGetModsSortMethod                                         SortMethod;                                              // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZFE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SearchString;                                            // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Tags;                                                    // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverseTags;                                            // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y81F[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int64_t>                                            ModIdsFilter;                                            // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FModIORequestFilter>                         CustomRequestFilters;                                    // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ModKitTemplate
	 * Size -> 0x0050
	 */
	struct FModKitTemplate
	{
	public:
		class FText                                                TemplateName;                                            // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
		struct FFilePath                                           Image;                                                   // 0x0030(0x0010) Edit, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      TemplatePath;                                            // 0x0040(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.OAuthResponse
	 * Size -> 0x0020
	 */
	struct FOAuthResponse
	{
	public:
		int32_t                                                    Code;                                                    // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IENH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccessToken;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DateExpires;                                             // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModKit.ReportRequestBody
	 * Size -> 0x0038
	 */
	struct FReportRequestBody
	{
	public:
		EModioReportResource                                       Resource;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN43[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ID;                                                      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModioReportType                                           Type;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOSC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Summary;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
