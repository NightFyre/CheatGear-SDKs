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
	 * Enum EmissaryFramework.EEmisaryCompanyActionType
	 */
	enum class EEmisaryCompanyActionType : uint8_t
	{
		CompleteRiddleStep            = 0,
		CompleteRiddleQuest           = 1,
		CompleteXMarksTheSpotQuest    = 2,
		DefeatNamedSkeleton           = 3,
		CompleteBountyQuest           = 4,
		CompleteCargoRunStep          = 5,
		CompleteCargoRunQuest         = 6,
		CompleteMerchantStep          = 7,
		CompleteMerchantQuest         = 8,
		CompleteGhostShipQuest        = 9,
		MapPieceFound                 = 10,
		CompleteWayfinderVoyage       = 11,
		DiscoveredLostShipmentsClue   = 12,
		CompleteLostShipmentsVoyage   = 13,
		CompleteLegendOfTheVeilVoyage = 14,
		MAX                           = 15
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostServiceEvent
	 * Size -> 0x0018
	 */
	struct FEmissaryGlobalActionRewardBoostServiceEvent
	{
	public:
		class UClass*                                              FinishedEventType;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FGuid                                               AssociatedCrew;                                          // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryCompanyActionRewardBoostServiceEvent
	 * Size -> 0x001C
	 */
	struct FEmissaryCompanyActionRewardBoostServiceEvent
	{
	public:
		class FName                                                AssociatedCompany;                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEmisaryCompanyActionType                                  CompanyActionType;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GTU0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               AssociatedCrew;                                          // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostEvent
	 * Size -> 0x0008
	 */
	struct FEmissaryGlobalActionRewardBoostEvent
	{
	public:
		class UClass*                                              GameEventType;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryNonQuestCompanyActionRewardBoostEvent
	 * Size -> 0x0001
	 */
	struct FEmissaryNonQuestCompanyActionRewardBoostEvent
	{
	public:
		EEmisaryCompanyActionType                                  CompanyActionType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryQuestCompanyActionRewardBoostEvent
	 * Size -> 0x0014
	 */
	struct FEmissaryQuestCompanyActionRewardBoostEvent
	{
	public:
		EEmisaryCompanyActionType                                  CompanyActionType;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B9JP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               QuestId;                                                 // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
	 * Size -> 0x0010
	 */
	struct FEmissaryCompanyChangedEvent
	{
	public:
		unsigned char                                              UnknownData_3N2C[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EmissaryFramework.EmissaryLedgerVisited
	 * Size -> 0x0010
	 */
	struct FEmissaryLedgerVisited
	{
	public:
		class FString                                              CompanyId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
