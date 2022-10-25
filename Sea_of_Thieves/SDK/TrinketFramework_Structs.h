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
	 * ScriptStruct TrinketFramework.ChestEntitlementTrinketItem
	 * Size -> 0x0028
	 */
	struct FChestEntitlementTrinketItem
	{
	public:
		class FString                                              ItemDesc;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    PlacedValue;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlacedThreshold;                                         // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              OwnerGamerTag;                                           // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct TrinketFramework.TrinketLoadoutEntry
	 * Size -> 0x0018
	 */
	struct FTrinketLoadoutEntry
	{
	public:
		class UClass*                                              Trinket;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FString                                              TrinketOwnerPlayerXuid;                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct TrinketFramework.TrinketLoadout
	 * Size -> 0x0010
	 */
	struct FTrinketLoadout
	{
	public:
		TArray<struct FTrinketLoadoutEntry>                        TrinketEntries;                                          // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct TrinketFramework.RemoveInteractingPlayerFromTrinketMountpointRpc
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FRemoveInteractingPlayerFromTrinketMountpointRpc : public FBoxedRpc
	{
	public:
		struct FNetSubObjectPtr                                    TrinketMountpointManager;                                // 0x0010(0x0014)
		int32_t                                                    MountpointIndex;                                         // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct TrinketFramework.TrinketLoadoutUpdatedEvent
	 * Size -> 0x0010
	 */
	struct FTrinketLoadoutUpdatedEvent
	{
	public:
		unsigned char                                              UnknownData_DGXT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TrinketFramework.TrinketLoadoutModelEntry
	 * Size -> 0x0020
	 */
	struct FTrinketLoadoutModelEntry
	{
	public:
		class FName                                                EntitlementId;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LocationIndex;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1KFD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserId;                                                  // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct TrinketFramework.TrinketLoadoutModel
	 * Size -> 0x0010
	 */
	struct FTrinketLoadoutModel : public FPersistenceModel
	{
	public:
		TArray<struct FTrinketLoadoutModelEntry>                   Trinkets;                                                // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct TrinketFramework.EventTrinketSetReady
	 * Size -> 0x0010
	 */
	struct FEventTrinketSetReady
	{
	public:
		unsigned char                                              UnknownData_57G4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TrinketFramework.RequestTrinketChestItemInfoEvent
	 * Size -> 0x0001
	 */
	struct FRequestTrinketChestItemInfoEvent
	{
	public:
		unsigned char                                              UnknownData_BQEA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TrinketFramework.RequestTrinketLoadoutUIEvent
	 * Size -> 0x0010
	 */
	struct FRequestTrinketLoadoutUIEvent
	{
	public:
		TArray<class FString>                                      Categories;                                              // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct TrinketFramework.RequestTrinketEntitlementsUIEvent
	 * Size -> 0x0010
	 */
	struct FRequestTrinketEntitlementsUIEvent
	{
	public:
		class FString                                              TrinketCategory;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct TrinketFramework.RequestUnequipTrinketsOfClassUIEvent
	 * Size -> 0x0010
	 */
	struct FRequestUnequipTrinketsOfClassUIEvent
	{
	public:
		class FString                                              TrinketDesc;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
