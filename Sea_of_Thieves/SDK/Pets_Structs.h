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
	 * Enum Pets.EPetDangerHearingResponseType
	 */
	enum class EPetDangerHearingResponseType : uint8_t
	{
		RunAway          = 0,
		RunToHangoutSpot = 1,
		TurnToward       = 2,
		RunToOwner       = 3,
		MAX              = 4,
		MAX01            = 5
	};

	/**
	 * Enum Pets.EPetDangerHearingTarget
	 */
	enum class EPetDangerHearingTarget : uint8_t
	{
		None     = 0,
		Owner    = 1,
		Crew     = 2,
		Alliance = 3,
		MAX      = 4
	};

	/**
	 * Enum Pets.EHangoutRotationMode
	 */
	enum class EHangoutRotationMode : uint8_t
	{
		Match     = 0,
		Randomise = 1,
		MAX       = 2
	};

	/**
	 * Enum Pets.EWieldablePetDropRequestReason
	 */
	enum class EWieldablePetDropRequestReason : uint8_t
	{
		None      = 0,
		Submerged = 1,
		Escaped   = 2,
		MAX       = 3
	};

	/**
	 * Enum Pets.EPetFeedingReactionType
	 */
	enum class EPetFeedingReactionType : uint8_t
	{
		None  = 0,
		Sick  = 1,
		Happy = 2,
		MAX   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Pets.HangoutSpotId
	 * Size -> 0x0008
	 */
	struct FHangoutSpotId
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetHangoutSpotParams
	 * Size -> 0x00B8
	 */
	struct FPetHangoutSpotParams
	{
	public:
		class UClass*                                              PetType;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FFloatRange                                         HangoutTime;                                             // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FWeightedPetAnimationSelector                       AnimationSelector;                                       // 0x0018(0x00A0) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Pets.HangoutSpotParams
	 * Size -> 0x0028
	 */
	struct FHangoutSpotParams
	{
	public:
		class FName                                                HangoutSpotName;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GH33[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPetHangoutSpotParams>                       PetParams;                                               // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FName                                                FeatureName;                                             // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetCustomiationOverrideMappingEntry
	 * Size -> 0x0018
	 */
	struct FPetCustomiationOverrideMappingEntry
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UPetCustomisationOverrideDataAsset*                  OverrideAsset;                                           // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetDangerHearingThreatResponse
	 * Size -> 0x0003
	 */
	struct FPetDangerHearingThreatResponse
	{
	public:
		EPetDangerHearingResponseType                              Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPetDangerHearingTarget                                    IgnoredTarget;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertIgnoredTarget;                                     // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.PetDangerHearingThreat
	 * Size -> 0x0020
	 */
	struct FPetDangerHearingThreat
	{
	public:
		class FName                                                SoundTag;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeForgotten;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_78HR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPetDangerHearingThreatResponse>             Responses;                                               // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Pets.PetFeedingAnimationData
	 * Size -> 0x0008
	 */
	struct FPetFeedingAnimationData
	{
	public:
		EAthenaAnimationPetRoamingState                            AnimationState;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P0YP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationTimeout;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetFeedingParams
	 * Size -> 0x0038
	 */
	struct FPetFeedingParams
	{
	public:
		struct FPetFeedingAnimationData                            EatingAnimData;                                          // 0x0000(0x0008) Edit
		struct FPetFeedingAnimationData                            FedAnimData;                                             // 0x0008(0x0008) Edit
		struct FPetFeedingAnimationData                            NotFedAnimData;                                          // 0x0010(0x0008) Edit
		struct FPetFeedingAnimationData                            SickAnimData;                                            // 0x0018(0x0008) Edit
		struct FPetFeedingAnimationData                            RefusalAnimData;                                         // 0x0020(0x0008) Edit
		float                                                      TimeToStartEating;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeUntilGivingUp;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistToleranceSquared;                                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationTolerance;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.HangoutSpotPosition
	 * Size -> 0x0080
	 */
	struct FHangoutSpotPosition
	{
	public:
		struct FHangoutSpotId                                      Id;                                                      // 0x0000(0x0008) Edit
		unsigned char                                              UnknownData_KQRU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor
		EHangoutRotationMode                                       RotationMode;                                            // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EShipDeck                                                  ShipDeck;                                                // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K4ZL[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Occupier;                                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M46K[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsPerch;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NeedOverrideInteractionPoint;                            // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SHM4[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OverrideInteractionPointPosition;                        // 0x0064(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BlockPetEmoteReactions;                                  // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IgnorePickupFromHangoutTooltipDisplayOffset;             // 0x0071(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1HT[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetCustomisation
	 * Size -> 0x0028
	 */
	struct FPetCustomisation
	{
	public:
		class FString                                              DefaultPetName;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PetName;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FAIPartId                                           PetPartId;                                               // 0x0020(0x0008) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct Pets.PetListingTypeEntry
	 * Size -> 0x0038
	 */
	struct FPetListingTypeEntry
	{
	public:
		struct FStringAssetReference                               PetPartsCategory;                                        // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FStringClassReference                               PetType;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class FName                                                FeatureToggleName;                                       // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PetListingName;                                          // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetsServiceParams
	 * Size -> 0x0038
	 */
	struct FPetsServiceParams
	{
	public:
		uint32_t                                                   MaximumDistanceFromOwner;                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   ProximityRadius;                                         // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPetsInProximity;                                      // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RespawnRequestTimeout;                                   // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnTimeDelay;                                          // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPetProximityLifespan;                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPetProximityLifespan;                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPetProximityRespawnDelay;                             // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPetProximityRespawnDelay;                             // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeldPetDespawnDelay;                                     // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      IllegalShipsSizesForSpawn;                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct Pets.PetRelationship
	 * Size -> 0x0020
	 */
	struct FPetRelationship
	{
	public:
		class APetItemInfo*                                        PetInfo;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VP0W[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.ReactStateMapping
	 * Size -> 0x00D8
	 */
	struct FReactStateMapping
	{
	public:
		class FName                                                AnimationID;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanTimeout;                                              // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V83I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationTimeout;                                        // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedPetAnimationSelector                       PetStateSelector;                                        // 0x0010(0x00A0) Edit, DisableEditOnInstance
		float                                                      AnimationChance;                                         // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         AnimationDelay;                                          // 0x00B4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4M8B[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      IgnoringStrategies;                                      // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct Pets.WieldablePetDropTimeout
	 * Size -> 0x0008
	 */
	struct FWieldablePetDropTimeout
	{
	public:
		EWieldablePetDropRequestReason                             RequestReason;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C39R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DropDelay;                                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.WieldablePetFoodSourceEntry
	 * Size -> 0x0010
	 */
	struct FWieldablePetFoodSourceEntry
	{
	public:
		class AActor*                                              FoodSourceActor;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeUntilConsumption;                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XANZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.WieldablePetHungerAnimationData
	 * Size -> 0x0008
	 */
	struct FWieldablePetHungerAnimationData
	{
	public:
		EAthenaAnimationPetHeldReactionState                       AnimState;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_35G0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimTimeout;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetTurnToFaceData
	 * Size -> 0x0020
	 */
	struct FPetTurnToFaceData
	{
	public:
		struct FQuat                                               EndRotation;                                             // 0x0000(0x0010) IsPlainOldData, NoDestructor
		float                                                      RotationTime;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_450U[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventWieldablePetPendingDrop
	 * Size -> 0x0001
	 */
	struct FEventWieldablePetPendingDrop
	{
	public:
		EWieldablePetDropRequestReason                             DropRequestReason;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventNewPetThreatDetected
	 * Size -> 0x0001
	 */
	struct FEventNewPetThreatDetected
	{
	public:
		unsigned char                                              UnknownData_7541[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetDismissed
	 * Size -> 0x0008
	 */
	struct FEventPetDismissed
	{
	public:
		class AActor*                                              DismissingActor;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.DismissPetNotificationEvent
	 * Size -> 0x0001
	 */
	struct FDismissPetNotificationEvent
	{
	public:
		unsigned char                                              UnknownData_SREM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetFoodBase
	 * Size -> 0x0010
	 */
	struct FEventPetFoodBase
	{
	public:
		struct FGuid                                               FeedingInteractionId;                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.EventPetRefusedFood
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEventPetRefusedFood : public FEventPetFoodBase
	{
	public:
		class AActor*                                              FeedingActor;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetReactedToFood
	 * Size -> 0x0004 (FullSize[0x0014] - InheritedSize[0x0010])
	 */
	struct FEventPetReactedToFood : public FEventPetFoodBase
	{
	public:
		EPetFeedingReactionType                                    ReactionType;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J809[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetNotFed
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEventPetNotFed : public FEventPetFoodBase
	{
	public:
		class AActor*                                              FeedingActor;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetFed
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FEventPetFed : public FEventPetFoodBase
	{
	public:
		class AActor*                                              FedWithActor;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              FeedingActor;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetPerchSpotEnabledStateChanged
	 * Size -> 0x0001
	 */
	struct FEventPetPerchSpotEnabledStateChanged
	{
	public:
		unsigned char                                              UnknownData_C14J[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetLeftHangout
	 * Size -> 0x0008
	 */
	struct FEventPetLeftHangout
	{
	public:
		class AActor*                                              Pet;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetEnteredHangout
	 * Size -> 0x0002
	 */
	struct FEventPetEnteredHangout
	{
	public:
		unsigned char                                              UnknownData_OZZO[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetSadnessEnd
	 * Size -> 0x0001
	 */
	struct FEventPetSadnessEnd
	{
	public:
		unsigned char                                              UnknownData_TAV5[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetSadnessBegin
	 * Size -> 0x0001
	 */
	struct FEventPetSadnessBegin
	{
	public:
		unsigned char                                              UnknownData_C83J[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetOwnerAssigned
	 * Size -> 0x0008
	 */
	struct FEventPetOwnerAssigned
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetCustomisationComplete
	 * Size -> 0x0001
	 */
	struct FEventPetCustomisationComplete
	{
	public:
		unsigned char                                              UnknownData_ROKG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetCustomisationReady
	 * Size -> 0x0010
	 */
	struct FEventPetCustomisationReady
	{
	public:
		unsigned char                                              UnknownData_5W4R[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventWieldablePetPutOnPerch
	 * Size -> 0x0020
	 */
	struct FEventWieldablePetPutOnPerch
	{
	public:
		class AActor*                                              Pet;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HangoutSpotName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		uint32_t                                                   HangoutSpotIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TWeakObjectPtr<class AActor>                               WieldingActor;                                           // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_00DW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetDropped
	 * Size -> 0x0001
	 */
	struct FEventPetDropped
	{
	public:
		unsigned char                                              UnknownData_3L0I[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetPickedUp
	 * Size -> 0x0001
	 */
	struct FEventPetPickedUp
	{
	public:
		bool                                                       IsOnPerch;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.EventPetReactBegun
	 * Size -> 0x000C
	 */
	struct FEventPetReactBegun
	{
	public:
		class FName                                                ReactId;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAthenaAnimationPetRoamingState                            ReactState;                                              // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7307[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventPetReactCancellation
	 * Size -> 0x0010
	 */
	struct FEventPetReactCancellation
	{
	public:
		class AActor*                                              ReactSource;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReactId;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetReactRequest
	 * Size -> 0x0010
	 */
	struct FEventPetReactRequest
	{
	public:
		class AActor*                                              ReactSource;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReactId;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.RespawnPetEvent
	 * Size -> 0x0008
	 */
	struct FRespawnPetEvent
	{
	public:
		class AActor*                                              PetOwner;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetEndPlay
	 * Size -> 0x0008
	 */
	struct FEventPetEndPlay
	{
	public:
		class APawn*                                               LinkedPet;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPetSpawnedForShip
	 * Size -> 0x0010
	 */
	struct FEventPetSpawnedForShip
	{
	public:
		class APawn*                                               LinkedPet;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LinkedShip;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetBaseTelemetryFragmentInput
	 * Size -> 0x0008
	 */
	struct FPetBaseTelemetryFragmentInput : public FTelemetryFragmentInput
	{
	public:
		TWeakObjectPtr<class AActor>                               PetInfo;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct Pets.PetBaseTelemetryFragment
	 * Size -> 0x0030
	 */
	struct FPetBaseTelemetryFragment
	{
	public:
		class FString                                              OwnerId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              PetPartId;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		EItemRepresentation                                        CurrentPetRepresentation;                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L9SD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PetLocation;                                             // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.WieldablePetPutOnPerchTelemetryEvent
	 * Size -> 0x0028
	 */
	struct FWieldablePetPutOnPerchTelemetryEvent
	{
	public:
		class FString                                              HangoutSpotName;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		uint32_t                                                   HangoutSpotIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WWGP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WieldingActorTelemetrySubjectId;                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.PetDismissedTelemetryEvent
	 * Size -> 0x0001
	 */
	struct FPetDismissedTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_GXKY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetRefusedFoodTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FPetRefusedFoodTelemetryEvent
	{
	public:
		class FString                                              TryingToFeedPlayerId;                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               FeedingInteractionId;                                    // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.PetReactedToFoodTelemetryEvent
	 * Size -> 0x0014
	 */
	struct FPetReactedToFoodTelemetryEvent
	{
	public:
		struct FGuid                                               FeedingInteractionId;                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		EPetFeedingReactionType                                    FeedingReaction;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BL67[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetNotFedTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FPetNotFedTelemetryEvent
	{
	public:
		class FString                                              IgnoringPlayerId;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               FeedingInteractionId;                                    // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.PetFedTelemetryEvent
	 * Size -> 0x0030
	 */
	struct FPetFedTelemetryEvent
	{
	public:
		class FString                                              FedWithItemId;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              FeedingPlayerId;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               FeedingInteractionId;                                    // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.PetReactedTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FPetReactedTelemetryEvent
	{
	public:
		class FString                                              ReactId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		EAthenaAnimationPetRoamingState                            AnimationState;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4BSZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetDroppedTelemetryEvent
	 * Size -> 0x0001
	 */
	struct FPetDroppedTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_0K3X[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetPickedUpTelemetryEvent
	 * Size -> 0x0001
	 */
	struct FPetPickedUpTelemetryEvent
	{
	public:
		bool                                                       IsOnPerch;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Pets.PetControllerSetTickOrderEvent
	 * Size -> 0x0008
	 */
	struct FPetControllerSetTickOrderEvent
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Pets.EventPerchHangoutSpotSetEnabledState
	 * Size -> 0x000C
	 */
	struct FEventPerchHangoutSpotSetEnabledState
	{
	public:
		unsigned char                                              UnknownData_WARG[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventHangoutSpotMadeAvailable
	 * Size -> 0x0050
	 */
	struct FEventHangoutSpotMadeAvailable
	{
	public:
		unsigned char                                              UnknownData_C1TU[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventHangoutSpotMadeUnavailable
	 * Size -> 0x0050
	 */
	struct FEventHangoutSpotMadeUnavailable
	{
	public:
		unsigned char                                              UnknownData_70KQ[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetDespawnActionStateParams
	 * Size -> 0x0040
	 */
	struct FPetDespawnActionStateParams
	{
	public:
		float                                                      TakeOffHeight;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TakeOffTime;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalGhostShaderTime;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToTriggerVFX;                                        // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             DespawnVFX;                                              // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DespawnVFXColour;                                        // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UWwiseEvent*                                         DespawnSFX;                                              // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopDespawnSFX;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalDespawningTime;                                     // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JZ0T[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.PetSpawnActionStateConstructionInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FPetSpawnActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{	};

	/**
	 * ScriptStruct Pets.PetSpawnActionStateParams
	 * Size -> 0x0040
	 */
	struct FPetSpawnActionStateParams
	{
	public:
		float                                                      LandingHeight;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandingTime;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalGhostShaderTime;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToTriggerVFX;                                        // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             SpawnVFX;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SpawnVFXColour;                                          // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UWwiseEvent*                                         SpawnSFX;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopSpawnSFX;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalSpawningTime;                                       // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FQSF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Pets.EventWieldablePetHungerStateUpdated
	 * Size -> 0x0001
	 */
	struct FEventWieldablePetHungerStateUpdated
	{
	public:
		EAthenaAnimationPetHeldReactionState                       NewState;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
