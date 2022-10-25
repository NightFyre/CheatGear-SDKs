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
	 * Enum CommodityDemandFramework.ECommodityDemand
	 */
	enum class ECommodityDemand : uint8_t
	{
		None   = 0,
		Low    = 1,
		Normal = 2,
		High   = 3,
		MAX    = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CommodityDemandFramework.ActiveCommodityDemands
	 * Size -> 0x0020
	 */
	struct FActiveCommodityDemands
	{
	public:
		TArray<uint32_t>                                           CommodityIdHashes;                                       // 0x0000(0x0010) ZeroConstructor
		TArray<ECommodityDemand>                                   CommodityDemands;                                        // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CommodityDemandFramework.ActiveNPCDemands
	 * Size -> 0x0020
	 */
	struct FActiveNPCDemands
	{
	public:
		TArray<uint32_t>                                           NPCIdHashes;                                             // 0x0000(0x0010) ZeroConstructor
		TArray<struct FActiveCommodityDemands>                     NPCDemands;                                              // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct CommodityDemandFramework.CommoditySelectionType
	 * Size -> 0x0008
	 */
	struct FCommoditySelectionType
	{
	public:
		class FName                                                CommodityType;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CommodityDemandFramework.CommodityDescWithRedeemId
	 * Size -> 0x0010
	 */
	struct FCommodityDescWithRedeemId
	{
	public:
		struct FCommoditySelectionType                             RedeemId;                                                // 0x0000(0x0008) Edit, DisableEditOnInstance
		class UClass*                                              RedeemItemDesc;                                          // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CommodityDemandFramework.EntitlementToRedeemItems
	 * Size -> 0x0018
	 */
	struct FEntitlementToRedeemItems
	{
	public:
		class UClass*                                              RequiredEntitlement;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FCommodityDescWithRedeemId>                  RedeemItems;                                             // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct CommodityDemandFramework.CommodityTypeDataEntry
	 * Size -> 0x0010
	 */
	struct FCommodityTypeDataEntry
	{
	public:
		class FName                                                CommodityType;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DisplayName;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CommodityDemandFramework.EventCommodityCrateRedeemed
	 * Size -> 0x0018
	 */
	struct FEventCommodityCrateRedeemed
	{
	public:
		unsigned char                                              UnknownData_YVPD[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CommodityDemandFramework.CommodityRedemptionTrackingModel
	 * Size -> 0x0010
	 */
	struct FCommodityRedemptionTrackingModel
	{
	public:
		uint16_t                                                   EntitlementDesc;                                         // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              NPCName;                                                 // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_50AB[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    TickWhenTracked;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CommodityDemandFramework.CommodityTrackingModel
	 * Size -> 0x0020
	 */
	struct FCommodityTrackingModel
	{
	public:
		struct FGuid                                               ItemOfferId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              NPCName;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K12B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    TickWhenTracked;                                         // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CommodityDemandFramework.TrackCommodityPurchaseOnServerRpc
	 * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
	 */
	struct FTrackCommodityPurchaseOnServerRpc : public FBoxedRpc
	{
	public:
		class UObject*                                             CommodityDemandStorageObject;                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class FName                                                NPCName;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FGuid                                               ItemOfferId;                                             // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
		class FString                                              ItemClientId;                                            // 0x0030(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
