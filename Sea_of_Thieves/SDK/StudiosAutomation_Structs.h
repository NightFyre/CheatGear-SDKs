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
	 * Enum StudiosAutomation.EComparisonMethod
	 */
	enum class EComparisonMethod : uint8_t
	{
		Equal_To                 = 0,
		Not_Equal_To             = 1,
		Greater_Than_Or_Equal_To = 2,
		Less_Than_Or_Equal_To    = 3,
		Greater_Than             = 4,
		Less_Than                = 5,
		MAX                      = 6
	};

	/**
	 * Enum StudiosAutomation.ETestAutomationPlayModeOverride
	 */
	enum class ETestAutomationPlayModeOverride : uint8_t
	{
		Adventure      = 0,
		Contest        = 1,
		Tutorial       = 2,
		NotSelectedYet = 3,
		MAX            = 4
	};

	/**
	 * Enum StudiosAutomation.EPerformanceCaptureType
	 */
	enum class EPerformanceCaptureType : uint8_t
	{
		None                = 0,
		FrameTime           = 1,
		StreamingMemory     = 2,
		StreamingPositional = 3,
		MAX                 = 4
	};

	/**
	 * Enum StudiosAutomation.ETestArea
	 */
	enum class ETestArea : uint8_t
	{
		None                        = 0,
		Rendering                   = 1,
		UserInterface               = 2,
		UserInterfaceInitialization = 3,
		Art                         = 4,
		Audio                       = 5,
		AI                          = 6,
		MAX                         = 7
	};

	/**
	 * Enum StudiosAutomation.ETestCategory
	 */
	enum class ETestCategory : uint8_t
	{
		Unit        = 0,
		Integration = 1,
		Acceptance  = 2,
		Stress      = 3,
		Soak        = 4,
		Performance = 5,
		MAX         = 6
	};

	/**
	 * Enum StudiosAutomation.ETextureAuditorMipSetting
	 */
	enum class ETextureAuditorMipSetting : uint8_t
	{
		MipGenRequired   = 0,
		NoMipGenRequired = 1,
		MipGenOptional   = 2,
		MAX              = 3
	};

	/**
	 * Enum StudiosAutomation.ECollectionAuditType
	 */
	enum class ECollectionAuditType : uint8_t
	{
		NoneSet            = 0,
		UseParentType      = 1,
		Totals             = 2,
		MeshLimits         = 3,
		AnimSequenceLimits = 4,
		PhysicsAudits      = 5,
		ExceptionList      = 6,
		WIP                = 7,
		MAX                = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StudiosAutomation.TestLevelMetadataEntry
	 * Size -> 0x0020
	 */
	struct FTestLevelMetadataEntry
	{
	public:
		class FString                                              Property;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.ClientPawnDetails
	 * Size -> 0x0010
	 */
	struct FClientPawnDetails
	{
	public:
		TArray<class APawn*>                                       Pawns;                                                   // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct StudiosAutomation.TextureAuditorProperties
	 * Size -> 0x0020
	 */
	struct FTextureAuditorProperties
	{
	public:
		ETextureAuditorMipSetting                                  RequiredMipsSetting;                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_89LI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPixelFormat>                                       AllowedTextureFormats;                                   // 0x0008(0x0010) Edit, ZeroConstructor
		uint32_t                                                   MinSizeToValidateFormatX;                                // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   MinSizeToValidateFormatY;                                // 0x001C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.TextureAuditorGroupProperties
	 * Size -> 0x0028
	 */
	struct FTextureAuditorGroupProperties
	{
	public:
		ETextureGroup                                              TextureGroup;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NMWN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextureAuditorProperties                           Properties;                                              // 0x0008(0x0020) Edit
	};

	/**
	 * ScriptStruct StudiosAutomation.SubstringAuditQueryData
	 * Size -> 0x0018
	 */
	struct FSubstringAuditQueryData
	{
	public:
		TArray<class FString>                                      QueryStringArray;                                        // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    SearchSetSize;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MemoryLimitForSet;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.FolderTotals
	 * Size -> 0x0028
	 */
	struct FFolderTotals
	{
	public:
		bool                                                       EnforceCollectionMembership;                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7BLS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CollectionsAllowedForFolder;                             // 0x0008(0x0010) ZeroConstructor
		TArray<class FName>                                        AssetTypesToTest;                                        // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct StudiosAutomation.MeshAuditLimits
	 * Size -> 0x0038
	 */
	struct FMeshAuditLimits
	{
	public:
		TArray<struct FSubstringAuditQueryData>                    SubstringQueries;                                        // 0x0000(0x0010) ZeroConstructor
		struct FFolderTotals                                       FolderMeshLimits;                                        // 0x0010(0x0028)
	};

	/**
	 * ScriptStruct StudiosAutomation.AssetAuditConstantEntry
	 * Size -> 0x0018
	 */
	struct FAssetAuditConstantEntry
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0VY6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StudiosAutomation.AssetAuditConstants
	 * Size -> 0x0010
	 */
	struct FAssetAuditConstants
	{
	public:
		TArray<struct FAssetAuditConstantEntry>                    AssetAuditConstants;                                     // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionTotalsLimits
	 * Size -> 0x0010
	 */
	struct FCollectionTotalsLimits
	{
	public:
		int32_t                                                    MaxTotalVerts;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTotalMemory;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MostExpensiveAssetsSetSize;                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExpensiveAssetSetMaxTotalMemory;                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionMeshLimitsBase
	 * Size -> 0x0008
	 */
	struct FCollectionMeshLimitsBase
	{
	public:
		int32_t                                                    MaxVerts;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxMemory;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionStaticMeshLimits
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FCollectionStaticMeshLimits : public FCollectionMeshLimitsBase
	{	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionSkeleMeshLimits
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FCollectionSkeleMeshLimits : public FCollectionMeshLimitsBase
	{	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionAnimSequenceLimits
	 * Size -> 0x0004
	 */
	struct FCollectionAnimSequenceLimits
	{
	public:
		int32_t                                                    MaxMemory;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionLimits
	 * Size -> 0x0034
	 */
	struct FCollectionLimits
	{
	public:
		class FName                                                CollectionName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollectionAuditType                                       AuditType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOnlyParentCollection;                                  // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D4AQ[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollectionTotalsLimits                             CollectionTotals;                                        // 0x000C(0x0010) Edit
		struct FCollectionStaticMeshLimits                         StaticMeshLimits;                                        // 0x001C(0x0008) Edit
		struct FCollectionSkeleMeshLimits                          SkeleMeshLimits;                                         // 0x0024(0x0008) Edit
		struct FCollectionAnimSequenceLimits                       AnimLimits;                                              // 0x002C(0x0004) Edit
		bool                                                       CanUseComplexCollisionAsSimple;                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanUseLOD0Collision;                                     // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BKD6[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StudiosAutomation.CollectionLimitsArray
	 * Size -> 0x0010
	 */
	struct FCollectionLimitsArray
	{
	public:
		TArray<struct FCollectionLimits>                           CollectionLimits;                                        // 0x0000(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
