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
	 * Enum Cooking.ECookingState
	 */
	enum class ECookingState : uint8_t
	{
		Raw         = 0,
		Undercooked = 1,
		Cooked      = 2,
		Burned      = 3,
		Fresh       = 4,
		MAX         = 5
	};

	/**
	 * Enum Cooking.ECookingSmokeFeedbackLevel
	 */
	enum class ECookingSmokeFeedbackLevel : uint8_t
	{
		NotCooking    = 0,
		Raw           = 1,
		CookedWarning = 2,
		Cooked        = 3,
		BurnedWarning = 4,
		Burned        = 5,
		MAX           = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Cooking.CookableComponentSmokeFeedbackTimingEntry
	 * Size -> 0x0008
	 */
	struct FCookableComponentSmokeFeedbackTimingEntry
	{
	public:
		float                                                      StateDuration;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECookingSmokeFeedbackLevel                                 StateFeedbackLevel;                                      // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_65B2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cooking.CookerSmokeFeedbackEntry
	 * Size -> 0x0010
	 */
	struct FCookerSmokeFeedbackEntry
	{
	public:
		ECookingSmokeFeedbackLevel                                 FeedbackLevel;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P2ZF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     SmokeVFX;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Cooking.CookingClientRepresentation
	 * Size -> 0x0068
	 */
	struct FCookingClientRepresentation
	{
	public:
		bool                                                       Cooking;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HasItem;                                                 // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INK9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemInfo*                                           CurrentlyCookingItem;                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                CurrentCookingItemDisplayName;                           // 0x0010(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_OIMG[0x20];                                  // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              CurrentCookingItemCategory;                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ECookingSmokeFeedbackLevel                                 SmokeFeedbackLevel;                                      // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_695U[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VisibleCookedExtent;                                     // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentItemPlacementAngle;                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CurrentCookableTypeName;                                 // 0x005C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QO5[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cooking.CookingInfo
	 * Size -> 0x000C
	 */
	struct FCookingInfo
	{
	public:
		unsigned char                                              UnknownData_AOW5[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cooking.OnRemovedItemFromCookingPot
	 * Size -> 0x0008
	 */
	struct FOnRemovedItemFromCookingPot
	{
	public:
		class AActor*                                              Interactor;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Cooking.OnPlacedItemInCookingPot
	 * Size -> 0x0010
	 */
	struct FOnPlacedItemInCookingPot
	{
	public:
		class AActor*                                              Interactor;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItemInfo*                                           ItemToCook;                                              // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Cooking.OnItemStartedCooking
	 * Size -> 0x0010
	 */
	struct FOnItemStartedCooking
	{
	public:
		unsigned char                                              UnknownData_77PM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cooking.OnItemStoppedCooking
	 * Size -> 0x0001
	 */
	struct FOnItemStoppedCooking
	{
	public:
		unsigned char                                              UnknownData_JTE0[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Cooking.CookEndTelemetryEvent
	 * Size -> 0x0030
	 */
	struct FCookEndTelemetryEvent
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		ECookingState                                              CookState;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LNJB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               CookId;                                                  // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Cooking.CookStartTelemetryEvent
	 * Size -> 0x0030
	 */
	struct FCookStartTelemetryEvent
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		ECookingState                                              CookState;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DZ2J[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               CookId;                                                  // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
