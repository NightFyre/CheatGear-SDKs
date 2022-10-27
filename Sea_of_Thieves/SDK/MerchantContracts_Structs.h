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
	 * ScriptStruct MerchantContracts.ItemAndReward
	 * Size -> 0x0010
	 */
	struct FItemAndReward
	{
	public:
		class UClass*                                              ItemDesc;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FRewardId                                           HandInOnTimeRewardId;                                    // 0x0008(0x0008) Edit, BlueprintVisible
	};

	/**
	 * ScriptStruct MerchantContracts.MerchantContractItemDesc
	 * Size -> 0x0028
	 */
	struct FMerchantContractItemDesc
	{
	public:
		class UClass*                                              AllocatedCrate;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FItemAndReward>                              ItemData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class UClass*                                              FaunaSpecies;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              FaunaBreed;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct MerchantContracts.MerchantContractDeliveryRequest
	 * Size -> 0x0040
	 */
	struct FMerchantContractDeliveryRequest
	{
	public:
		int32_t                                                    Id;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UP9M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMerchantContractItemDesc                           ItemDesc;                                                // 0x0008(0x0028)
		int32_t                                                    NumToAllocate;                                           // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumToCollect;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumToDeliver;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RW8[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MerchantContracts.MerchantContract
	 * Size -> 0x00C0
	 */
	struct FMerchantContract
	{
	public:
		unsigned char                                              UnknownData_UPW0[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMerchantContractDeliveryRequest>            DeliveryRequests;                                        // 0x0018(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_G5LY[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MerchantContracts.PlayerMerchantContract
	 * Size -> 0x0028
	 */
	struct FPlayerMerchantContract
	{
	public:
		struct FGuid                                               Id;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                IslandName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FMerchantContractDeliveryRequest>            Requests;                                                // 0x0018(0x0010) ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
