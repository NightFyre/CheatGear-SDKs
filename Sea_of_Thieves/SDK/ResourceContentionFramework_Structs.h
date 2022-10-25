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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfigurationEntry
	 * Size -> 0x0028
	 */
	struct FPoolableCollectionMapConfigurationEntry
	{
	public:
		TAssetPtr<class UClass>                                    Type;                                                    // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_HIAM[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    Size;                                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZBKN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfiguration
	 * Size -> 0x0018
	 */
	struct FPoolableCollectionMapConfiguration
	{
	public:
		TArray<struct FPoolableCollectionMapConfigurationEntry>    Pools;                                                   // 0x0000(0x0010) Edit, ZeroConstructor
		bool                                                       PopulateJustInTime;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MTW9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
