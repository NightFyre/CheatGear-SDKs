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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CommodityDemandFramework.CommodityTokenEntitlementDesc
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UCommodityTokenEntitlementDesc : public UEntitlementDesc
	{
	public:
		class FName                                                NPCToRedeemAt;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UClass*                                              ItemToRedeemFor;                                         // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandFrameworkEditorSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UCommodityDemandFrameworkEditorSettings : public UDeveloperSettings
	{
	public:
		struct FStringAssetReference                               CommodityDataFileLocation;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandFrameworkSettings
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UCommodityDemandFrameworkSettings : public UDeveloperSettings
	{
	public:
		float                                                      DemandRefreshFrequencyInSeconds;                         // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DemandCollectionId;                                      // 0x003C(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CommodityPurchaseLockoutInGameDays;                      // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InGameHourWhenCommoditiesRestock;                        // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MCYJ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameTime                                           CommodityRedemptionTimeOutPeriodInDays;                  // 0x0050(0x0008) Edit, Config
		struct FStringAssetReference                               NPCListAsset;                                            // 0x0058(0x0010) Edit, ZeroConstructor, Config

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommodityDemandServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandService
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class ACommodityDemandService : public AActor
	{
	public:
		unsigned char                                              UnknownData_OLAU[0x20];                                  // 0x03C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FActiveNPCDemands                                   ActiveCommodityDemands;                                  // 0x03E8(0x0020) Net, RepNotify

	public:
		void OnRep_ActiveCommodityDemands();
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandStorageInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommodityDemandStorageInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityDemandStorageProviderInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommodityDemandStorageProviderInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityEntitlementRedemptionAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCommodityEntitlementRedemptionAsset : public UDataAsset
	{
	public:
		TArray<struct FEntitlementToRedeemItems>                   CommoditiesForRedemption;                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityItemDesc
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UCommodityItemDesc : public UBootyItemDesc
	{
	public:
		struct FCommoditySelectionType                             CommodityType;                                           // 0x0120(0x0008) Edit, DisableEditOnInstance
		ECommodityDemand                                           CommodityDemand;                                         // 0x0128(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1JNE[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityPurchaseTrackingComponent
	 * Size -> 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
	 */
	class UCommodityPurchaseTrackingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_W0SX[0x80];                                  // 0x00C8(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityRedemptionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommodityRedemptionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityRedemptionComponent
	 * Size -> 0x00C8 (FullSize[0x0190] - InheritedSize[0x00C8])
	 */
	class UCommodityRedemptionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Z9FO[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                RedeemTooltipText;                                       // 0x00D0(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_UE0U[0x20];                                  // 0x00E8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_SHJS[0x78];                                  // 0x0108(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      PendingRedemptions;                                      // 0x0180(0x0010) ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommoditySourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommoditySourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommoditySourceComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class UCommoditySourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TN13[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NPCIdentifier;                                           // 0x00D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                IslandIdentifier;                                        // 0x00D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CommodityTypeDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCommodityTypeDataAsset : public UDataAsset
	{
	public:
		TArray<struct FCommodityTypeDataEntry>                     CommodityEntries;                                        // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CrateFillerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrateFillerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.CrateFillerComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UCrateFillerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OAOW[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.DeliverableCommodityRequirement
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDeliverableCommodityRequirement : public UDeliverableRequirementBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.IsWieldedCommodityItemInDemandStatCondition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UIsWieldedCommodityItemInDemandStatCondition : public UTargetedStatCondition
	{
	public:
		ECommodityDemand                                           CommodityDemand;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q6RG[0x1F];                                  // 0x0031(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.SpecificItemsCrateFillerComponent
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	class USpecificItemsCrateFillerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_RZDX[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStorageContainerNode>                       ItemsToFillCrateWith;                                    // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CommodityDemandFramework.WasWieldedCommodityItemBoughtAtDemandStatCondition
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UWasWieldedCommodityItemBoughtAtDemandStatCondition : public UTargetedStatCondition
	{
	public:
		ECommodityDemand                                           CommodityDemand;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_96LI[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
