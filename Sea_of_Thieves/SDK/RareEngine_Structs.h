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
	 * Enum RareEngine.EMemoryUsageVisualiserInstanceType
	 */
	enum class EMemoryUsageVisualiserInstanceType : uint8_t
	{
		Server = 0,
		Client = 1,
		MAX    = 2
	};

	/**
	 * Enum RareEngine.EMemoryGatheringMode
	 */
	enum class EMemoryGatheringMode : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		MAX       = 2
	};

	/**
	 * Enum RareEngine.ETestEnum
	 */
	enum class ETestEnum : uint8_t
	{
		Alpha = 0,
		Beta  = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RareEngine.MemoryVisualiserStat
	 * Size -> 0x0020
	 */
	struct FMemoryVisualiserStat
	{
	public:
		class FName                                                StatName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DisplayName;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      MemoryUsageMB;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XYPJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RareEngine.MemoryVisualiserClass
	 * Size -> 0x0028
	 */
	struct FMemoryVisualiserClass
	{
	public:
		class UClass*                                              ClassType;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMemoryGatheringMode                                       MemoryGatheringMode;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BLY0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		float                                                      MemoryUsageMB;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MF8D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RareEngine.MemoryVisualiserCategory
	 * Size -> 0x0058
	 */
	struct FMemoryVisualiserCategory
	{
	public:
		class FString                                              CategoryName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash
		TArray<struct FMemoryVisualiserStat>                       CategoryStats;                                           // 0x0010(0x0010) Edit, ZeroConstructor
		TArray<struct FMemoryVisualiserClass>                      CategoryClasses;                                         // 0x0020(0x0010) Edit, ZeroConstructor
		bool                                                       CollectOnServer;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IA71[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      XboxOneBudgetMB;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      XboxOneSBudgetMB;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      XboxOneXBudgetMB;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PCLowSpecBudgetMB;                                       // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PCMidSpecBudgetMB;                                       // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PCHighSpecBudgetMB;                                      // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PCUltraSpecBudgetMB;                                     // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MemoryUsageMB;                                           // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SFOM[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RareEngine.StaticMeshComponentList
	 * Size -> 0x0010
	 */
	struct FStaticMeshComponentList
	{
	public:
		TArray<class UStaticMeshComponent*>                        Components;                                              // 0x0000(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct RareEngine.StaticMeshActorList
	 * Size -> 0x0010
	 */
	struct FStaticMeshActorList
	{
	public:
		TArray<class AStaticMeshActor*>                            Actors;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct RareEngine.MemoryCommonData
	 * Size -> 0x0050
	 */
	struct FMemoryCommonData
	{
	public:
		float                                                      mUsedPhysicalMB;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mUsedPhysicalPercentage;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mAvailablePhysicalMB;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mAvailablePhysicalPercentage;                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mOOMBackupPoolSize;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mExecutableSize;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mConfigCacheMemoryUsage;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mFNameTableMemoryUsage;                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mAssetRegistrySize;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mGCWorkingMemoryPoolSizeMB;                              // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mGCAllocated;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mObjectsArraySizeMB;                                     // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mMaxObjectsAllowed;                                      // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumPermanentObjects;                                    // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumTransientObjects;                                    // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mUnsetSlotCound;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   mClusterMemoryUsedBytes;                                 // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumClusters;                                            // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumClusteredObjects;                                    // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mMaxClusterSize;                                         // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
