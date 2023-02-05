#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Enum DungeonCrawler.EAoeFilterSortingType
	 */
	enum class EAoeFilterSortingType : uint8_t
	{
		Ascending = 0,
		Desending = 1,
		MAX       = 2
	};

	/**
	 * Enum DungeonCrawler.EMetaState
	 */
	enum class EMetaState : uint8_t
	{
		None            = 0,
		Login           = 1,
		CharacterSelect = 2,
		Lobby           = 3,
		InGame          = 4,
		MAX             = 5
	};

	/**
	 * Enum DungeonCrawler.EServicePolicyType
	 */
	enum class EServicePolicyType : uint8_t
	{
		None                       = 0,
		ChatMaxLength              = 1,
		ChatResendTime             = 2,
		ChatMaxLine                = 3,
		TradeChannelChatResendTime = 4,
		TradeChannelChatMaxLine    = 5,
		HighRollerEntraceFeeGold   = 6,
		MatchCancelDelayTime       = 7,
		MAX                        = 8
	};

	/**
	 * Enum DungeonCrawler.ETradeState
	 */
	enum class ETradeState : uint8_t
	{
		None           = 0,
		TradeChannel   = 1,
		Trading        = 2,
		TradingConfirm = 3,
		MAX            = 4
	};

	/**
	 * Enum DungeonCrawler.EContextOptionType
	 */
	enum class EContextOptionType : uint8_t
	{
		None              = 0,
		TradeRequest      = 1,
		Whisper           = 2,
		Block             = 3,
		Equip             = 4,
		Unequip           = 5,
		KickPartyMember   = 6,
		InvitePartyMember = 7,
		Unblock           = 8,
		MAX               = 9
	};

	/**
	 * Enum DungeonCrawler.EAccountLinkType
	 */
	enum class EAccountLinkType : uint8_t
	{
		Static           = 0,
		PlayerController = 1,
		PlayerPawn       = 2,
		Dynamic          = 3,
		MAX              = 4
	};

	/**
	 * Enum DungeonCrawler.EAccountLinkFlag
	 */
	enum class EAccountLinkFlag : uint8_t
	{
		None               = 0,
		AccountSessionData = 1,
		Attribute          = 2,
		GameplayTag        = 3,
		ActorStatus        = 4,
		Inventory          = 5,
		Perk               = 6,
		Skill              = 7,
		PartySessionData   = 8,
		MAX                = 9
	};

	/**
	 * Enum DungeonCrawler.EGameplayEffectType
	 */
	enum class EGameplayEffectType : uint8_t
	{
		MMC             = 0,
		MMCSimple       = 1,
		InfiniteTagOnly = 2,
		DurationTagOnly = 3,
		ItemProperty    = 4,
		MAX             = 5
	};

	/**
	 * Enum DungeonCrawler.EGameplayEffectTargetType
	 */
	enum class EGameplayEffectTargetType : uint8_t
	{
		Owner     = 0,
		EventData = 1,
		MAX       = 2
	};

	/**
	 * Enum DungeonCrawler.EItemType
	 */
	enum class EItemType : uint8_t
	{
		None      = 0,
		Weapon    = 1,
		Armor     = 2,
		Utility   = 3,
		Accessory = 4,
		Misc      = 5,
		MAX       = 6
	};

	/**
	 * Enum DungeonCrawler.EItemRequirementType
	 */
	enum class EItemRequirementType : uint8_t
	{
		Class       = 0,
		Strength    = 1,
		Agility     = 2,
		Will        = 3,
		Knowledge   = 4,
		Resourceful = 5,
		Perk        = 6,
		MAX         = 7
	};

	/**
	 * Enum DungeonCrawler.EDCGender
	 */
	enum class EDCGender : uint8_t
	{
		None  = 0,
		Man   = 1,
		Woman = 2,
		MAX   = 3
	};

	/**
	 * Enum DungeonCrawler.ELogEventType
	 */
	enum class ELogEventType : uint8_t
	{
		None             = 0,
		PlayerKill       = 1,
		DungeonDown      = 2,
		MonsterKill      = 3,
		PropsInteraction = 4,
		ItemAcheive      = 5,
		MAX              = 6
	};

	/**
	 * Enum DungeonCrawler.EChatSetType
	 */
	enum class EChatSetType : uint8_t
	{
		None         = 0,
		TradeChannel = 1,
		TradePrivate = 2,
		Party        = 3,
		MAX          = 4
	};

	/**
	 * Enum DungeonCrawler.EChatType
	 */
	enum class EChatType : uint8_t
	{
		None    = 0,
		Normal  = 1,
		Whisper = 2,
		MAX     = 3
	};

	/**
	 * Enum DungeonCrawler.EChatWidgetType
	 */
	enum class EChatWidgetType : uint8_t
	{
		None        = 0,
		System      = 1,
		Normal      = 2,
		Mine        = 3,
		WhisperFrom = 4,
		WhisperTo   = 5,
		Party       = 6,
		MAX         = 7
	};

	/**
	 * Enum DungeonCrawler.EDCMorphTarget
	 */
	enum class EDCMorphTarget : uint8_t
	{
		None      = 0,
		FrontHair = 1,
		MidHair   = 2,
		BackHair  = 3,
		Beard     = 4,
		Sleeve    = 5,
		MAX       = 6
	};

	/**
	 * Enum DungeonCrawler.EDCCharacterClass
	 */
	enum class EDCCharacterClass : uint8_t
	{
		None      = 0,
		Wizard    = 1,
		Rogue     = 2,
		Ranger    = 3,
		Fighter   = 4,
		Cleric    = 5,
		Barbarian = 6,
		MAX       = 7
	};

	/**
	 * Enum DungeonCrawler.EHitBoxType
	 */
	enum class EHitBoxType : uint8_t
	{
		None = 0,
		Head = 1,
		Body = 2,
		Arm  = 3,
		Leg  = 4,
		Hand = 5,
		Foot = 6,
		MAX  = 7
	};

	/**
	 * Enum DungeonCrawler.EHitDirection
	 */
	enum class EHitDirection : uint8_t
	{
		None  = 0,
		Front = 1,
		Back  = 2,
		Left  = 3,
		Right = 4,
		MAX   = 5
	};

	/**
	 * Enum DungeonCrawler.EDCLoginState
	 */
	enum class EDCLoginState : uint8_t
	{
		None                 = 0,
		Welcome              = 1,
		InputIdAndPw         = 2,
		NsLookup             = 3,
		Connect              = 4,
		Login                = 5,
		ConfirmToReconnect   = 6,
		AcceptToReconnect    = 7,
		Enter                = 8,
		NotifyPrevGameClosed = 9,
		MAX                  = 10
	};

	/**
	 * Enum DungeonCrawler.EMonsterSpawnerType
	 */
	enum class EMonsterSpawnerType : uint8_t
	{
		Circle = 0,
		Rect   = 1,
		MAX    = 2
	};

	/**
	 * Enum DungeonCrawler.EDCOnlineState
	 */
	enum class EDCOnlineState : uint8_t
	{
		None         = 0,
		Online       = 1,
		Disconnected = 2,
		Offline      = 3,
		MAX          = 4
	};

	/**
	 * Enum DungeonCrawler.EDCDungeonState
	 */
	enum class EDCDungeonState : uint8_t
	{
		None             = 0,
		PlayingInDungeon = 1,
		Escaped          = 2,
		WaitingNextFloor = 3,
		MAX              = 4
	};

	/**
	 * Enum DungeonCrawler.EDCSpectatorSearchType
	 */
	enum class EDCSpectatorSearchType : uint8_t
	{
		None  = 0,
		Right = 1,
		Left  = 2,
		Dead  = 3,
		MAX   = 4
	};

	/**
	 * Enum DungeonCrawler.EDCShopItemType
	 */
	enum class EDCShopItemType : uint8_t
	{
		None          = 0,
		CharacterSkin = 1,
		ItemSkin      = 2,
		Emote         = 3,
		MAX           = 4
	};

	/**
	 * Enum DungeonCrawler.EFunctionTriggerType
	 */
	enum class EFunctionTriggerType : uint8_t
	{
		Once   = 0,
		Repeat = 1,
		MAX    = 2
	};

	/**
	 * Enum DungeonCrawler.EGameStateType
	 */
	enum class EGameStateType : uint8_t
	{
		None                = 0,
		FadeOut             = 1,
		TavernWait          = 2,
		TavernCountDown     = 3,
		TavernStart         = 4,
		DungeonPrepareLevel = 5,
		DungeonPrepareNPC   = 6,
		DungeonPreparePC    = 7,
		DungeonPlay         = 8,
		DungeonNextFloor    = 9,
		DungeonResult       = 10,
		LobbyPrepareAccount = 11,
		LobbyStart          = 12,
		MAX                 = 13
	};

	/**
	 * Enum DungeonCrawler.EGameDifficultyType
	 */
	enum class EGameDifficultyType : uint8_t
	{
		None       = 0,
		Normal     = 1,
		HighRoller = 2,
		MAX        = 3
	};

	/**
	 * Enum DungeonCrawler.EFloorLogType
	 */
	enum class EFloorLogType : uint8_t
	{
		None         = 0,
		EscapePortal = 1,
		DownPortal   = 2,
		Escape       = 3,
		Down         = 4,
		MAX          = 5
	};

	/**
	 * Enum DungeonCrawler.EFloorRulePhase
	 */
	enum class EFloorRulePhase : uint8_t
	{
		None    = 0,
		Display = 1,
		Shrink  = 2,
		End     = 3,
		MAX     = 4
	};

	/**
	 * Enum DungeonCrawler.EMeleeAttackStuckType
	 */
	enum class EMeleeAttackStuckType : uint8_t
	{
		None         = 0,
		HitBox       = 1,
		WeakShield   = 2,
		MidShield    = 3,
		HeavyShield  = 4,
		StaticObject = 5,
		MAX          = 6
	};

	/**
	 * Enum DungeonCrawler.ESkillCheckResult
	 */
	enum class ESkillCheckResult : uint8_t
	{
		None           = 0,
		PerfectSucceed = 1,
		Succeed        = 2,
		Failed         = 3,
		MAX            = 4
	};

	/**
	 * Enum DungeonCrawler.EInteractabilityType
	 */
	enum class EInteractabilityType : uint8_t
	{
		Interactable      = 0,
		ConditionNotMet   = 1,
		UnableInteraction = 2,
		MAX               = 3
	};

	/**
	 * Enum DungeonCrawler.EInventoryType
	 */
	enum class EInventoryType : uint8_t
	{
		None          = 0,
		Chest         = 1,
		Bag           = 2,
		Equipment     = 3,
		Storage       = 4,
		StockBuy      = 5,
		StockSellBack = 6,
		StockCraft    = 7,
		DealTable     = 8,
		MAX           = 9
	};

	/**
	 * Enum DungeonCrawler.ESlotSearchResult
	 */
	enum class ESlotSearchResult : uint8_t
	{
		InventoryFull  = 0,
		NotEnoughSlots = 1,
		Success        = 2,
		MAX            = 3
	};

	/**
	 * Enum DungeonCrawler.EEquipmentQuickSlotType
	 */
	enum class EEquipmentQuickSlotType : uint8_t
	{
		None       = 0,
		WeaponSetA = 1,
		WeaponSetB = 2,
		UtilityA   = 3,
		UtilityB   = 4,
		MAX        = 5
	};

	/**
	 * Enum DungeonCrawler.EItemEquipState
	 */
	enum class EItemEquipState : uint8_t
	{
		BareHands                    = 0,
		TwoHandedPrimaryItemEquipped = 1,
		OneHandedPrimaryItemEquipped = 2,
		SecondaryItemEquipped        = 3,
		EachHandFull                 = 4,
		MAX                          = 5
	};

	/**
	 * Enum DungeonCrawler.EDCEquipmentSlotIndex
	 */
	enum class EDCEquipmentSlotIndex : uint8_t
	{
		None               = 0,
		Armor_Head         = 1,
		Armor_Chest        = 2,
		Armor_Hands        = 3,
		Armor_Legs         = 4,
		Armor_Foot         = 5,
		Utility_L1         = 6,
		Utility_R1         = 7,
		Weapon_L1          = 8,
		Weapon_L2          = 9,
		Weapon_R1          = 10,
		Weapon_R2          = 11,
		Utility_L2         = 12,
		Utility_L3         = 13,
		Utility_R2         = 14,
		Utility_R3         = 15,
		Accessory_Necklace = 16,
		Accessory_Ring     = 17,
		Accessory_Ring01   = 18,
		SoulHeart          = 19,
		MAX                = 20
	};

	/**
	 * Enum DungeonCrawler.EDCInventoryId
	 */
	enum class EDCInventoryId : uint8_t
	{
		None          = 0,
		Chest         = 1,
		Bag           = 2,
		Equipment     = 3,
		Storage       = 4,
		StockBuy      = 5,
		StockSellBack = 6,
		StockCraft    = 7,
		DealTable     = 8,
		TradingLocal  = 9,
		TradingRemote = 10,
		MAX           = 11
	};

	/**
	 * Enum DungeonCrawler.EDCItemDropPreview
	 */
	enum class EDCItemDropPreview : uint8_t
	{
		None    = 0,
		Valid   = 1,
		Invalid = 2,
		MAX     = 3
	};

	/**
	 * Enum DungeonCrawler.EDCLocationStatus
	 */
	enum class EDCLocationStatus : uint8_t
	{
		None    = 0,
		Lobby   = 1,
		Dungeon = 2,
		Offline = 3,
		MAX     = 4
	};

	/**
	 * Enum DungeonCrawler.EDCItemEquipType
	 */
	enum class EDCItemEquipType : uint8_t
	{
		None      = 0,
		Unarmed   = 1,
		Primary   = 2,
		Secondary = 3,
		Utility   = 4,
		SoulHeart = 5,
		Head      = 6,
		Chest     = 7,
		Legs      = 8,
		Foot      = 9,
		Hands     = 10,
		Necklace  = 11,
		Ring      = 12,
		MAX       = 13
	};

	/**
	 * Enum DungeonCrawler.EStockType
	 */
	enum class EStockType : uint8_t
	{
		StockBuy   = 0,
		StockCraft = 1,
		MAX        = 2
	};

	/**
	 * Enum DungeonCrawler.EMonsterCollisionProfile
	 */
	enum class EMonsterCollisionProfile : uint8_t
	{
		Normal                 = 0,
		Death                  = 1,
		Burrow                 = 2,
		Interactable           = 3,
		InteractableOnly       = 4,
		InteractableWithoutHit = 5,
		Fly                    = 6,
		BeforeDeath            = 7,
		MAX                    = 8
	};

	/**
	 * Enum DungeonCrawler.EMonsterFilterSortingType
	 */
	enum class EMonsterFilterSortingType : uint8_t
	{
		Ascending = 0,
		Desending = 1,
		MAX       = 2
	};

	/**
	 * Enum DungeonCrawler.EHackPolicyType
	 */
	enum class EHackPolicyType : uint8_t
	{
		None  = 0,
		Kick  = 1,
		Block = 2,
		MAX   = 3
	};

	/**
	 * Enum DungeonCrawler.EUpdateReason
	 */
	enum class EUpdateReason : uint8_t
	{
		NO_UPDATE_RECEIVED       = 0,
		BACKFILL_INITIATED       = 1,
		MATCHMAKING_DATA_UPDATED = 2,
		BACKFILL_FAILED          = 3,
		BACKFILL_TIMED_OUT       = 4,
		BACKFILL_CANCELLED       = 5,
		BACKFILL_COMPLETED       = 6,
		MAX                      = 7
	};

	/**
	 * Enum DungeonCrawler.ESkillIndex
	 */
	enum class ESkillIndex : uint8_t
	{
		SKILL_INDEX_ONE = 0,
		SKILL_INDEX_TWO = 1,
		SKILL_INDEX_MAX = 2
	};

	/**
	 * Enum DungeonCrawler.ESkillActivatableType
	 */
	enum class ESkillActivatableType : uint8_t
	{
		None                      = 0,
		Activatable               = 1,
		OnCooldown                = 2,
		NotEnoughCount            = 3,
		CannotActivateWhileMoving = 4,
		MAX                       = 5
	};

	/**
	 * Enum DungeonCrawler.EWidgetSpellSlotsType
	 */
	enum class EWidgetSpellSlotsType : uint8_t
	{
		None      = 0,
		Primary   = 1,
		Secondary = 2,
		MAX       = 3
	};

	/**
	 * Enum DungeonCrawler.ESpellCastabilityType
	 */
	enum class ESpellCastabilityType : uint8_t
	{
		None               = 0,
		Castable           = 1,
		NotSelected        = 2,
		NotEnoughCount     = 3,
		CapacityOverloaded = 4,
		MAX                = 5
	};

	/**
	 * Enum DungeonCrawler.EDCBuildConfiguration
	 */
	enum class EDCBuildConfiguration : uint8_t
	{
		Unknown     = 0,
		Debug       = 1,
		DebugGame   = 2,
		Development = 3,
		Shipping    = 4,
		Test        = 5,
		MAX         = 6
	};

	/**
	 * Enum DungeonCrawler.EWidgetCharacterSelectGroupType
	 */
	enum class EWidgetCharacterSelectGroupType : uint8_t
	{
		None                = 0,
		CharacterSelectMain = 1,
		CharacterCreateMain = 2,
		Menu                = 3,
		MessageAnnounce     = 4,
		MAX                 = 5
	};

	/**
	 * Enum DungeonCrawler.EWidgetGameGroupType
	 */
	enum class EWidgetGameGroupType : uint8_t
	{
		None                 = 0,
		Main                 = 1,
		Menu                 = 2,
		Inventory            = 3,
		Status               = 4,
		Interact             = 5,
		Alive                = 6,
		Spectator            = 7,
		PartyManage          = 8,
		ClassSelect          = 9,
		Class                = 10,
		SpellSelect          = 11,
		SpellSelectSecondary = 12,
		EmoteSelect          = 13,
		PlaqueText           = 14,
		Customize            = 15,
		MAX                  = 16
	};

	/**
	 * Enum DungeonCrawler.EWidgetInventoryGroupType
	 */
	enum class EWidgetInventoryGroupType : uint8_t
	{
		LinkedPlayer        = 0,
		LootingTarget       = 1,
		LootingTargetPlayer = 2,
		Storage             = 3,
		MAX                 = 4
	};

	/**
	 * Enum DungeonCrawler.EMsgWidgetChatResult
	 */
	enum class EMsgWidgetChatResult : uint8_t
	{
		Succeed = 0,
		Wait    = 1,
		MAX     = 2
	};

	/**
	 * Enum DungeonCrawler.EWidgetLobbyGroupType
	 */
	enum class EWidgetLobbyGroupType : uint8_t
	{
		None             = 0,
		Play             = 1,
		TopMenu          = 2,
		Menu             = 3,
		LeaderBoard      = 4,
		Status           = 5,
		InviteParty      = 6,
		Loadout          = 7,
		MerchantList     = 8,
		Merchant         = 9,
		Class            = 10,
		TradeChannelList = 11,
		TradeChannel     = 12,
		Trading          = 13,
		TradeConfirm     = 14,
		Customize        = 15,
		Shop             = 16,
		Block            = 17,
		MAX              = 18
	};

	/**
	 * Enum DungeonCrawler.EWidgetClassGroupType
	 */
	enum class EWidgetClassGroupType : uint8_t
	{
		None         = 0,
		Level        = 1,
		PerkandSkill = 2,
		Spell        = 3,
		MAX          = 4
	};

	/**
	 * Enum DungeonCrawler.EWidgetPlayUserPartyState
	 */
	enum class EWidgetPlayUserPartyState : uint8_t
	{
		Solo     = 0,
		Ready    = 1,
		NotReady = 2,
		MAX      = 3
	};

	/**
	 * Enum DungeonCrawler.EWidgetPartyUserLocate
	 */
	enum class EWidgetPartyUserLocate : uint8_t
	{
		Mine  = 0,
		Left  = 1,
		Right = 2,
		None  = 3,
		MAX   = 4
	};

	/**
	 * Enum DungeonCrawler.EWidgetPlayerInventoryTabType
	 */
	enum class EWidgetPlayerInventoryTabType : uint8_t
	{
		None      = 0,
		Inventory = 1,
		Storage   = 2,
		MAX       = 3
	};

	/**
	 * Enum DungeonCrawler.EWidgetMerchantServiceType
	 */
	enum class EWidgetMerchantServiceType : uint8_t
	{
		None     = 0,
		Buy      = 1,
		Sell     = 2,
		Craft    = 3,
		Repair   = 4,
		Quest    = 5,
		Archived = 6,
		MAX      = 7
	};

	/**
	 * Enum DungeonCrawler.EWidgetMerchantInventoryType
	 */
	enum class EWidgetMerchantInventoryType : uint8_t
	{
		None          = 0,
		StockBuy      = 1,
		StockSellBack = 2,
		StockCraft    = 3,
		DealTable     = 4,
		MAX           = 5
	};

	/**
	 * Enum DungeonCrawler.EWidgetCustomizeType
	 */
	enum class EWidgetCustomizeType : uint8_t
	{
		None      = 0,
		Character = 1,
		Item      = 2,
		Emote     = 3,
		MAX       = 4
	};

	/**
	 * Enum DungeonCrawler.EPopupButtonType
	 */
	enum class EPopupButtonType : uint8_t
	{
		None                     = 0,
		NoButton                 = 1,
		OneButton                = 2,
		TwoButton_InviteParty    = 3,
		TwoButton_YesNo          = 4,
		TwoButton_LobbySpectator = 5,
		MAX                      = 6
	};

	/**
	 * Enum DungeonCrawler.EServiceConnectFailType
	 */
	enum class EServiceConnectFailType : uint8_t
	{
		None               = 0,
		ConnectFail        = 1,
		SteamVersionUpdate = 2,
		BanUser            = 3,
		NotSteam           = 4,
		DuplicatedLogin    = 5,
		MAX                = 6
	};

	/**
	 * Enum DungeonCrawler.EPopupResult
	 */
	enum class EPopupResult : uint8_t
	{
		Accept = 0,
		Cancel = 1,
		MAX    = 2
	};

	/**
	 * Enum DungeonCrawler.EItemCountSelectWidgetType
	 */
	enum class EItemCountSelectWidgetType : uint8_t
	{
		None                 = 0,
		ItemCountSelectDrop  = 1,
		ItemCountSelectSplit = 2,
		ItemCountSelectMerge = 3,
		MAX                  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DungeonCrawler.ItemMaterialInfo
	 * Size -> 0x0010
	 */
	struct FItemMaterialInfo
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.LocomotionAnimSet
	 * Size -> 0x0018
	 */
	struct FLocomotionAnimSet
	{
	public:
		class UAnimSequenceBase*                                   StandIdle;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   CrouchIdle;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpace*                                         RunUpperBody;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AnimationSet
	 * Size -> 0x0038
	 */
	struct FAnimationSet
	{
	public:
		class UAnimMontage*                                        EquipMontage;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        UnEquipMontage;                                          // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        EquipMontageItem;                                        // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        UnEquipMontageItem;                                      // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocomotionAnimSet                                  LocomotionAnimSet;                                       // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameAnnounceData
	 * Size -> 0x0090
	 */
	struct FGameAnnounceData
	{
	public:
		class FText                                                FormatText;                                              // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParamText_1;                                             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParamText_2;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParamText_3;                                             // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParamText_4;                                             // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ParamText_5;                                             // 0x0078(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameAnnounceInfo
	 * Size -> 0x0098
	 */
	struct FGameAnnounceInfo
	{
	public:
		class FName                                                WinnerPlayerCharacterBlackboardKey;                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameAnnounceData                                   AnnounceData;                                            // 0x0008(0x0090) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCCircle
	 * Size -> 0x0018
	 */
	struct FDCCircle
	{
	public:
		unsigned char                                              UnknownData_T45Z[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCFloorRuleItemData
	 * Size -> 0x0040
	 */
	struct FDCFloorRuleItemData
	{
	public:
		float                                                      DeathSwarmSize;                                          // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        DeathSwarmAbilityTag;                                    // 0x0004(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayPhaseDuration;                                    // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DisplayPhaseFloorPortalArray[0x10];                      // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    ShrinkPhaseDuration;                                     // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NUP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ShrinkPhaseFloorPortalArray[0x10];                       // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       HideDeathSwarmTimer;                                     // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQPB[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCFloorRuleInfo
	 * Size -> 0x00F8
	 */
	struct FDCFloorRuleInfo
	{
	public:
		struct FDCFloorRuleItemData                                Data;                                                    // 0x0000(0x0040) Transient, NativeAccessSpecifierPrivate
		struct FDCCircle                                           Area;                                                    // 0x0040(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class AFloorPortalBase*, class UDCFloorPortalDataAsset*> DisplayPortals;                                          // 0x0058(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class AFloorPortalBase*, class UDCFloorPortalDataAsset*> ShrinkPortals;                                           // 0x00A8(0x0050) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCFloorRuleManager
	 * Size -> 0x0038
	 */
	struct FDCFloorRuleManager
	{
	public:
		class UDCFloorRuleDataAsset*                               Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDCCircle                                           RootArea;                                                // 0x0008(0x0018) Transient, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FDCFloorRuleInfo>                            Rules;                                                   // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9HZK[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameplayEffectDescData
	 * Size -> 0x000C
	 */
	struct FGameplayEffectDescData
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectValue;                                             // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItem
	 * Size -> 0x0170
	 */
	struct FDesignDataItem
	{
	public:
		struct FGameplayTag                                        IdTag;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SlotType;                                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        HandType;                                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                WeaponTypes;                                             // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ArmorType;                                               // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        UtilityType;                                             // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AccessoryType;                                           // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MiscType;                                                // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        RarityType;                                              // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmmoCount;                                            // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanDrop;                                                 // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSaveIntoDatabase;                                     // 0x0081(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSQO[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0084(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0094(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ConsumeData;                                             // 0x00A4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EY8M[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActorClass;                                              // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemHolderActorClass;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryWidth;                                          // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryHeight;                                         // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WearingDelayTime;                                        // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ2G[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             SelfAbilities;                                           // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             SelfEffects;                                             // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PrimaryProperty;                                         // 0x0118(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             SecondaryProperties;                                     // 0x0128(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Requirement;                                             // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     BundleInfo;                                              // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ContainerData;                                           // 0x0158(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdvPoint;                                                // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpPoint;                                                // 0x016C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.Nickname
	 * Size -> 0x0020
	 */
	struct FNickname
	{
	public:
		class FString                                              OriginalNickName;                                        // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StreamingModeNickName;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataItemMeta
	 * Size -> 0x0040
	 */
	struct FAccountDataItemMeta
	{
	public:
		class FString                                              SoulHeart_AccountId;                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SoulHeart_PartyId;                                       // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           SoulHeart_NickName;                                      // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataItemProperty
	 * Size -> 0x0018
	 */
	struct FAccountDataItemProperty
	{
	public:
		class FString                                              PropertyTypeId;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyValue;                                           // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAHG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataItem
	 * Size -> 0x0090
	 */
	struct FAccountDataItem
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemAmmoCount;                                           // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemContentsCount;                                       // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UL11[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccountDataItemMeta                                MetaData;                                                // 0x0030(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItemProperty>                    PrimaryPropertyArray;                                    // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItemProperty>                    SecondaryPropertyArray;                                  // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterSlot
	 * Size -> 0x0090
	 */
	struct FCharacterSlot
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CreateAt;                                                // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCGender                                                  Gender;                                                  // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U354[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LastLoginDate;                                           // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelected;                                               // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJIM[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataItem>                            EquipItemList;                                           // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     EquipCharacterSkin;                                      // 0x0070(0x0010) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             EquipItemSkinList;                                       // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterSlotData
	 * Size -> 0x0010
	 */
	struct FCharacterSlotData
	{
	public:
		TArray<struct FCharacterSlot>                              CharacterSlotArray;                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterStatusWidgetData
	 * Size -> 0x0180
	 */
	struct FCharacterStatusWidgetData
	{
	public:
		struct FGameplayAttributeData                              Strength;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Agility;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Will;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Knowledge;                                               // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Resourcefulness;                                         // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Health;                                                  // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealth;                                               // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealthBase;                                           // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealthMod;                                            // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxHealthAdd;                                            // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Weight;                                                  // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimit;                                             // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitBase;                                         // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitMod;                                          // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              WeightLimitAdd;                                          // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellPayload;                                            // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacity;                                           // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityBase;                                       // 0x0110(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityMod;                                        // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCapacityAdd;                                        // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectiveness;                                    // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessBase;                                // 0x0150(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessMod;                                 // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              UtilityEffectivenessAdd;                                 // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterStatusDetailWidgetData
	 * Size -> 0x0318 (FullSize[0x0498] - InheritedSize[0x0180])
	 */
	struct FCharacterStatusDetailWidgetData : public FCharacterStatusWidgetData
	{
	public:
		struct FGameplayAttributeData                              PhysicalDamageWeaponPrimary;                             // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageWeaponSecondary;                           // 0x0190(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageBase;                                      // 0x01A0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalPower;                                           // 0x01B0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageMod;                                       // 0x01C0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageModPhysicalPower;                          // 0x01D0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageModBonus;                                  // 0x01E0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageAdd;                                       // 0x01F0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalDamageTrue;                                      // 0x0200(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ArmorPenetration;                                        // 0x0210(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ArmorRating;                                             // 0x0220(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReductionArmorRating;                            // 0x0230(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReductionBonus;                                  // 0x0240(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReduction;                                       // 0x0250(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalReductionMod;                                    // 0x0260(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageBase;                                       // 0x0270(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalPower;                                            // 0x0280(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageMod;                                        // 0x0290(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageModMagicalPower;                            // 0x02A0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageModBonus;                                   // 0x02B0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageAdd;                                        // 0x02C0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalDamageTrue;                                       // 0x02D0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicPenetration;                                        // 0x02E0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicResistance;                                         // 0x02F0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReductionMagicResistance;                         // 0x0300(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReductionBonus;                                   // 0x0310(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReduction;                                        // 0x0320(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalReductionMod;                                     // 0x0330(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PhysicalHealBase;                                        // 0x0340(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalHealBase;                                         // 0x0350(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeed;                                               // 0x0360(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedBase;                                           // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedMod;                                            // 0x0380(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedAdd;                                            // 0x0390(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeedWithModifier;                                   // 0x03A0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ActionSpeed;                                             // 0x03B0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SpellCastingSpeed;                                       // 0x03C0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ItemEquipSpeed;                                          // 0x03D0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RegularInteractionSpeedBase;                             // 0x03E0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              RegularInteractionSpeed;                                 // 0x03F0(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MagicalInteractionSpeed;                                 // 0x0400(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BuffDurationMod;                                         // 0x0410(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              DebuffDurationMod;                                       // 0x0420(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              HeadshotReductionMod;                                    // 0x0430(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ProjectileReductionMod;                                  // 0x0440(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PrestigeItemDrop;                                        // 0x0450(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ImpactPower;                                             // 0x0460(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      PrimaryWeaponImpactPower;                                // 0x0470(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryWeaponImpactPower;                              // 0x0474(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItemTooltipStatWidgetData*>                  PrimaryAbilityWidgetArray;                               // 0x0478(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UItemTooltipStatWidgetData*>                  SecondaryAbilityWidgetArray;                             // 0x0488(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatDataPieceItemProperty
	 * Size -> 0x0018
	 */
	struct FChatDataPieceItemProperty
	{
	public:
		class FString                                              Pid;                                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pv;                                                      // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DQS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatDataPieceItem
	 * Size -> 0x0038
	 */
	struct FChatDataPieceItem
	{
	public:
		int64_t                                                    Uid;                                                     // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Iid;                                                     // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChatDataPieceItemProperty>                  Pp;                                                      // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FChatDataPieceItemProperty>                  Sp;                                                      // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatDataPiece
	 * Size -> 0x0048
	 */
	struct FChatDataPiece
	{
	public:
		class FString                                              ChatStr;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatDataPieceItem                                  ChatDataPieceItem;                                       // 0x0010(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPlayerCharacter
	 * Size -> 0x00C8
	 */
	struct FDesignDataPlayerCharacter
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Dialog;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ClassInfo;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             BaseItems;                                               // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Skills;                                                  // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Spells;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Emotes;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Perks;                                                   // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SpellData
	 * Size -> 0x002C
	 */
	struct FSpellData
	{
	public:
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SpellTag;                                                // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargeAmount;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SequenceIndex;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCapacityOverloaded;                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL4J[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSpell
	 * Size -> 0x00B0
	 */
	struct FDesignDataSpell
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Classes;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CastingType;                                             // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SourceType;                                              // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellTier;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastingTime;                                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChannelingDuration;                                      // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChannelingInterval;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Range;                                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SpellTag;                                                // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPopup
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgPopup : public FMsgBase
	{
	public:
		EPopupResult                                               PopupResult;                                             // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TPHF[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetClass;                                             // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPopupDataBase*                                      PopupData;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ContainerSlotArrayData
	 * Size -> 0x0010
	 */
	struct FContainerSlotArrayData
	{
	public:
		TArray<class UContainerSlotWidget*>                        SlotWidgetArray;                                         // 0x0000(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemDataMeta
	 * Size -> 0x0040
	 */
	struct FItemDataMeta
	{
	public:
		class FString                                              SoulHeart_AccountId;                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SoulHeart_PartyId;                                       // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           SoulHeart_NickName;                                      // 0x0020(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemDataProperty
	 * Size -> 0x0014
	 */
	struct FItemDataProperty
	{
	public:
		struct FPrimaryAssetId                                     PropertyTypeId;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyValue;                                           // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemData
	 * Size -> 0x0090
	 */
	struct FItemData
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemAmmoCount;                                           // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemContentsCount;                                       // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquipped;                                               // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD9V[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemDataMeta                                       MetaData;                                                // 0x0030(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FItemDataProperty>                           ItemDataPrimaryPropertyArray;                            // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemDataProperty>                           ItemDataSecondaryPropertyArray;                          // 0x0080(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemWidgetData
	 * Size -> 0x0090
	 */
	struct FItemWidgetData
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayEffectContext
	 * Size -> 0x0118 (FullSize[0x0198] - InheritedSize[0x0080])
	 */
	struct FDCGameplayEffectContext : public FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_B73T[0x118];                                 // 0x0080(0x0118) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ActorDieData
	 * Size -> 0x01A8
	 */
	struct FActorDieData
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8L8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameplayEffectClass;                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0010(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ImpactEnduranceExhaustedData
	 * Size -> 0x01A8
	 */
	struct FImpactEnduranceExhaustedData
	{
	public:
		bool                                                       bNotExhausted;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OD6X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GameplayEffectClass;                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0010(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayEffectSetByCallerData
	 * Size -> 0x000C
	 */
	struct FDCGameplayEffectSetByCallerData
	{
	public:
		struct FGameplayTag                                        SetByCallerTag;                                          // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SetByCallerValue;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayEffectData
	 * Size -> 0x0048
	 */
	struct FDCGameplayEffectData
	{
	public:
		struct FPrimaryAssetId                                     EffectId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDCGameplayEffectSetByCallerData>            SetByCallerArray;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DynamicGrantedTagContainer;                              // 0x0028(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayEffectContainer
	 * Size -> 0x0058
	 */
	struct FDCGameplayEffectContainer
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TargetType;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectData                               GameplayEffectData;                                      // 0x0010(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayAbilityData
	 * Size -> 0x0028
	 */
	struct FDCGameplayAbilityData
	{
	public:
		struct FPrimaryAssetId                                     AbilityId;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayAbilityClass;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDCGameplayEffectContainer>                  GameplayEffectContainerArray;                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayAbilityHandleData
	 * Size -> 0x0030
	 */
	struct FDCGameplayAbilityHandleData
	{
	public:
		struct FGameplayAbilitySpecHandle                          AbilitySpecHandle;                                       // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83JR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCGameplayAbilityData                              GameplayAbilityData;                                     // 0x0008(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameplayEffectContainerSpec
	 * Size -> 0x0048
	 */
	struct FDCGameplayEffectContainerSpec
	{
	public:
		class UClass*                                              TargetType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityTargetDataHandle                    TargetDataHandle;                                        // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectSpecHandle>                   TargetGameplayEffectSpecHandles;                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ContainerTag;                                            // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ActorStatusData
	 * Size -> 0x0020
	 */
	struct FActorStatusData
	{
	public:
		struct FActiveGameplayEffectHandle                         EffectHandle;                                            // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartServerWorldTime;                                    // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHKY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AkAudioVolumeInfo
	 * Size -> 0x0040
	 */
	struct FAkAudioVolumeInfo
	{
	public:
		float                                                      Priority;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NULJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkEventBeginOverlap;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkStateValue*                                       AkStateValueBeginOverlap;                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAudioEvent*                                       AkEventEndOverlap;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkStateValue*                                       AkStateValueEndOverlap;                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRtpc*                                             Rtpc;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RtpcValue;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J28L[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 Volume;                                                  // 0x0038(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCSoundDataContainer
	 * Size -> 0x0050
	 */
	struct FDCSoundDataContainer
	{
	public:
		TMap<EPhysicalSurface, class UAkSwitchValue*>              AkSwitchBySurfaceType;                                   // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.LoadPrimaryAssetType
	 * Size -> 0x0010
	 */
	struct FLoadPrimaryAssetType
	{
	public:
		unsigned char                                              UnknownData_F736[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.LoadPrimaryAssetData
	 * Size -> 0x0028 (FullSize[0x0038] - InheritedSize[0x0010])
	 */
	struct FLoadPrimaryAssetData : public FLoadPrimaryAssetType
	{
	public:
		class FScriptMulticastDelegate                             LoadPrimaryAssetDynamicMulticastDelegate;                // 0x0010(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPG0[0x18];                                  // 0x0020(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCInt64IdBase
	 * Size -> 0x0008
	 */
	struct FDCInt64IdBase
	{
	public:
		int64_t                                                    _;                                                       // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCItemId
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FDCItemId : public FDCInt64IdBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCStringIdBase
	 * Size -> 0x0010
	 */
	struct FDCStringIdBase
	{
	public:
		class FString                                              _;                                                       // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCAccountId
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDCAccountId : public FDCStringIdBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCPropertyEffectData
	 * Size -> 0x001C
	 */
	struct FDCPropertyEffectData
	{
	public:
		struct FGameplayTag                                        PropertyType;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PropertyId;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyValue;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCItemInfo
	 * Size -> 0x0108
	 */
	struct FDCItemInfo
	{
	public:
		struct FDCItemId                                           ID;                                                      // 0x0000(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCItemDataAsset*                                    DataAsset;                                               // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Stack;                                                   // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    InnerStack;                                              // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDCAccountId                                        OwnerAccountId;                                          // 0x0018(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayAbilityData>                      SelfAbilities;                                           // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayEffectData>                       SelfEffects;                                             // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayAbilityData>                      OwnerAbilities;                                          // 0x0048(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FDCGameplayEffectData>                       OwnerEffects;                                            // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FDCPropertyEffectData>                       Properties;                                              // 0x0068(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FItemData                                           ItemData;                                                // 0x0078(0x0090) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataReplication
	 * Size -> 0x0070
	 */
	struct FAccountDataReplication
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              PlayerCharacterId;                                       // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PartyId;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInit;                                                   // 0x0068(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExit;                                                   // 0x0069(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogin;                                                  // 0x006A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlive;                                                  // 0x006B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEscape;                                                 // 0x006C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDown;                                                   // 0x006D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MD1[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCCharacterSkinInfo
	 * Size -> 0x0010
	 */
	struct FDCCharacterSkinInfo
	{
	public:
		class UDCCharacterSkinDataAsset*                           Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEquipped;                                             // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VP87[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCItemSkinInfo
	 * Size -> 0x0010
	 */
	struct FDCItemSkinInfo
	{
	public:
		class UDCItemSkinDataAsset*                                Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEquipped;                                             // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XBT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCEmoteInfo
	 * Size -> 0x0010
	 */
	struct FDCEmoteInfo
	{
	public:
		class UDCEmoteDataAsset*                                   Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEquipped;                                             // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WF0R[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotIndex;                                               // 0x000C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCClientAccountInfo
	 * Size -> 0x0100
	 */
	struct FDCClientAccountInfo
	{
	public:
		struct FDCAccountId                                        AccountId;                                               // 0x0000(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetId, struct FDCCharacterSkinInfo>  CharacterSkins;                                          // 0x0010(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetId, struct FDCItemSkinInfo>       ItemSkins;                                               // 0x0060(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetId, struct FDCEmoteInfo>          Emotes;                                                  // 0x00B0(0x0050) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCCharacterId
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDCCharacterId : public FDCStringIdBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCCommunityCharacterInfo
	 * Size -> 0x0048
	 */
	struct FDCCommunityCharacterInfo
	{
	public:
		struct FDCAccountId                                        AccountId;                                               // 0x0000(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCCharacterId                                      CharacterId;                                             // 0x0010(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0020(0x0020) Transient, NativeAccessSpecifierPublic
		EDCCharacterClass                                          CharacterClass;                                          // 0x0040(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCGender                                                  Gender;                                                  // 0x0041(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJLV[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.PlayerPointData
	 * Size -> 0x0070
	 */
	struct FPlayerPointData
	{
	public:
		class AActor*                                              PlayerStartPIE;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YH1[0x68];                                  // 0x0008(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ObjectLinkMetaData
	 * Size -> 0x0058
	 */
	struct FObjectLinkMetaData
	{
	public:
		struct FGameplayTagQuery                                   MetaDataTagQuery;                                        // 0x0000(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AActor*                                              MetaDataActor;                                           // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MetaDataFloat;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHEA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataGameplayAbility
	 * Size -> 0x0058
	 */
	struct FDesignDataGameplayAbility
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AttackType;                                              // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             MovementModifiers;                                       // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerInfo
	 * Size -> 0x0030
	 */
	struct FServerInfo
	{
	public:
		class FString                                              ServerAddress;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerDescription;                                       // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSpawnerItem
	 * Size -> 0x0034
	 */
	struct FDesignDataSpawnerItem
	{
	public:
		struct FPrimaryAssetId                                     ItemHolderLootDropId;                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     MonsterId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PropsId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnRate;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameStateData
	 * Size -> 0x0008
	 */
	struct FGameStateData
	{
	public:
		EGameStateType                                             GameState;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVWI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ServerWorldTime;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PartyMemberData
	 * Size -> 0x0010
	 */
	struct FPartyMemberData
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PartyData
	 * Size -> 0x0020
	 */
	struct FPartyData
	{
	public:
		class FString                                              PartyId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPartyMemberData>                            PartyMemberDataArray;                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameDeathSwarmData
	 * Size -> 0x0040
	 */
	struct FGameDeathSwarmData
	{
	public:
		class ADeathSwarmBase*                                     DeathSwarm;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrevDeathSwarmSize;                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ1C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PrevDeathSwarmPos;                                       // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathSwarmSize;                                          // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JENY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           DeathSwarmPos;                                           // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        DeathSwarmAbilityTag;                                    // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameFloorPortalData
	 * Size -> 0x0018
	 */
	struct FGameFloorPortalData
	{
	public:
		struct FGameplayTag                                        PortalType;                                              // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PortalScrollNum;                                         // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NQ6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFloorPortalBase*                                    FloorPortal;                                             // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameFloorRuleData
	 * Size -> 0x0060
	 */
	struct FGameFloorRuleData
	{
	public:
		float                                                      FloorRulePhaseServerWorldTime;                           // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFloorRulePhase                                            FloorRulePhase;                                          // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3T7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorRulePhaseDuration;                                  // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWBS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameDeathSwarmData                                 GameDeathSwarmData;                                      // 0x0010(0x0040) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FGameFloorPortalData>                        ActiveFloorPortalDataArray;                              // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameInfo
	 * Size -> 0x0038
	 */
	struct FDCGameInfo
	{
	public:
		bool                                                       bWithGameLift;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VV1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxGameUser;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaitGameTimeSec;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZVF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TavernMapName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISQL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             DungeonIdArray;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCDungeonInfo
	 * Size -> 0x000C
	 */
	struct FDCDungeonInfo
	{
	public:
		int32_t                                                    GameTimeSec;                                             // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GameTimeSecServerWorldTime;                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideDeathSwarmTimer;                                     // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68ER[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.LoadedMappableConfigPair
	 * Size -> 0x0010
	 */
	struct FLoadedMappableConfigPair
	{
	public:
		class UPlayerMappableInputConfig*                          Config;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonInputType                                           Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKA9[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameUserSettingControls
	 * Size -> 0x0028
	 */
	struct FGameUserSettingControls
	{
	public:
		float                                                      MouseSensitivity;                                        // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInvertVerticalAxis;                                    // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInvertHorizontalAxis;                                  // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S9S[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              culture;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInvitation;                                       // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStreamingMode;                                          // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT0V[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionIndex;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameDifficultyTypeIndex;                                 // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTH6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameUserSettingAudios
	 * Size -> 0x0010
	 */
	struct FGameUserSettingAudios
	{
	public:
		float                                                      TotalVolume;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectVolume;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicVolume;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBackgroundVolume;                                      // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8MW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameUserSettingVideoDisplay
	 * Size -> 0x0014
	 */
	struct FGameUserSettingVideoDisplay
	{
	public:
		int32_t                                                    DisplayMode;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResolutionIndex;                                         // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameRateLimit;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GammaValue;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RenderScale;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCIdTagGroupItemData
	 * Size -> 0x0008
	 */
	struct FDCIdTagGroupItemData
	{
	public:
		struct FGameplayTag                                        IdTag;                                                   // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCInputAction
	 * Size -> 0x0010
	 */
	struct FDCInputAction
	{
	public:
		class UInputAction*                                        InputAction;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        InputTag;                                                // 0x0008(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DDCItemBundleInfoItem
	 * Size -> 0x0030
	 */
	struct FDDCItemBundleInfoItem
	{
	public:
		unsigned char                                              BundleArtData[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    BundleGrade;                                             // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemMinCount;                                            // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DDCItemPropertyItem
	 * Size -> 0x0038
	 */
	struct FDDCItemPropertyItem
	{
	public:
		unsigned char                                              PropertyTypeId[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    MinValue;                                                // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyRate;                                            // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INAF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AggroInfo
	 * Size -> 0x0010
	 */
	struct FAggroInfo
	{
	public:
		unsigned char                                              UnknownData_BKGO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCMovementModiferContainer
	 * Size -> 0x0010
	 */
	struct FDCMovementModiferContainer
	{
	public:
		TArray<struct FPrimaryAssetId>                             MovementModifierArray;                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPartyId
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDCPartyId : public FDCStringIdBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCPlayerInfo
	 * Size -> 0x00A0
	 */
	struct FDCPlayerInfo
	{
	public:
		struct FDCAccountId                                        AccountId;                                               // 0x0000(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4VA8[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           Nickname;                                                // 0x0030(0x0020) Transient, NativeAccessSpecifierPrivate
		EDCCharacterClass                                          CharacterClass;                                          // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVHT[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDCPartyId                                          PartyId;                                                 // 0x0058(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5USX[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDCGender                                                  Gender;                                                  // 0x0078(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QVEF[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x007C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDCOnlineState                                             OnlineState;                                             // 0x0080(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDCDungeonState                                            DungeonState;                                            // 0x0081(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlive;                                                  // 0x0082(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDataInitialized;                                        // 0x0083(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SKXN[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActorStatusData>                            ActorStatuses;                                           // 0x0088(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		float                                                      HealthRate;                                              // 0x0098(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BI93[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCConnectionAlwaysRelevantNodePair
	 * Size -> 0x0010
	 */
	struct FDCConnectionAlwaysRelevantNodePair
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_AlwaysRelevant_ForConnection*  Node;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPlayerCharacterKey
	 * Size -> 0x0002
	 */
	struct FDCPlayerCharacterKey
	{
	public:
		EDCCharacterClass                                          CharacterClass;                                          // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCGender                                                  Gender;                                                  // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPlayerCharacterData
	 * Size -> 0x0018
	 */
	struct FDCPlayerCharacterData
	{
	public:
		class UDesignDataAssetPlayerCharacter*                     DesignData;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDCCharacterPartsArtData*                            PartsResourceData;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArtDataPlayerCharacter*                             ArtData;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MappableConfigPair
	 * Size -> 0x0058
	 */
	struct FMappableConfigPair
	{
	public:
		class UPlayerMappableInputConfig*                          Config;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECommonInputType                                           Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRO7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               DependentPlatformTraits;                                 // 0x0010(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ExcludedPlatformTraits;                                  // 0x0030(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       bShouldActivateAutomatically;                            // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52L0[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCServerAccountInfo
	 * Size -> 0x0078
	 */
	struct FDCServerAccountInfo
	{
	public:
		struct FDCAccountId                                        AccountId;                                               // 0x0000(0x0010) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDCCharacterSkinDataAsset*                           CharacterSkin;                                           // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UDCItemSkinDataAsset*>                        ItemSkins;                                               // 0x0018(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<int32_t, class UDCEmoteDataAsset*>                    Emotes;                                                  // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.StockBuyRequiredData
	 * Size -> 0x0014
	 */
	struct FStockBuyRequiredData
	{
	public:
		struct FPrimaryAssetId                                     RequiredItemId;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredItemCount;                                       // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockBuyData
	 * Size -> 0x00B8
	 */
	struct FStockBuyData
	{
	public:
		struct FPrimaryAssetId                                     StockBuyAssetId;                                         // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockBuyUniqueId;                                        // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           StockBuyItemData;                                        // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FStockBuyRequiredData>                       RequiredDataArray;                                       // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockCraftRequiredData
	 * Size -> 0x0014
	 */
	struct FStockCraftRequiredData
	{
	public:
		struct FPrimaryAssetId                                     RequiredItemId;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredItemCount;                                       // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockCraftData
	 * Size -> 0x00B8
	 */
	struct FStockCraftData
	{
	public:
		struct FPrimaryAssetId                                     StockCraftAssetId;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockCraftUniqueId;                                      // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           StockCraftItemData;                                      // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FStockCraftRequiredData>                     RequiredDataArray;                                       // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SlotInfo
	 * Size -> 0x0010
	 */
	struct FSlotInfo
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Row;                                                     // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ItemUniqueId;                                            // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.EmptySlotInfo
	 * Size -> 0x0008
	 */
	struct FEmptySlotInfo
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CountOfConnectedEmptySlots;                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.EmptySlotInfoArray
	 * Size -> 0x0010
	 */
	struct FEmptySlotInfoArray
	{
	public:
		TArray<struct FEmptySlotInfo>                              Values;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataGameplayEffect
	 * Size -> 0x0180
	 */
	struct FDesignDataGameplayEffect
	{
	public:
		class UClass*                                              EffectClass;                                             // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayEffectTargetType                                  TargetType;                                              // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSSY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Duration;                                                // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StrengthBase;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StrengthMod;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityBase;                                             // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityMod;                                              // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillBase;                                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillMod;                                                 // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeBase;                                           // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeMod;                                            // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulnessBase;                                     // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulnessMod;                                      // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecDamageWeaponRatio;                                   // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageWeapon;                                    // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageBase;                                      // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalDamageBase;                                  // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalPower;                                           // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageMod;                                       // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageAdd;                                       // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalDamageTrue;                                      // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalDamageTrue;                                  // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalBackstabPower;                                   // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalRangedHeadshotPower;                             // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPenetration;                                        // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecArmorPenetration;                                    // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorRating;                                             // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemArmorRatingMod;                                      // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalReduction;                                       // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalReductionMod;                                    // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalAbsoluteReduction;                               // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageWeapon;                                     // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageBase;                                       // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalDamageBase;                                   // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalPower;                                            // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageMod;                                        // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageAdd;                                        // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalDamageTrue;                                       // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalDamageTrue;                                   // 0x00A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicPenetration;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicPenetration;                                    // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageBase;                                   // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageMod;                                    // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalFireDamageAdd;                                    // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageBase;                                 // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageMod;                                  // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalArcaneDamageAdd;                                  // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicResistance;                                         // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalReduction;                                        // 0x00CC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalReductionMod;                                     // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalAbsoluteReduction;                                // 0x00D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeadshotReductionMod;                                    // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectileReductionMod;                                  // 0x00DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImpactPower;                                             // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecImpactPower;                                         // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecImpactEnduranceRestore;                              // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImpactResistance;                                        // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxImpactEndurance;                                      // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecAddHealthByCurHealthRatio;                           // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecAddHealthByMaxHealthRatio;                           // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalHealBase;                                        // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecPhysicalHealBase;                                    // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalHealBase;                                         // 0x0104(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecMagicalHealBase;                                     // 0x0108(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHealthMod;                                            // 0x010C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHealthAdd;                                            // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddtionalAggroMod;                                       // 0x0114(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPhysicalShield;                                       // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMagicalShield;                                        // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTotalShield;                                          // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCapacityMod;                                        // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCapacityAdd;                                        // 0x0128(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedBase;                                           // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedMod;                                            // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedAdd;                                            // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveSpeedArmorPenaltyMod;                                // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActionSpeed;                                             // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellCastingSpeed;                                       // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemEquipSpeed;                                          // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RegularInteractionSpeed;                                 // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MagicalInteractionSpeed;                                 // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuffDurationMod;                                         // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebuffDurationMod;                                       // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UtilityEffectivenessMod;                                 // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UtilityEffectivenessAdd;                                 // 0x015C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightLimitMod;                                          // 0x0160(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightLimitAdd;                                          // 0x0164(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrestigeItemDrop;                                        // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVPL[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                Tags;                                                    // 0x0170(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataBaseItem
	 * Size -> 0x0064
	 */
	struct FDesignDataBaseItem
	{
	public:
		struct FPrimaryAssetId                                     BaseItem1Id;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseItem1Count;                                          // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     BaseItem2Id;                                             // 0x0014(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseItem2Count;                                          // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     BaseItem3Id;                                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseItem3Count;                                          // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     BaseItem4Id;                                             // 0x003C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseItem4Count;                                          // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     BaseItem5Id;                                             // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseItem5Count;                                          // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMonster
	 * Size -> 0x0068
	 */
	struct FDesignDataMonster
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    AdvPoint;                                                // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpPoint;                                                // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataAoe
	 * Size -> 0x0058
	 */
	struct FDesignDataAoe
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataProps
	 * Size -> 0x0090
	 */
	struct FDesignDataProps
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionMinCount;                                     // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteractionMaxCount;                                     // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             InteractionSettingDatas;                                 // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             DestructibleTagQueryData;                                // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    AdvPoint;                                                // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpPoint;                                                // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPropsInteract
	 * Size -> 0x0098
	 */
	struct FDesignDataPropsInteract
	{
	public:
		class FText                                                InteractionName;                                         // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                InteractionText;                                         // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     InteractData;                                            // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                InteractTypes;                                           // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        InteractableTag;                                         // 0x0054(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TriggerTag;                                              // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DetectTagQueryData;                                      // 0x0064(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     InteractTagQueryData;                                    // 0x0074(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillCheckData;                                          // 0x0084(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ART[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPropsSkillCheck
	 * Size -> 0x0030
	 */
	struct FDesignDataPropsSkillCheck
	{
	public:
		struct FGameplayTag                                        SkillCheckType;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDuration;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSkillCheckInterval;                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSkillCheckInterval;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSucceedSectionStartTime;                              // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SucceedSectionSizeSeconds;                               // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SucceedBonusTimeRatio;                                   // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfectSucceedSectionSizeSeconds;                        // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfectSucceedBonusTimeRatio;                            // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FailedBonusTimeRatio;                                    // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemPropertyType
	 * Size -> 0x0044
	 */
	struct FDesignDataItemPropertyType
	{
	public:
		struct FGameplayTag                                        PropertyType;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EffectType;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValueRatio;                                              // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemPropertyItem
	 * Size -> 0x001C
	 */
	struct FDesignDataItemPropertyItem
	{
	public:
		struct FPrimaryAssetId                                     PropertyTypeId;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinValue;                                                // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PropertyRate;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemProperty
	 * Size -> 0x0010
	 */
	struct FDesignDataItemProperty
	{
	public:
		TArray<struct FDesignDataItemPropertyItem>                 ItemPropertyItemArray;                                   // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemConsume
	 * Size -> 0x0020
	 */
	struct FDesignDataItemConsume
	{
	public:
		class FText                                                ConsumeText;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      ConsumeDuration;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB9F[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemRequirement
	 * Size -> 0x0038
	 */
	struct FDesignDataItemRequirement
	{
	public:
		TArray<struct FPrimaryAssetId>                             ClassRequirements;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StrengthRequirement;                                     // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AgilityRequirement;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WillRequirement;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnowledgeRequirement;                                    // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResourcefulRequirement;                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZV9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             PerkRequirements;                                        // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemBundleInfoItem
	 * Size -> 0x0018
	 */
	struct FDesignDataItemBundleInfoItem
	{
	public:
		struct FPrimaryAssetId                                     BundleArtData;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BundleGrade;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemMinCount;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemBundleInfo
	 * Size -> 0x0010
	 */
	struct FDesignDataItemBundleInfo
	{
	public:
		TArray<struct FDesignDataItemBundleInfoItem>               ItemBundleInfoItemArray;                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemContainer
	 * Size -> 0x0014
	 */
	struct FDesignDataItemContainer
	{
	public:
		struct FPrimaryAssetId                                     ContentsItemId;                                          // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxContentsCount;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataLootDropItem
	 * Size -> 0x0018
	 */
	struct FDesignDataLootDropItem
	{
	public:
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemRate;                                                // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataLootDrop
	 * Size -> 0x0010
	 */
	struct FDesignDataLootDrop
	{
	public:
		TArray<struct FDesignDataLootDropItem>                     LootDropItemArray;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSpawner
	 * Size -> 0x0010
	 */
	struct FDesignDataSpawner
	{
	public:
		TArray<struct FDesignDataSpawnerItem>                      SpawnerItemArray;                                        // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataProjectile
	 * Size -> 0x0060
	 */
	struct FDesignDataProjectile
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMeleeAttack
	 * Size -> 0x0050
	 */
	struct FDesignDataMeleeAttack
	{
	public:
		float                                                      HitPlayRate;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitPlayRateDuration;                                     // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanStuckByHitBox;                                        // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G684[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterStuckPlayRate;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterStuckPlayRateDuration;                          // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterStuckBlendOutTime;                              // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanStuckByShield;                                        // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E30[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeakShieldStuckPlayRate;                                 // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeakShieldStuckPlayRateDuration;                         // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeakShieldStuckBlendOutTime;                             // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MidShieldStuckPlayRate;                                  // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MidShieldStuckPlayRateDuration;                          // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MidShieldStuckBlendOutTime;                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeavyShieldStuckPlayRate;                                // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeavyShieldStuckPlayRateDuration;                        // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeavyShieldStuckBlendOutTime;                            // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanStuckByStaticObject;                                  // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1S1[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticObjectStuckPlayRate;                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticObjectStuckPlayRateDuration;                       // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticObjectStuckBlendOutTime;                           // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSkill
	 * Size -> 0x00C0
	 */
	struct FDesignDataSkill
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DescData;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanUse;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WK3J[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             Classes;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillType;                                               // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillTier;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanRecharge;                                             // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ENT[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxCount;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CastingTime;                                             // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChannelingDuration;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChannelingInterval;                                      // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Range;                                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseMoving;                                               // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EOG[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        SkillTag;                                                // 0x0068(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillCooldownTag;                                        // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SoundData;                                               // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPerk
	 * Size -> 0x0088
	 */
	struct FDesignDataPerk
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DescData;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanUse;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UP1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             Classes;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     IdTagGroup;                                              // 0x0044(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0054(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJOA[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMovementModifier
	 * Size -> 0x0008
	 */
	struct FDesignDataMovementModifier
	{
	public:
		int32_t                                                    Add;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiply;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMerchant
	 * Size -> 0x0040
	 */
	struct FDesignDataMerchant
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                GreetingText;                                            // 0x0018(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMerchantSchedule
	 * Size -> 0x0001
	 */
	struct FDesignDataMerchantSchedule
	{
	public:
		unsigned char                                              UnknownData_ZJT7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockBuyItem
	 * Size -> 0x00B0
	 */
	struct FDesignDataStockBuyItem
	{
	public:
		int64_t                                                    UniqueId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ConversationText;                                        // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                SaleCompleteText;                                        // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_01;                                       // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount01;                                        // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_02;                                       // 0x005C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount02;                                        // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_03;                                       // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount03;                                        // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_04;                                       // 0x0084(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount04;                                        // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_05;                                       // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount05;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDHH[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockBuy
	 * Size -> 0x0010
	 */
	struct FDesignDataStockBuy
	{
	public:
		TArray<struct FDesignDataStockBuyItem>                     StockBuyItemArray;                                       // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockSellBackItem
	 * Size -> 0x0070
	 */
	struct FDesignDataStockSellBackItem
	{
	public:
		int64_t                                                    UniqueId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ConversationText;                                        // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ReceivedItemId_01;                                       // 0x0034(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReceivedAmount01;                                        // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ReceivedItemId_02;                                       // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReceivedAmount02;                                        // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ReceivedItemId_03;                                       // 0x005C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReceivedAmount03;                                        // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockSellBack
	 * Size -> 0x0010
	 */
	struct FDesignDataStockSellBack
	{
	public:
		TArray<struct FDesignDataStockSellBackItem>                StockSellBackItemArray;                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockCraftItem
	 * Size -> 0x00B0
	 */
	struct FDesignDataStockCraftItem
	{
	public:
		int64_t                                                    UniqueId;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ConversationText;                                        // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                CraftCompleteText;                                       // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_01;                                       // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount01;                                        // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_02;                                       // 0x005C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount02;                                        // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_03;                                       // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount03;                                        // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_04;                                       // 0x0084(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount04;                                        // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     RequiredItemId_05;                                       // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredAmount05;                                        // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K84[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataStockCraft
	 * Size -> 0x0010
	 */
	struct FDesignDataStockCraft
	{
	public:
		TArray<struct FDesignDataStockCraftItem>                   StockCraftItemArray;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataFloorRuleItem
	 * Size -> 0x0040
	 */
	struct FDesignDataFloorRuleItem
	{
	public:
		float                                                      DeathSwarmSize;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        DeathSwarmAbilityTag;                                    // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayPhaseDuration;                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             DisplayPhaseFloorPortalArray;                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ShrinkPhaseDuration;                                     // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5QS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             ShrinkPhaseFloorPortalArray;                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       HideDeathSwarmTimer;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYH1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataFloorRule
	 * Size -> 0x0010
	 */
	struct FDesignDataFloorRule
	{
	public:
		TArray<struct FDesignDataFloorRuleItem>                    FloorRuleItemArray;                                      // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataFloorPortal
	 * Size -> 0x000C
	 */
	struct FDesignDataFloorPortal
	{
	public:
		struct FGameplayTag                                        PortalType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PortalScrollNum;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataConstant
	 * Size -> 0x0008
	 */
	struct FDesignDataConstant
	{
	public:
		float                                                      FloatValue;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataEmote
	 * Size -> 0x0060
	 */
	struct FDesignDataEmote
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EmoteTag;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataIdTagGroupItem
	 * Size -> 0x0008
	 */
	struct FDesignDataIdTagGroupItem
	{
	public:
		struct FGameplayTag                                        IdTag;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataIdTagGroup
	 * Size -> 0x0010
	 */
	struct FDesignDataIdTagGroup
	{
	public:
		TArray<struct FDesignDataIdTagGroupItem>                   IdTagGroupItemArray;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataDungeon
	 * Size -> 0x0048
	 */
	struct FDesignDataDungeon
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EGameDifficultyType                                        GameDifficultyType;                                      // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO71[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Floor;                                                   // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelAsset[0x28];                                        // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct DungeonCrawler.DCEmoteSlotInfo
	 * Size -> 0x0014
	 */
	struct FDCEmoteSlotInfo
	{
	public:
		struct FPrimaryAssetId                                     EmoteId;                                                 // 0x0000(0x0010) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.EquipmentQuickSlotInfo
	 * Size -> 0x0020
	 */
	struct FEquipmentQuickSlotInfo
	{
	public:
		int32_t                                                    CurrentSlotIndex;                                        // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_905G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEquipmentSlot*>                              SlotArray;                                               // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBH5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameActorStatusSlotWidgetData
	 * Size -> 0x0020
	 */
	struct FGameActorStatusSlotWidgetData
	{
	public:
		struct FActorStatusData                                    ActorStatusData;                                         // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.InteractTargetData
	 * Size -> 0x0020
	 */
	struct FInteractTargetData
	{
	public:
		class FText                                                InteractTargetName;                                      // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        RarityType;                                              // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.InteractionData
	 * Size -> 0x0088
	 */
	struct FInteractionData
	{
	public:
		class FText                                                InteractionName;                                         // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InteractionText;                                         // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UInteractData*                                       InteractDataAsset;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTRA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               InteractTypes;                                           // 0x0040(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TriggerTag;                                              // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTagQueryData*                                       DetectTagQueryData;                                      // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTagQueryData*                                       InteractTagQueryData;                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillCheckDataId;                                        // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameInteractionDescriptionWidgetData
	 * Size -> 0x0078
	 */
	struct FGameInteractionDescriptionWidgetData
	{
	public:
		struct FInteractTargetData                                 InteractTargetData;                                      // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FInteractionData>         InteractableDataByStateMap;                              // 0x0020(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ECommonInputType                                           InputType;                                               // 0x0070(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZND[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.KeyboardInputBinding
	 * Size -> 0x00A8
	 */
	struct FKeyboardInputBinding
	{
	public:
		struct FEnhancedActionKeyMapping                           InputMapping;                                            // 0x0000(0x0088) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5WB[0x20];                                  // 0x0088(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.GameplayAbilityRelationshipItem
	 * Size -> 0x0088
	 */
	struct FGameplayAbilityRelationshipItem
	{
	public:
		struct FGameplayTag                                        AbilityTag;                                              // 0x0000(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AbilityTagsToBlock;                                      // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               AbilityTagsToCancel;                                     // 0x0028(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ActivationRequiredTags;                                  // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ActivationBlockedTags;                                   // 0x0068(0x0020) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SkillCooldownInfo
	 * Size -> 0x0008
	 */
	struct FSkillCooldownInfo
	{
	public:
		float                                                      RemainDuration;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SkillData
	 * Size -> 0x002C
	 */
	struct FSkillData
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillTag;                                                // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillCooldownTag;                                        // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargeAmount;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIndex;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TimerWidgetData
	 * Size -> 0x0010
	 */
	struct FTimerWidgetData
	{
	public:
		int32_t                                                    LeftHour;                                                // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LeftMinute;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LeftSecond;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameTavernStartTimerWidgetData
	 * Size -> 0x0008
	 */
	struct FGameTavernStartTimerWidgetData
	{
	public:
		int32_t                                                    PlayerLimit;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerCount;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ComboTriggerStep
	 * Size -> 0x0010
	 */
	struct FComboTriggerStep
	{
	public:
		class UInputAction*                                        DependentAction;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationThreshold;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5O1L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.InventoryStatusWidgetData
	 * Size -> 0x0018
	 */
	struct FInventoryStatusWidgetData
	{
	public:
		class FText                                                PlayerCharacterName;                                     // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.InvitePartyUserSlot
	 * Size -> 0x0068
	 */
	struct FInvitePartyUserSlot
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationStatus;                                          // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartyMemeberCount;                                       // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PartyMaxMemeberCount;                                    // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPHL[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.InvitePartyUserSlotData
	 * Size -> 0x0010
	 */
	struct FInvitePartyUserSlotData
	{
	public:
		TArray<struct FInvitePartyUserSlot>                        InvitePartyUserSlotArray;                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemInventorySize
	 * Size -> 0x0008
	 */
	struct FItemInventorySize
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.FunctionTrigger
	 * Size -> 0x0070
	 */
	struct FFunctionTrigger
	{
	public:
		unsigned char                                              UnknownData_5ZHD[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemRandomGenerateData
	 * Size -> 0x0020
	 */
	struct FItemRandomGenerateData
	{
	public:
		class UDesignDataAssetLootDrop*                            DesignDataAssetLootDrop;                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDesignDataLootDrop                                 DesignDataLootDrop;                                      // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    GenerateCount;                                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateAll;                                            // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGJI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemTooltipWidgetData
	 * Size -> 0x0090
	 */
	struct FItemTooltipWidgetData
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0000(0x0090) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.RankRecord
	 * Size -> 0x0050
	 */
	struct FRankRecord
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rank;                                                    // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Percentage;                                              // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0020(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.RankData
	 * Size -> 0x0010
	 */
	struct FRankData
	{
	public:
		TArray<struct FRankRecord>                                 RankRecords;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MerchantInfo
	 * Size -> 0x0020
	 */
	struct FMerchantInfo
	{
	public:
		struct FPrimaryAssetId                                     MerchantId;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Faction;                                                 // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82HQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           RemainTime;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockBuyTradeItemInfo
	 * Size -> 0x0010
	 */
	struct FStockBuyTradeItemInfo
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemContentsCount;                                       // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockCraftTradeItemInfo
	 * Size -> 0x0010
	 */
	struct FStockCraftTradeItemInfo
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemContentsCount;                                       // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockSellBackReceivedData
	 * Size -> 0x0014
	 */
	struct FStockSellBackReceivedData
	{
	public:
		struct FPrimaryAssetId                                     ReceivedItemId;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReceivedItemCount;                                       // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StockSellBackData
	 * Size -> 0x0040
	 */
	struct FStockSellBackData
	{
	public:
		struct FPrimaryAssetId                                     StockSellBackAssetId;                                    // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockSellBackUniqueId;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SellBackItemId;                                          // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SellBackItemCount;                                       // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR4X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStockSellBackReceivedData>                  ReceivedDataArray;                                       // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataSpell
	 * Size -> 0x0018
	 */
	struct FAccountDataSpell
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SequenceIndex;                                           // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpellId;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCMiniMapDataContainer
	 * Size -> 0x0010
	 */
	struct FDCMiniMapDataContainer
	{
	public:
		class UTexture2D*                                          Texture2D;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoWidth;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Zoom;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.NickNameWidgetData
	 * Size -> 0x0010
	 */
	struct FNickNameWidgetData
	{
	public:
		class FString                                              NickNameStr;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatAccountData
	 * Size -> 0x0040
	 */
	struct FChatAccountData
	{
	public:
		class FString                                              ChatAccountId;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatCharacterId;                                         // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           ChatNickName;                                            // 0x0020(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PartyChatWidgetData
	 * Size -> 0x0040
	 */
	struct FPartyChatWidgetData
	{
	public:
		struct FChatAccountData                                    ChatAccountData;                                         // 0x0000(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PerkWidgetData
	 * Size -> 0x0030
	 */
	struct FPerkWidgetData
	{
	public:
		class FText                                                PerkName;                                                // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                PerkDescription;                                         // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.LobbyCharacterInfo
	 * Size -> 0x0088
	 */
	struct FLobbyCharacterInfo
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServiceGrpc;                                             // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            CharacterItemList;                                       // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            CharacterStorageItemList;                                // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.StartGameSessionState
	 * Size -> 0x0001
	 */
	struct FStartGameSessionState
	{
	public:
		bool                                                       Status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ProcessTerminateState
	 * Size -> 0x0008
	 */
	struct FProcessTerminateState
	{
	public:
		bool                                                       Status;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW3Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.HealthCheckState
	 * Size -> 0x0001
	 */
	struct FHealthCheckState
	{
	public:
		unsigned char                                              UnknownData_SQ7O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.SkillDataInfo
	 * Size -> 0x0024
	 */
	struct FSkillDataInfo
	{
	public:
		struct FActiveGameplayEffectHandle                         EffectHandle;                                            // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillTag;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CooldownTag;                                             // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainDuration;                                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SkillWidgetData
	 * Size -> 0x0030
	 */
	struct FSkillWidgetData
	{
	public:
		class FText                                                SkillName;                                               // 0x0000(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                SkillDescription;                                        // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChannelChatWidgetData
	 * Size -> 0x0048
	 */
	struct FTradeChannelChatWidgetData
	{
	public:
		EChatType                                                  ChatType;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X021[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChatAccountData                                    ChatAccountData;                                         // 0x0008(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChatWidgetData
	 * Size -> 0x0040
	 */
	struct FTradeChatWidgetData
	{
	public:
		struct FChatAccountData                                    ChatAccountData;                                         // 0x0000(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterTradeInfo
	 * Size -> 0x0060
	 */
	struct FCharacterTradeInfo
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterLocation;                                       // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWQJ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatData
	 * Size -> 0x0060
	 */
	struct FChatData
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              PartyId;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChatDataPiece>                              ChatDataPieceArray;                                      // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ObjectLinkRequestEvent
	 * Size -> 0x00B0
	 */
	struct FObjectLinkRequestEvent
	{
	public:
		struct FGameplayTag                                        SrcTypeTag;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   DstTypeTagQuery;                                         // 0x0010(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FObjectLinkMetaData                                 MetaData;                                                // 0x0058(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGameplayEffectValue
	 * Size -> 0x0018
	 */
	struct FAccountDataGameplayEffectValue
	{
	public:
		class FString                                              EffectTag;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectValue;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSY0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGameplayEffect
	 * Size -> 0x0020
	 */
	struct FAccountDataGameplayEffect
	{
	public:
		class FString                                              EffectId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataGameplayEffectValue>             SelfEffectValueArray;                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGameplayAbility
	 * Size -> 0x0020
	 */
	struct FAccountDataGameplayAbility
	{
	public:
		class FString                                              AbilityId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataGameplayEffect>                  SelfEffectArray;                                         // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataPerk
	 * Size -> 0x0018
	 */
	struct FAccountDataPerk
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER2C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PerkId;                                                  // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PerkData
	 * Size -> 0x0010
	 */
	struct FPerkData
	{
	public:
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataSkill
	 * Size -> 0x0018
	 */
	struct FAccountDataSkill
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkillId;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DataSkill
	 * Size -> 0x0010
	 */
	struct FDataSkill
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGameSpell
	 * Size -> 0x0018
	 */
	struct FAccountDataGameSpell
	{
	public:
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargeAmount;                                            // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGameSkill
	 * Size -> 0x0018
	 */
	struct FAccountDataGameSkill
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargeAmount;                                            // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataGame
	 * Size -> 0x0030
	 */
	struct FAccountDataGame
	{
	public:
		TArray<struct FDCGameplayEffectSetByCallerData>            InitGameplayEffectSetByCallerDataArray;                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataGameSpell>                       AccountDataGameSpellArray;                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataGameSkill>                       AccountDataGameSkillArray;                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataLogAdvPoint
	 * Size -> 0x0008
	 */
	struct FAccountDataLogAdvPoint
	{
	public:
		ELogEventType                                              LogEventType;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSR7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AdvPoint;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataLogExpPoint
	 * Size -> 0x0008
	 */
	struct FAccountDataLogExpPoint
	{
	public:
		ELogEventType                                              LogEventType;                                            // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NKA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExpPoint;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataLogKill
	 * Size -> 0x0038
	 */
	struct FAccountDataLogKill
	{
	public:
		class FString                                              InstigatorAccountId;                                     // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorName;                                          // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EffectCauserName;                                        // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitBoxType;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNXW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountMonsterKillLog
	 * Size -> 0x0018
	 */
	struct FAccountMonsterKillLog
	{
	public:
		class FString                                              MonsterId;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MonsterKillCount;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLLY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataLog
	 * Size -> 0x0048
	 */
	struct FAccountDataLog
	{
	public:
		int32_t                                                    KillCount;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4D4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataLogAdvPoint>                     AdvPointArray;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataLogExpPoint>                     ExpPointArray;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataLogKill>                         KillLogArray;                                            // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountMonsterKillLog>                      MonsterKillLogArray;                                     // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountData
	 * Size -> 0x0160
	 */
	struct FAccountData
	{
	public:
		class FString                                              AccountGameLiftSessionId;                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountServiceUrl;                                       // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0020(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            AccountDataItemArray;                                    // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataPerk>                            AccountDataPerkArray;                                    // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataSkill>                           AccountDataSkillArray;                                   // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataSpell>                           AccountDataSpellArray;                                   // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FAccountDataGame                                    AccountDataGame;                                         // 0x00D0(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FAccountDataLog                                     AccountDataLog;                                          // 0x0100(0x0048) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              ExitReason;                                              // 0x0148(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedBlock;                                              // 0x0158(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RYF[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountSessionData
	 * Size -> 0x0170
	 */
	struct FAccountSessionData
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0000(0x0160) BlueprintVisible, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerController>                    PlayerController;                                        // 0x0160(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APawn>                                PlayerPawn;                                              // 0x0168(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PartySessionData
	 * Size -> 0x0020
	 */
	struct FPartySessionData
	{
	public:
		struct FPartyData                                          PartyData;                                               // 0x0000(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataCustomizeCharacter
	 * Size -> 0x0018
	 */
	struct FAccountDataCustomizeCharacter
	{
	public:
		class FString                                              CustomizeCharacterId;                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsEquip;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ4L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataCustomizeItem
	 * Size -> 0x0018
	 */
	struct FAccountDataCustomizeItem
	{
	public:
		class FString                                              CustomizeItemId;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsEquip;                                                 // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJ5N[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountDataEmote
	 * Size -> 0x0018
	 */
	struct FAccountDataEmote
	{
	public:
		class FString                                              EmoteId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EquipSlotIndex;                                          // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU9L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataNotify
	 * Size -> 0x0160 (FullSize[0x0178] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataNotify : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataItemChangeRequest
	 * Size -> 0x00A0 (FullSize[0x00B8] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataItemChangeRequest : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountDataItem                                    AccountDataItem;                                         // 0x0028(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataItemRemoveAllRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataItemRemoveAllRequest : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkResponse : public FMsgBase
	{
	public:
		class UAccountSession*                                     AccountSession;                                          // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountSessionDataNotify
	 * Size -> 0x0170 (FullSize[0x0188] - InheritedSize[0x0018])
	 */
	struct FMsgAccountSessionDataNotify : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountSessionNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAccountSessionNotify : public FMsgBase
	{
	public:
		class UAccountSession*                                     AccountSession;                                          // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAccountSessionDataRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAccountSessionDataRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAccountSessionDataResponse
	 * Size -> 0x0178 (FullSize[0x0190] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAccountSessionDataResponse : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0020(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkBegin
	 * Size -> 0x0190 (FullSize[0x01A8] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkBegin : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountData                                        AccountData;                                             // 0x0020(0x0160) BlueprintVisible, NativeAccessSpecifierPublic
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0180(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPartySessionData                                   PartySessionData;                                        // 0x0188(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAccountDataReplicationNotify
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAccountDataReplicationNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0020(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkPlayerControllerNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkPlayerControllerNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerController*                                   PlayerController;                                        // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkPlayerPawnNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkPlayerPawnNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               PlayerPawn;                                              // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAttributeSetNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAttributeSetNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAttributeNotify
	 * Size -> 0x01F0 (FullSize[0x0208] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAttributeNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAttribute                                  Attribute;                                               // 0x0028(0x0038) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewValue;                                                // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldValue;                                                // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0070(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkGameplayTagContainerNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkGameplayTagContainerNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0020(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkGameplayTagNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkGameplayTagNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0020(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTag;                                             // 0x0040(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EHC[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkActorStatusNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkActorStatusNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FActorStatusData>                            ActorStatusDatas;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkEquipmentInventoryNotifiy
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkEquipmentInventoryNotifiy : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentInventoryComponent*                        EquipmentInventory;                                      // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkContainerInventoryNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkContainerInventoryNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 OldInventory;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 NewInventory;                                            // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkLootComponentNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkLootComponentNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULootComponent*                                      OldLootComponent;                                        // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULootComponent*                                      NewLootComponent;                                        // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkLootingTargetPlayerEquipmentInventoryNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkLootingTargetPlayerEquipmentInventoryNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentInventoryComponent*                        EquipmentInventory;                                      // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkLootingTargetPlayerInventoryNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkLootingTargetPlayerInventoryNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 OldTargetInventory;                                      // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 NewTargetInventory;                                      // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkStorageInventoryNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkStorageInventoryNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMetaStorageComponent*                               OldStorage;                                              // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMetaStorageComponent*                               NewStorage;                                              // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkPerkIdArrayNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkPerkIdArrayNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             OldPerkIdArray;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             NewPerkIdArray;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkSkillIdArrayNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkSkillIdArrayNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             OldSkillIdArray;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             NewSkillIdArray;                                         // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkSpellIdArrayNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkSpellIdArrayNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             OldSpellIdArray;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             NewSpellIdArray;                                         // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkPartySessionDataNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkPartySessionDataNotify : public FMsgBase
	{
	public:
		class UAccountLink*                                        AccountLink;                                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPartySessionData                                   PartySessionData;                                        // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountLinkAllAccountDataReplicationNotify
	 * Size -> 0x00E0 (FullSize[0x00F8] - InheritedSize[0x0018])
	 */
	struct FMsgAccountLinkAllAccountDataReplicationNotify : public FMsgBase
	{
	public:
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0018(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
		struct FAccountDataReplication                             OldAccountDataReplication;                               // 0x0088(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataGameRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataGameRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataGameResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataGameResponse : public FMsgBase
	{
	public:
		int32_t                                                    MsgType;                                                 // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1WR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataGameInitAttributeResponse
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FMsgAccountDataGameInitAttributeResponse : public FMsgAccountDataGameResponse
	{
	public:
		TArray<struct FDCGameplayEffectSetByCallerData>            InitGameplayEffectSetByCallerDataArray;                  // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataGameSpellResponse
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FMsgAccountDataGameSpellResponse : public FMsgAccountDataGameResponse
	{
	public:
		TArray<struct FAccountDataGameSpell>                       AccountDataGameSpellArray;                               // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataGameSkillResponse
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FMsgAccountDataGameSkillResponse : public FMsgAccountDataGameResponse
	{
	public:
		TArray<struct FAccountDataGameSkill>                       AccountDataGameSkillArray;                               // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountDataLogEventRequest
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountDataLogEventRequest : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELogEventType                                              LogEventType;                                            // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9WV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimaryAssetId                                     RelativeId;                                              // 0x002C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9697[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAccountExitReasonRequest
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgAccountExitReasonRequest : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedBlock;                                              // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSFO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgActorAttachmentChangedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgActorAttachmentChangedNotify : public FMsgBase
	{
	public:
		class USceneComponent*                                     AttachParentComponent;                                   // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgActorSleepNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgActorSleepNotify : public FMsgBase
	{
	public:
		bool                                                       bSleep;                                                  // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0QK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAnimationChangePlayerCharacterAnimSet
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgAnimationChangePlayerCharacterAnimSet : public FMsgBase
	{
	public:
		struct FLocomotionAnimSet                                  AnimSet;                                                 // 0x0018(0x0018) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSecondaryItem;                                          // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTwoHandedItem;                                          // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBAY[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAnimationStopMontage
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgAnimationStopMontage : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAnimationMontageJumpToSection
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAnimationMontageJumpToSection : public FMsgBase
	{
	public:
		class FName                                                SectionName;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAnimationChangeIdle
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAnimationChangeIdle : public FMsgBase
	{
	public:
		struct FGameplayTag                                        IdleAnimSequenceGameplayTag;                             // 0x0018(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAnimationHitReaction
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAnimationHitReaction : public FMsgBase
	{
	public:
		struct FVector                                             HitDirection;                                            // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAoeAISet
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAoeAISet : public FMsgBase
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AoeScaleData
	 * Size -> 0x0010
	 */
	struct FAoeScaleData
	{
	public:
		float                                                      OldServerWorldTimeSeconds;                               // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldScale;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewServerWorldTimeSeconds;                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewScale;                                                // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterPerspectiveSet
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterPerspectiveSet : public FMsgBase
	{
	public:
		bool                                                       bIsFirstPersonPerspective;                               // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB44[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDefaultBodyPartMapRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgDefaultBodyPartMapRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDefaultBodyPartMapResponse
	 * Size -> 0x0050 (FullSize[0x0068] - InheritedSize[0x0018])
	 */
	struct FMsgDefaultBodyPartMapResponse : public FMsgBase
	{
	public:
		TMap<struct FGameplayTag, class USkeletalMesh*>            DefaultBodyPartsMap;                                     // 0x0018(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgHiddenCharacterNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgHiddenCharacterNotify : public FMsgBase
	{
	public:
		bool                                                       IsHiddenCharacter;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90L8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterResetEquipItemNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterResetEquipItemNotify : public FMsgBase
	{
	public:
		EDCCharacterClass                                          CharacterClass;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCGender                                                  Gender;                                                  // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIEI[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ItemData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     EquipCharacterSkin;                                      // 0x0030(0x0010) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             EquipItemSkinList;                                       // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetCheckTargetPlayerEquipment
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgSetCheckTargetPlayerEquipment : public FMsgBase
	{
	public:
		class FString                                              TargetPlayerAccountId;                                   // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveCheckTargetPlayerEquipment
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveCheckTargetPlayerEquipment : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterAddMovementModifier
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterAddMovementModifier : public FMsgBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             MovementModifiers;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterRemoveMovementModifier
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterRemoveMovementModifier : public FMsgBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             MovementModifiers;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChatData
	 * Size -> 0x0070
	 */
	struct FTradeChatData
	{
	public:
		EChatType                                                  ChatType;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5D0M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Time;                                                    // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0010(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PartyChatData
	 * Size -> 0x0068
	 */
	struct FPartyChatData
	{
	public:
		int64_t                                                    Time;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0008(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatEditWidgetData
	 * Size -> 0x0050
	 */
	struct FChatEditWidgetData
	{
	public:
		int32_t                                                    StartIndex;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChatDataPiece                                      ChatDataPiece;                                           // 0x0008(0x0048) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ChatRecord
	 * Size -> 0x0070
	 */
	struct FChatRecord
	{
	public:
		EChatWidgetType                                            ChatWidgetType;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60PJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateTime;                                                // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0030(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              PartyId;                                                 // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatStr;                                                 // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.RequestMsg
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FRequestMsg : public FMsgBase
	{
	public:
		int32_t                                                    RequestCommand;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXR8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountInfo
	 * Size -> 0x0020
	 */
	struct FAccountInfo
	{
	public:
		class FString                                              Nickname;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAliveRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgAliveRequestBody
	{
	public:
		unsigned char                                              UnknownData_AG6Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAliveRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgAliveRequest : public FRequestMsg
	{
	public:
		struct FClientMsgAliveRequestBody                          Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2BS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAliveResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgAliveResponseBody
	{
	public:
		unsigned char                                              UnknownData_F4WQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAliveResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgAliveResponse : public FMsgBase
	{
	public:
		struct FClientMsgAliveResponseBody                         Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQKV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLoginRequestBody
	 * Size -> 0x0038
	 */
	struct FClientMsgLoginRequestBody
	{
	public:
		class FString                                              LoginId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PassWord;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IpAddress;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SteamBuildId;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0EF[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLoginDevRequest
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FClientMsgLoginDevRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLoginRequestBody                          Request;                                                 // 0x0020(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLoginResponseBody
	 * Size -> 0x0060
	 */
	struct FClientMsgLoginResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7IJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccountInfo                                        AccountInfo;                                             // 0x0008(0x0020) Transient, NativeAccessSpecifierPublic
		int32_t                                                    IsReconnect;                                             // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y66[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Address;                                                 // 0x0030(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0040(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0050(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLoginDevResponse
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FClientMsgLoginDevResponse : public FMsgBase
	{
	public:
		struct FClientMsgLoginResponseBody                         Response;                                                // 0x0018(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStartGameRequestBody
	 * Size -> 0x000C
	 */
	struct FClientMsgStartGameRequestBody
	{
	public:
		int32_t                                                    Mode;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Region;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    difficultyType;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStartGameRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgStartGameRequest : public FRequestMsg
	{
	public:
		struct FClientMsgStartGameRequestBody                      Request;                                                 // 0x0020(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MGN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStartGameResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgStartGameResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStartGameResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgStartGameResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_LM8D[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgEnterGameBody
	 * Size -> 0x0060
	 */
	struct FClientMsgEnterGameBody
	{
	public:
		int32_t                                                    Port;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKUC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Ip;                                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsReconnect;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POZT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           Nickname;                                                // 0x0040(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgEnterGameNotify
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FClientMsgEnterGameNotify : public FMsgBase
	{
	public:
		struct FClientMsgEnterGameBody                             Notify;                                                  // 0x0018(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryInfoRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgInventoryInfoRequestBody
	{
	public:
		int32_t                                                    classPick;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventoryInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventoryInfoRequestBody                  Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7VP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryInfoResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgInventoryInfoResponseBody
	{
	public:
		TArray<struct FAccountDataItem>                            InventoryItems;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryInfoResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventoryInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgStartGameResponseBody                     Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_658L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgInventoryAllUpdateRequestBody
	{
	public:
		TArray<struct FAccountDataItem>                            InventoryItems;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventoryAllUpdateRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventoryAllUpdateRequestBody             Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgInventoryAllUpdateResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryAllUpdateResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventoryAllUpdateResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventoryAllUpdateResponseBody            Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKGN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInventorySingleUpdateRequestBody
	{
	public:
		int32_t                                                    SingleUpdateFlag;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6J8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataItem>                            OldItem;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            NewItem;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventorySingleUpdateRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventorySingleUpdateRequestBody          Request;                                                 // 0x0020(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateResponseBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInventorySingleUpdateResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVYK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataItem>                            OldItem;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            NewItem;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySingleUpdateResponse
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventorySingleUpdateResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventorySingleUpdateResponseBody         Response;                                                // 0x0018(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.InventoryReqInfo
	 * Size -> 0x0010
	 */
	struct FInventoryReqInfo
	{
	public:
		int64_t                                                    UniqueId;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryId;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMoveRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgInventoryMoveRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DstInventoryId;                                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstSlotId;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMoveRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventoryMoveRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventoryMoveRequestBody                  Request;                                                 // 0x0020(0x0018) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMoveResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgInventoryMoveResponseBody
	{
	public:
		unsigned char                                              UnknownData_Y620[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMoveResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventoryMoveResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventoryMoveResponseBody                 Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05AI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMergeRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgInventoryMergeRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FInventoryReqInfo                                   DstInfo;                                                 // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMergeRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventoryMergeRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventoryMergeRequestBody                 Request;                                                 // 0x0020(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMergeResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgInventoryMergeResponseBody
	{
	public:
		unsigned char                                              UnknownData_TSEJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryMergeResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventoryMergeResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventoryMergeResponseBody                Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF6K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySwapRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInventorySwapRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FInventoryReqInfo                                   DstInfo;                                                 // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NewSlotId;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewInventoryId;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySwapRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventorySwapRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventorySwapRequestBody                  Request;                                                 // 0x0020(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySwapResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgInventorySwapResponseBody
	{
	public:
		unsigned char                                              UnknownData_87LK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySwapResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventorySwapResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventorySwapResponseBody                 Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPTO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgInventorySplitMoveRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstInventoryId;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstSlotId;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BY7V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventorySplitMoveRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventorySplitMoveRequestBody             Request;                                                 // 0x0020(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgInventorySplitMoveResponseBody
	{
	public:
		int64_t                                                    NewUniqueId;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewInventoryId;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewSlotId;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMoveResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventorySplitMoveResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventorySplitMoveResponseBody            Response;                                                // 0x0018(0x0010) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInventorySplitMergeRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FInventoryReqInfo                                   DstInfo;                                                 // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9E4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventorySplitMergeRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventorySplitMergeRequestBody            Request;                                                 // 0x0020(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgInventorySplitMergeResponseBody
	{
	public:
		unsigned char                                              UnknownData_0DST[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitMergeResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventorySplitMergeResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventorySplitMergeResponseBody           Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q995[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapRequestBody
	 * Size -> 0x0030
	 */
	struct FClientMsgInventorySplitSwapRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FInventoryReqInfo                                   DstInfo;                                                 // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewSlotId;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewInventoryId;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLUV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapRequest
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventorySplitSwapRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventorySplitSwapRequestBody             Request;                                                 // 0x0020(0x0030) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgInventorySplitSwapResponseBody
	{
	public:
		int64_t                                                    NewUniqueId;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewInventoryId;                                          // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewSlotId;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventorySplitSwapResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventorySplitSwapResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventorySplitSwapResponseBody            Response;                                                // 0x0018(0x0010) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInventoryTwoHandedWeaponSwapRequestBody
	{
	public:
		struct FInventoryReqInfo                                   SrcInfo;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FInventoryReqInfo                                   DstInfo;                                                 // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NewSlotId;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NewInventoryId;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgInventoryTwoHandedWeaponSwapRequest : public FRequestMsg
	{
	public:
		struct FClientMsgInventoryTwoHandedWeaponSwapRequestBody   Request;                                                 // 0x0020(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgInventoryTwoHandedWeaponSwapResponseBody
	{
	public:
		unsigned char                                              UnknownData_RXCA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInventoryTwoHandedWeaponSwapResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgInventoryTwoHandedWeaponSwapResponse : public FMsgBase
	{
	public:
		struct FClientMsgInventoryTwoHandedWeaponSwapResponseBody  Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LZW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankRangeRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgRankRangeRequestBody
	{
	public:
		int32_t                                                    RankType;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartIndex;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndIndex;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIXA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterClass;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankRangeRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgRankRangeRequest : public FRequestMsg
	{
	public:
		struct FClientMsgRankRangeRequestBody                      Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankRangeResponseBody
	 * Size -> 0x0038
	 */
	struct FClientMsgRankRangeResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QPF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRankRecord>                                 Records;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RankType;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllRowCount;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartIndex;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndIndex;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankRangeResponse
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FClientMsgRankRangeResponse : public FMsgBase
	{
	public:
		struct FClientMsgRankRangeResponseBody                     Response;                                                // 0x0018(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankNearByRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgRankNearByRequestBody
	{
	public:
		int32_t                                                    RankType;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SearchRange;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SearchIndex;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JIXU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterClass;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankNearByRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgRankNearByRequest : public FRequestMsg
	{
	public:
		struct FClientMsgRankNearByRequestBody                     Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankNearByResponseBody
	 * Size -> 0x0038
	 */
	struct FClientMsgRankNearByResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I01T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRankRecord>                                 Records;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RankType;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllRowCount;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SearchRange;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RK7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterClass;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankNearByResponse
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FClientMsgRankNearByResponse : public FMsgBase
	{
	public:
		struct FClientMsgRankNearByResponseBody                    Response;                                                // 0x0018(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankCharacterRequestBody
	 * Size -> 0x0038
	 */
	struct FClientMsgRankCharacterRequestBody
	{
	public:
		int32_t                                                    RankType;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F37G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           Nickname;                                                // 0x0008(0x0020) NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankCharacterRequest
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FClientMsgRankCharacterRequest : public FRequestMsg
	{
	public:
		struct FClientMsgRankCharacterRequestBody                  Request;                                                 // 0x0020(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankCharacterResponseBody
	 * Size -> 0x0070
	 */
	struct FClientMsgRankCharacterResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XTU0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRankRecord                                         RankRecord;                                              // 0x0008(0x0050) NativeAccessSpecifierPublic
		int32_t                                                    RankType;                                                // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AllRowCount;                                             // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgRankCharacterResponse
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FClientMsgRankCharacterResponse : public FMsgBase
	{
	public:
		struct FClientMsgRankCharacterResponseBody                 Response;                                                // 0x0018(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLoginCharacterInfo
	 * Size -> 0x0088
	 */
	struct FClientMsgLoginCharacterInfo
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CreateAt;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Level;                                                   // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   LastLoginDate;                                           // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            EquipItemList;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      EquipCharacterSkinList;                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      EquipItemSkinList;                                       // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterCreateRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgCharacterCreateRequestBody
	{
	public:
		class FString                                              Nickname;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     CharacterClass;                                          // 0x0010(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25I9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterCreateRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgCharacterCreateRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCharacterCreateRequestBody                Request;                                                 // 0x0020(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterCreateResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgCharacterCreateResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterCreateResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgCharacterCreateResponse : public FMsgBase
	{
	public:
		struct FClientMsgCharacterCreateResponseBody               Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1PO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterListRequestBody
	 * Size -> 0x0008
	 */
	struct FClientMsgCharacterListRequestBody
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageCapacity;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgCharacterListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCharacterListRequestBody                  Request;                                                 // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCharacterListResponseBody
	{
	public:
		int32_t                                                    TotalCharacterCount;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClientMsgLoginCharacterInfo>                CharacterList;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCharacterListResponse : public FMsgBase
	{
	public:
		struct FClientMsgCharacterListResponseBody                 Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterDeleteRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgCharacterDeleteRequestBody
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterDeleteRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgCharacterDeleteRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCharacterDeleteRequestBody                Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterDeleteResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgCharacterDeleteResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterDeleteResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgCharacterDeleteResponse : public FMsgBase
	{
	public:
		struct FClientMsgCharacterDeleteResponseBody               Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHST[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgLobbyEnterRequestBody
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgLobbyEnterRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLobbyEnterRequestBody                     Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgLobbyEnterResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07E7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyEnterResponse : public FMsgBase
	{
	public:
		struct FClientMsgLobbyEnterResponseBody                    Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgCharacterSelectEnterRequestBody
	{
	public:
		unsigned char                                              UnknownData_360Y[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgCharacterSelectEnterRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCharacterSelectEnterRequestBody           Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SBU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgCharacterSelectEnterResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCharacterSelectEnterResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgCharacterSelectEnterResponse : public FMsgBase
	{
	public:
		struct FClientMsgCharacterSelectEnterResponseBody          Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3OH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgLobbyCharacterInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_EPRF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgLobbyCharacterInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLobbyCharacterInfoRequestBody             Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVNL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoResponseBody
	 * Size -> 0x0090
	 */
	struct FClientMsgLobbyCharacterInfoResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M1O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLobbyCharacterInfo                                 CharacterDataBase;                                       // 0x0008(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoResponse
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyCharacterInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgLobbyCharacterInfoResponseBody            Response;                                                // 0x0018(0x0090) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyCharacterInfoWidgetNotify
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyCharacterInfoWidgetNotify : public FMsgBase
	{
	public:
		struct FLobbyCharacterInfo                                 CharacterDataBase;                                       // 0x0018(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLocalTestResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgLocalTestResponse : public FMsgBase
	{
	public:
		bool                                                       IsLocalTest;                                             // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82GP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgLobbyEnterFromGameRequestBody
	{
	public:
		unsigned char                                              UnknownData_2WEG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgLobbyEnterFromGameRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLobbyEnterFromGameRequestBody             Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56G4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgLobbyEnterFromGameResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyEnterFromGameResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyEnterFromGameResponse : public FMsgBase
	{
	public:
		struct FClientMsgLobbyEnterFromGameResponseBody            Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F39J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgLobbyGameDifficultySelectRequestBody
	{
	public:
		int32_t                                                    GameDifficultyTypeIndex;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgLobbyGameDifficultySelectRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLobbyGameDifficultySelectRequestBody      Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVDU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectResponseBody
	 * Size -> 0x0008
	 */
	struct FClientMsgLobbyGameDifficultySelectResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameDifficultyTypeIndex;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyGameDifficultySelectResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyGameDifficultySelectResponse : public FMsgBase
	{
	public:
		struct FClientMsgLobbyGameDifficultySelectResponseBody     Response;                                                // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.AccountCurrencyInfo
	 * Size -> 0x0008
	 */
	struct FAccountCurrencyInfo
	{
	public:
		int32_t                                                    CurrencyType;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrencyValue;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyAccountCurrencyListNotifyBody
	 * Size -> 0x0010
	 */
	struct FClientMsgLobbyAccountCurrencyListNotifyBody
	{
	public:
		TArray<struct FAccountCurrencyInfo>                        CurrencyInfos;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyAccountCurrencyListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyAccountCurrencyListNotify : public FMsgBase
	{
	public:
		struct FClientMsgLobbyAccountCurrencyListNotifyBody        Notify;                                                  // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListRequestBody
	 * Size -> 0x0008
	 */
	struct FClientMsgFriendListRequestBody
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageCapacity;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgFriendListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgFriendListRequestBody                     Request;                                                 // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListResponseBody
	 * Size -> 0x0020
	 */
	struct FClientMsgFriendListResponseBody
	{
	public:
		TArray<struct FInvitePartyUserSlot>                        FriendInfoList;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageIndex;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFriendCount;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LobbyLocateCount;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DungeonLocateCount;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListResponse
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FClientMsgFriendListResponse : public FMsgBase
	{
	public:
		struct FClientMsgFriendListResponseBody                    Response;                                                // 0x0018(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListAllRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgFriendListAllRequestBody
	{
	public:
		unsigned char                                              UnknownData_F03E[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListAllRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgFriendListAllRequest : public FRequestMsg
	{
	public:
		struct FClientMsgFriendListAllRequestBody                  Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6JV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListAllResponseBody
	 * Size -> 0x0020
	 */
	struct FClientMsgFriendListAllResponseBody
	{
	public:
		TArray<struct FInvitePartyUserSlot>                        FriendInfoList;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LoopFlag;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalUserCount;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LobbyLocateCount;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DungeonLocateCount;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendListAllResponse
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FClientMsgFriendListAllResponse : public FMsgBase
	{
	public:
		struct FClientMsgFriendListAllResponseBody                 Response;                                                // 0x0018(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendFindRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgFriendFindRequestBody
	{
	public:
		struct FNickname                                           Nickname;                                                // 0x0000(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendFindRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgFriendFindRequest : public FRequestMsg
	{
	public:
		struct FClientMsgFriendFindRequestBody                     Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendFindResponseBody
	 * Size -> 0x0070
	 */
	struct FClientMsgFriendFindResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInvitePartyUserSlot                                FriendInfo;                                              // 0x0008(0x0068) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgFriendFindResponse
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FClientMsgFriendFindResponse : public FMsgBase
	{
	public:
		struct FClientMsgFriendFindResponseBody                    Response;                                                // 0x0018(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyCharacterInfo
	 * Size -> 0x0070
	 */
	struct FClientMsgPartyCharacterInfo
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Level;                                                   // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsPartyLeader;                                           // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsReady;                                                 // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            EquipItemList;                                           // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteRequestBody
	 * Size -> 0x0040
	 */
	struct FClientMsgPartyInviteRequestBody
	{
	public:
		struct FNickname                                           FindNickName;                                            // 0x0000(0x0020) NativeAccessSpecifierPublic
		class FString                                              FindAccountId;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FindCharacterId;                                         // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteRequest
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyInviteRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyInviteRequestBody                    Request;                                                 // 0x0020(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyInviteResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyInviteResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyInviteResponseBody                   Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKEQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgPartyInviteAnswerRequestBody
	{
	public:
		int32_t                                                    InviteResult;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_281L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReturnAccountId;                                         // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyInviteAnswerRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyInviteAnswerRequestBody              Request;                                                 // 0x0020(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyInviteAnswerResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyInviteAnswerResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyInviteAnswerResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyInviteAnswerResponseBody             Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYI6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyExitRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgPartyExitRequestBody
	{
	public:
		unsigned char                                              UnknownData_VF1F[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyExitRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyExitRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyExitRequestBody                      Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MHH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyExitResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyExitResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyExitResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyExitResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyExitResponseBody                     Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSIE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyReadyRequestBody
	{
	public:
		int32_t                                                    IsReady;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyReadyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyReadyRequestBody                     Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EW0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyReadyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyReadyResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyReadyResponseBody                    Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKOG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInvitePartyNotifyBody
	 * Size -> 0x0040
	 */
	struct FClientMsgInvitePartyNotifyBody
	{
	public:
		struct FNickname                                           InviteeNickName;                                         // 0x0000(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              InviteeAccountId;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteeCharacterId;                                      // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInvitePartyNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FClientMsgInvitePartyNotify : public FMsgBase
	{
	public:
		struct FClientMsgInvitePartyNotifyBody                     Notify;                                                  // 0x0018(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInviteAnswerResultNotifyBody
	 * Size -> 0x0028
	 */
	struct FClientMsgInviteAnswerResultNotifyBody
	{
	public:
		struct FNickname                                           Nickname;                                                // 0x0000(0x0020) NativeAccessSpecifierPublic
		int32_t                                                    InviteResult;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35FU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgInviteAnswerResultNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FClientMsgInviteAnswerResultNotify : public FMsgBase
	{
	public:
		struct FClientMsgInviteAnswerResultNotifyBody              Notify;                                                  // 0x0018(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberInfoNotifyBody
	 * Size -> 0x0010
	 */
	struct FClientMsgPartyMemberInfoNotifyBody
	{
	public:
		TArray<struct FClientMsgPartyCharacterInfo>                PlayPartyUserInfoData;                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberInfoNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyMemberInfoNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyMemberInfoNotifyBody                 Notify;                                                  // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberEquipItemChangeNotifyBody
	 * Size -> 0x0040
	 */
	struct FClientMsgPartyMemberEquipItemChangeNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            OldItems;                                                // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            NewItems;                                                // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberEquipItemChangeNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyMemberEquipItemChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyMemberEquipItemChangeNotifyBody      Notify;                                                  // 0x0018(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyRegionChangeNotifyBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyRegionChangeNotifyBody
	{
	public:
		int32_t                                                    Region;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyRegionChangeNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyRegionChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyRegionChangeNotifyBody               Notify;                                                  // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEZO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAutoMatchRegTeamNotifyBody
	 * Size -> 0x0008
	 */
	struct FClientMsgAutoMatchRegTeamNotifyBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Mode;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAutoMatchRegTeamNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgAutoMatchRegTeamNotify : public FMsgBase
	{
	public:
		struct FClientMsgAutoMatchRegTeamNotifyBody                Notify;                                                  // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgOpenLobbyMapRequestBody
	{
	public:
		unsigned char                                              UnknownData_OVGC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgOpenLobbyMapRequest : public FRequestMsg
	{
	public:
		struct FClientMsgOpenLobbyMapRequestBody                   Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_840K[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgOpenLobbyMapResponseBody
	{
	public:
		unsigned char                                              UnknownData_361Z[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOpenLobbyMapResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgOpenLobbyMapResponse : public FMsgBase
	{
	public:
		struct FClientMsgOpenLobbyMapResponseBody                  Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FK6O[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgLobbyRegionSelectRequestBody
	{
	public:
		int32_t                                                    Region;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgLobbyRegionSelectRequest : public FRequestMsg
	{
	public:
		struct FClientMsgLobbyRegionSelectRequestBody              Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXVR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectResponseBody
	 * Size -> 0x0008
	 */
	struct FClientMsgLobbyRegionSelectResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Region;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgLobbyRegionSelectResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgLobbyRegionSelectResponse : public FMsgBase
	{
	public:
		struct FClientMsgLobbyRegionSelectResponseBody             Response;                                                // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyLocationUpdateNotifyBody
	 * Size -> 0x0028
	 */
	struct FClientMsgPartyLocationUpdateNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpdateLocation;                                          // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLPK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyLocationUpdateNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyLocationUpdateNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyLocationUpdateNotifyBody             Notify;                                                  // 0x0018(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinListNotifyBody
	 * Size -> 0x0030
	 */
	struct FClientMsgPartyCharacterSkinListNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CharacterSkinIdList;                                     // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinListNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyCharacterSkinListNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyCharacterSkinListNotifyBody          Notify;                                                  // 0x0018(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinChangeNotifyBody
	 * Size -> 0x0040
	 */
	struct FClientMsgPartyCharacterSkinChangeNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OldCharacterSkinId;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewCharacterSkinId;                                      // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyCharacterSkinChangeNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyCharacterSkinChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyCharacterSkinChangeNotifyBody        Notify;                                                  // 0x0018(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinListNotifyBody
	 * Size -> 0x0030
	 */
	struct FClientMsgPartyItemSkinListNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      itemSkinIdList;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinListNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyItemSkinListNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyItemSkinListNotifyBody               Notify;                                                  // 0x0018(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinChangeNotifyBody
	 * Size -> 0x0040
	 */
	struct FClientMsgPartyItemSkinChangeNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OldItemSkinId;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewItemSkinId;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyItemSkinChangeNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyItemSkinChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyItemSkinChangeNotifyBody             Notify;                                                  // 0x0018(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyGameDifficultyChangeNotifyBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyGameDifficultyChangeNotifyBody
	{
	public:
		int32_t                                                    GameDifficultyTypeIndex;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyGameDifficultyChangeNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyGameDifficultyChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyGameDifficultyChangeNotifyBody       Notify;                                                  // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJPG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgPartyMemberKickRequestBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyMemberKickRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyMemberKickRequestBody                Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyMemberKickResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyMemberKickResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyMemberKickResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyMemberKickResponseBody               Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52XP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatRequestBody
	 * Size -> 0x0060
	 */
	struct FClientMsgPartyChatRequestBody
	{
	public:
		struct FChatData                                           ChatData;                                                // 0x0000(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatRequest
	 * Size -> 0x0060 (FullSize[0x0080] - InheritedSize[0x0020])
	 */
	struct FClientMsgPartyChatRequest : public FRequestMsg
	{
	public:
		struct FClientMsgPartyChatRequestBody                      Request;                                                 // 0x0020(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgPartyChatResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyChatResponse : public FMsgBase
	{
	public:
		struct FClientMsgPartyChatResponseBody                     Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULPQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatNotifyBody
	 * Size -> 0x0068
	 */
	struct FClientMsgPartyChatNotifyBody
	{
	public:
		struct FChatData                                           ChatData;                                                // 0x0000(0x0060) NativeAccessSpecifierPublic
		int64_t                                                    Time;                                                    // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyChatNotify
	 * Size -> 0x0068 (FullSize[0x0080] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyChatNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyChatNotifyBody                       Notify;                                                  // 0x0018(0x0068) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyChangeNotifyBody
	 * Size -> 0x0028
	 */
	struct FClientMsgPartyReadyChangeNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsReady;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX75[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyReadyChangeNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyReadyChangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyReadyChangeNotifyBody                Notify;                                                  // 0x0018(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyKickedOutNotifyBody
	 * Size -> 0x0001
	 */
	struct FClientMsgPartyKickedOutNotifyBody
	{
	public:
		unsigned char                                              UnknownData_CV0P[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgPartyKickedOutNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgPartyKickedOutNotify : public FMsgBase
	{
	public:
		struct FClientMsgPartyKickedOutNotifyBody                  Notify;                                                  // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_594U[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgGMPartyRandomRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgGMPartyRandomRequestBody
	{
	public:
		unsigned char                                              UnknownData_JRHK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgGMPartyRandomRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgGMPartyRandomRequest : public FRequestMsg
	{
	public:
		struct FClientMsgGMPartyRandomRequestBody                  Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDP3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgGMPartyRandomResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgGMPartyRandomResponseBody
	{
	public:
		unsigned char                                              UnknownData_NIB7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgGMPartyRandomResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgGMPartyRandomResponse : public FMsgBase
	{
	public:
		struct FClientMsgGMPartyRandomResponseBody                 Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q62K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgReconnectRequestBody
	{
	public:
		unsigned char                                              UnknownData_YQHH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgReconnectRequest : public FRequestMsg
	{
	public:
		struct FClientMsgReconnectRequestBody                      Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIJQ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgReconnectResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgReconnectResponse : public FMsgBase
	{
	public:
		struct FClientMsgReconnectResponseBody                     Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9RF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStorageInfoRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgStorageInfoRequestBody
	{
	public:
		uint32_t                                                   IsRefresh;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStorageInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgStorageInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgStorageInfoRequestBody                    Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEAR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStorageInfoResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgStorageInfoResponseBody
	{
	public:
		uint32_t                                                   Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataItem>                            StorageItems;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgStorageInfoResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgStorageInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgStorageInfoResponseBody                   Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectInGameRequestBody
	 * Size -> 0x0028
	 */
	struct FClientMsgReconnectInGameRequestBody
	{
	public:
		int32_t                                                    IsRefusal;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OWA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           Nickname;                                                // 0x0008(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectInGameRequest
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FClientMsgReconnectInGameRequest : public FRequestMsg
	{
	public:
		struct FClientMsgReconnectInGameRequestBody                Request;                                                 // 0x0020(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectInGameResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgReconnectInGameResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReconnectInGameResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgReconnectInGameResponse : public FMsgBase
	{
	public:
		struct FClientMsgReconnectInGameResponseBody               Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFY1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantInfo
	 * Size -> 0x0020
	 */
	struct FClientMsgMerchantInfo
	{
	public:
		class FString                                              MerchantId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Faction;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02EX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    RemainTime;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgMerchantListRequestBody
	{
	public:
		unsigned char                                              UnknownData_RIQC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantListRequestBody                   Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3VS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantListResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgMerchantListResponseBody
	{
	public:
		TArray<struct FClientMsgMerchantInfo>                      MerchantList;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantListResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantListResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantListResponseBody                  Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgMerchantStockBuyItemListRequestBody
	{
	public:
		class FString                                              MerchantId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantStockBuyItemListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantStockBuyItemListRequestBody       Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyInfo
	 * Size -> 0x00A8
	 */
	struct FClientMsgMerchantStockBuyInfo
	{
	public:
		class FString                                              StockBuyId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountDataItem                                    ItemInfo;                                                // 0x0018(0x0090) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgMerchantStockBuyItemListResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopMessageFlag;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClientMsgMerchantStockBuyInfo>              StockList;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyItemListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantStockBuyItemListResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantStockBuyItemListResponseBody      Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgMerchantStockSellBackItemListRequestBody
	{
	public:
		class FString                                              MerchantId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantStockSellBackItemListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantStockSellBackItemListRequestBody  Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackInfo
	 * Size -> 0x0018
	 */
	struct FClientMsgMerchantStockSellBackInfo
	{
	public:
		class FString                                              StockSellBackId;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgMerchantStockSellBackItemListResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopMessageFlag;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClientMsgMerchantStockSellBackInfo>         StockList;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackItemListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantStockSellBackItemListResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantStockSellBackItemListResponseBody Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MerchantTradeResultItemSlotInfo
	 * Size -> 0x0028
	 */
	struct FMerchantTradeResultItemSlotInfo
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ItemUniqueId;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemContentsCount;                                       // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyRequestBody
	 * Size -> 0x0050
	 */
	struct FClientMsgMerchantStockBuyRequestBody
	{
	public:
		class FString                                              TradeId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStockBuyTradeItemInfo>                      DealItemList;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMerchantTradeResultItemSlotInfo                    MerchantSlotInfo;                                        // 0x0028(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyRequest
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantStockBuyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantStockBuyRequestBody               Request;                                                 // 0x0020(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgMerchantStockBuyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockBuyResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantStockBuyResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantStockBuyResponseBody              Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14VS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MerchantStockSellBackInfo
	 * Size -> 0x0020
	 */
	struct FMerchantStockSellBackInfo
	{
	public:
		class FString                                              TradeId;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    ItemUniqueId;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgMerchantStockSellBackRequestBody
	{
	public:
		TArray<struct FMerchantStockSellBackInfo>                  SellBackInfos;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMerchantTradeResultItemSlotInfo>            ReceivedInfos;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantStockSellBackRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantStockSellBackRequestBody          Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgMerchantStockSellBackResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantStockSellBackResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantStockSellBackResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantStockSellBackResponseBody         Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LI0L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MerchantStockCraftItemInfo
	 * Size -> 0x00A8
	 */
	struct FMerchantStockCraftItemInfo
	{
	public:
		class FString                                              StockCraftId;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAccountDataItem                                    ItemInfo;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgMerchantServiceCraftListRequestBody
	{
	public:
		class FString                                              MerchantId;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantServiceCraftListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantServiceCraftListRequestBody       Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgMerchantServiceCraftListResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopMessageFlag;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMerchantStockCraftItemInfo>                 StockCraftList;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantServiceCraftListResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantServiceCraftListResponseBody      Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftRequestBody
	 * Size -> 0x0050
	 */
	struct FClientMsgMerchantServiceCraftRequestBody
	{
	public:
		class FString                                              TradeId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    StockUniqueId;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStockCraftTradeItemInfo>                    StockCraftList;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMerchantTradeResultItemSlotInfo                    MerchantSlotInfo;                                        // 0x0028(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftRequest
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FClientMsgMerchantServiceCraftRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMerchantServiceCraftRequestBody           Request;                                                 // 0x0020(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgMerchantServiceCraftResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMerchantServiceCraftResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgMerchantServiceCraftResponse : public FMsgBase
	{
	public:
		struct FClientMsgMerchantServiceCraftResponseBody          Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MDX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgAccountAgreeAnswerRequestBody
	{
	public:
		int32_t                                                    IsAgree;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgAccountAgreeAnswerRequest : public FRequestMsg
	{
	public:
		struct FClientMsgAccountAgreeAnswerRequestBody             Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J69R[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgAccountAgreeAnswerResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgAccountAgreeAnswerResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgAccountAgreeAnswerResponse : public FMsgBase
	{
	public:
		struct FClientMsgAccountAgreeAnswerResponseBody            Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUJO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMetaLocationRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgMetaLocationRequestBody
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMetaLocationRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgMetaLocationRequest : public FRequestMsg
	{
	public:
		struct FClientMsgMetaLocationRequestBody                   Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR4B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMetaLocationResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgMetaLocationResponseBody
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgMetaLocationResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgMetaLocationResponse : public FMsgBase
	{
	public:
		struct FClientMsgMetaLocationResponseBody                  Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDWX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.BLOCK_CHARACTER
	 * Size -> 0x0058
	 */
	struct FBLOCK_CHARACTER
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0020(0x0020) NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gender;                                                  // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGV0[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgBlockCharacterRequestBody
	{
	public:
		class FString                                              TargetAccountId;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCharacterId;                                       // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgBlockCharacterRequest : public FRequestMsg
	{
	public:
		struct FClientMsgBlockCharacterRequestBody                 Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterResponseBody
	 * Size -> 0x0060
	 */
	struct FClientMsgBlockCharacterResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33DZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBLOCK_CHARACTER                                    TargetCharacterInfo;                                     // 0x0008(0x0058) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterResponse
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FClientMsgBlockCharacterResponse : public FMsgBase
	{
	public:
		struct FClientMsgBlockCharacterResponseBody                Response;                                                // 0x0018(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgUnBlockCharacterRequestBody
	 * Size -> 0x0020
	 */
	struct FClientMsgUnBlockCharacterRequestBody
	{
	public:
		class FString                                              TargetAccountId;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCharacterId;                                       // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgUnBlockCharacterRequest
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FClientMsgUnBlockCharacterRequest : public FRequestMsg
	{
	public:
		struct FClientMsgUnBlockCharacterRequestBody               Request;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgUnBlockCharacterResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgUnBlockCharacterResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRG1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetCharacterId;                                       // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgUnBlockCharacterResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgUnBlockCharacterResponse : public FMsgBase
	{
	public:
		struct FClientMsgUnBlockCharacterResponseBody              Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgBlockCharacterListRequestBody
	{
	public:
		unsigned char                                              UnknownData_LWOB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgBlockCharacterListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgBlockCharacterListRequestBody             Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVI4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgBlockCharacterListResponseBody
	{
	public:
		TArray<struct FBLOCK_CHARACTER>                            BlockCharacters;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgBlockCharacterListResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgBlockCharacterListResponse : public FMsgBase
	{
	public:
		struct FClientMsgBlockCharacterListResponseBody            Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChannel
	 * Size -> 0x0020
	 */
	struct FTradeChannel
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_713X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChannelName;                                             // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MemberCount;                                             // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoomType;                                                // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChat_C2S
	 * Size -> 0x0088
	 */
	struct FTradeChat_C2S
	{
	public:
		int32_t                                                    ChatType;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_611U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetAccountId;                                         // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetCharacterId;                                       // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0028(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChat_S2C
	 * Size -> 0x0078
	 */
	struct FTradeChat_S2C
	{
	public:
		int64_t                                                    Index;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChatType;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9X6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Time;                                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0018(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeMembershipRequirement
	 * Size -> 0x0008
	 */
	struct FTradeMembershipRequirement
	{
	public:
		int32_t                                                    memberShipType;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    memberShipValue;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradingUserInfo
	 * Size -> 0x0030
	 */
	struct FTradingUserInfo
	{
	public:
		struct FNickname                                           Nickname;                                                // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradingConfirmItem
	 * Size -> 0x0040
	 */
	struct FTradingConfirmItem
	{
	public:
		struct FTradingUserInfo                                    Info;                                                    // 0x0000(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            Items;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.TradeChannelUserUpdateInfo
	 * Size -> 0x0068
	 */
	struct FTradeChannelUserUpdateInfo
	{
	public:
		int32_t                                                    updateFlag;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA6C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterTradeInfo                                 Trader;                                                  // 0x0008(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradeChannelListRequestBody
	{
	public:
		unsigned char                                              UnknownData_K028[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelListRequestBody               Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAM3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelListResonseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgTradeChannelListResonseBody
	{
	public:
		int32_t                                                    IsTrader;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI5Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTradeChannel>                               Channels;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelListResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelListResonseBody               Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeChannelSelectRequestBody
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelSelectRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelSelectRequestBody             Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9F99[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeChannelSelectResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelSelectResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelSelectResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelSelectResponseBody            Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJ2P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradeChannelExitRequestBody
	{
	public:
		unsigned char                                              UnknownData_GTUH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelExitRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelExitRequestBody               Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IH6R[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeChannelExitResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelExitResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelExitResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelExitResponseBody              Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UK9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradeChannelUserListRequestBody
	{
	public:
		unsigned char                                              UnknownData_ITWC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelUserListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelUserListRequestBody           Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMHC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgTradeChannelUserListResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80KD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterTradeInfo>                         Traders;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelUserListResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelUserListResponseBody          Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserUpdateNotifyBody
	 * Size -> 0x0010
	 */
	struct FClientMsgTradeChannelUserUpdateNotifyBody
	{
	public:
		TArray<struct FTradeChannelUserUpdateInfo>                 Updates;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelUserUpdateNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelUserUpdateNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelUserUpdateNotifyBody          Notify;                                                  // 0x0018(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatRequestBody
	 * Size -> 0x0088
	 */
	struct FClientMsgTradeChannelChatRequestBody
	{
	public:
		struct FTradeChat_C2S                                      Chat;                                                    // 0x0000(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatRequest
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelChatRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelChatRequestBody               Request;                                                 // 0x0020(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgTradeChannelChatResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YLW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTradeChat_S2C>                              Chats;                                                   // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelChatResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelChatResponseBody              Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeChannelChatTextRangeRequestBody
	{
	public:
		int32_t                                                    BeginIndex;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeChannelChatTextRangeRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeChannelChatTextRangeRequestBody      Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGA1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgTradeChannelChatTextRangeResponseBody
	{
	public:
		TArray<struct FTradeChat_S2C>                              Chats;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeChannelChatTextRangeResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeChannelChatTextRangeResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeChannelChatTextRangeResponseBody     Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequirementRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradeMemberShipRequirementRequestBody
	{
	public:
		unsigned char                                              UnknownData_JSW6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequirementRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeMemberShipRequirementRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeMemberShipRequirementRequestBody     Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Y6M[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequirementResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgTradeMemberShipRequirementResponseBody
	{
	public:
		TArray<struct FTradeMembershipRequirement>                 Requirements;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequirementResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeMemberShipRequirementResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeMemberShipRequirementResponseBody    Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeMemberShipRequestBody
	{
	public:
		int32_t                                                    BecomeTraderFlag;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeMemberShipRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeMemberShipRequestBody                Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2B5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeMemberShipResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeMemberShipResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeMemberShipResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeMemberShipResponseBody               Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGHG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestRequestBody
	 * Size -> 0x0040
	 */
	struct FClientMsgTradeRequestRequestBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestRequest
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeRequestRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeRequestRequestBody                   Request;                                                 // 0x0020(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestResponseBody
	 * Size -> 0x0028
	 */
	struct FClientMsgTradeRequestResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TO68[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNickname                                           RequestNickName;                                         // 0x0008(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestResponse
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeRequestResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeRequestResponseBody                  Response;                                                // 0x0018(0x0028) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestNotifyBody
	 * Size -> 0x0030
	 */
	struct FClientMsgTradeRequestNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeRequestNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeRequestNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradeRequestNotifyBody                    Notify;                                                  // 0x0018(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRequestBody
	 * Size -> 0x0038
	 */
	struct FClientMsgTradeAnswerRequestBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    SelectFlag;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1ZJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRequest
	 * Size -> 0x0038 (FullSize[0x0058] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradeAnswerRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradeAnswerRequestBody                    Request;                                                 // 0x0020(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradeAnswerResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeAnswerResponse : public FMsgBase
	{
	public:
		struct FClientMsgTradeAnswerResponseBody                   Response;                                                // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q37S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRefusalNotifyBody
	 * Size -> 0x0030
	 */
	struct FClientMsgTradeAnswerRefusalNotifyBody
	{
	public:
		class FString                                              AccountId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           Nickname;                                                // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradeAnswerRefusalNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradeAnswerRefusalNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradeAnswerRefusalNotifyBody              Notify;                                                  // 0x0018(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingBeginNotifyBody
	 * Size -> 0x0068
	 */
	struct FClientMsgTradingBeginNotifyBody
	{
	public:
		struct FTradingUserInfo                                    Target;                                                  // 0x0000(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		struct FTradingUserInfo                                    Mine;                                                    // 0x0030(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TradeFee;                                                // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoveResetTimeSec;                                        // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingBeginNotify
	 * Size -> 0x0068 (FullSize[0x0080] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingBeginNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradingBeginNotifyBody                    Notify;                                                  // 0x0018(0x0068) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingCloseRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradingCloseRequestBody
	{
	public:
		unsigned char                                              UnknownData_9E73[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingCloseRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingCloseRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingCloseRequestBody                   Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRM9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingCloseResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingCloseResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingCloseResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingCloseResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_IHGK[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingChatRequestBody
	 * Size -> 0x0088
	 */
	struct FClientMsgTradingChatRequestBody
	{
	public:
		struct FTradeChat_C2S                                      Chat;                                                    // 0x0000(0x0088) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingChatRequest
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingChatRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingChatRequestBody                    Request;                                                 // 0x0020(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingChatResponseBody
	 * Size -> 0x0080
	 */
	struct FClientMsgTradingChatResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84GJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTradeChat_S2C                                      Chat;                                                    // 0x0008(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingChatResponse
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingChatResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_O479[0x80];                                  // 0x0018(0x0080) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgTradingItemUpdateRequestBody
	{
	public:
		uint32_t                                                   updateFlag;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0OM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   UniqueId;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LM2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingItemUpdateRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingItemUpdateRequestBody              Request;                                                 // 0x0020(0x0018) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateResponseBody
	 * Size -> 0x00D0
	 */
	struct FClientMsgTradingItemUpdateResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EFO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTradingUserInfo                                    UpdateUserInfo;                                          // 0x0008(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    updateFlag;                                              // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V29O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccountDataItem                                    UpdateItem;                                              // 0x0040(0x0090) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingItemUpdateResponse
	 * Size -> 0x00D0 (FullSize[0x00E8] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingItemUpdateResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_OMM7[0xD0];                                  // 0x0018(0x00D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingReadyRequestBody
	{
	public:
		uint32_t                                                   IsReady;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingReadyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingReadyRequestBody                   Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T1T[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingReadyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingReadyResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_P6PR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyNotifyBody
	 * Size -> 0x0038
	 */
	struct FClientMsgTradingReadyNotifyBody
	{
	public:
		struct FTradingUserInfo                                    ReadyUserInfo;                                           // 0x0000(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    IsReady;                                                 // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGYZ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingReadyNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingReadyNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradingReadyNotifyBody                    Notify;                                                  // 0x0018(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmNotifyBody
	 * Size -> 0x0080
	 */
	struct FClientMsgTradingConfirmNotifyBody
	{
	public:
		struct FTradingConfirmItem                                 Target;                                                  // 0x0000(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
		struct FTradingConfirmItem                                 Mine;                                                    // 0x0040(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmNotify
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingConfirmNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradingConfirmNotifyBody                  Notify;                                                  // 0x0018(0x0080) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyRequestBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingConfirmReadyRequestBody
	{
	public:
		uint32_t                                                   IsReady;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingConfirmReadyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingConfirmReadyRequestBody            Request;                                                 // 0x0020(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G78U[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingConfirmReadyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingConfirmReadyResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_P4QY[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyNotifyBody
	 * Size -> 0x0038
	 */
	struct FClientMsgTradingConfirmReadyNotifyBody
	{
	public:
		struct FTradingUserInfo                                    ReadyUserInfo;                                           // 0x0000(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    IsReady;                                                 // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R76N[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmReadyNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingConfirmReadyNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradingConfirmReadyNotifyBody             Notify;                                                  // 0x0018(0x0038) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgTradingConfirmCancelRequestBody
	{
	public:
		unsigned char                                              UnknownData_97F1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgTradingConfirmCancelRequest : public FRequestMsg
	{
	public:
		struct FClientMsgTradingConfirmCancelRequestBody           Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TSI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelResponseBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingConfirmCancelResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingConfirmCancelResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingConfirmCancelResponse : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_UCMV[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingResultNotifyBody
	 * Size -> 0x0004
	 */
	struct FClientMsgTradingResultNotifyBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgTradingResultNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgTradingResultNotify : public FMsgBase
	{
	public:
		struct FClientMsgTradingResultNotifyBody                   Notify;                                                  // 0x0018(0x0004) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75WJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterClassEquipInfo
	 * Size -> 0x0020
	 */
	struct FCharacterClassEquipInfo
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IsAvailableSlot;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredLevel;                                           // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EquipId;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.CharacterClassMoveInfo
	 * Size -> 0x0020
	 */
	struct FCharacterClassMoveInfo
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MoveId;                                                  // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Move;                                                    // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H62[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgClassLevelInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_6HU1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassLevelInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassLevelInfoRequestBody                 Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6AE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoResponseBody
	 * Size -> 0x0014
	 */
	struct FClientMsgClassLevelInfoResponseBody
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Exp;                                                     // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpBegin;                                                // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpLimit;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RewardPoint;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassLevelInfoResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassLevelInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassLevelInfoResponseBody                Response;                                                // 0x0018(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVKH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgClassEquipInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_YRDM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgClassEquipInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassEquipInfoRequestBody                 Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8ZD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgClassEquipInfoResponseBody
	{
	public:
		TArray<struct FCharacterClassEquipInfo>                    Equips;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassEquipInfoResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgClassEquipInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassEquipInfoResponseBody                Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassPerkListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgClassPerkListRequestBody
	{
	public:
		unsigned char                                              UnknownData_CHX2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassPerkListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassPerkListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassPerkListRequestBody                  Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHC8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassPerkListResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgClassPerkListResponseBody
	{
	public:
		TArray<struct FAccountDataPerk>                            Perks;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassPerkListResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassPerkListResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassPerkListResponseBody                 Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSkillListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgClassSkillListRequestBody
	{
	public:
		unsigned char                                              UnknownData_0Y39[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSkillListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassSkillListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassSkillListRequestBody                 Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W2F[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSkillListResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgClassSkillListResponseBody
	{
	public:
		TArray<struct FAccountDataSkill>                           Skills;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSkillListResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassSkillListResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassSkillListResponseBody                Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgClassSpellListRequestBody
	{
	public:
		unsigned char                                              UnknownData_36SC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassSpellListRequestBody                 Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSKZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellListResponseBody
	 * Size -> 0x0010
	 */
	struct FClientMsgClassSpellListResponseBody
	{
	public:
		TArray<struct FAccountDataSpell>                           Spells;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellListResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellListResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassSpellListResponseBody                Response;                                                // 0x0018(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgClassSpellSlotMoveRequestBody
	{
	public:
		class FString                                              SpellId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstSlotIndex;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I84H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellSlotMoveRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassSpellSlotMoveRequestBody             Request;                                                 // 0x0020(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgClassSpellSlotMoveResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMGD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataSpell>                           EquipSpellList;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSlotMoveResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellSlotMoveResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassSpellSlotMoveResponseBody            Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgClassSpellSequenceChangeRequestBody
	{
	public:
		class FString                                              SpellId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstSequenceIndex;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXS5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassSpellSequenceChangeRequestBody       Request;                                                 // 0x0020(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgClassSpellSequenceChangeResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0G2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataSpell>                           EquipSpellList;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassSpellSequenceChangeResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassSpellSequenceChangeResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassSpellSequenceChangeResponseBody      Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassItemMoveRequestBody
	 * Size -> 0x0040
	 */
	struct FClientMsgClassItemMoveRequestBody
	{
	public:
		struct FCharacterClassMoveInfo                             OldMove;                                                 // 0x0000(0x0020) NativeAccessSpecifierPublic
		struct FCharacterClassMoveInfo                             NewMove;                                                 // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassItemMoveRequest
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FDungeonCrawler_FClientMsgClassItemMoveRequest : public FRequestMsg
	{
	public:
		struct FClientMsgClassItemMoveRequestBody                  Request;                                                 // 0x0020(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassItemMoveResponseBody
	 * Size -> 0x0048
	 */
	struct FClientMsgClassItemMoveResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDO0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterClassMoveInfo                             OldMove;                                                 // 0x0008(0x0020) NativeAccessSpecifierPublic
		struct FCharacterClassMoveInfo                             NewMove;                                                 // 0x0028(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClassItemMoveResponse
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FClientMsgClassItemMoveResponse : public FMsgBase
	{
	public:
		struct FClientMsgClassItemMoveResponseBody                 Response;                                                // 0x0018(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgHackLogRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgHackLogRequestBody
	{
	public:
		class FString                                              LogMessage;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgHackLogRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgHackLogRequest : public FRequestMsg
	{
	public:
		struct FClientMsgHackLogRequestBody                        Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgHackLogResponseBody
	 * Size -> 0x0001
	 */
	struct FClientMsgHackLogResponseBody
	{
	public:
		unsigned char                                              UnknownData_MAS0[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgHackLogResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgHackLogResponse : public FMsgBase
	{
	public:
		struct FClientMsgHackLogResponseBody                       Response;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZGE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AnnounceData
	 * Size -> 0x0018
	 */
	struct FAnnounceData
	{
	public:
		int32_t                                                    NationType;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnnounceMessage;                                         // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOperateAnnounceNotifyBody
	 * Size -> 0x0010
	 */
	struct FClientMsgOperateAnnounceNotifyBody
	{
	public:
		TArray<struct FAnnounceData>                               AnnounceList;                                            // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgOperateAnnounceNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgOperateAnnounceNotify : public FMsgBase
	{
	public:
		struct FClientMsgOperateAnnounceNotifyBody                 Notify;                                                  // 0x0018(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServicePolicy
	 * Size -> 0x0008
	 */
	struct FServicePolicy
	{
	public:
		int32_t                                                    PolicyType;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolicyValue;                                             // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgServicePolicyNotifyBody
	 * Size -> 0x0010
	 */
	struct FClientMsgServicePolicyNotifyBody
	{
	public:
		TArray<struct FServicePolicy>                              PolicyList;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgServicePolicyNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FClientMsgServicePolicyNotify : public FMsgBase
	{
	public:
		struct FClientMsgServicePolicyNotifyBody                   Notify;                                                  // 0x0018(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReLoginRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgReLoginRequestBody
	{
	public:
		unsigned char                                              UnknownData_27UH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReLoginRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgReLoginRequest : public FRequestMsg
	{
	public:
		struct FClientMsgReLoginRequestBody                        Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4GY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReLoginResponseBody
	 * Size -> 0x0038
	 */
	struct FClientMsgReLoginResponseBody
	{
	public:
		int32_t                                                    IsReconnect;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AEX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Address;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgReLoginResponse
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FClientMsgReLoginResponse : public FMsgBase
	{
	public:
		struct FClientMsgReLoginResponseBody                       Response;                                                // 0x0018(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClosedGameNotifyBody
	 * Size -> 0x0004
	 */
	struct FClientMsgClosedGameNotifyBody
	{
	public:
		int32_t                                                    Cyzz;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgClosedGameNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FClientMsgClosedGameNotify : public FMsgBase
	{
	public:
		struct FClientMsgClosedGameNotifyBody                      Notify;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEH8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgCustomizeCharacterInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_H9EE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeCharacterInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeCharacterInfoRequestBody         Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIQ8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterInfoResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeCharacterInfoResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZDH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeCharacter>              CustomizeCharacters;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterInfoResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeCharacterInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeCharacterInfoResponseBody        Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgCustomizeItemInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_AEYT[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeItemInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeItemInfoRequestBody              Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DCJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemInfoResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeItemInfoResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OEC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeItem>                   CustomizeItems;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemInfoResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeItemInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeItemInfoResponseBody             Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteInfoRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgCustomizeEmoteInfoRequestBody
	{
	public:
		unsigned char                                              UnknownData_SIYX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteInfoRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeEmoteInfoRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeEmoteInfoRequestBody             Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHHW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteInfoResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeEmoteInfoResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNHE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataEmote>                           Emotes;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteInfoResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeEmoteInfoResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeEmoteInfoResponseBody            Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterMountRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgCustomizeCharacterMountRequestBody
	{
	public:
		class FString                                              CustomizeCharacterId;                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterMountRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeCharacterMountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeCharacterMountRequestBody        Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterMountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeCharacterMountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBT3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeCharacter>              EquipCustomizeCharacters;                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterMountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeCharacterMountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeCharacterMountResponseBody       Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterUnmountRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgCustomizeCharacterUnmountRequestBody
	{
	public:
		class FString                                              CustomizeCharacterId;                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterUnmountRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeCharacterUnmountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeCharacterUnmountRequestBody      Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterUnmountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeCharacterUnmountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D30E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeCharacter>              EquipCustomizeCharacters;                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeCharacterUnmountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeCharacterUnmountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeCharacterUnmountResponseBody     Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemMountRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeItemMountRequestBody
	{
	public:
		class FString                                              CustomizeItemId;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EquipSlotIndex;                                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S8C[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemMountRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeItemMountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeItemMountRequestBody             Request;                                                 // 0x0020(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemMountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeItemMountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeItem>                   EquipCustomizeItems;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemMountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeItemMountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeItemMountResponseBody            Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemUnmountRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgCustomizeItemUnmountRequestBody
	{
	public:
		class FString                                              CustomizeItemId;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemUnmountRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeItemUnmountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeItemUnmountRequestBody           Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemUnmountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeItemUnmountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAJ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataCustomizeItem>                   EquipCustomizeItems;                                     // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeItemUnmountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeItemUnmountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeItemUnmountResponseBody          Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteMountRequestBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeEmoteMountRequestBody
	{
	public:
		class FString                                              EmoteId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EquipSlotIndex;                                          // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEB9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteMountRequest
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeEmoteMountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeEmoteMountRequestBody            Request;                                                 // 0x0020(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteMountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeEmoteMountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIIU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataEmote>                           EquipEmotes;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteMountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeEmoteMountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeEmoteMountResponseBody           Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteUnmountRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgCustomizeEmoteUnmountRequestBody
	{
	public:
		class FString                                              EmoteId;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteUnmountRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgCustomizeEmoteUnmountRequest : public FRequestMsg
	{
	public:
		struct FClientMsgCustomizeEmoteUnmountRequestBody          Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteUnmountResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgCustomizeEmoteUnmountResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXFP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAccountDataEmote>                           EquipEmotes;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgCustomizeEmoteUnmountResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgCustomizeEmoteUnmountResponse : public FMsgBase
	{
	public:
		struct FClientMsgCustomizeEmoteUnmountResponseBody         Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinInfo
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopCharacterSkinInfo : public FMsgBase
	{
	public:
		class FString                                              CharacterSkinId;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IsHave;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVBQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinInfo
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopItemSkinInfo : public FMsgBase
	{
	public:
		class FString                                              ItemSkinId;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IsHave;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW8O[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteInfo
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopEmoteInfo : public FMsgBase
	{
	public:
		class FString                                              EmoteId;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IsHave;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KPF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgShopCharacterSkinListRequestBody
	{
	public:
		unsigned char                                              UnknownData_8NSN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopCharacterSkinListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopCharacterSkinListRequestBody          Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW32[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopCharacterSkinListResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSA1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClientMsgShopCharacterSkinInfo>             CharacterSkinInfoList;                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopCharacterSkinListResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopCharacterSkinListResponseBody         Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgShopItemSkinListRequestBody
	{
	public:
		unsigned char                                              UnknownData_35O7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopItemSkinListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopItemSkinListRequestBody               Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CTN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopItemSkinListResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClientMsgShopItemSkinInfo>                  ItemSkinInfoList;                                        // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopItemSkinListResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopItemSkinListResponseBody              Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteListRequestBody
	 * Size -> 0x0001
	 */
	struct FClientMsgShopEmoteListRequestBody
	{
	public:
		unsigned char                                              UnknownData_3G6P[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteListRequest
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopEmoteListRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopEmoteListRequestBody                  Request;                                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52RM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteListResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopEmoteListResponseBody
	{
	public:
		int32_t                                                    LoopFlag;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M829[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClientMsgShopEmoteInfo>                     EmoteInfoList;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteListResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopEmoteListResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopEmoteListResponseBody                 Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinBuyRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgShopCharacterSkinBuyRequestBody
	{
	public:
		class FString                                              BuyShopCharacterSkinId;                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinBuyRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopCharacterSkinBuyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopCharacterSkinBuyRequestBody           Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinBuyResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopCharacterSkinBuyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1F5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuyShopCharacterSkinId;                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopCharacterSkinBuyResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopCharacterSkinBuyResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopCharacterSkinBuyResponseBody          Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinBuyRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgShopItemSkinBuyRequestBody
	{
	public:
		class FString                                              BuyShopItemSkinId;                                       // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinBuyRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopItemSkinBuyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopItemSkinBuyRequestBody                Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinBuyResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopItemSkinBuyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuyShopItemSkinId;                                       // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopItemSkinBuyResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopItemSkinBuyResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopItemSkinBuyResponseBody               Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteBuyRequestBody
	 * Size -> 0x0010
	 */
	struct FClientMsgShopEmoteBuyRequestBody
	{
	public:
		class FString                                              BuyShopEmoteId;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteBuyRequest
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FClientMsgShopEmoteBuyRequest : public FRequestMsg
	{
	public:
		struct FClientMsgShopEmoteBuyRequestBody                   Request;                                                 // 0x0020(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteBuyResponseBody
	 * Size -> 0x0018
	 */
	struct FClientMsgShopEmoteBuyResponseBody
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S506[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuyShopEmoteId;                                          // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ClientMsgShopEmoteBuyResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FClientMsgShopEmoteBuyResponse : public FMsgBase
	{
	public:
		struct FClientMsgShopEmoteBuyResponseBody                  Response;                                                // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PopupSWidgetData
	 * Size -> 0x0020
	 */
	struct FPopupSWidgetData
	{
	public:
		EPopupButtonType                                           PopupButtonType;                                         // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBXB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DescMessage;                                             // 0x0008(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.InstigatorData
	 * Size -> 0x0048
	 */
	struct FInstigatorData
	{
	public:
		class FString                                              InstigatorAccountId;                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNickname                                           InstigatorNickName;                                      // 0x0010(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                InstigatorName;                                          // 0x0030(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.EffectCauserData
	 * Size -> 0x0018
	 */
	struct FEffectCauserData
	{
	public:
		class FText                                                EffectCauserName;                                        // 0x0000(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameplayAbilityTargetData_SingleTargetHitWithTag
	 * Size -> 0x0168 (FullSize[0x0170] - InheritedSize[0x0008])
	 */
	struct FGameplayAbilityTargetData_SingleTargetHitWithTag : public FGameplayAbilityTargetData
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00E8) IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bHitReplaced;                                            // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKE6[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TargetTag;                                               // 0x00F4(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChannelTag;                                              // 0x00FC(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEQL[0xC];                                   // 0x0104(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ActorPrevTickTransform;                                  // 0x0110(0x0060) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPropertyAttributePerk
	 * Size -> 0x0014
	 */
	struct FDCPropertyAttributePerk
	{
	public:
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerkValue;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPropertyAttributeSkill
	 * Size -> 0x0014
	 */
	struct FDCPropertyAttributeSkill
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillValue;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPropertyAttributeSpell
	 * Size -> 0x0014
	 */
	struct FDCPropertyAttributeSpell
	{
	public:
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpellValue;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCPropertyAttribute
	 * Size -> 0x0030
	 */
	struct FDCPropertyAttribute
	{
	public:
		TArray<struct FDCPropertyAttributePerk>                    PerkAttributeArray;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDCPropertyAttributeSkill>                   SkillAttributeArray;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDCPropertyAttributeSpell>                   SpellAttributeArray;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCInventoryBoxView
	 * Size -> 0x0020
	 */
	struct FDCInventoryBoxView
	{
	public:
		class UDCBoxInventory*                                     Inventory;                                               // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FIntPoint                                           StartPos;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FIntPoint                                           Size;                                                    // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bValid;                                                  // 0x0018(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SUEJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.AggroRate
	 * Size -> 0x0010
	 */
	struct FAggroRate
	{
	public:
		unsigned char                                              UnknownData_ZKNH[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataCharacterSkin
	 * Size -> 0x0068
	 */
	struct FDesignDataCharacterSkin
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Art;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             TargetCharacterClasses;                                  // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Abilities;                                               // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPrimaryAssetId>                             Effects;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataCharacterSkinTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataCharacterSkinTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataCharacterSkin> CharacterSkin;                                           // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCCharacterSkinShopItemInfo
	 * Size -> 0x0010
	 */
	struct FDCCharacterSkinShopItemInfo
	{
	public:
		class UDCCharacterSkinShopDataAsset*                       Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsOwnedItem;                                            // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1MZZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCItemSkinShopItemInfo
	 * Size -> 0x0010
	 */
	struct FDCItemSkinShopItemInfo
	{
	public:
		class UDCItemSkinShopDataAsset*                            Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsOwnedItem;                                            // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VHA8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCEmoteShopItemInfo
	 * Size -> 0x0010
	 */
	struct FDCEmoteShopItemInfo
	{
	public:
		class UDCEmoteShopDataAsset*                               Data;                                                    // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsOwnedItem;                                            // 0x0008(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6WSV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DCClientShopInfo
	 * Size -> 0x0140
	 */
	struct FDCClientShopInfo
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDCCharacterSkinShopItemInfo> CharacterSkinShopItems;                                  // 0x0000(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetId, struct FDCItemSkinShopItemInfo> ItemSkinShopItems;                                       // 0x0050(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FPrimaryAssetId, struct FDCEmoteShopItemInfo>  EmoteShopItems;                                          // 0x00A0(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<int32_t, int32_t>                                     CurrencyMap;                                             // 0x00F0(0x0050) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemSkin
	 * Size -> 0x0050
	 */
	struct FDesignDataItemSkin
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Desc;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemActor;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileActor;                                         // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     Art;                                                     // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TargetItem;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.LineCollisionMarkerSocket
	 * Size -> 0x0038
	 */
	struct FLineCollisionMarkerSocket
	{
	public:
		class USkeletalMeshSocket*                                 Socket;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrevSocketLocation;                                      // 0x0008(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EffectTag;                                               // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChannelTag;                                              // 0x0028(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDEW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemSkinTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataItemSkinTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataItemSkin>   ItemSkin;                                                // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DCInt32IdBase
	 * Size -> 0x0004
	 */
	struct FDCInt32IdBase
	{
	public:
		int32_t                                                    _;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct DungeonCrawler.DCGameLiftSessionId
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FDCGameLiftSessionId : public FDCStringIdBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataDesc
	 * Size -> 0x0068
	 */
	struct FDesignDataDesc
	{
	public:
		class FText                                                DescFormat;                                              // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              DescParam1;                                              // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescParam2;                                              // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescParam3;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescParam4;                                              // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescParam5;                                              // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataShop
	 * Size -> 0x0024
	 */
	struct FDesignDataShop
	{
	public:
		struct FPrimaryAssetId                                     StockData;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Price;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     ArtData;                                                 // 0x0014(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPlayerCharacterTableRow
	 * Size -> 0x0140 (FullSize[0x0148] - InheritedSize[0x0008])
	 */
	struct FDesignDataPlayerCharacterTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataPlayerCharacter> PlayerCharacter;                                         // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PlayerCharacterAbility;                                  // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PlayerCharacterEffect;                                   // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataBaseItem>   PlayerCharacterBaseItem;                                 // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMonsterTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataMonsterTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataMonster>    Monster;                                                 // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> MonsterAbility;                                          // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> MonsterEffect;                                           // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataAoeTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataAoeTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataAoe>        Aoe;                                                     // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> AoeAbility;                                              // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> AoeEffect;                                               // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPropsTableRow
	 * Size -> 0x0190 (FullSize[0x0198] - InheritedSize[0x0008])
	 */
	struct FDesignDataPropsTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataProps>      Props;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PropsAbility;                                            // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PropsEffect;                                             // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataPropsInteract> PropsInteract;                                           // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataPropsSkillCheck> PropsSkillCheck;                                         // 0x0148(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemTableRow
	 * Size -> 0x0230 (FullSize[0x0238] - InheritedSize[0x0008])
	 */
	struct FDesignDataItemTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataItem>       Item;                                                    // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> ItemAbility;                                             // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> ItemEffect;                                              // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataItemConsume> ItemConsume;                                             // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataItemRequirement> ItemRequirement;                                         // 0x0148(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataItemBundleInfo> ItemBundleInfo;                                          // 0x0198(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataItemContainer> ItemContainer;                                           // 0x01E8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataItemPropertyTableRow
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FDesignDataItemPropertyTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataItemProperty> ItemProperty;                                            // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataItemPropertyType> ItemPropertyType;                                        // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataLootDropTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataLootDropTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataLootDrop>   LootDrop;                                                // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSpawnerTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataSpawnerTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataSpawner>    Spawner;                                                 // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataProjectileTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataProjectileTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataProjectile> Projectile;                                              // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> ProjectileAbility;                                       // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> ProjectileEffect;                                        // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMeleeAttackTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataMeleeAttackTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataMeleeAttack> MeleeAttack;                                             // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSkillTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataSkillTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataSkill>      Skill;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> SkillAbility;                                            // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> SkillEffect;                                             // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataSpellTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataSpellTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataSpell>      Spell;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> SpellAbility;                                            // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> SpellEffect;                                             // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataPerkTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataPerkTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataPerk>       Perk;                                                    // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> PerkAbility;                                             // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> PerkEffect;                                              // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataActorStatusTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataActorStatusTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> StatusEffect;                                            // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMovementModifierTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataMovementModifierTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataMovementModifier> MovementModifier;                                        // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataMerchantTableRow
	 * Size -> 0x0190 (FullSize[0x0198] - InheritedSize[0x0008])
	 */
	struct FDesignDataMerchantTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataMerchant>   Merchant;                                                // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataMerchantSchedule> MerchantSchedule;                                        // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataStockBuy>   StockBuy;                                                // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataStockSellBack> StockSellBack;                                           // 0x00F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataStockCraft> StockCraft;                                              // 0x0148(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataFloorRuleTableRow
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FDesignDataFloorRuleTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataFloorRule>  FloorRule;                                               // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataFloorPortal> FloorPortal;                                             // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataConstantTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataConstantTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataConstant>   Constant;                                                // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataEmoteTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataEmoteTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataEmote>      Emote;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayAbility> EmoteAbility;                                            // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataGameplayEffect> EmoteEffect;                                             // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataIdTagGroupTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataIdTagGroupTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataIdTagGroup> IdTagGroup;                                              // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataDungeonTableRow
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FDesignDataDungeonTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataDungeon>    Dungeon;                                                 // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DesignDataShopTableRow
	 * Size -> 0x00F0 (FullSize[0x00F8] - InheritedSize[0x0008])
	 */
	struct FDesignDataShopTableRow : public FTableRowBase
	{
	public:
		TMap<struct FPrimaryAssetId, struct FDesignDataShop>       ShopCharacterSkin;                                       // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataShop>       ShopItemSkin;                                            // 0x0058(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FPrimaryAssetId, struct FDesignDataShop>       ShopEmote;                                               // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DevMsgGm
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FDevMsgGm : public FMsgBase
	{
	public:
		class FString                                              Cmd;                                                     // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.DevMsgUIToggle
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FDevMsgUIToggle : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSample
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSample : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSampleRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSampleRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSampleResponse
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSampleResponse : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.FriendInfo
	 * Size -> 0x0020
	 */
	struct FFriendInfo
	{
	public:
		int32_t                                                    TotalCount;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LobbyCount;                                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DungeonCount;                                            // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CBM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInvitePartyUserSlot>                        InvitePartyUserSlotArray;                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MiniMapDeathSwarmData
	 * Size -> 0x0038
	 */
	struct FMiniMapDeathSwarmData
	{
	public:
		EFloorRulePhase                                            FloorRulePhase;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0IB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LerpRatio;                                               // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PosLerpFrom;                                             // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeLerpFrom;                                            // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZF1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PosLerpTo;                                               // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeLerpTo;                                              // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC61[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameAISet
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgGameAISet : public FMsgBase
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameAnnounceNotify
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgGameAnnounceNotify : public FMsgBase
	{
	public:
		struct FGameAnnounceData                                   GameAnnounceData;                                        // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameStateNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgGameStateNotify : public FMsgBase
	{
	public:
		struct FGameStateData                                      GameStateData;                                           // 0x0018(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameKillLogData
	 * Size -> 0x00D8
	 */
	struct FGameKillLogData
	{
	public:
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0000(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
		struct FInstigatorData                                     InstigatorData;                                          // 0x0070(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
		struct FEffectCauserData                                   EffectCauserData;                                        // 0x00B8(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		EHitBoxType                                                HitBoxType;                                              // 0x00D0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JL3[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameKillLogNotify
	 * Size -> 0x00D8 (FullSize[0x00F0] - InheritedSize[0x0018])
	 */
	struct FMsgGameKillLogNotify : public FMsgBase
	{
	public:
		struct FGameKillLogData                                    GameKillLogData;                                         // 0x0018(0x00D8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.GameFloorLogData
	 * Size -> 0x0078
	 */
	struct FGameFloorLogData
	{
	public:
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0000(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
		EFloorLogType                                              FloorLogType;                                            // 0x0070(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMLD[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0074(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameFloorLogNotify
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FMsgGameFloorLogNotify : public FMsgBase
	{
	public:
		struct FGameFloorLogData                                   GameFloorLogData;                                        // 0x0018(0x0078) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameFloorRuleNotify
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FMsgGameFloorRuleNotify : public FMsgBase
	{
	public:
		struct FGameFloorRuleData                                  GameFloorRuleData;                                       // 0x0018(0x0060) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDungeonInfoNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgDungeonInfoNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASAttributeSetRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGASAttributeSetRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASAttributeSetResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgGASAttributeSetResponse : public FMsgBase
	{
	public:
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASAttributeNotify
	 * Size -> 0x0480 (FullSize[0x0498] - InheritedSize[0x0018])
	 */
	struct FMsgGASAttributeNotify : public FMsgBase
	{
	public:
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAttribute                                  Attribute;                                               // 0x0020(0x0038) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewValue;                                                // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OldValue;                                                // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0068(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGameplayEffectSpec                                 EffectSpec;                                              // 0x0200(0x0298) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASGameplayTagContainerRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGASGameplayTagContainerRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASGameplayTagContainerResponse
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgGASGameplayTagContainerResponse : public FMsgBase
	{
	public:
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASGameplayTagNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMsgGASGameplayTagNotify : public FMsgBase
	{
	public:
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GameplayTag;                                             // 0x0038(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTL2[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASActorDieNotify
	 * Size -> 0x01A0 (FullSize[0x01B8] - InheritedSize[0x0018])
	 */
	struct FMsgGASActorDieNotify : public FMsgBase
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0020(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASImpactEnduranceExhaustedNotify
	 * Size -> 0x01A0 (FullSize[0x01B8] - InheritedSize[0x0018])
	 */
	struct FMsgGASImpactEnduranceExhaustedNotify : public FMsgBase
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0020(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASInstigatorDataRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGASInstigatorDataRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASInstigatorDataResponse
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FMsgGASInstigatorDataResponse : public FMsgBase
	{
	public:
		struct FInstigatorData                                     InstigatorData;                                          // 0x0018(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASEffectCauserDataRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGASEffectCauserDataRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASEffectCauserDataResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgGASEffectCauserDataResponse : public FMsgBase
	{
	public:
		struct FEffectCauserData                                   EffectCauserData;                                        // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASActorStatusRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGASActorStatusRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASActorStatusResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgGASActorStatusResponse : public FMsgBase
	{
	public:
		TArray<struct FActorStatusData>                            ActorStatusDatas;                                        // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGASActorStatusUpdated
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgGASActorStatusUpdated : public FMsgBase
	{
	public:
		TArray<struct FActorStatusData>                            ActorStatusDatas;                                        // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDamageIndicatorPhysicalNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FMsgDamageIndicatorPhysicalNotify : public FMsgBase
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageValues;                                            // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsIgnoreReducation;                                      // 0x0024(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHitHead;                                               // 0x0025(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLHW[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0028(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0040(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDamageIndicatorMagicalNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FMsgDamageIndicatorMagicalNotify : public FMsgBase
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageValues;                                            // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsIgnoreReducation;                                      // 0x0024(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHitHead;                                               // 0x0025(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDZZ[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0028(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitDirection;                                            // 0x0040(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameTestChangePlayerCharacterClassRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassRequest : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameTestChangePlayerCharacterClassResponse
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FDungeonCrawler_FMsgGameTestChangePlayerCharacterClassResponse : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCServerPolicyInfo
	 * Size -> 0x000C
	 */
	struct FDCServerPolicyInfo
	{
	public:
		EHackPolicyType                                            HackPolicyType;                                          // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYVC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValidPlayerMeleeAttackRange;                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGmEnabled;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS1V[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ObjectLinkResponeEvent
	 * Size -> 0x0060
	 */
	struct FObjectLinkResponeEvent
	{
	public:
		struct FGameplayTag                                        SrcTypeTag;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FObjectLinkMetaData                                 MetaData;                                                // 0x0008(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractStart
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgInteractStart : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CurrentStateTag;                                         // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractStarted
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgInteractStarted : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractEnd
	 * Size -> 0x0100 (FullSize[0x0118] - InheritedSize[0x0018])
	 */
	struct FMsgInteractEnd : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSucceed;                                              // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RPQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        EventTag;                                                // 0x0024(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ASD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          HitResult;                                               // 0x0030(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractSucceed
	 * Size -> 0x0100 (FullSize[0x0118] - InheritedSize[0x0018])
	 */
	struct FMsgInteractSucceed : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        StateTag;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TriggerTag;                                              // 0x0028(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0030(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractFailed
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgInteractFailed : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        EventTag;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractFound
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgInteractFound : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 InteractPart;                                            // 0x0020(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractLost
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgInteractLost : public FMsgBase
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractDataSet
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMsgInteractDataSet : public FMsgBase
	{
	public:
		struct FInteractTargetData                                 InteractTargetData;                                      // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FInteractionData>         InteractableDataByStateMap;                              // 0x0038(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.SkillCheckData
	 * Size -> 0x001C
	 */
	struct FSkillCheckData
	{
	public:
		struct FGameplayTag                                        SkillCheckType;                                          // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SucceedSectionStartTime;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SucceedSectionEndTime;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfectSucceedSectionStartTime;                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerfectSucceedSectionEndTime;                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractSkillCheckStart
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgInteractSkillCheckStart : public FMsgBase
	{
	public:
		struct FSkillCheckData                                     SkillCheckData;                                          // 0x0018(0x001C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14EN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractSkillCheckEnd
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgInteractSkillCheckEnd : public FMsgBase
	{
	public:
		ESkillCheckResult                                          Result;                                                  // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9U50[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInteractableHighlightNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgInteractableHighlightNotify : public FMsgBase
	{
	public:
		int32_t                                                    HighlightDepthValue;                                     // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3D1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgFinishedActiveEquipmentQuickSlot
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgFinishedActiveEquipmentQuickSlot : public FMsgBase
	{
	public:
		EEquipmentQuickSlotType                                    ActiveQuickSlotType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU68[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveContainingItemRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveContainingItemRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGZ3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUniqueId;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveContainingItemResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveContainingItemResponse : public FMsgBase
	{
	public:
		bool                                                       bSuccess;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQV0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgReduceContainingItemRequest
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgReduceContainingItemRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4ZH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUniqueId;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReduceCount;                                             // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJR9[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgReduceContainingItemResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgReduceContainingItemResponse : public FMsgBase
	{
	public:
		bool                                                       bSucceed;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGQR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgReduceItemContentsCountRequest
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgReduceItemContentsCountRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYEL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUniqueId;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReduceContentsCount;                                     // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M1I6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgReduceItemContentsCountResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgReduceItemContentsCountResponse : public FMsgBase
	{
	public:
		bool                                                       bSucceed;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2AW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddContainingItemRequest
	 * Size -> 0x00A0 (FullSize[0x00B8] - InheritedSize[0x0018])
	 */
	struct FMsgAddContainingItemRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DQ0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemData                                           ItemData;                                                // 0x0020(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       BySystem;                                                // 0x00B0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoStack;                                                // 0x00B1(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCYF[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddContainingItemResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAddContainingItemResponse : public FMsgBase
	{
	public:
		bool                                                       bSuccess;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UUC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotId;                                                  // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveAllContainingItem
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveAllContainingItem : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XF1W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSlotItemDataRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSlotItemDataRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotId;                                                  // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSlotItemDataResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgSlotItemDataResponse : public FMsgBase
	{
	public:
		bool                                                       bItemSet;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BR4V[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ItemDataArray;                                           // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddEquippedItemActor
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAddEquippedItemActor : public FMsgBase
	{
	public:
		class AItemActor*                                          EquippedItemActor;                                       // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDummyEquippedItemActorSpawned
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgDummyEquippedItemActorSpawned : public FMsgBase
	{
	public:
		class AItemActor*                                          DummyEquippedItemActor;                                  // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddSheathItemActor
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgAddSheathItemActor : public FMsgBase
	{
	public:
		class AItemActor*                                          SheathItemActor;                                         // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemDataNotify
	 * Size -> 0x0128 (FullSize[0x0140] - InheritedSize[0x0018])
	 */
	struct FMsgItemDataNotify : public FMsgBase
	{
	public:
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           OldItemData;                                             // 0x0020(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		struct FItemData                                           NewItemData;                                             // 0x00B0(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgTotalGoldCountNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgTotalGoldCountNotify : public FMsgBase
	{
	public:
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TotalGoldCount;                                          // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemDataArrayRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemDataArrayRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemDataArrayResponse
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemDataArrayResponse : public FMsgBase
	{
	public:
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryType                                             InventoryType;                                           // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEHC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ItemDataArray;                                           // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgContainingItemDataRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgContainingItemDataRequest : public FMsgBase
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgContainingItemDataResponse
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMsgContainingItemDataResponse : public FMsgBase
	{
	public:
		class UEquipmentInventoryComponent*                        EquipmentInventoryComponent;                             // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipmentQuickSlotType                                    EquipmentQuickSlotType;                                  // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D209[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0028(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           ItemData;                                                // 0x0030(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetEquippedWeaponsVisibility
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgSetEquippedWeaponsVisibility : public FMsgBase
	{
	public:
		struct FGameplayTagContainer                               IgnoreTypes;                                             // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsHide;                                                 // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_698Z[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.LootingTargetPlayerInventory
	 * Size -> 0x0018
	 */
	struct FLootingTargetPlayerInventory
	{
	public:
		class UEquipmentInventoryComponent*                        EquipmentInventory;                                      // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UInventoryComponent*>                         ContainerInventoryArray;                                 // 0x0008(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetLootingTargetPlayerInventory
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgSetLootingTargetPlayerInventory : public FMsgBase
	{
	public:
		struct FLootingTargetPlayerInventory                       TargetPlayerInventory;                                   // 0x0018(0x0018) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgLootingTargetPlayerInventoryNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgLootingTargetPlayerInventoryNotify : public FMsgBase
	{
	public:
		struct FLootingTargetPlayerInventory                       TargetPlayerInventory;                                   // 0x0018(0x0018) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEnableAddItemRequest
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgEnableAddItemRequest : public FMsgBase
	{
	public:
		int32_t                                                    TargetInventoryId;                                       // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ0B[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   AddItemDataArray;                                        // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEnableAddItemResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgEnableAddItemResponse : public FMsgBase
	{
	public:
		bool                                                       bCanAdd;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvalidRequest;                                         // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSEI[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ResultItemDataArray;                                     // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEnableSwapItemRequest
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMsgEnableSwapItemRequest : public FMsgBase
	{
	public:
		int32_t                                                    TargetInventoryId;                                       // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70YO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemData                                           RemoveItemData;                                          // 0x0020(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FItemData>                                   AddItemDataArray;                                        // 0x00B0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEnableSwapItemResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgEnableSwapItemResponse : public FMsgBase
	{
	public:
		bool                                                       bCanSwap;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVMR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   SwapItemDataArray;                                       // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemAmmoAddRequest
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemAmmoAddRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGVF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUniqueId;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XD6Q[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemAmmoAddResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemAmmoAddResponse : public FMsgBase
	{
	public:
		bool                                                       bIsSucceed;                                              // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYB0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemAmmoReduceRequest
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemAmmoReduceRequest : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NJ5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ItemUniqueId;                                            // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E19I[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgInventoryItemAmmoReduceResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgInventoryItemAmmoReduceResponse : public FMsgBase
	{
	public:
		bool                                                       bIsSucceed;                                              // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILS7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMoveItem
	 * Size -> 0x00B0 (FullSize[0x00C8] - InheritedSize[0x0018])
	 */
	struct FMsgMoveItem : public FMsgBase
	{
	public:
		class AActor*                                              OldOwner;                                                // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           OldItemData;                                             // 0x0020(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		class AActor*                                              NewOwner;                                                // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemData>                                   NewItemDataArray;                                        // 0x00B8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetMoveItem
	 * Size -> 0x00B0 (FullSize[0x00C8] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetMoveItem : public FMsgBase
	{
	public:
		class AActor*                                              OldOwner;                                                // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemData                                           OldItemData;                                             // 0x0020(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		class AActor*                                              NewOwner;                                                // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemData>                                   NewItemDataArray;                                        // 0x00B8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSucceedWidgetMoveItem
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgSucceedWidgetMoveItem : public FMsgBase
	{
	public:
		TArray<struct FItemData>                                   ItemDataArray;                                           // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgUpdateCurrentEquipSlotWidget
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgUpdateCurrentEquipSlotWidget : public FMsgBase
	{
	public:
		struct FItemData                                           UpdatedItemData;                                         // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEquippedItemActors
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgEquippedItemActors : public FMsgBase
	{
	public:
		TArray<class AItemActor*>                                  EquippedItemActors;                                      // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCurrentEquippedItemActorsRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgCurrentEquippedItemActorsRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCurrentEquippedItemActorsResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgCurrentEquippedItemActorsResponse : public FMsgBase
	{
	public:
		TArray<class AItemActor*>                                  EquippedItemActors;                                      // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemIdNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgItemIdNotify : public FMsgBase
	{
	public:
		struct FDCItemId                                           ItemId;                                                  // 0x0018(0x0008) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDCInventoryId                                             Inventory;                                               // 0x0020(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8H0[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddToInventory
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgAddToInventory : public FMsgBase
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquipped;                                               // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA2S[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InventoryId;                                             // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventorySlotId;                                         // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U44[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgEquip
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgEquip : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGiveAbility
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgGiveAbility : public FMsgBase
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveAbility
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveAbility : public FMsgBase
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemDataUpdateNotify
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgItemDataUpdateNotify : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveFromInventory
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveFromInventory : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemDropRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgItemDropRequest : public FMsgBase
	{
	public:
		int32_t                                                    DropItemCount;                                           // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ3S[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DropActingActor;                                         // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemDropResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgItemDropResponse : public FMsgBase
	{
	public:
		bool                                                       bSuccess;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SQE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgChangedItemRequirementFulfillmentStatus
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgChangedItemRequirementFulfillmentStatus : public FMsgBase
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74WO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgFinishedLoadItemArtData
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgFinishedLoadItemArtData : public FMsgBase
	{
	public:
		class UItem*                                               Item;                                                    // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgChangedItemArtData
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgChangedItemArtData : public FMsgBase
	{
	public:
		class UItem*                                               Item;                                                    // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArtDataItem*                                        NewItemArtData;                                          // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemConsumeDataRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgItemConsumeDataRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemConsumeDataResponse
	 * Size -> 0x00B0 (FullSize[0x00C8] - InheritedSize[0x0018])
	 */
	struct FMsgItemConsumeDataResponse : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		struct FDesignDataItemConsume                              ItemConsumeData;                                         // 0x00A8(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemWearingStart
	 * Size -> 0x00B8 (FullSize[0x00D0] - InheritedSize[0x0018])
	 */
	struct FMsgItemWearingStart : public FMsgBase
	{
	public:
		struct FItemData                                           WearingItemData;                                         // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               WearingActor;                                            // 0x00A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x00B0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40UJ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x00B8(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgItemWearingEnd
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgItemWearingEnd : public FMsgBase
	{
	public:
		bool                                                       bIsSucceed;                                              // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D37U[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgUpdateMeshEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgUpdateMeshEvent : public FMsgBase
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemDataGameplayEffectValue
	 * Size -> 0x000C
	 */
	struct FItemDataGameplayEffectValue
	{
	public:
		struct FGameplayTag                                        EffectTag;                                               // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectValue;                                             // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemDataGameplayEffect
	 * Size -> 0x0020
	 */
	struct FItemDataGameplayEffect
	{
	public:
		struct FPrimaryAssetId                                     EffectId;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemDataGameplayEffectValue>                ItemDataGameplayEffectValueArray;                        // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ItemDataGameplayAbility
	 * Size -> 0x0020
	 */
	struct FItemDataGameplayAbility
	{
	public:
		struct FPrimaryAssetId                                     AbilityId;                                               // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemDataGameplayEffect>                     ItemDataGameplayEffectArray;                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetLootTarget
	 * Size -> 0x0110 (FullSize[0x0128] - InheritedSize[0x0018])
	 */
	struct FMsgSetLootTarget : public FMsgBase
	{
	public:
		class UInventoryComponent*                                 LootTargetComponent;                                     // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemData>                                   ContainingItemDataArray;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlotInfo>                                   SlotInfoArray;                                           // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FHitResult                                          LootTargetHitResult;                                     // 0x0040(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgLootContainingItemsNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgLootContainingItemsNotify : public FMsgBase
	{
	public:
		int32_t                                                    InventoryId;                                             // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHNB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ContainingItemDataArray;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlotInfo>                                   SlotInfoArray;                                           // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveLootTarget
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveLootTarget : public FMsgBase
	{
	public:
		class UInventoryComponent*                                 LootTargetComponent;                                     // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemData>                                   ContainingItemDataArray;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgClearLootingTargets
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgClearLootingTargets : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgLootComponentNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgLootComponentNotify : public FMsgBase
	{
	public:
		class ULootComponent*                                      LootComponent;                                           // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddLooter
	 * Size -> 0x00F0 (FullSize[0x0108] - InheritedSize[0x0018])
	 */
	struct FMsgAddLooter : public FMsgBase
	{
	public:
		class AActor*                                              Looter;                                                  // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0020(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveLooter
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveLooter : public FMsgBase
	{
	public:
		class AActor*                                              Looter;                                                  // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveAllLooters
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveAllLooters : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MerchantCostInfo
	 * Size -> 0x0014
	 */
	struct FMerchantCostInfo
	{
	public:
		struct FPrimaryAssetId                                     CostItemId;                                              // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CostItemCount;                                           // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetMerchantInfoNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgSetMerchantInfoNotify : public FMsgBase
	{
	public:
		struct FMerchantInfo                                       MerchantInfo;                                            // 0x0018(0x0020) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockBuyInventoryNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgStockBuyInventoryNotify : public FMsgBase
	{
	public:
		class UStockBuyInventoryComponent*                         StockBuyInventory;                                       // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockSellBackInventoryNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgStockSellBackInventoryNotify : public FMsgBase
	{
	public:
		class UStockSellBackInventoryComponent*                    StockSellBackInventory;                                  // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockCraftInventoryNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgStockCraftInventoryNotify : public FMsgBase
	{
	public:
		class UStockCraftInventoryComponent*                       StockCraftInventory;                                     // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDealTableInventoryNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgDealTableInventoryNotify : public FMsgBase
	{
	public:
		class UDealTableInventoryComponent*                        DealTableInventory;                                      // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockBuyRequest
	 * Size -> 0x00B8 (FullSize[0x00D0] - InheritedSize[0x0018])
	 */
	struct FMsgStockBuyRequest : public FMsgBase
	{
	public:
		struct FStockBuyData                                       SelectedStockBuyData;                                    // 0x0018(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockBuyResponse
	 * Size -> 0x00C0 (FullSize[0x00D8] - InheritedSize[0x0018])
	 */
	struct FMsgStockBuyResponse : public FMsgBase
	{
	public:
		bool                                                       bSucceed;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XRC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStockBuyData                                       StockBuyData;                                            // 0x0020(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetStockBuyListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgSetStockBuyListNotify : public FMsgBase
	{
	public:
		TArray<struct FStockBuyData>                               StockBuyDataArray;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetStockSellBackListNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSetStockSellBackListNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSetStockCraftListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgSetStockCraftListNotify : public FMsgBase
	{
	public:
		TArray<struct FStockCraftData>                             StockCraftDataArray;                                     // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgAddItemOnDealTable
	 * Size -> 0x00D0 (FullSize[0x00E8] - InheritedSize[0x0018])
	 */
	struct FMsgAddItemOnDealTable : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		struct FStockSellBackData                                  StockSellBackData;                                       // 0x00A8(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgRemoveItemFromDealTable
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgRemoveItemFromDealTable : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgDealTableTotalSellPriceNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgDealTableTotalSellPriceNotify : public FMsgBase
	{
	public:
		int32_t                                                    TotalSellPrice;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4AP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgClearDealTableSell
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgClearDealTableSell : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockSellBackRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgStockSellBackRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockCraftRequest
	 * Size -> 0x00B8 (FullSize[0x00D0] - InheritedSize[0x0018])
	 */
	struct FMsgStockCraftRequest : public FMsgBase
	{
	public:
		struct FStockCraftData                                     SelectedStockCraftData;                                  // 0x0018(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgStockCraftResponse
	 * Size -> 0x00C0 (FullSize[0x00D8] - InheritedSize[0x0018])
	 */
	struct FMsgStockCraftResponse : public FMsgBase
	{
	public:
		bool                                                       bSucceed;                                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZC8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStockCraftData                                     StockCraftData;                                          // 0x0020(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMerchantDealSuccessNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgMerchantDealSuccessNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMerchantDealResultResponseNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgMerchantDealResultResponseNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMerchantShowMessageNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgMerchantShowMessageNotify : public FMsgBase
	{
	public:
		class FText                                                MessageTextDisplay;                                      // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMonsterAISet
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgMonsterAISet : public FMsgBase
	{
	public:
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMonsterAIStart
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgMonsterAIStart : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMonsterIdRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgMonsterIdRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgMonsterIdResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgMonsterIdResponse : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     MonsterId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgGameplaytagNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgGameplaytagNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.DCSteamAuthTicket
	 * Size -> 0x0018
	 */
	struct FDCSteamAuthTicket
	{
	public:
		class FString                                              SessionTicket;                                           // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSteamSystem;                                         // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLIE[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocalSteamBuildId;                                       // 0x0014(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyDataRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPartyDataRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyDataResponse
	 * Size -> 0x0050 (FullSize[0x0068] - InheritedSize[0x0018])
	 */
	struct FMsgPartyDataResponse : public FMsgBase
	{
	public:
		TMap<class FString, struct FPartyData>                     PartyDataMap;                                            // 0x0018(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyDataNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgPartyDataNotify : public FMsgBase
	{
	public:
		struct FPartyData                                          PartyData;                                               // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyLinkRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgPartyLinkRequest : public FMsgBase
	{
	public:
		class FString                                              PartyId;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyLinkResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPartyLinkResponse : public FMsgBase
	{
	public:
		class UPartySession*                                       PartySession;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartySessionDataNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgPartySessionDataNotify : public FMsgBase
	{
	public:
		struct FPartySessionData                                   PartySessionData;                                        // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartySessionArrayRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPartySessionArrayRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartySessionArrayResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgPartySessionArrayResponse : public FMsgBase
	{
	public:
		TArray<class UPartySession*>                               PartySessionArray;                                       // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartySessionNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPartySessionNotify : public FMsgBase
	{
	public:
		class UPartySession*                                       PartySession;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyLinkAllPartyDataNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FMsgPartyLinkAllPartyDataNotify : public FMsgBase
	{
	public:
		struct FPartyData                                          PartyData;                                               // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FPartyData                                          OldPartyData;                                            // 0x0038(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPerkIdArrayNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgPerkIdArrayNotify : public FMsgBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerLogoutNotify
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerLogoutNotify : public FMsgBase
	{
	public:
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0018(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerTargetNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerTargetNotify : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerDieRequest
	 * Size -> 0x0310 (FullSize[0x0328] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerDieRequest : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0188(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0190(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerDieNotify
	 * Size -> 0x0310 (FullSize[0x0328] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerDieNotify : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
		class UClass*                                              GameplayEffectClass;                                     // 0x0188(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0190(0x0198) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerDownRequest
	 * Size -> 0x0170 (FullSize[0x0188] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerDownRequest : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerDownNotify
	 * Size -> 0x0170 (FullSize[0x0188] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerDownNotify : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerEscapeRequest
	 * Size -> 0x0170 (FullSize[0x0188] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerEscapeRequest : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerEscapeNotify
	 * Size -> 0x0170 (FullSize[0x0188] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerEscapeNotify : public FMsgBase
	{
	public:
		struct FAccountSessionData                                 AccountSessionData;                                      // 0x0018(0x0170) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerExitRequest
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerExitRequest : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerExitResponse
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerExitResponse : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUFE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerExitNotify
	 * Size -> 0x0160 (FullSize[0x0178] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerExitNotify : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerLobbyClientRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerLobbyClientRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerExitClientRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerExitClientRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerReturnToCharacterSelectRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerReturnToCharacterSelectRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerQuitGameRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerQuitGameRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterResurrectionRequest
	 * Size -> 0x00A8 (FullSize[0x00C0] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterResurrectionRequest : public FMsgBase
	{
	public:
		class FString                                              ID;                                                      // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ORJA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0060) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SpawnDelay;                                              // 0x0090(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRemoveAllItem;                                        // 0x0094(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCH0[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CharacterProduction;                                     // 0x0098(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DCCharacterBase;                                         // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDCGameplayEffectSetByCallerData>            InitGameplayEffectSetByCallerDataArray;                  // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVD9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgCharacterResurrectionResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgCharacterResurrectionResponse : public FMsgBase
	{
	public:
		class ADCCharacterBase*                                    DCCharacterBase;                                         // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayerRestartNotify
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FMsgPlayerRestartNotify : public FMsgBase
	{
	public:
		struct FAccountDataReplication                             AccountDataReplication;                                  // 0x0018(0x0070) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bResetAccountDataGame;                                   // 0x0088(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D97I[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgShowSystemMessage
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgShowSystemMessage : public FMsgBase
	{
	public:
		class FText                                                MessageToShow;                                           // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgProjectileHit
	 * Size -> 0x0178 (FullSize[0x0190] - InheritedSize[0x0018])
	 */
	struct FMsgProjectileHit : public FMsgBase
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetDataHandle;                                        // 0x0018(0x0028) BlueprintVisible, NativeAccessSpecifierPublic
		struct FHitResult                                          Hit;                                                     // 0x0040(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5U1W[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ActorPrevTickTransform;                                  // 0x0130(0x0060) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgProjectileHitByTarget
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgProjectileHitByTarget : public FMsgBase
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0020(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgProjectileSetFireData
	 * Size -> 0x00E8 (FullSize[0x0100] - InheritedSize[0x0018])
	 */
	struct FMsgProjectileSetFireData : public FMsgBase
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0018(0x00E8) BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPropsFloorPortalScrollNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPropsFloorPortalScrollNotify : public FMsgBase
	{
	public:
		bool                                                       bActive;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRD3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.IronShieldScanResult
	 * Size -> 0x0001
	 */
	struct FIronShieldScanResult
	{
	public:
		unsigned char                                              UnknownData_IQ47[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.HackData
	 * Size -> 0x0028
	 */
	struct FHackData
	{
	public:
		bool                                                       bIronShieldScan;                                         // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMovementScan;                                           // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HY0L[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentTimeDiscrepancy;                                  // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifetimeRawTimeDiscrepancy;                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lifetime;                                                // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentMoveError;                                        // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeleeAttackScan;                                        // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGPI[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeleeAttackAvatarRadius;                                 // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeAttackTargetRadius;                                 // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeAttackDistanceToHit;                                // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvalidItem;                                            // 0x0024(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTAF[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.UpdateGameSessionState
	 * Size -> 0x0001
	 */
	struct FUpdateGameSessionState
	{
	public:
		unsigned char                                              UnknownData_38TR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgPartyDataSet
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FServerMsgPartyDataSet : public FMsgBase
	{
	public:
		struct FPartyData                                          PartyData;                                               // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgGameLiftCharacterDataNotify
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FServerMsgGameLiftCharacterDataNotify : public FMsgBase
	{
	public:
		class FString                                              AccountId;                                               // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterClass;                                          // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAccountDataItem>                            AccountDataItemArray;                                    // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataPerk>                            AccountDataPerkArray;                                    // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataSkill>                           AccountDataSkillArray;                                   // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataSpell>                           AccountDataSpellArray;                                   // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAccountDataEmote>                           AccountDataEmoteArray;                                   // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgLobbyCharacterNotify
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FServerMsgLobbyCharacterNotify : public FMsgBase
	{
	public:
		struct FLobbyCharacterInfo                                 LobbyCharacterData;                                      // 0x0018(0x0088) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgReConnectGameInfoRequest
	 * Size -> 0x0160 (FullSize[0x0178] - InheritedSize[0x0018])
	 */
	struct FServerMsgReConnectGameInfoRequest : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgReConnectGameInfoResponse
	 * Size -> 0x0168 (FullSize[0x0180] - InheritedSize[0x0018])
	 */
	struct FServerMsgReConnectGameInfoResponse : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) NativeAccessSpecifierPublic
		bool                                                       isSuccess;                                               // 0x0178(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUWU[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgExitAccountRequest
	 * Size -> 0x0160 (FullSize[0x0178] - InheritedSize[0x0018])
	 */
	struct FServerMsgExitAccountRequest : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgExitAccountResponse
	 * Size -> 0x0168 (FullSize[0x0180] - InheritedSize[0x0018])
	 */
	struct FServerMsgExitAccountResponse : public FMsgBase
	{
	public:
		struct FAccountData                                        AccountData;                                             // 0x0018(0x0160) NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x0178(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HX7C[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.ServerMsgEndNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FServerMsgEndNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSkillIdArrayNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgSkillIdArrayNotify : public FMsgBase
	{
	public:
		TArray<struct FPrimaryAssetId>                             SkillIdArray;                                            // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSkillDataUpdateNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMsgSkillDataUpdateNotify : public FMsgBase
	{
	public:
		ESkillIndex                                                SlotIndex;                                               // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXKG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSkillData                                          SkillData;                                               // 0x001C(0x002C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSkillRechargeRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSkillRechargeRequest : public FMsgBase
	{
	public:
		int32_t                                                    RechargeAmount;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9U43[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSoundEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSoundEvent : public FMsgBase
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0018(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSoundVolumeEnter
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FMsgSoundVolumeEnter : public FMsgBase
	{
	public:
		struct FAkAudioVolumeInfo                                  AkVolumeInfo;                                            // 0x0018(0x0040) BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSoundVolumeExit
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSoundVolumeExit : public FMsgBase
	{
	public:
		class UPrimitiveComponent*                                 Volume;                                                  // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgUpdateSoundDataEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgUpdateSoundDataEvent : public FMsgBase
	{
	public:
		class USoundData*                                          Data;                                                    // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellSetCurrentSpellData
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMsgSpellSetCurrentSpellData : public FMsgBase
	{
	public:
		struct FSpellData                                          SpellData;                                               // 0x0018(0x002C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5V8[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellRecharge
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSpellRecharge : public FMsgBase
	{
	public:
		int32_t                                                    RechargeAmount;                                          // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URS4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellDataUpdateNotify
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMsgSpellDataUpdateNotify : public FMsgBase
	{
	public:
		struct FSpellData                                          SpellData;                                               // 0x0018(0x002C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEG6[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellCapacityChangedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgSpellCapacityChangedNotify : public FMsgBase
	{
	public:
		float                                                      SpellCurrentCapacity;                                    // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpellMaxCapacity;                                        // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellCastStart
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgSpellCastStart : public FMsgBase
	{
	public:
		float                                                      Duration;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21H0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellCastSucceed
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSpellCastSucceed : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellCastEnd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSpellCastEnd : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellChannelingStart
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgSpellChannelingStart : public FMsgBase
	{
	public:
		float                                                      Duration;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET9X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0020(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSpellChannelingEnd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgSpellChannelingEnd : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetCharacterSelectGroupToggleRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetCharacterSelectGroupToggleRequest : public FMsgBase
	{
	public:
		EWidgetCharacterSelectGroupType                            WidgetCharacterSelectGroupType;                          // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFMH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetCharacterSelectGroupToggleNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetCharacterSelectGroupToggleNotify : public FMsgBase
	{
	public:
		EWidgetCharacterSelectGroupType                            WidgetCharacterSelectGroupType;                          // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q26F[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetEnterCreateCharacterPageNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetEnterCreateCharacterPageNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetExitCreateCharacterPageNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetExitCreateCharacterPageNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_1A9E[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetDeleteCharacterNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetDeleteCharacterNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_WAYB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetRequestCharacterListNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetRequestCharacterListNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_N40M[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetUpdatePageNumberNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetUpdatePageNumberNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_ORKP[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetCreateCharacterErrorMessageNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetCreateCharacterErrorMessageNotify : public FMsgBase
	{
	public:
		class FText                                                CreateCharacterErrorMessage;                             // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameGroupHideUIbyNonCoexistWidgetRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameGroupHideUIbyNonCoexistWidgetRequest : public FMsgBase
	{
	public:
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ7V[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameGroupHideUIbyNonCoexistWidgetResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameGroupHideUIbyNonCoexistWidgetResponse : public FMsgBase
	{
	public:
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8R7A[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameGroupToggleRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameGroupToggleRequest : public FMsgBase
	{
	public:
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJOP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameGroupToggleNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameGroupToggleNotify : public FMsgBase
	{
	public:
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXKN[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameGroupVisibilityRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameGroupVisibilityRequest : public FMsgBase
	{
	public:
		EWidgetGameGroupType                                       WidgetGameGroupType;                                     // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJEY[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetHitDirectionInfoNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetHitDirectionInfoNotify : public FMsgBase
	{
	public:
		struct FVector                                             HitDirection;                                            // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetHitDirectionHealingNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetHitDirectionHealingNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairEachWeaponNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetChangeCrossHairEachWeaponNotify : public FMsgBase
	{
	public:
		TArray<struct FGameplayTag>                                WeaponTypeTags;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ItemUtilityTag;                                          // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ItemSlotTypeTag;                                         // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAttackEnable;                                          // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB4J[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairInfoNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetChangeCrossHairInfoNotify : public FMsgBase
	{
	public:
		TArray<struct FGameplayTag>                                WeaponTypeTags;                                          // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ChangeAngle;                                             // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnPinPoint;                                              // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSH3[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateTime;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67DK[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetInitCrossHairNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetInitCrossHairNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetChangeCrossHairWhenThrowingNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetChangeCrossHairWhenThrowingNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_DOFG[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayPullingCrossHairNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayPullingCrossHairNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_IZP6[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayShootCrossHairNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayShootCrossHairNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_PEKP[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetOnActivateSpellCrossHairNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetOnActivateSpellCrossHairNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_XUNU[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownStartWidgetNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetSkillCooldownStartWidgetNotify : public FMsgBase
	{
	public:
		struct FGameplayTag                                        SkillTag;                                                // 0x0018(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainDuration;                                          // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDuration;                                             // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownEndWidgetNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetSkillCooldownEndWidgetNotify : public FMsgBase
	{
	public:
		struct FGameplayTag                                        SkillSlotKeyTag;                                         // 0x0018(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SkillTag;                                                // 0x0020(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetSkillCooldownClearWidgetNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetSkillCooldownClearWidgetNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetGameCancelTipVisibilityRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetGameCancelTipVisibilityRequest : public FMsgBase
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_53G2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetShowVideoDisplayApplyAlarmWndNotity
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetShowVideoDisplayApplyAlarmWndNotity : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetOptionVideoDisplayApplyedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetOptionVideoDisplayApplyedNotify : public FMsgBase
	{
	public:
		bool                                                       IsApplyed;                                               // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35B5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideUIbyNonCoexistWidgetRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupHideUIbyNonCoexistWidgetRequest : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_994C[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LobbyGroupWidgetPriority;                                // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideUIbyNonCoexistWidgetResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupHideUIbyNonCoexistWidgetResponse : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LK2C[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupToggleRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupToggleRequest : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0R4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupVisibilityRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupVisibilityRequest : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6PW[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupToggleNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupToggleNotify : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P3B[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupHideRequest : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOQ1[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbyGroupHideResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbyGroupHideResponse : public FMsgBase
	{
	public:
		EWidgetLobbyGroupType                                      WidgetLobbyGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanHide;                                                // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7B2[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassGroupHideUIbyNonCoexistWidgetRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassGroupHideUIbyNonCoexistWidgetRequest : public FMsgBase
	{
	public:
		EWidgetClassGroupType                                      WidgetClassGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3A6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassGroupToggleRequest
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassGroupToggleRequest : public FMsgBase
	{
	public:
		EWidgetClassGroupType                                      WidgetClassGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIRS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassGroupToggleNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassGroupToggleNotify : public FMsgBase
	{
	public:
		EWidgetClassGroupType                                      WidgetClassGroupType;                                    // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           NewVisibility;                                           // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARIL[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayerInventoryTabActiveNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayerInventoryTabActiveNotify : public FMsgBase
	{
	public:
		EWidgetPlayerInventoryTabType                              WidgetPlayerInventoryTabType;                            // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAN8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetMerchantServiceActiveNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetMerchantServiceActiveNotify : public FMsgBase
	{
	public:
		EWidgetMerchantServiceType                                 WidgetMerchantServiceType;                               // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJSE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardSelectNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardSelectNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_SN9D[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardClassIconButtonClickNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardClassIconButtonClickNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_14NS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgeLobbyPopupSWidgetNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgeLobbyPopupSWidgetNotify : public FMsgBase
	{
	public:
		class FText                                                DescText;                                                // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.WidgetPartyCharacterVisibleBody
	 * Size -> 0x0002
	 */
	struct FWidgetPartyCharacterVisibleBody
	{
	public:
		EWidgetPartyUserLocate                                     WidgetPartyUserLocate;                                   // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Visible;                                                 // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.PlayPartyUserInfo
	 * Size -> 0x0078
	 */
	struct FPlayPartyUserInfo
	{
	public:
		EWidgetPlayUserPartyState                                  PartyState;                                              // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetPartyUserLocate                                     WidgetLocate;                                            // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WW7T[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClientMsgPartyCharacterInfo                        PartyCharacterInfo;                                      // 0x0008(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyMemberEnter
	 * Size -> 0x0080 (FullSize[0x0098] - InheritedSize[0x0018])
	 */
	struct FMsgPartyMemberEnter : public FMsgBase
	{
	public:
		EWidgetPartyUserLocate                                     WidgetLocate;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNKP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayPartyUserInfo                                  UserInfo;                                                // 0x0020(0x0078) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPartyMemberLeave
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPartyMemberLeave : public FMsgBase
	{
	public:
		EWidgetPartyUserLocate                                     WidgetLocate;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV34[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgLobbyCharacterResetEquipItemNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgLobbyCharacterResetEquipItemNotify : public FMsgBase
	{
	public:
		EWidgetPartyUserLocate                                     WidgetPartyUserLocate;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5R9M[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemData>                                   ItemData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLoadoutBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLoadoutBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgLobbyCharacterInfoNotify
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgLobbyCharacterInfoNotify : public FMsgBase
	{
	public:
		EWidgetPartyUserLocate                                     WidgetPartyUserLocate;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2G0R[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLobbyCharacterInfo                                 LobbyCharacterData;                                      // 0x0020(0x0088) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayPartyReadyStateChangedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPlayPartyReadyStateChangedNotify : public FMsgBase
	{
	public:
		EWidgetPartyUserLocate                                     WidgetPartyUserLocate;                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeader;                                                 // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReady;                                                  // 0x001A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXUL[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPlayMatchingStateChangedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgPlayMatchingStateChangedNotify : public FMsgBase
	{
	public:
		bool                                                       bMatching;                                               // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACPE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetStorageBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetStorageBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetCustomizeBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetCustomizeBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetShopBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetShopBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLobbySystemMessageNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLobbySystemMessageNotify : public FMsgBase
	{
	public:
		class FText                                                AnnounceText;                                            // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetMerchantListBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetMerchantListBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetMerchantListSetNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetMerchantListSetNotify : public FMsgBase
	{
	public:
		TArray<struct FMerchantInfo>                               MerchantList;                                            // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetMerchantSelectedNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetMerchantSelectedNotify : public FMsgBase
	{
	public:
		struct FMerchantInfo                                       SelectedMerchantInfo;                                    // 0x0018(0x0020) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetStockBuyItemSelectedNotify
	 * Size -> 0x00B8 (FullSize[0x00D0] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetStockBuyItemSelectedNotify : public FMsgBase
	{
	public:
		struct FStockBuyData                                       SelectedStockBuyData;                                    // 0x0018(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetStockCraftItemSelectedNotify
	 * Size -> 0x00B8 (FullSize[0x00D0] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetStockCraftItemSelectedNotify : public FMsgBase
	{
	public:
		struct FStockCraftData                                     SelectedStockCraftData;                                  // 0x0018(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetAddItemOnDealTable
	 * Size -> 0x00D0 (FullSize[0x00E8] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetAddItemOnDealTable : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
		struct FStockSellBackData                                  StockSellBackData;                                       // 0x00A8(0x0040) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetAddItemOnDealTableSuccessNotify
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetAddItemOnDealTableSuccessNotify : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetRemoveItemFromDealTable
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetRemoveItemFromDealTable : public FMsgBase
	{
	public:
		struct FItemData                                           ItemData;                                                // 0x0018(0x0090) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetRemoveItemFromDealTableSuccessNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetRemoveItemFromDealTableSuccessNotify : public FMsgBase
	{
	public:
		int64_t                                                    ItemUniqueId;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardRankRangeNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardRankRangeNotify : public FMsgBase
	{
	public:
		struct FClientMsgRankRangeResponseBody                     Body;                                                    // 0x0018(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardRankNearByNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardRankNearByNotify : public FMsgBase
	{
	public:
		struct FClientMsgRankNearByResponseBody                    Body;                                                    // 0x0018(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetLeaderBoardRankCharacterNotify
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetLeaderBoardRankCharacterNotify : public FMsgBase
	{
	public:
		struct FClientMsgRankCharacterResponseBody                 Body;                                                    // 0x0018(0x0070) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayCharacterRefreshNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayCharacterRefreshNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPlayRegionNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPlayRegionNotify : public FMsgBase
	{
	public:
		int32_t                                                    Region;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_457I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatRequest
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelChatRequest : public FMsgBase
	{
	public:
		EChatType                                                  ChatType;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1SY[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChatTargetAccountId;                                     // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatTargetCharacterId;                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0040(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelChatResponse : public FMsgBase
	{
	public:
		EMsgWidgetChatResult                                       Result;                                                  // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJMP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           TimeLeft;                                                // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelChatNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelChatNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_PJUC[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelListBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelListBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradingChatRequest
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradingChatRequest : public FMsgBase
	{
	public:
		EChatType                                                  ChatType;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J2K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ChatTargetAccountId;                                     // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChatTargetCharacterId;                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatData                                           ChatData;                                                // 0x0040(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradingChatResponse
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradingChatResponse : public FMsgBase
	{
	public:
		EMsgWidgetChatResult                                       Result;                                                  // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KV2W[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           TimeLeft;                                                // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradingChatNotify
	 * Size -> 0x0070 (FullSize[0x0088] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradingChatNotify : public FMsgBase
	{
	public:
		unsigned char                                              UnknownData_WK9O[0x70];                                  // 0x0018(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelListNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelListNotify : public FMsgBase
	{
	public:
		bool                                                       bIsTrader;                                               // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8H0X[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTradeChannel>                               Channels;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeSubscriptionBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionButtonClicked
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeSubscriptionButtonClicked : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionSuccessNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeSubscriptionSuccessNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeSubscriptionFailedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeSubscriptionFailedNotify : public FMsgBase
	{
	public:
		int32_t                                                    Reason;                                                  // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOLF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelButtonClicked
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelButtonClicked : public FMsgBase
	{
	public:
		struct FTradeChannel                                       Channel;                                                 // 0x0018(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelBeginNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelBeginNotify : public FMsgBase
	{
	public:
		struct FTradeChannel                                       Channel;                                                 // 0x0018(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChannelEndNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChannelEndNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChatUserListAddNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChatUserListAddNotify : public FMsgBase
	{
	public:
		bool                                                       bIsStart;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X45[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterTradeInfo>                         Traders;                                                 // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsFinish;                                               // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8CU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeChatUserListUpdateNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeChatUserListUpdateNotify : public FMsgBase
	{
	public:
		TArray<struct FTradeChannelUserUpdateInfo>                 TraderUpdateInfoArray;                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeRequestSelected
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeRequestSelected : public FMsgBase
	{
	public:
		struct FCharacterTradeInfo                                 TargetTraderInfo;                                        // 0x0018(0x0060) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassTopMenuBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassTopMenuBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeBeginNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeBeginNotify : public FMsgBase
	{
	public:
		class FText                                                MyNickName;                                              // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TargetNickName;                                          // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    TradeFee;                                                // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResetDuration;                                           // 0x004C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeEndNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeEndNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradeConfirmBeginNotify
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradeConfirmBeginNotify : public FMsgBase
	{
	public:
		class FText                                                MyNickName;                                              // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                TargetNickName;                                          // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    TradeFee;                                                // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7R23[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetTradingCanMoveItemStateNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetTradingCanMoveItemStateNotify : public FMsgBase
	{
	public:
		bool                                                       bCanMove;                                                // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKYB[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassLevelNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassLevelNotify : public FMsgBase
	{
	public:
		struct FClientMsgClassLevelInfoResponseBody                ClassLevelInfo;                                          // 0x0018(0x0014) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9G2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSlotUnLockLevelNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSlotUnLockLevelNotify : public FMsgBase
	{
	public:
		TArray<int32_t>                                            IndexArray;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            UnLockLevelArray;                                        // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassEquipNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassEquipNotify : public FMsgBase
	{
	public:
		TArray<struct FCharacterClassEquipInfo>                    EquipArray;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassEquipInfoBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassEquipInfoBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassPerkBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassPerkBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassPerkListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassPerkListNotify : public FMsgBase
	{
	public:
		TArray<struct FPerkData>                                   PerkIdArray;                                             // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSkillBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSkillBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSkillListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSkillListNotify : public FMsgBase
	{
	public:
		TArray<struct FDataSkill>                                  SkillIdArray;                                            // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellBeginNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellBeginNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellEquippedListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellEquippedListNotify : public FMsgBase
	{
	public:
		TArray<struct FSpellData>                                  SpellArray;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellUnequippedListNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellUnequippedListNotify : public FMsgBase
	{
	public:
		TArray<struct FSpellData>                                  SpellArray;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassItemMoveRequestNotify
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassItemMoveRequestNotify : public FMsgBase
	{
	public:
		struct FCharacterClassMoveInfo                             OldMove;                                                 // 0x0018(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FCharacterClassMoveInfo                             NewMove;                                                 // 0x0038(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassItemMoveResponseNotify
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassItemMoveResponseNotify : public FMsgBase
	{
	public:
		int32_t                                                    Result;                                                  // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSI0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterClassMoveInfo                             OldMove;                                                 // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FCharacterClassMoveInfo                             NewMove;                                                 // 0x0040(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellSlotMoveRequestNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellSlotMoveRequestNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ99[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellSequenceChangeRequestNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellSequenceChangeRequestNotify : public FMsgBase
	{
	public:
		int32_t                                                    SequenceIndex;                                           // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F477[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassUnEquipmentTypeChangeNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassUnEquipmentTypeChangeNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JT65[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassAddEquipPerkNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassAddEquipPerkNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTK0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassAddUnEquipPerkNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassAddUnEquipPerkNotify : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassRemoveEquipPerkNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassRemoveEquipPerkNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRSJ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassRemoveUnEquipPerkNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassRemoveUnEquipPerkNotify : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassAddEquipSkillNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassAddEquipSkillNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIFN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassAddUnEquipSkillNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassAddUnEquipSkillNotify : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassRemoveEquipSkillNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassRemoveEquipSkillNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NH4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassRemoveUnEquipSkillNotify
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassRemoveUnEquipSkillNotify : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassPerkEventNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassPerkEventNotify : public FMsgBase
	{
	public:
		int32_t                                                    Move;                                                    // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     PerkId;                                                  // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSkillEventNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSkillEventNotify : public FMsgBase
	{
	public:
		int32_t                                                    Move;                                                    // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SkillId;                                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassPerkSwapEventNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassPerkSwapEventNotify : public FMsgBase
	{
	public:
		int32_t                                                    SrcIndex;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SrcPerkId;                                               // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstIndex;                                                // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DstPerkId;                                               // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSkillSwapEventNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSkillSwapEventNotify : public FMsgBase
	{
	public:
		int32_t                                                    SrcIndex;                                                // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SrcSkillId;                                              // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstIndex;                                                // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     DstSkillId;                                              // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellUnequipNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellUnequipNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNOM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellEquipNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellEquipNotify : public FMsgBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimaryAssetId                                     SpellId;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7GI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassUnEquipmentClearSelectedItemNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassUnEquipmentClearSelectedItemNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassEquipablePerkEmptySlotsMarkNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassEquipablePerkEmptySlotsMarkNotify : public FMsgBase
	{
	public:
		bool                                                       bMark;                                                   // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RVR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassEquipableSkillEmptySlotsMarkNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassEquipableSkillEmptySlotsMarkNotify : public FMsgBase
	{
	public:
		bool                                                       bMark;                                                   // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJJJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellShowEquippableSlotNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellShowEquippableSlotNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetClassSpellHideEquippableSlotNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetClassSpellHideEquippableSlotNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetSelectRegionButtonNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetSelectRegionButtonNotify : public FMsgBase
	{
	public:
		int32_t                                                    Region;                                                  // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XS2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetStashRefreshNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetStashRefreshNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.PlayPartyUserInfoData
	 * Size -> 0x0010
	 */
	struct FPlayPartyUserInfoData
	{
	public:
		TArray<struct FPlayPartyUserInfo>                          PlayPartyData;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgSystemMessageNotify
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgSystemMessageNotify : public FMsgBase
	{
	public:
		class FText                                                OutPutMessage;                                           // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JML[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgPopupBaseNotify
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FMsgPopupBaseNotify : public FMsgPopup
	{
	public:
		unsigned char                                              UnknownData_SIU5[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPopupMessageNotify
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FMsgWidgetPopupMessageNotify : public FMsgPopup
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPopupMessageReqeust
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FMsgWidgetPopupMessageReqeust : public FMsgPopup
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPopupMessageResponse
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FMsgWidgetPopupMessageResponse : public FMsgPopup
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPopupCloseRequest
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPopupCloseRequest : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetPopupCloseResponse
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetPopupCloseResponse : public FMsgBase
	{
	public:
		bool                                                       bSucceedClose;                                           // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNBO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetProgressBarStart
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetProgressBarStart : public FMsgBase
	{
	public:
		class FText                                                Description;                                             // 0x0018(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HP1V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetProgressBarPause
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetProgressBarPause : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetProgressBarResume
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetProgressBarResume : public FMsgBase
	{
	public:
		float                                                      AdditionalElapsedTimeRatio;                              // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKMM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetProgressBarEnd
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetProgressBarEnd : public FMsgBase
	{
	public:
		bool                                                       IsSucceed;                                               // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHZH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetCommemorativePlaqueTextNotify
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetCommemorativePlaqueTextNotify : public FMsgBase
	{
	public:
		struct FPrimaryAssetId                                     ScriptId;                                                // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0028(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetContextMenuOpenNotify
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetContextMenuOpenNotify : public FMsgBase
	{
	public:
		class UObject*                                             ContextMenuHolder;                                       // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EContextOptionType>                                 ContextOptions;                                          // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetContextMenuCloseNotify
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetContextMenuCloseNotify : public FMsgBase
	{	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetContextOptionSelectedNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetContextOptionSelectedNotify : public FMsgBase
	{
	public:
		EContextOptionType                                         ContextOptionType;                                       // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT8J[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DungeonCrawler.MsgWidgetStreamingModeNotify
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FMsgWidgetStreamingModeNotify : public FMsgBase
	{
	public:
		bool                                                       bCurrentStreamingMode;                                   // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64MS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
