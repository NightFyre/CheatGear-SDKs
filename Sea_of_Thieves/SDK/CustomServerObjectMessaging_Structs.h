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
	 * ScriptStruct CustomServerObjectMessaging.CustomServerEvent
	 * Size -> 0x0018
	 */
	struct FCustomServerEvent
	{
	public:
		unsigned char                                              UnknownData_R02M[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EventID;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           ServerTimeUTC;                                           // 0x0010(0x0008) ZeroConstructor
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.EntityCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FEntityCustomServerEvent : public FCustomServerEvent
	{
	public:
		int32_t                                                    EntityNetId;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OM0A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnRelaodAmmoCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FOnRelaodAmmoCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    AvailableAmmoToAdd;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentAmmoAfterReload;                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnItemPlacedInChestCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FOnItemPlacedInChestCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ChestId;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemId;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnCannonBallHitShipCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FOnCannonBallHitShipCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              CannonBallType;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    ShipId;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5IQ1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerCharacterEnteredShipCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerCharacterEnteredShipCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    UserId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShipId;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FFortKeyUsedCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FTreasureSoldCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              CrewId;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              TreasureType;                                            // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              VendorId;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              CompanyId;                                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTreasurePickedUpCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FTreasureFoundCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              TreasureType;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FTreasureDroppedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              TreasureType;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             Position;                                                // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XYND[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TinySharkDespawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FTinySharkDespawnCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		unsigned char                                              Reason;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8AML[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.KrakenDespawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FKrakenDespawnCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		unsigned char                                              Reason;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SO2B[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FKrakenTentacleDestroyedCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FCookStartCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              FoodType;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FCookEndCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              FoodType;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              CookedState;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FShipSpawnedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              ShipType;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FShipRepairCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    UserId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShipId;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FShipOnFireEndCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FShipMastCollapseStateCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MastId;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FShipDestroyedCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FShipDamagedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    Damage;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GQ4L[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FProjectileWeaponFiredCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FProjectileHitCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              ProjectileType;                                          // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    RecipientId;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BIBX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerStatusEffectActivatedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              Effect;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerStatusEffectDeactivatedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              Effect;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerSpawnCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    PlayerStateId;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CharacterType;                                           // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YXTY[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerSetFootLocationCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              IslandName;                                              // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerRevivalCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		unsigned char                                              UnknownData_QDKY[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerRadialChatCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerLeftGhostShipCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerKillAICustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerItemUsageStartCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerItemUsageStartCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerItemUsageEndCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerItemRetrievalFromContainerCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              RetrievedItemName;                                       // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerItemEquipCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerItemAddToContainerCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerInReviveableStateCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerHeartbeatCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerHealthChangeCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerGameFishingStartedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerGameFishingStartedCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerEncounterStartCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		unsigned char                                              EncounterType;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N16K[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerEncounterEndCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		unsigned char                                              EncounterType;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SC3R[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerEmoteEndCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerEmoteEndCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              Emote;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerEmoteStartCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerEmoteStartCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              Emote;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerDeathCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    KillerID;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JAFF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerChangedShipLoadoutCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EZAI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerChangedLoadoutCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerCapstanUsageStartCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y2MC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerCapstanUsageEndCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CapstanState;                                            // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FPlayerBucketScoopCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerBucketEmptyCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		bool                                                       AtWielder;                                               // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EEG6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FPlayerActionCannonCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ShipId;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F99F[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FPlayerActionCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              Action;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMermaidUsedCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMeleeWeaponAttackCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    Type;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SIH8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapEndCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FCustomTriggerOverlapEndCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    OtherNetId;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NPPP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapBeginCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FCustomTriggerOverlapBeginCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    OtherNetId;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G2GL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FAISpawnCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              AIType;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FAIShipSpawnCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FAIShipDespawnCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAIShipDamagedCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		float                                                      AIShipWaterLevel;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KHAP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnCannonballLoadedOnCannonCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOnCannonballLoadedOnCannonCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerFiredFromCannonCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOnPlayerFiredFromCannonCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnEnemyDeathCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FOnEnemyDeathCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    KillerPlayerID;                                          // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BCM1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerDigCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FOnPlayerDigCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		struct FVector                                             Location;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L88W[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerStartsNPCInteractionCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FOnPlayerStartsNPCInteractionCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		class FString                                              NPCName;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerJoinsMapTableCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOnPlayerJoinsMapTableCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnHarpoonShotHitCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FOnHarpoonShotHitCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    ActorTetheredTo;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTEB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnHarpoonShotShotCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FOnHarpoonShotShotCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		int32_t                                                    HarpoonId;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JHYJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerInsideCannonCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOnPlayerInsideCannonCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnPlayerAteCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FOnPlayerAteCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ShipSinkingCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FShipSinkingCustomServerEvent : public FEntityCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.HoleFixedForShipCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FHoleFixedForShipCustomServerEvent : public FEntityCustomServerEvent
	{
	public:
		float                                                      RepairPercentage;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RepairingActor;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RepairCompleted;                                         // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O8OU[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.GlobalCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FGlobalCustomServerEvent : public FCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMermaidSpawnedCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		struct FVector                                             Position;                                                // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    PlayerId;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.PlayerLookingAtMapCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FPlayerLookingAtMapCustomServerEvent : public FGlobalCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnQuestStartedCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FOnQuestStartedCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		unsigned char                                              QuestType;                                               // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_00ZN[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               CrewId;                                                  // 0x001C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1YLJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnVoyageStartedCustomServerEvent
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FOnVoyageStartedCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              CompanyDisplayName;                                      // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Rank;                                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K2B2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnVoyageCancelledCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FOnVoyageCancelledCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              AssociatedCrew;                                          // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnVoyageAcceptedCustomServerEvent
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOnVoyageAcceptedCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              CompanyDisplayName;                                      // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    Rank;                                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X0AR[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.OnQuestAcceptedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FOnQuestAcceptedCustomServerEvent : public FGlobalCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FWatercraftDespawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		int32_t                                                    WatercraftId;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0SVY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FTreasureSpawnedCustomServerEvent : public FGlobalCustomServerEvent
	{	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FKrakenSpawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TrackedShipId;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KrakenId;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfTentacles;                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfKilledTentaclesToDismissKraken;                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VA47[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FWatercraftSpawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		int32_t                                                    EntityNetId;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0V58[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ActorSpawnCustomServerEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FActorSpawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		int32_t                                                    EntityNetId;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRUE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FItemSpawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		int32_t                                                    EntityNetId;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PQ5Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemType;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FFortWaveCompletedCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              InCrewId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FCrewSessionLeaveCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              CrewId;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FCrewPlayerLeftCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		class FString                                              CrewId;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    PlayerId;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J43H[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FTinySharkSpawnCustomServerEvent : public FGlobalCustomServerEvent
	{
	public:
		int32_t                                                    TinySharkId;                                             // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnLocation;                                           // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    TrackedShipId;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9P25[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
