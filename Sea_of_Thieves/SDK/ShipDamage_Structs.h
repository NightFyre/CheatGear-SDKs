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
	 * Enum ShipDamage.EHullDamageDeck
	 */
	enum class EHullDamageDeck : uint8_t
	{
		Bottom = 0,
		Mid    = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ShipDamage.DistanceAndLevelOfDamage
	 * Size -> 0x0008
	 */
	struct FDistanceAndLevelOfDamage
	{
	public:
		float                                                      DistanceLimit;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LevelOfDamage;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ShipDamage.ShipPartLevelsOfDamage
	 * Size -> 0x0038
	 */
	struct FShipPartLevelsOfDamage
	{
	public:
		TAssetPtr<class UClass>                                    ActorClass;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GD2[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FDistanceAndLevelOfDamage>                   DamagePerDistance;                                       // 0x0020(0x0010) Edit, ZeroConstructor
		struct FFeatureFlag                                        FeatureName;                                             // 0x0030(0x0008) Edit
	};

	/**
	 * ScriptStruct ShipDamage.ShipDamageParams
	 * Size -> 0x0010
	 */
	struct FShipDamageParams
	{
	public:
		TArray<struct FShipPartLevelsOfDamage>                     DamageParams;                                            // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ShipDamage.HullDamageHit
	 * Size -> 0x001C
	 */
	struct FHullDamageHit
	{
	public:
		struct FVector                                             HitPosition;                                             // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HitNormal;                                               // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasDecal;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8HZC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShipDamage.HullDamageZoneInfo
	 * Size -> 0x0030
	 */
	struct FHullDamageZoneInfo
	{
	public:
		class FString                                              DamageZoneId;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    DamageLevel;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RepairedDamageLevel;                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERepairableState                                           RepairableState;                                         // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6J0M[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHullDamageHit>                              ExternalHitList;                                         // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShipDamage.HullDamagePersistenceModel
	 * Size -> 0x0010
	 */
	struct FHullDamagePersistenceModel : public FPersistenceModel
	{
	public:
		TArray<struct FHullDamageZoneInfo>                         DamageZones;                                             // 0x0000(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ShipDamage.EventShipDamageApplied
	 * Size -> 0x0070
	 */
	struct FEventShipDamageApplied
	{
	public:
		class AActor*                                              Ship;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DamagedShipPartIdentifier;                               // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewDamageLevel;                                          // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_22JX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImpactDamageEvent                                  ImpactDamageEvent;                                       // 0x0018(0x0058) BlueprintVisible
	};

	/**
	 * ScriptStruct ShipDamage.EventShipDamaged
	 * Size -> 0x0060
	 */
	struct FEventShipDamaged
	{
	public:
		class AActor*                                              Ship;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FImpactDamageEvent                                  ImpactDamageEvent;                                       // 0x0008(0x0058) BlueprintVisible
	};

	/**
	 * ScriptStruct ShipDamage.DamageZoneDamageLevelChanged
	 * Size -> 0x0010
	 */
	struct FDamageZoneDamageLevelChanged
	{
	public:
		class AActor*                                              DamageZone;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DamageLevel;                                             // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YJTD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShipDamage.AppliedDamageToShipEvent
	 * Size -> 0x0010
	 */
	struct FAppliedDamageToShipEvent
	{
	public:
		class UClass*                                              ShipType;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AActor*                                              Ship;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ShipDamage.ShipRestoredNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FShipRestoredNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct ShipDamage.SendShipRestoredRpc
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FSendShipRestoredRpc : public FBoxedRpc
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected
	};

	/**
	 * ScriptStruct ShipDamage.EventRestoreShip
	 * Size -> 0x0001
	 */
	struct FEventRestoreShip
	{
	public:
		bool                                                       OnlyRepaired;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
